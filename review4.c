//chapter5 ѭ���ṹ
//forѭ�����   whileѭ�����   do-whileѭ�����   ѭ���������   ѭ��Ƕ��   ����㷨   �����㷨   ͼ�δ�ӡ����
/*1.forѭ�����    ����ѭ���ṹģʽ   ͨ������ѭ��������֪�����     for(���ʽ1�����ʽ2�����ʽ3) ��䣻   forѭ���еı��ʽ
����ʡ�ԣ�������������ʡ
ע��ѭ����Ϊ�����ʱ�����    ѭ�������д�ڱ��ʽ3��     for(sum=0,i=1;i<=100;sum+=i,i++) ;    Ҫע����ʽ3���������ʽ�Ĵ��� 
*/ 
/*
#include<stdio.h>
int main()
{
	int sum,i;
	//���ʽ3�滻i++,sum+=i 
	for(sum=0,i=1;i<=100;sum+=i,i++) ;
	printf("%d\n",sum);
	return 0;
}
*/
/*2.whileѭ�����    ����ѭ��     ��ҪӦ����ѭ������δ֪�����    while(���ʽ) ��䣻
ѭ������=��ѭ��������ֵ-ѭ��������ֵ��/����+1   ѭ������ÿ�α仯ֵ��Ϊ���� 
*/
/*3.do-whileѭ�����    ֱ����ѭ��   ѭ������δ֪�����    do{��䣻}while(���ʽ)�� 
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
/*4.ѭ���������   break���   break;   ��Ҫ����switch����ѭ����䣬ʹ������ת����������֮�󣬼���ֹ���ڵ�switch�ṹ��ѭ���ṹ
����Ƕ�׵�����£�ֻ���˳������ѭ����switch�ṹ
continue���    continue;   ��ֹ����ѭ����������һ��ѭ��
goto���     goto ���;     ʹ����ת�Ƶ���Ӧ���������䣬���Ӹ�������ִ�� 
loop:if(i<=100)
{
   sum+=i;
   i++;
   goto loop;
}
һ������£�����ʹ��goto��䣬����������ǳ����ʣ�1.������������ѭ����breakֻ������������ѭ����2.����ͬ�ĳ���λ�ã������˳�ǰ��
�������� 
*/
/*5.ѭ��Ƕ��   
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
 /*6.����㷨    7.�����㷨��շת����  8.ͼ�δ�ӡ���� 
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










