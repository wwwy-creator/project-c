//chapter3 输入输出函数
//格式化输出printf()函数、格式化输入scanf()函数、字符输入函数getchar()、字符输出函数putchar()、字符串输入/出gets()/puts()（第九章细讲） 
/*1.格式化输出printf()函数    向标准输出设备输出若干个任意类型的数据    printf() (格式控制字符串，输出列表)； 括号里为输出函数的参数
格式说明符  由%开头，以一个英文字母结束，表示输出数据的类型     格式控制字符  +、-、0、#等表示输出数据的位数、长度、对齐方式等
*/ 
/*2.格式化输入scanf()函数     从键盘上将数据按用户指定的格式输入并赋给指定的变量   scanf(格式控制字符串，地址列表)； 
%[*][输入数据宽度m][长度]类型   *表示输入的数值不赋给相应的变量，即跳过读取该数据   输入时，如果数据类型有要求，则长度格式符不能省
如，输入double型数据必须用%lf
注意字符输入，不需要用逗号或者空格等分隔 
*/
/*3.字符输入getchar()函数     从标准设备上读入一个字符    getchar();没有参数   a=getchar();等同于scanf("%c",&a); 
*/
/*4.字符输出putchar()函数    向标准输出设备输出一个字符   putchar('a');输出字符a  putchar(a);输出变量a的值  
putchar(123);等同于putchar('/123');输出123所对应的字符   putchar('\n');换行 
*/



/*
#include<stdio.h>
void fun()
{
	printf("hello dev\n");
}
int func(int a)
{
	a++;
	return a;
}
*/
/*
#include<stdio.h>
int main()
{
	int a,b;
	printf("输入俩个整数：");
	scanf("%d%d",&a,&b);
	printf("%+.4d\n",a+b);
	return 0;
 } 
 */
 /* 
 #include<stdio.h>
int main()
{
	int a,b;
	printf("输入俩个整数：");
	//输入时，要写成a= ,b= 的形式 
	scanf("a=%d,b=%d",&a,&b);
	printf("%+.4d\n",a+b);
	return 0;
 }
 */
