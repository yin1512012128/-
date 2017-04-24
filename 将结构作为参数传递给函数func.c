#include <stdio.h> //头文件 

struct data {//struct定义结构,结构类型是data 
	float amount;//一个单精度浮点数的变量,4个字节,float 的变量,名字叫amount 
	char fname[30];//一个数组类型为char,里面有30个元素,名字叫fname 
	char lname[30];//一个数组类型为char,里面有30个元素,名字叫lname
}rec;//该结构的声明,名字叫rec 

void print_rec(struct data diplayRec);//函数原型,srrucr定义结构关键字,data是结构类型, diplayRec是参数名 
//书中分析: 该函数将结构作为参数.与传递其他数据类型的参数一样,必须传递合适的参数,在这里,参数为data类型的结构 

//本菜鸟已经忘了函数原型里面是什么东西了,故复习了函数部分.

//函数的定义为: 函数是一个命名的,独立的代码段,它执行特定的任务,并可能给调用它的程序返回一个值,该定义中的各部分如下:

//1. 函数是命名的, 每个函数独有位移的名称,在程序的其他部分使用该名称,可移植性函数中的语句.这称为调用函数.可以在一个函数
//中调用另一个函数.

//2. 函数是独立的.无需程序其他部分的干预,函数并能够执行其任务. 

//3.函数执行特定的任务.任务是程序运行时必须执行的具体工作,如将一行文本发送给打印机,对数组进行排序,计算立方根等.

//4,函数可以将一个值返回给调用它的程序,程序调用函数时,将执行该函数中的语句,而这些语句可以将信息返回给调用他们的程序. 

// 传递给函数的变量被称为参数,位于函数名后面,并用圆括号括起. 


int main(void)//main主函数 
{
	printf("Enter the donor's first and last names, \n");//显示 ""里面的文字等 \n下一行 
	printf("separated by a space: ");//显示 ""里面的文字等 
	scanf("%s %s", rec.fname, rec.lname);//等待用户输入结构内的数据  %s是字符串 ,第一个字符串是结构的第二个成员和第三个成员 
	
	printf("\n Enter the donation amount: ");//显示 ""里面的文字等 
	scanf("%f", &rec.amount);//等待用户输入结构内第一个成员的数据  %f是十进制浮点数要转换的类型是floar或double 
	
	print_rec ( rec );// 调用了函数,将结构作为参数传递给rec 
	return 0;//返回为空 
}
void print_rec(struct data displayRec)// 返回为空的函数定义,该函数名字叫print_rec,它的参数是关键字struct定义的结构类型为data的displayRec参数. 
{
	printf("\nDonnor %s %s gave $%.2f\n", displayRec.fname,//%s是字符串要转换的类型是char数组的    %.2f是说显示浮点数小数点后两位,3f就是3位节省内存空间用的,可以直接写%f. 
	       displayRec.lname, displayRec.amount);//第一个$s是结构的第二个成员char类型的数组fname,元素是30个,第二个个是结构的第三个成员char类型的数组lname,元素是30个,
}//第三个是结构的第一个成员,float类型的变量,amount. 
