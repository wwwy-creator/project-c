//�Ӽ�������Ҫ�������ѧ���ʽ,����(5+7)/4+3*(7%2)+2*(7-3)= ���ԵȺŽ�β
 //(((5+2)%3+1)*4+4)+6^2=
//ֻ�ܼ���0��9,�ұ��������� 
/*����ѧ���ŵı�ʾ���£�
1.���ӡ�----��+�� 2.������----��-�� 3.���ˡ�----��*�� 4.������----��/��
5.��Բ���ʡ�----��pi�� 6.���׳ˡ�----������ 7.�������š�----��g��
8.�������㡱----��^�� 9.����eΪ�׵Ķ�����----��l�� 10.��sin��----��s��
11.��cos��----��c�� 12.��tan��----��t�� 13.��ָ����----��e�� 
14.��ȡ�ࡱ----��%�� 
*/ 
/*�������ʵ��1��2��3��4��5��8��14*/ 
/*
#include<stdio.h>
#include<math.h>
#include<string.h>
#include"review13.h"
struct pri_op{//��������������ȼ� 
	int pri;
	char ch;
};
int main()
{
	int i=0,j=0;//i����op[],j����num[] 
	char c='\0',num[50];//num[]�������� 
	struct pri_op op[50];//op[]��������������ȼ� 
	void result(struct pri_op op[],char num[],int i,int j);
	printf("��������ѧ���ʽ(�ȺŽ�β)��\n");
	while(c!='='){
		c=getchar();
		if(48<=c&&c<=57) {num[j]=c;j++;}//�ж��Ƿ�Ϊ���� 
		else{                           //����Ϊ�����,δ���Ƿ��ַ����� 
		    op[i].ch=c;
		    if(c=='(') op[i].pri=1;
		    else if(c=='^') op[i].pri=2;
		    else if(c=='*'||c=='/') op[i].pri=3;
		    else if(c=='%') op[i].pri=4;
		    else if(c=='+'||c=='-') op[i].pri=5;
		    else op[i].pri=6;
		    i++;
		}
	}//�������ĩβ�Ⱥ�Ҳ������˽�ȥ���ȼ���")"һ����ͣ������һ����Ч�ַ������ȼ��ж� 
    result(op,num,i,j);
    //���������Ƿ�ɹ� 
    //i-=1;j-=1;
    //for(;i>=0;i--) printf("%c",op[i].ch);
    //printf("\n");
    //for(;j>=0;j--) printf("%c",num[j]);
	 
	return 0;
 } 
*/ 
/*  //�Ӻ���result()����ѧ��ʽ���м��� 
 void result(struct pri_op op[],char num[],int i,int j)//iΪop��Ԫ�ظ�����jΪnum�� 
 {
 	int m,n,p=0;//m��Ӧi��n��Ӧj��pΪjs[]�ڵ�ǰ����������� 
	float rut;//rut���պ���opnum()�ķ���ֵ
	float number[50],*pnum=number;//�������ַ����ɿɼ�������� 
	char js[20];//�洢���ڽ��м��������� 
 	float opnum(char js[],int p,float number[]);
 	for(m=0;m<j;m++){//�������ַ����ɿɼ�������� 
 		number[m]=find(num[m]);
		//printf("%.2f ",number[m]);//����ת���Ƿ�ɹ� 
	 }
	 //printf("\n");//���Դ��룬���� 
 	for(m=0;m<i;m++){//��������������� 
 		switch(op[m].pri){
 			case 1:break;//����ǣ� ����Ҫ���㣬���� 
 		    case 2:
			case 3:
			case 4:
			case 5://�Եȼ���2��5������������жϣ������� 
				js[p]=op[m].ch;p++;
			    if(op[m].pri<op[m+1].pri){
				    rut=opnum(js,p,number);
				    memset(js,0,sizeof(js));//��ǰ���ȼ����ʽ�Ӽ�����ϣ�Ҫ��js��� 
				    j=copy(pnum,p,j);//�����������ɾ��,����ʣ�����ָ������� 
				    number[0]=rut;//�������Ϊ��һ��ʽ�ӵĲ������� 
				    //for(n=0;n<j;n++) printf("%.2f ",number[n]);printf("\n");//ɾ��������� 
				    p=0;//ָ����������������� 
				}
				break;
 		    case 6:break;//����ǣ���= ����������ʾ��ǰ���ȼ����ʽ���Ѿ�������ϣ�=��ʾ����ʽ�Ӽ������ 
 		    default:break;
	    }
	 }
    printf("��ѧ���ʽ�Ľ��Ϊ��%.2f",rut);//�������ʽ�ӵ����ս�� 
 }
float opnum(char js[],int p,float number[])//�Ե�ǰjs[]�������������������� 
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
	 //printf("%.2f\n",rut);//��ʾ������ 
	 return rut;
 }
*/

