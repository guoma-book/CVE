#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
// void Add( )
//{
//	 static int x = 1;
//	printf("%d", x);
//	x++;
//}
struct Stu {
	char name[10];
	char sex[10];
	int tele[20];
	int age;
};
void print(struct Stu* pa)
{
	printf("%s,%s,%d,%d", (*pa).name, (*pa).sex, (*pa).tele, (*pa).age);
}
int main()
{
//	 
//	for (int a = 0; a < 10; a++)
//	{
//		Add();
//	}
//	//static���ξֲ�����
	//extern ADD(int x, int y);
	// int a = 10;
	// int b = 20;
	// int m = ADD(a, b);
	//printf("%d", m);
	//static����ȫ�ֱ����ͺ���
//#define ADD(x,y) x+y
//	int a = 10, b = 20;
//	printf("%d", a+b);
	//define�����

	//int a = 10;
	//printf("%d\n", &a);
	//int* p = &a;
	//printf("%d\n", p);
	//printf("%d\n", *p);

	//ָ��Ĵ�С
	//int a = 10;
	//int* p = &a;
	//printf("%zu",sizeof(p));


	//struct Stu a = { "wan","nan","1743242","18" };
	//struct Stu* pa = &a;
	//printf("%s,%s,%d,%d \n", a.name, a.sex, a.tele, a.age);
	//printf("%s,%s,%d,%d \n", pa->name, pa->sex, pa->tele, pa->age);
	//print();

	//�ṹ��

	//if���
	//int a = 10;
	//if (a < 18)
	//{
	//	printf("1");
	//}
	//else if (a > 18 && a < 45)
	//{
	//	printf("2");
	//}
	//else
	//	printf("3");


	////���1-100֮�������
	//for (int i = 0; i < 100; i++)
	//{
	//	if (i % 2 == 1)
	//	{
	//		printf("%d \n", i);
	//	}
	//}
	//int a;
	//scanf("%d", &a);
	//switch (a )
	//{
	//case 1:
	//	printf("weekend");
	//case 0:
	//		printf("days");
	//		break;
	//case 4:
	//	printf("24");

	//case 8:
	//	printf("nn");

	//default: 
	//	printf("sb");
	//}
	//int a = 0;
	//while (a < 10)
	//{
	//	if (a == 5)
	//	{
	//		printf("haha");
	//		break;
	//		printf("sasa");
	//	}
	//	printf("1\n");
	//	a++;
	//}
	//����break����while��{}ѭ�����������


	return 0;
}