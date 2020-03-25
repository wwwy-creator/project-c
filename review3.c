//chapter4 选择结构
//关系运算符   if语句   条件运算符   逻辑运算符    switch语句   if语句嵌套   
/*1.关系运算符  6种：<  >  ==  <=  >=  !=   优先级：!=和==优先级相同，但低于其他四种   结合性：多个关系运算同时进行时，先按优先级次序
运算，然后从左向右运算 
*/ 
/*2.if语句    语句多时，用{}括起来 
单分支：if(表达式) 语句；  双分支：if(表达式) 语句；else 语句； 多分支：if(表达式) 语句；else if(表达式) 语句；......else 语句；    
*/
/*3.条件运算符   三目运算符   表达式1?表达式2:表达式3    结合性：自右向左 
*/
/*4.逻辑运算符   3种： 与&&   或||   非！   
*/
/*5.switch语句    switch(表达式){case 常量表达式1：语句组1；break;  ......  case 常量表达式n：语句组n；break;  default: 语句组n+1;} 
每条case语句后可以有多条语句，但可以不用{}括起来 
*/

/*
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a<0||a>100)  printf("error data\n");
	else
	switch(a/10)
	{
	//当case语句后为空语句时，会执行下一条语句 
		case 6:
		//当不添加break语句时，若满足case7，则后方case语句都会被执行 
		case 7:printf("A\n");break;
		case 8:printf("B\n");break;
		case 9:printf("C\n");break;
		case 10:printf("D\n");break;
		default:printf("E\n");
	}
	return 0;
}
*/
