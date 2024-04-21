#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//typedef unsigned int uint; 
//int main()
//{
//	unsigned int num1 = 0;
//	uint num2 = 0;
//	return 0;
//}

//static修饰局部变量时，改变了变量的存储位置，影响变量生命周期，使原来局部变量生命周期和程序生命周期一样 
// (即 将此局部变量放在静态区内存中，出作用域不销毁)
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

// 全局变量具有外部链接属性
//static修饰全局变量-->使全局变量的外部链接属性变为 内部链接属性, 其他源文件(.c)不能使用
//声明外部符号
//extern int lcdn;
//int main()
//{
//	printf("%d\n",lcdn);
//	return 0;
//}
 
//函数具有外部链接属性
//static修饰函数-->使函数的外部链接属性变为 内部链接属性, 其他源文件(.c)不能使用
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

//define 定义标识符常量
//#define NUM 100
 
//define 定义宏
//	   ADD:宏名  ADD(x,y)中x,y为宏的参数,参数无类型 ((x)+(y))为宏体
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
//	int a = 10; //向内存申请四个字节，存储10；
//	//&a  &0取地址操作符
//	printf("%p\n", &a);  // %p打印地址 
//	int* p = &a;		 //*说明p为指针变量，int说明p指向的对象是int类型的
//	//p为指针变量
//	*p = 20;  //解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象
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
//	//不管什么类型的指针，都是在创建变量
//	//指针是用来存放地址的
//	//指针变量的大小取决于一个地址存放的时候需要多大空间
//	//32位机器上的地址：32bit位 - 4byte 所以指针变量的大小是4个字节
//	//64位机器上的地址：64bit位 - 8byte 所以指针变量的大小是8个字节
//	printf("%zd\n",sizeof(int*));
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//
//	return 0;
//}

//struct	Stu
//{	//成员
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
//	//结构体指针变量 ->成员名
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//int main()
//{
//	struct Stu s = {"小明",20,"man","115677894"};
//
//	//结构体对象.成员名
//	printf("%s %d %s %s\n",s.name,s.age,s.sex,s.tele );
//	printf(&s);	
//	return 0;
//}