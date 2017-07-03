#include <stdio.h> //头文件	 
#define DELAY 150000 //常量 数值为150000	 


void delay(void);//函数原型 
int main(void)//main函数 
{
	int choice;//变量 
	
	while (1)//while循环 
	{
		choice = menu ();//变量choice 调用函数  返回一个用户输入的 int值 ,将他赋给变量choice 
		if (choice ==1)//if语句,变量choice等于1执行下面的语句 
		{
			puts("\nExeecuting task A.");//显示内容 
			delay();//调用函数delay延迟常量DELAY的毫秒数 150000 
			
		}
		else if (choice ==2)//等于2的话 
		{
			puts("\nExecuting task B.");//显示 
			delay();//延迟 
	    }
		else if (choice ==3)//等于3的话 
		{
			puts("\nExecuting task C.");//显示 
			delay();//延迟 
		}
		else if (choice == 4)//等于4的话 
		{
			puts("Executing task D.");//显示 
			delay();//延迟 
			
		}
		else if (choice ==5 )//等于5的话 
		{
			puts("\nExiting program now ...\n");//显示 
			delay();//延迟 
			break;//立即停止该循环 
		}
		else//读到我这里的话,我执行.哈哈 
		{
			puts("\nInvalid choice, try again.");//显示 
			delay();//延迟 
			
		}
	
	}
		return 0;//返回值为0 
}
	int menu(void)//函数头,参数为无 
	{
		int reply;//定义了一个变量 
		puts("\nEnter 1 for task A.");//显示内容 
		puts("Enter 2 for task B.");
		puts("Enter 3 for task C.");
		puts("Enter 4 for task D.");
		puts("Enter 5 to exit program.");
		
		scanf("%d", &reply);//用户输入reply变量值 
		return reply;//返回一个int类型的变量值 
	}
	void delay(void)//函数头,返回值为无,参数为无. 该函数作用:延迟程序单位为()毫秒 
	{
		long x;//定义long类型变量 x 
		for( x = 0; x < DELAY; x++)//for循环 判断变量x是否小于常量150000,是的话执行下面的空语句 
		;//该语句为空,执行完毕后,继续执行 x++ 
	}

