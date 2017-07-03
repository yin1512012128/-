//该程序疑问,为什么按5就结束呢?


#include <stdio.h>//头文件	 
#include <stdlib.h>//头文件 
#include <dos.h>//头文件 
#include <time.h>//头文件 

#define DELAY 1500000//定义了一个常量 

int menu(void);//函数原型 


void delay(void);//函数原型 
 
int main (void)//主函数 
{
	int command = 0;//定义一个int类型的局部变量 ,将0赋给它. 
	command = menu();//调用函数menu(该函数得到一个用户输入的值) ,赋值给command 
	
	while (command != 5)//while循环,判断用户输入的值不等于5的话执行下面的语句 
	{
		switch (command)//switch函数(读取右边括号的值,并执行该数值的语句,如果没有这个数值的语句.执行default语句. 
		{
			case 1://如果该变量为1 执行 
				{
					puts("\nExecuting task A.");//显示 
					delay();//延迟 
					break;//结束 
				}
			case 2://如果该变量为2 
				{
					puts("\nExecuting task B.");//显示 
					delay();//延迟 
					break;//结束 
				}
			case 3://如果该变量为3 
				{
					puts("\nExecuting task C.");//显示 
					delay();//延迟 
					break;//结束 
				}
			case 4://如果该变量为4 
				{
					puts("\nExecuting task D.");//显示 
					delay();//延迟 
					break;//结束 
					 
				}
			case 5://如果该变量为5 
				{
					puts("\nExiting program now...\n");//显示 
					delay();
					break;
				}
				default://如果该变量没有上述的值,执行我 
				{
					puts("\nInvalid choice,try again.");//显示 
			
				}
				
			
			}
			command = menu();//调用函数menu 系统再次显示菜单并获得用户做出的选择 
		}
		return 0;//返回值为0 
}
//该函数定义了一个局部变量,显示了一个菜单,让用户输入int类型的值,并返回给该函数. 
int menu(void)//函数头,返回值为int类型,参数无 
{
	int reply;//定义一个局部变量,类型为int 
	
	puts("\nEnter 1 for task A.");//显示 
	puts("Enter 2 for task B.");//显示 
	puts("enter 3 for task C.");//显示 
	puts("Enter 4 for task D.");//显示 
	puts("Enter 5 for exit program.");//显示 
	
	scanf("%d", &reply);//让用户输入局部变量的值 
	
	return reply;//返回该函数,让用户输入的值 

} 
void delay(void)//函数头, 返回值为无. 参数为无. 
{
	long x;//定义了一个局部变量 
	for(x = 0; x < DELAY; x++)//for循环下面空语句,执行的意思是延迟150000毫秒 
	;//空语句 
}
