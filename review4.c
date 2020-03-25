//chapter5 循环结构
//for循环语句   while循环语句   do-while循环语句   循环控制语句   循环嵌套   穷举算法   迭代算法   图形打印问题
/*1.for循环语句    当型循环结构模式   通常用于循环次数已知的情况     for(表达式1；表达式2；表达式3) 语句；   for循环中的表达式
可以省略，但“；”不能省
注意循环体为空语句时的情况    循环体可以写在表达式3里     for(sum=0,i=1;i<=100;sum+=i,i++) ;    要注意表达式3中俩个表达式的次序 
*/ 
/*
#include<stdio.h>
int main()
{
	int sum,i;
	//表达式3替换i++,sum+=i 
	for(sum=0,i=1;i<=100;sum+=i,i++) ;
	printf("%d\n",sum);
	return 0;
}
*/
/*2.while循环语句    当型循环     主要应用于循环次数未知的情况    while(表达式) 语句；
循环次数=（循环变量终值-循环变量初值）/步长+1   循环变量每次变化值即为步长 
*/
/*3.do-while循环语句    直到型循环   循环次数未知的情况    do{语句；}while(表达式)； 
*/
/*
#include<stdio.h>
int main()
{
	int a,sum=0;
	do
	{
		scanf("%d",&a);
		sum+=a;
	}while(a!=0);
	printf("%d\n",sum);
	return 0;
}
*/
/*4.循环控制语句   break语句   break;   主要用于switch语句和循环语句，使得流程转向所在流程之后，即终止所在的switch结构或循环结构
在有嵌套的情况下，只能退出当层的循环或switch结构
continue语句    continue;   终止本次循环，进行下一次循环
goto语句     goto 标号;     使流程转移到相应标号所在语句，并从该语句继续执行 
loop:if(i<=100)
{
   sum+=i;
   i++;
   goto loop;
}
一般情况下，不会使用goto语句，但有种情况非常合适：1.快速跳出多重循环（break只能跳出其所在循环）2.跳向共同的出口位置，进行退出前的
错误处理工作 
*/
/*5.循环嵌套   
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
		   printf("%d*%d=%d ",j,i,i*j);
		}
		printf("\n");
	 } 
	return 0;
}
*/
 /*6.穷举算法    7.迭代算法（辗转法）  8.图形打印问题 
 #include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<=6;i++)
	{
		for(j=1;j<=6-i;j++)
		{
			printf(" ");
		}
		printf("%d",i);
		for(k=1;k<=2*i-1;k++)
		{
			if(i%2==0) printf("$");
			else       printf("*");
		}
		if(i!=0) printf("%d",i);
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=6;i++)
	{
		for(j=i;j>=0;j--) printf("%d",j);
		for(j=1;j<=i;j++) printf("%d",j);
		for(j=1;j<=12-2*i;j++) printf("8");
		printf("\n");
	}
	return 0;
}
 */










