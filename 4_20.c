#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//typedef unsigned int uint; 
//int main()
//{
//	unsigned int num1 = 0;
//	uint num2 = 0;
//	return 0;
//}

//static���ξֲ�����ʱ���ı��˱����Ĵ洢λ�ã�Ӱ������������ڣ�ʹԭ���ֲ������������ںͳ�����������һ�� 
// (�� ���˾ֲ��������ھ�̬���ڴ��У�������������)
//void test() {
	//(static) int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

// ȫ�ֱ��������ⲿ��������
//static����ȫ�ֱ���-->ʹȫ�ֱ������ⲿ�������Ա�Ϊ �ڲ���������, ����Դ�ļ�(.c)����ʹ��
//�����ⲿ����
//extern int lcdn;
//int main()
//{
//	printf("%d\n",lcdn);
//	return 0;
//}
 
//���������ⲿ��������
//static���κ���-->ʹ�������ⲿ�������Ա�Ϊ �ڲ���������, ����Դ�ļ�(.c)����ʹ��
//extern Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 10;
//	scanf("%d %d", &a, &b);
//	int z = Add(a, b);
//	printf("%d\n",z);
//	return 0;
//}

//define �����ʶ������
//#define NUM 100
 
//define �����
//	   ADD:����  ADD(x,y)��x,yΪ��Ĳ���,���������� ((x)+(y))Ϊ����
//#define ADD(x,y) ((x)+(y))
//
//int Add(int x , int y ) {
//	return x + y;
//}
//int main()
//{
//
//	printf("%d\n",NUM);
//	int n = NUM;
//	printf("%d\n", n);
//	int arr[NUM] = { 0 };
//
//	int a = 10;
//	int b = 1;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10; //���ڴ������ĸ��ֽڣ��洢10��
//	//&a  &0ȡ��ַ������
//	printf("%p\n", &a);  // %p��ӡ��ַ 
//	int* p = &a;		 //*˵��pΪָ�������int˵��pָ��Ķ�����int���͵�
//	//pΪָ�����
//	*p = 20;  //�����ò���������˼����ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ���
//	printf("%d\n", a);
//	
//	char ch = 'w';  
//	char pc = &ch;
//	return 0;
////}

//int main()
//{
//	//int* p1;
//	//char* p2;
//	//����ʲô���͵�ָ�룬�����ڴ�������
//	//ָ����������ŵ�ַ��
//	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
//	//32λ�����ϵĵ�ַ��32bitλ - 4byte ����ָ������Ĵ�С��4���ֽ�
//	//64λ�����ϵĵ�ַ��64bitλ - 8byte ����ָ������Ĵ�С��8���ֽ�
//	printf("%zd\n",sizeof(int*));
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//
//	return 0;
//}

//struct	Stu
//{	//��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n",(*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->
//	//�ṹ��ָ����� ->��Ա��
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//int main()
//{
//	struct Stu s = {"С��",20,"man","115677894"};
//
//	//�ṹ�����.��Ա��
//	printf("%s %d %s %s\n",s.name,s.age,s.sex,s.tele );
//	printf(&s);	
//	return 0;
//}