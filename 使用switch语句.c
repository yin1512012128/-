#include <stdio.h>//ͷ�ļ� 

int main(void)//������ 
{
	int reply;//���� 
	puts("Enter a number between 1 and 5:");//��ʾ 
	scanf("%d",&reply);//���������ֵ 
	
	switch (reply)//switch����,�����Ǳ���reply��ֵ	 
	{
		case 0://����0�Ļ� 
		  break;//���� 
		case 1://����1�Ļ� 
			{
			    puts("You entered 1.");//��ʾ 
			    	  break;//���� 
		    }
		case 2://����2�Ļ� 
			{
				puts("You entered 2.");��ʾ 
					  break;//���� 
			}
			
		case 3://����3�Ļ� 
			{
				puts("You entered 3.");//��ʾ 
					  break;//���� 
			}
			
		case 4://����4�Ļ� 
			{
				puts("You entered 4.");//��ʾ 
					  break;//���� 
			}
		    
		case 5://����5�Ļ� 
			{
				puts("You entered 5.");//��ʾ 
					  break;//���� 
			}
		    
		default://�ú������ر����,���û������������ֵ�Ļ�,ִ�б���估�������� 
			{
				puts("Out of range, try again.");//��ʾ 
			}
		    
			 
	}
	return 0;//����ֵΪ0 
 } 
