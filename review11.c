//chapter12 文件操作
//写数据文件   文件打开、文件关闭   文件复制
/*1.写数据文件   
c语言有缓冲型和非缓冲型俩种文件系统
缓冲文件系统：系统自动在内存中为每一个正在使用的文件开辟一个缓冲区，作为程序与文件之间交换数据的中间媒介，它利用文件指针标识文件
非缓冲文件系统：缓冲区由程序员自己设定，没有文件指针，它使用文件号（整数）来标识文件
标准ANSI C中规定只采用缓冲文件系统来处理文件操作，并提供许多文件操作函数 

文件的概念：文件是一组相关数据的有序集合。这个数据集有一个名称，叫做文件名。例如，源程序文件（.c）、目标文件（.obj）、可执行文件
（.exe）、特殊执行文件（.com）等。它们通常驻留在外部介质（如磁盘）上，使用时才被调入内存。

文件分类：first，用户角度：普通文件和设备文件    second，文件编码和数据的组织方式：ASCII文件和二进制文件

文件的指针：c语言中用一个指针变量指向一个文件，这个指针成为文件指针。
定义：FILE *指针变量标识符     FILE必须大写，它实际上是stdio.h头文件中由系统定义的一个新数据类型，包含文件名、文件位置等信息，
可以理解为一个包含文件管理有关信息的数据结构。在编写程序时不必关心FILE的具体结构，但在打开文件前必须定义一个文件指针。该指针指向
FILE结构。使用FILE时要求包含stdio.h头文件。 
*/
/*2.文件打开    c语言用fopen()函数来打开文件。    调用方式：FILE *fp;fp=fopen(文件名，文件打开方式);    注意：第一个参数可以是文
件名也可以是路径加文件名，添加路径时要用双斜杠 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	if((fp=fopen("file.txt","w"))==NULL){//如果成功打开文件则返回文件指针，否则返回空指针 
		printf("File open error!\n");
		exit(0);//0，正常退出   不为0，异常退出 
	}
	fprintf(fp,"%s","hello dev!");
	fclose(fp);
	return 0;
}

文件关闭    fclose()函数    fclose(文件指针);     文件关闭成功返回0，关闭失败返回EOF(-1)。也可以用ferror()函数测试文件是否关闭成功 
*/
/*4.文件复制    
字符读写函数：fgetc()函数、fputc()函数
字符串读写函数：fgets()函数、fputs()函数
格式化读写函数：fscanf()函数、fprintf()函数
数据块读写函数：fread()函数、fwrite()函数
文件其他函数：检测文件结尾函数feof()、检测文件读写出错函数ferror()、清除末尾标志和出错标志函数clearerr()、文件定位函数rewind()、
fseek()、ftell() 
*/ 
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	FILE *fp;
	if((fp=fopen("file.txt","w"))==NULL){
		printf("File open error!\n");
		exit(0);
	}
	c=getchar();
	while(c!='\n'){//Windows系统，按下回车键同时输入了俩个字符，\r和\n
		if(65<=c&&c<=90) c+=32;
		else if(97<=c&&c<=122) c-=32;
		fputc(c,fp);
		c=getchar();
	}
	fclose(fp);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[5];
	int in;
	FILE *fp;
	gets(s);
	scanf("%d",&in);
	if((fp=fopen("file.txt","w+"))==NULL){
		printf("File open error!\n");
		exit(0);
	}
	fputs(s,fp);
	fprintf(fp,"%d\n",in);
	rewind(fp);//注意指针fp的移动 
	fgets(s,5,fp);//注意fgets和fscanf对字符串的字符个数区别 
	fscanf(fp,"%d",&in);
	puts(s); 
	printf("%d",in);
	fclose(fp);
	return 0;
}
*/


