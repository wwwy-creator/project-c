//从键盘输入要计算的数学表达式,形如(5+7)/4+3*(7%2)+2*(7-3)= ，以等号结尾
 //(((5+2)%3+1)*4+4)+6^2=
//只能计算0到9,且必须是整数 
/*各数学符号的表示如下：
1.“加”----“+” 2.“减”----“-” 3.“乘”----“*” 4.“除”----“/”
5.“圆周率”----“pi” 6.“阶乘”----“！” 7.“开根号”----“g”
8.“幂运算”----“^” 9.“以e为底的对数”----“l” 10.“sin”----“s”
11.“cos”----“c” 12.“tan”----“t” 13.“指数”----“e” 
14.“取余”----“%” 
*/ 
/*本程序仅实现1、2、3、4、5、8、14*/ 
/*
#include<stdio.h>
#include<math.h>
#include<string.h>
#include"review13.h"
struct pri_op{//存入运算符及优先级 
	int pri;
	char ch;
};
int main()
{
	int i=0,j=0;//i接收op[],j接收num[] 
	char c='\0',num[50];//num[]接收数字 
	struct pri_op op[50];//op[]接收运算符和优先级 
	void result(struct pri_op op[],char num[],int i,int j);
	printf("请输入数学表达式(等号结尾)：\n");
	while(c!='='){
		c=getchar();
		if(48<=c&&c<=57) {num[j]=c;j++;}//判断是否为数字 
		else{                           //否则为运算符,未做非法字符处理 
		    op[i].ch=c;
		    if(c=='(') op[i].pri=1;
		    else if(c=='^') op[i].pri=2;
		    else if(c=='*'||c=='/') op[i].pri=3;
		    else if(c=='%') op[i].pri=4;
		    else if(c=='+'||c=='-') op[i].pri=5;
		    else op[i].pri=6;
		    i++;
		}
	}//在运算符末尾等号也被添加了进去，等级和")"一样最低，对最后一个有效字符做优先级判断 
    result(op,num,i,j);
    //测试输入是否成功 
    //i-=1;j-=1;
    //for(;i>=0;i--) printf("%c",op[i].ch);
    //printf("\n");
    //for(;j>=0;j--) printf("%c",num[j]);
	 
	return 0;
 } 
*/ 
/*  //子函数result()对数学算式进行计算 
 void result(struct pri_op op[],char num[],int i,int j)//i为op内元素个数，j为num的 
 {
 	int m,n,p=0;//m对应i，n对应j，p为js[]内当前所存算符个数 
	float rut;//rut接收函数opnum()的返回值
	float number[50],*pnum=number;//将数字字符换成可计算的数字 
	char js[20];//存储正在进行计算的运算符 
 	float opnum(char js[],int p,float number[]);
 	for(m=0;m<j;m++){//将数字字符换成可计算的数字 
 		number[m]=find(num[m]);
		//printf("%.2f ",number[m]);//测试转换是否成功 
	 }
	 //printf("\n");//测试代码，换行 
 	for(m=0;m<i;m++){//对所有运算符遍历 
 		switch(op[m].pri){
 			case 1:break;//如果是（ 不需要运算，跳过 
 		    case 2:
			case 3:
			case 4:
			case 5://对等级在2到5的运算符进行判断，并运算 
				js[p]=op[m].ch;p++;
			    if(op[m].pri<op[m+1].pri){
				    rut=opnum(js,p,number);
				    memset(js,0,sizeof(js));//当前最先计算的式子计算完毕，要将js清空 
				    j=copy(pnum,p,j);//将算过的数字删除,并将剩余数字个数返回 
				    number[0]=rut;//将结果最为下一个式子的操作数字 
				    //for(n=0;n<j;n++) printf("%.2f ",number[n]);printf("\n");//删除后的数组 
				    p=0;//指向运算符个数，清零 
				}
				break;
 		    case 6:break;//如果是）或= 跳过，）表示当前最先计算的式子已经计算完毕，=表示整个式子计算完毕 
 		    default:break;
	    }
	 }
    printf("数学表达式的结果为：%.2f",rut);//输出整个式子的最终结果 
 }
float opnum(char js[],int p,float number[])//对当前js[]所存的运算符，进行运算 
 {
 	int q=p;
 	float rut=0.0,rut1=0.0;
 	while(p){
 			switch(js[p-1]){
 			    case '^':rut1+=pow(number[q-1],number[q]);break;
 			    case '*':rut1+=number[q-1]*number[q];break;
 			    case '/':rut1+=number[q-1]/number[q];break;
 			    case '%':rut1+=(int)number[q-1]%(int)number[q];break;
 			    case '+':rut1+=number[q-1]+number[q];break;
 			    case '-':rut1+=number[q-1]-number[q];break;
 		        default:break;
		    }
		    number[q-1]=rut1;
		    rut=rut1;
			rut1=0.0; 
		    q--;
		    p--;
		}
	 //printf("%.2f\n",rut);//显示计算结果 
	 return rut;
 }
*/

