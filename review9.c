//chapter10 复杂数据类型
//结构体的概念与定义   结构体变量的定义   结构体变量的初始化   结构体类型的嵌套定义   结构体变量的使用   结构体所占内存的字节数
//结构体数组   结构体指针   结构体与函数   共用体类型的定义   共用体变量的说明   共用体变量的引用   枚举类型的定义   
//枚举变量的说明及引用   用户定义类型   链表   内存分配   单向链表   
/*1.结构体的概念与定义   定义：struct 结构体名{ 类型名 结构体成员1名；类型名 结构体成员2名；......类型名 结构体成员n名；};  
struct是定义结构体类型的关键字，其后是自定义的结构体名。struct与结构体名一起组成结构类型名，大括号内的内容是该结构体所包含的成
员，也称为结构体分量。成员可以有多个，而且类型可以不同。结构体类型定义必须以分号结束。 
*/
/*2.结构体变量的定义   用已定义的结构体类型名定义结构体变量：struct 结构体名 结构体变量名；
在定义结构体类型的同时定义结构体变量   struct student{long id；char name[20]；....}stu1，stu2；   需要注意的是，这种定义方法在
后面就不能再使用student定义新的变量。 
*/
/*3.结构体变量的初始化   在定义时，可以将成员的初值置于大括号内来对结构体变量初始化（单独定义和与结构体类型一起定义俩种都行）
struct student stu1={100110001，"小明"，......}；    并没有强制要求全部成员都要赋初值，但如果初始化，则至少有一个数据，其他没
有初始化的成员变量由系统完成初始化，为其提供缺省的初始化值。注意顺序 。
*/
/*4.结构体类型的嵌套定义*/
/*5.结构体变量的使用    结构体变量的整体赋值：只有俩个变量类型一致才可以相互赋值，这也是结构体中唯一的整体操作方式
结构体变量成员的使用：结构体变量名.成员名     使用“.”引用运算符       stu1.id=100110001；  stu1.birth.year=1993；
*/
/*6.结构体所占内存的字节数    sizeof()      */
/*7.结构体数组    struct 结构体名 xy[100]={{},{},{},......};    每一个数组元素都是一个结构体变量 
*/
/*8.结构体指针    定义：结构体类型 *变量名；    赋值（初始化）：和普通指针一样    使用：需要注意的是*的优先级没有.高，所以要使
（）将*p括起来，p=&str，（*p）.gender。或者可以使用指向运算符->，p->gender。    结构体指针和数组与普通指针和数组使用相同 
*/
/*9.结构体与函数    用结构体的单个成员作为函数实参；用结构体变量作为函数实参；用结构体指针作为函数实参
C语言在函数间传递参数时，形参的变化是不会改变实参的值的
#include<stdio.h>
#define N 100 
struct student{
	long id;
	int score;
	char rank;
};
int main()
{
	int i,n,num;
	int sort(struct student *p,int n1);
	struct student stu[N];//如果不知道要输入多少人，可以用链表 
	printf("请输入学生人数：\n");
	scanf("%d",&n);
	printf("请输入%d个学生的学号和成绩：\n",n);
	for(i=0;i<n;){
		scanf("%ld",&stu[i].id);
		scanf("%d",&stu[i].score);
		if(stu[i].score>100||stu[i].score<0) 
		{printf("输入出错，请重新输入：\n");continue;}
		i++;//把i++写出来，是因为即使执行了continue，但是for()中的表达式3还是会被执行 
	}
	num=sort(stu,n);
	printf("学生的成绩等级：\n");
	for(i=0;i<n;i++){
		printf("%8ld%8c\n",stu[i].id,stu[i].rank);
	}
	printf("不及格人数：\n");
	printf("%d\n",num);
	return 0;
}
int sort(struct student *p,int n1)
{
	int i,num1=0;
	for(i=0;i<n1;i++,p++){
		if(p->score>=85) p->rank='A';
	else if(p->score>=70) p->rank='B';
	else if(p->score>=60) p->rank='C';
	else {p->rank='D';num1++;}
	}
	return num1;
}
*/
/*10.共用体类型的定义    共用体类型，也称联合，是将相同或不同类型的数据组织在一起共同占用同一段内存的一种构造数据类型。共用体
是从同一起始地址开始存放成员的值，即所有成员共享同一段内存单元（选用成员中占字节数最长的类型来分配内存单元，并且要求成员所占
空间按字长对齐）。通常成员之间是排他的，A成员使用时，对于B成员是无意义的，当然可以用B成员来访问。
定义：union 共用体名{类型名 共用体成员1名；类型名 共用体成员2名；......类型名 共用体成员n名}； 
#include<stdio.h>
union sam{
	int i;
	float f;
	char a[5];
};
int main()
{
	union sam s;
	printf("%d\n",sizeof(s));//字长问题，对齐值问题，偶地址和奇地址问题 
}
*/
/*11.共用体变量的说明    uion 共用体名 变量名；      */
/*12.共用体变量的引用    与结构体相同    */
/*13.枚举类型的定义      用户自定义枚举类型（基本数据类型）
定义：enum 类型名{标识符序列}；    定义枚举类型color-name：enum color-name{red，yellow，green，blue，black，white}；
定义说明：first，enum是定义枚举类型的关键字。second，枚举值标识符是常量，不是变量，系统自动给他们赋值0,1,2,3......。third，
枚举值用标识符表示，注意不是字符串。forth，可以在定义枚举类型时对枚举常量重新定义值，enum color-name{red=3，yellow，green，
blue=8，black，white}；此时，yellow为4，green为5，black为9，white为10.即系统自动按新定义的值往后延续。
*/
/*14.枚举变量的说明及引用    枚举变量的说明有三种方式：first，enum 类型名 变量名表；second，enum 类型名{标识符序列} 变量名表；
third，enum {标识符序列} 变量名表；
枚举变量引用：  first，变量定义后，就可以对它赋枚举常量值或枚举常量对应的整数值。但是，不能赋没有定义过的枚举常量或枚举常量
对应的最大整数值。second，枚举常量对应整数值，故而枚举变量、常量、常量对应整数之间可以比较大小。third，枚举变量可以进行++、
--等运算。forth，枚举变量不能通过scanf()或gets()函数输入枚举常量，只能通过赋值取得枚举常量值。但是枚举变量可以通过
scanf("%d",&枚举变量)输入枚举常量对应的整数值。fifth，枚举变量和枚举常量可以用printf("%d",...)输出对应的整数值，若想输出枚
举值字符串，只能间接进行，color=red；if(color=red) printf("red"); 
#include<stdio.h>
int main()
{
	enum week{Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday}weekday;
	char *arr[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	printf("请输入1~7之间任意一个整数：\n");
	scanf("%d",&weekday);
	printf("对应的星期是%s\n",arr[weekday-1]);
	return 0;
}
*/
/*15.用户定义类型   功能：为系统固有的或程序员自定义的数据类型定义别名。     形式：typedef 类型名 标识符；
first，给系统固有类型起别名，typedef int INTEGER；second，给程序员自定义的类型起别名，typedef struct student STUDENT；或者在
定义结构体类型的时候就直接取别名，typedef struct student{......}STUDENT；（这种情况前面的student可以省去） 
third，定义字符指针类型，typedef char * CHARP；forth，定义有n个元素的整形数组，typedef int arr[n];以后可以用arr来定义其他相同
类型的n个元素的数组，例如：arr a,b;相当于int a[n],b[n]; 也可以定义结构体类型的数组，typedef struct student STUDENT[n]； 
*/
/*16.链表   动态数据结构   动态内存分配*/
/*17.内存分配   静态内存分配   动态内存分配
使用动态内存分配的步骤：first，了解需求内存空间大小；second，利用动态内存分配函数来分配所需要的存储空间；third，使用指针获得
内存空间首地址，用指针操作操作该内存空间；forth，使用完毕，释放内存。
动态分配内存函数定义在stdlib.h头文件内

动态内存分配函数malloc()   函数原型：void *malloc(unsigned int size)     功能：动态申请size字节的内存单元，size为unsigned int
型数据。函数返回值为该存储单元的首地址，其类型为void *（无基类型的指针型），一般通过强制类型转换如(int *)等得到所需类型的内存
地址，并将返回的地址值赋给指针变量。如无足够内存分配，函数将返回空指针NULL。
申请空间大小时最好用sizeof运算符，因为不同平台相同类型分配的内存大小不同。一定要判断师傅申请成功。

计数动态存储分配函数calloc()    函数原型：void *calloc(unsigned n,unsigned size)   功能：动态申请n个空间，每个存储空间的长度均
为size字节，并将n*size个字节全部初始化为0.函数返回值是void *类型的首地址，可通过类型转换将此地址值赋给指针变量，该指针相当于
指向了一个一维数组。
malloc与calloc的区别在于calloc对整个申请的空间进行了初始化。

分配调整函数realloc()   函数原型：void *realloc(void *ptr,unsigned newsize)   功能：更改以前的存储分配。ptr为已接收动态分配内存
首地址的指针变量，该函数回收ptr指向的内存单元，并重新分配newsize字节的内存单元（新内存单元的首地址赋给ptr或其他指针），并将裕原
内存单元的内容复制过来。newsize为unsigned int型数据，它可以比原先内存单元的空间大或小，若大则不丢失信息。函数返回新内存的首地址
，如果内存不够，则返回NULL。

动态存储释放函数free()   函数原型：void free(void *p)     功能：释放由动态存储分配函数申请到的整块内存空间，，其中指针变量p必须
是由malloc、calloc、realloc函数分配的存储内存空间首地址的指针变量，若p是空指针，则free什么也不做。该函数无返回值。
三个函数申请的内存空间使用完毕，必须释放。 
*/
/*18.单向链表    
结构体和指针的配合使用可表示许多复杂的动态数据结构，如链表、堆栈、队列、树、图等 
*/   
/*
//这个小程序的功能是为了计算一个或多个系的学生的平均成绩绩点，也可以改写成其他相似功能的问题 
#include<stdio.h>
#define N 1000  //假设每个系的学生人数上限为1000 
#define P 20//假设每个系的学科数上限为20 
typedef struct message{//存储每个学生的学号，每科成绩，和绩点 
	long id;
	int score[P];
	float gpa;
}MESS;
struct student{//存储整个系的学生人数，学科数，每科学分，和每个学生的信息 
	int stunum;
	int pnum;
	float p[P];
	MESS pscore[N];
};
int main()//将stu改成数组，按理可以录入多组数据，后计算。但实际情况是报错：program received signal sigsegv segmentation fault 
{
	int M,i,l,m,k;
	struct student stu;
	void sort(struct student stu1);
	scanf("%d",&M);//接收要计算的系个数 
	for(i=0;i<M;i++){
		scanf("%d",&stu.stunum);
		scanf("%d",&stu.pnum);
		for(l=0;l<stu.pnum;l++){
			scanf("%f",stu.p+l);
		}
		for(k=0;k<stu.stunum;k++){
			scanf("%ld",&stu.pscore[k].id);
			for(m=0;m<stu.pnum;m++){
				scanf("%d",&stu.pscore[k].score[m]);
			}
		}
		sort(stu);//将存储完毕的该系学生的成绩进行排序 
	}
	return 0;
}
void sort(struct student stu1)//stu1的操作不改变stu 
{
	int i,j,k;
	MESS trans,trangpa;
	float gpa1,p1=0.0;
	MESS *pm1=stu1.pscore;
	for(j=0;j<stu1.pnum;j++){//计算该系所有学科的学分和 
		p1+=stu1.p[j];
	}
	for(i=0;i<stu1.stunum;i++){//计算每一科成绩对应的绩点 
		gpa1=0.0;
		for(j=0;j<stu1.pnum;j++){
		if((pm1+i)->score[j]>89)  gpa1+=1.5*stu1.p[j];
		else if((pm1+i)->score[j]>79) gpa1+=1.3*stu1.p[j];
		else if((pm1+i)->score[j]>69) gpa1+=1.1*stu1.p[j];
		else if((pm1+i)->score[j]>59) gpa1+=1.0*stu1.p[j];
		else   gpa1+=0.0*stu1.p[j];
		}
		(pm1+i)->gpa=gpa1/p1;//计算总绩点 
	}
	for(i=0;i<stu1.stunum-1;i++){//将绩点按从大到小排序出来，若有绩点相同的，则按学号从小到大排
		for(j=i+1;j<stu1.stunum;j++){
			if((pm1+i)->gpa<(pm1+j)->gpa&&(pm1+i)->id>(pm1+j)->id){
				trangpa=stu1.pscore[i];stu1.pscore[i]=stu1.pscore[j];stu1.pscore[j]=trangpa;
			}
		}
	}
	for(i=0;i<stu1.stunum;i++){  //打印出排序结果 
		printf("%ld %8.2f\n",stu1.pscore[i].id,stu1.pscore[i].gpa);
	}
}
*/ 

