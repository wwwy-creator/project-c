#include<stdio.h>
float find(char c)
{
	float i;
	switch(c){
		case '0':i=0.0;break;
		case '1':i=1.0;break;
		case '2':i=2.0;break;
		case '3':i=3.0;break;
		case '4':i=4.0;break;
		case '5':i=5.0;break;
		case '6':i=6.0;break;
		case '7':i=7.0;break;
		case '8':i=8.0;break;
		case '9':i=9.0;break;
		default:break;
	}
	return i;
}
int copy(float *pnum,int p,int i)
{
	int j;
	float tmp;
	i-=p;
	for(j=0;j<i;j++){
		tmp=*(pnum+p+j);*(pnum+j)=tmp;
	}
	//for(j=0;j<i;j++) printf("%.2f ",*(pnum+j));//²âÊÔ 
	//printf("\n");
	return i;
}
//float jie(int in){	}
/* void result(struct pri_op op[],char num[],int j,int i)
 {
 	int m;
 	int p=0,q;
	char js[20];
 	int rut1,rut,opnum(char js[],int p,char num[],int rut);
 	rut1=find(num[0]);
 	for(m=0;m<j;m++){
 		switch(op[m].pri){
 			case 1:break;
 		    case 2:
			case 3:
			case 4:
				js[p]=op[m].ch;p++;
			    if(op[m].pri<op[m+1].pri) {
				    rut=opnum(js,p,num,rut1);
				    rut1=rut;
				    memset(js,0,sizeof(js));
				    q=2*p-1;strcpy(num,num+q);
				    puts(num);
				    p=0;q=0;
				}
				break;
 		    case 5:break;
 		    default:break;
	    }
	 }
    printf("%d",rut);
 }
int opnum(char js[],int p,char num[],int rut)
 {
 	int q=2*p-1;
 	int rut1=0;
 	while(p){
 		if(p!=1){
 			switch(js[p-1]){
 			    case '^':rut1+=pow(find(num[q-1]),find(num[q]));break;
 			    case '*':rut1+=find(num[q-1])*find(num[q]);break;
 			    case '/':rut1+=find(num[q-1])/find(num[q]);break;
 			    case '%':rut1+=find(num[q-1])%find(num[q]);break;
 			    case '+':rut1+=find(num[q-1])+find(num[q]);break;
 			    case '-':rut1+=find(num[q-1])-find(num[q]);break;
 		        default:break;
		    }
		}
 		else{
 			switch(js[p-1]){
 			    case '^':rut1+=pow(rut,find(num[q]));break;
 			    case '*':rut1+=rut*find(num[q]);break;
 			    case '/':rut1+=rut/find(num[q]);break;
 			    case '%':rut1+=rut%find(num[q]);break;
 			    case '+':rut1+=rut+find(num[q]);break;
 			    case '-':rut1+=rut-find(num[q]);break;
 		        default:break;
		    }
		}
		q--;
		p--;
	 }
	 printf("%d\n",rut1); 
	 return rut1;
 }*/
