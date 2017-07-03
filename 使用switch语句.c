#include <stdio.h>//头文件 

int main(void)//主函数 
{
	int reply;//变量 
	puts("Enter a number between 1 and 5:");//显示 
	scanf("%d",&reply);//输入变量的值 
	
	switch (reply)//switch函数,参数是变量reply的值	 
	{
		case 0://输入0的话 
		  break;//结束 
		case 1://输入1的话 
			{
			    puts("You entered 1.");//显示 
			    	  break;//结束 
		    }
		case 2://输入2的话 
			{
				puts("You entered 2.");显示 
					  break;//结束 
			}
			
		case 3://输入3的话 
			{
				puts("You entered 3.");//显示 
					  break;//结束 
			}
			
		case 4://输入4的话 
			{
				puts("You entered 4.");//显示 
					  break;//结束 
			}
		    
		case 5://输入5的话 
			{
				puts("You entered 5.");//显示 
					  break;//结束 
			}
		    
		default://该函数的特别语句,如果没有输入上述数值的话,执行本语句及下面的语句 
			{
				puts("Out of range, try again.");//显示 
			}
		    
			 
	}
	return 0;//返回值为0 
 } 
