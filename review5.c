//chapter6 ����
//����Ľṹ    �����ķ���   �����Ķ���   ������ƻ���ԭ��   �������ü���������   �����ķ���ֵ   ����������   ������Ƕ�׵���
//�����ĵݹ����   ������������   �����Ĵ洢����   �ⲿ�������ڲ�����   �궨������   �ļ���������   ������������   
/*1.����Ľṹ   һ�㣬һ��c������һ���������������û�������Ӻ������    ����ִ��ʱ������������ʼ��ͨ����������������������
��������Ҳ�����໥���ã�ͬһ���������Ա�һ�������������á�    ����һ������������ʼ�������������� 
����������������õĺ���    �����������������������õĺ���     
*/ 
/*2.��������   ��׼�������⺯�������û��Զ��庯��      main�������û���д�ģ���������������ϵͳȷ����
�޲κ������вκ���    �з���ֵ�������޷���ֵ����      ���ݷ���ֵ���ͻ����Ի������ͺ�����ʵ�ͺ������ַ��ͺ�����ָ�뺯��                   
*/
/*3.�����Ķ���    
���������һ����ʽ     ����ֵ����  ������������ ��ʽ����1������ ��ʽ����2��...�� {�����������   ִ���������}
�������н����return��䷵��  return ����ʽ�� ��   return ������ʽ���� 
�պ���  ����˵���� ����������   {} 
*/
/*4.������ƵĻ���ԭ��      */      /*5.�������ü���������    ��������ʱʵ�εļ���˳�򣺴�������     */
/*6.�����ķ���ֵ     ��������ֵ���ͺͺ�����������ͱ���һ�£�������߲�ͬ�����Ժ������������Ϊ׼��ϵͳ���Զ�ת������ 
*/
/*7.����������   һ�������ܱ�������Ҫ��������������1.�����������2.�ȶ�������ʱ�����屻��������ǰ���������������ں�
3.�����������ʱ������������������ǰ�����������ں����������������������    ����˵����  ���������βμ��β�����˵������
*/
/*8.������Ƕ�׵���   
#include<stdio.h>
int main()
{
   double s,sum(int m);
   s=sum(10);
   printf("%lf\n",s);
   return 0;
}
double sum(int m)
{
   double s,mul(int n);
   s=mul(m);
   return s;
}
double mul(int n)
{
   n++;
   return n;
}
*/
/*9.�����ĵݹ����    �ں����ĵ��ù�����ֱ�ӣ�ֱ�ӵݹ飩���ӣ���ӵݹ飩�ĵ�������
#include<stdio.h>
int count=0;
int main()
{
	int n,x,fib(int m);
	printf("������Ҫ���ҵ�쳲��������е�������");
	scanf("%d",&n);
	x=fib(n);
	printf("��%d��Ϊ%d,�ݹ���õĴ���Ϊ%d\n",n,x,count);
	return 0;
 } 
 int fib(int m)
 {
 	int f;
 	if(m==1||m==2) f=1;
 	else 
	 {
	 	count+=2;
	 	f=fib(m-1)+fib(m-2);
	 }
 	return f;
 }
 */
 /*10.������������   �ֲ�����   ȫ�ֱ������ֽ����ⲿ������   ��һ��Դ�����ļ��У��ֲ��������Ժ�ȫ�ֱ���ͬ���������ھֲ�
 �������õķ�Χ��ȫ�ֱ����������ã����ֲ�������ȫ�ֱ�������������
 */
 /*11.�����Ĵ洢����   �����Ĵ洢��ʽ����̬�洢�;�̬�洢   ��̬�洢�����;�̬�洢����ռ���ڴ��ʱ�䲻ͬ���������������Գ�Ϊ������
 ������
 �����Ĵ洢���ͣ��Զ�����auto���Ĵ�������register����̬����static���ⲿ����extern
 �Զ�����    auto �������� ������[=��ֵ]��.....;     auto�ǿ���ʡ�Եģ������͸�������Լ��������βζ����Զ�����
 �Ĵ�������    register �������� ������[=��ֵ]��     һ��Ĵ�������ֻ����int��char��ָ������
 ��̬����    static �������� ������[=��ֵ]��.....;   ��̬�ֲ������������ں����򸴺�����У��;�̬ȫ�ֱ�����ֻ�ڵ�ǰ���崦���ļ�ĩβ
 �����ã�
 �ⲿ����    extern ����˵���� ������=��ֵ��.....;    extern�����ı���������������Դ���򣬲�ֻ�ǵ�ǰԴ�ļ�    
 */
 /*12.�ڲ��������ⲿ����    �ڲ���������̬��������static�������Ϳ��������ڱ��ļ���ʹ��
 */
 /*13.�궨������   �޲κ궨��  #define ���� �滻�ı�   ע����滻�ı�������    ��ֹ�����������ʹ��#undef���� 
�вκ궨��   #define �������βα��� �滻�ı�     �����еĺ����󣬺�����ʵ�α���
*/
/*14.�ļ���������   #include<�ļ���> �� #include"�ļ���"   
*/
/*15.������������   */















































