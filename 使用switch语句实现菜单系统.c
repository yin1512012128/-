//�ó�������,Ϊʲô��5�ͽ�����?


#include <stdio.h>//ͷ�ļ�	 
#include <stdlib.h>//ͷ�ļ� 
#include <dos.h>//ͷ�ļ� 
#include <time.h>//ͷ�ļ� 

#define DELAY 1500000//������һ������ 

int menu(void);//����ԭ�� 


void delay(void);//����ԭ�� 
 
int main (void)//������ 
{
	int command = 0;//����һ��int���͵ľֲ����� ,��0������. 
	command = menu();//���ú���menu(�ú����õ�һ���û������ֵ) ,��ֵ��command 
	
	while (command != 5)//whileѭ��,�ж��û������ֵ������5�Ļ�ִ���������� 
	{
		switch (command)//switch����(��ȡ�ұ����ŵ�ֵ,��ִ�и���ֵ�����,���û�������ֵ�����.ִ��default���. 
		{
			case 1://����ñ���Ϊ1 ִ�� 
				{
					puts("\nExecuting task A.");//��ʾ 
					delay();//�ӳ� 
					break;//���� 
				}
			case 2://����ñ���Ϊ2 
				{
					puts("\nExecuting task B.");//��ʾ 
					delay();//�ӳ� 
					break;//���� 
				}
			case 3://����ñ���Ϊ3 
				{
					puts("\nExecuting task C.");//��ʾ 
					delay();//�ӳ� 
					break;//���� 
				}
			case 4://����ñ���Ϊ4 
				{
					puts("\nExecuting task D.");//��ʾ 
					delay();//�ӳ� 
					break;//���� 
					 
				}
			case 5://����ñ���Ϊ5 
				{
					puts("\nExiting program now...\n");//��ʾ 
					delay();
					break;
				}
				default://����ñ���û��������ֵ,ִ���� 
				{
					puts("\nInvalid choice,try again.");//��ʾ 
			
				}
				
			
			}
			command = menu();//���ú���menu ϵͳ�ٴ���ʾ�˵�������û�������ѡ�� 
		}
		return 0;//����ֵΪ0 
}
//�ú���������һ���ֲ�����,��ʾ��һ���˵�,���û�����int���͵�ֵ,�����ظ��ú���. 
int menu(void)//����ͷ,����ֵΪint����,������ 
{
	int reply;//����һ���ֲ�����,����Ϊint 
	
	puts("\nEnter 1 for task A.");//��ʾ 
	puts("Enter 2 for task B.");//��ʾ 
	puts("enter 3 for task C.");//��ʾ 
	puts("Enter 4 for task D.");//��ʾ 
	puts("Enter 5 for exit program.");//��ʾ 
	
	scanf("%d", &reply);//���û�����ֲ�������ֵ 
	
	return reply;//���ظú���,���û������ֵ 

} 
void delay(void)//����ͷ, ����ֵΪ��. ����Ϊ��. 
{
	long x;//������һ���ֲ����� 
	for(x = 0; x < DELAY; x++)//forѭ����������,ִ�е���˼���ӳ�150000���� 
	;//����� 
}
