#include <stdio.h> //ͷ�ļ�	 
#define DELAY 150000 //���� ��ֵΪ150000	 


void delay(void);//����ԭ�� 
int main(void)//main���� 
{
	int choice;//���� 
	
	while (1)//whileѭ�� 
	{
		choice = menu ();//����choice ���ú���  ����һ���û������ intֵ ,������������choice 
		if (choice ==1)//if���,����choice����1ִ���������� 
		{
			puts("\nExeecuting task A.");//��ʾ���� 
			delay();//���ú���delay�ӳٳ���DELAY�ĺ����� 150000 
			
		}
		else if (choice ==2)//����2�Ļ� 
		{
			puts("\nExecuting task B.");//��ʾ 
			delay();//�ӳ� 
	    }
		else if (choice ==3)//����3�Ļ� 
		{
			puts("\nExecuting task C.");//��ʾ 
			delay();//�ӳ� 
		}
		else if (choice == 4)//����4�Ļ� 
		{
			puts("Executing task D.");//��ʾ 
			delay();//�ӳ� 
			
		}
		else if (choice ==5 )//����5�Ļ� 
		{
			puts("\nExiting program now ...\n");//��ʾ 
			delay();//�ӳ� 
			break;//����ֹͣ��ѭ�� 
		}
		else//����������Ļ�,��ִ��.���� 
		{
			puts("\nInvalid choice, try again.");//��ʾ 
			delay();//�ӳ� 
			
		}
	
	}
		return 0;//����ֵΪ0 
}
	int menu(void)//����ͷ,����Ϊ�� 
	{
		int reply;//������һ������ 
		puts("\nEnter 1 for task A.");//��ʾ���� 
		puts("Enter 2 for task B.");
		puts("Enter 3 for task C.");
		puts("Enter 4 for task D.");
		puts("Enter 5 to exit program.");
		
		scanf("%d", &reply);//�û�����reply����ֵ 
		return reply;//����һ��int���͵ı���ֵ 
	}
	void delay(void)//����ͷ,����ֵΪ��,����Ϊ��. �ú�������:�ӳٳ���λΪ()���� 
	{
		long x;//����long���ͱ��� x 
		for( x = 0; x < DELAY; x++)//forѭ�� �жϱ���x�Ƿ�С�ڳ���150000,�ǵĻ�ִ������Ŀ���� 
		;//�����Ϊ��,ִ����Ϻ�,����ִ�� x++ 
	}

