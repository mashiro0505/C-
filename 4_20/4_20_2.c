#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
	//int age = 20;
	//if (age >= 18)
	//{
	//	printf("已成年");
	//}
	//else {
	//	printf("未成年");
	//}


//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("青少年");
//	else if (age >= 18 && age < 28)  //&&逻辑与：而且
//		printf("青年");
//	else if (age >= 28 && age < 40)
//		printf("中年");
//	else if (age >= 40 && age < 60)
//		printf("壮年");
//	else
//		printf("老年");
//	return 0;
//}

//int test()
//{
//	int a = 4;
//	if (a == 3)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int	r = test();
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%\n",&num);
//	if (num % 2 == 1)
//		printf("是奇数");
//	else
//		printf("no");
//	return 0;
//}
// 

//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{w\
//		if (i % 2 == 1)
//			printf("%d\n",i);
//		i++;
//	}
//}

//int main()
//{
//	int day = 0;
//	scanf("%d\n", &day);
//	switch (day)    //switch(整型常量表达式){ 语句项
//	{                                           }
//	case1:
//		printf("星期2\n");
//		break;
//	case2:
//		printf("星期1\n");
//		break;
//	case3:
//		printf("星期3\n");
//		break;
//	case4:
//		printf("星期4\n");
//		break;
//	case5:
//		printf("星期5\n");
//		break;
//	case6:
//		printf("星期6\n");
//		break;
//	case7:
//		printf("星期日\n");
//		break;
//
//
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d\n", &day);
//	switch (day)
//	{
//	case1:
//	case2:
//	case3:
//	case4:
//	case5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误");
//		break;
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++, n++;
//			break;
//		}
//	case4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n",m,n);
//	return 0;
//} 

//while循环中
//break是用于永久终止循环
//continue 跳过本次循环后面的代码，进行下一次循环的判断
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}