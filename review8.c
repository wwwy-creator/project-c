//chapter9 字符串
//字符串的表示   字符串的输入输出   字符串和字符指针   字符串数组   字符串处理函数   字符串作为函数参数   返回字符串的函数
//指针数组   指针数组用于命令行参数

//*****注意*****在C语言中并不存在字符串类型，有的只是字符串常量，而且字符串常量是存放在静态全局区上的，而一般局部变量，形式参
//数则是保存在栈区上的。字符串无法直接修改，可以通过字符数组对其修改。
//*****注意*****在计算机内存中，0，'\0'，null，是一样的，值也是一样的，都是0。以数字的方式读取就是0，以字符串的方式读取就
//是'\0'，以程序命令或者其他方式读取就是null（null的定义跟编译器有关，有的编译器定义null可能不是0）。

/*1.字符串的表示   
字符串常量，是一对双引号括起来的字符序列，即一串有效字符加一个'\0'字符串结束符。'\0'不会在字符串后显示出来，但它占一个存储
单元。字符串长度为字符串中有效字符个数。

字符数组，c语言没有字符串类型来表示字符串数据，而是将字符串作为一个特殊的一维数组来处理，即可以将字符串存储在一维数组中。
char s[6]; s[6]={'a','b','c','d','e','\0'};('\0'不能丢失，否则s[6]仅仅是一个字符数组，不能存放字符串) 或 s[6]="abcde"; 或  
s[6]={"abcde"};
如果数组长度大于字符串长度+1，其他元素与该字符串无关

字符指针，字符类型的指针变量如果取得字符数组或字符串的首地址，就可以访问字符串。  
*/
/*2.字符串的输入输出   字符串结束符'\0'为空操作，无法输入。因此，输入字符串时，需要预先设定一个输入结束符。一旦输入它，
就表示字符串输入结束。输入结束后，将'\0'字符添加到数组中。
按单个字符输入输出字符串：     
输入字符串（以回车符作为输入结束符）  i=0; while((str[i]=getchar())!='\n') i++; str[i]='\0';   也可以使用scanf("%c",&str[i]);
输出字符串  for(i=0;str[i]!='\0';i++) putchar(str[i]);    也可以用printf("%c",str[i]); 
格式化输入输出字符串：
按%s 格式符，将字符串作为一个整体输入输出。scanf("%s",str);表示读入一个字符串，直到遇到空白字符（空格、回车、制表符）为止，
系统自动在输入的字符串后加上'\0'。printf("%s",str);表示输出一个字符串，直到遇到'\0'为止。
使用字符串处理函数输入输出：
gets(str)表示读入一个字符串（可以读入空格），直到遇到回车符为止； puts(str)表示输出一个字符串，直到遇到字符串解释标志为止
并自动换行 
*/
/*3.字符串和字符指针   字符串常量实际上是一个指向该字符串首字符地址的指针常量。例如，字符串"happy"的值是一个地址，从它指定的
存储单元开始连续存放该字符串的六个字符。
定义一个字符指针char *p，将字符串常量的值赋给它，该字符指针就指向字符串首地址。   字符串中其他字符的地址也可以作为输出参数，
str+1,p+1,"string"+1 
*/
/*4.字符串数组   char str[100][30]*/
/*5.字符串处理函数    字符串处理函数库，头文件<string.h> 

字符串复制函数 strcpy()   形式：strcpy(char *s1,char *s2)    功能：把字符串s2复制到s1，直到遇到s2中的'\0'为止（'\0'会被添进
去）。s1要有足够的空间容纳s2。（虽然存储越界不会报错，但是超出部分占用的其他内存可能是有用的，可能会出现运行时错误）函数返
回值为s1的首地址。参数s1必须是指向字符数组的地址，参数2可以是指向数组的地址，也可以是字符串常量。
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[80],*s2="abns",s3[6]={"lkjh"};
	strcpy(s1,s2);
	printf("%s\n",s1);
	strcpy(s1,s3);
	printf("%s\n",s1);
	//strcpy(s1+5,s2);      会发现只输出了s3，因为多移了一个单元，'\0'没有被覆盖，所以输出到'\0'时结束 
	//printf("%s\n",s1);    也表明，s2复制到s1是连带'\0'一起复制的 
	strcpy(s1+4,s2);
	printf("%s\n",s1);
	return 0;
 }  
 
字符串连接函数 strcat()   形式：strcat(char *s1,char *s2)   功能：把字符串s2连接到s1（连接处'\0'会自动被去掉，s2的'\0'会自
动添上）。s1要有足够的空间容纳s2。函数返回值为s1的首地址。参数s1必须是指向字符数组的地址，参数2可以是指向数组的地址，也可以
是字符串常量。
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="nbv vf ",*s2="abns ",s3[6]={"lkjh"};
	strcat(s1,s2);
	printf("%s\n",s1);
	strcat(s1,s3);
	printf("%s\n",s1);
	strcat(s1," qwp");
	printf("%s\n",s1);
	return 0;
 }
 
字符串比较函数 strcmp()   形式：strcmp(char *s1,char *s2)    功能：比较俩个字符串，返回值为比较结果。s1和s2可以是指向数组的
地址，也可以是字符串常量。 如果1等于2，返回值为0；如果1大于2，返回值大于0；如果1小于2，返回值小于0。注意，只是规定了三个值，
至于返回值类型，是编译器自己定的。写代码时，不好直接输出返回值。 
字符串比较规则：从俩个字符串的第一个字符开始逐个比较（按字符的ASCII码值的大小），直至出现不同的字符或遇到'\0'为止。如果全部
字符相同，则俩个字符串相等；否则，以第一个出现的不同字符的比较结果为准。
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="nbv vf ",*s2="abns ",s3[6]={"abns "},*s4="abwd";
	if(strcmp(s1,s2)>0||strcmp(s1,s2)==0) printf("%s\n",s1);
	else  printf("%s\n",s2);                                
	if(strcmp(s2,s3)>0||strcmp(s2,s3)==0) printf("%s\n",s2);
	else  printf("%s\n",s3);
	if(strcmp(s2,s4)>0||strcmp(s2,s4)==0) printf("%s\n",s2);
	else  printf("%s\n",s4);
	return 0;
 }
 
 测字符串的长度函数 strlen()   形式：strlen(char *s)   功能：测字符串s的实际长度（不含'\0'）。
#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="\"i love you!\"";//转义字符 \" 
	puts(str);
	printf("%d\n",strlen(str));
	return 0;
}  
*/
/*6.字符串作为函数参数   当字符数组名、字符串常量、字符指针作为函数实参时，相应形参都是字符指针，也可以写成数组形式*/
/*7.返回字符串的函数     在有些情况下，希望通过函数返回一个字符串，这是可以定义一个返回指针的函数。返回字符串的函数在
被调用时，要求给指针变量赋值，该指针变量的基类型为字符指针类型。
#include<stdio.h>
#include<process.h>
int main()
{
	int day;
	char *date;
	char *weekday(int num);
	printf("请输入1~7中的一个整数：\n");
	scanf("%d",&day);
	if(day<1||day>7) exit(1);
	date=weekday(day);
	printf("%d对应的是%s\n",day,date);
	return 0;
}
char *weekday(int num)
{
	char *arr[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	return arr[num-1];
} 
*/
/*8.指针数组    字符指针数组 char *arr[20];      区分二维字符数组和字符指针数组*/
/*9.指针数组用于命令行参数
#include<stdio.h>
int main(int argc,char *argv[])
{
	int i;
	printf("The number of command line arguments is:%d\n",argc);
	for(i=0;i<argc;i++)
	printf("%8s",argv[i]);
	return 0;
}
*/ 

 

