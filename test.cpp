#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int main()
//{
//	int a = 10;
//	//常量指针
//	const int* p = &a;
//	//指针指向的值不可以改，指针的指向可以改
//
//	//指针常量
//	int const* p = &a;
//	//指针的指向不可以改，指针指向的值可以改
//
//	//
//	const int* const p = &a;
//	//指针的指向和指针指向的值都不可以改
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << *p << " ";
//		p++;
//	}
//	system("pause");
//	return 0;
//}

//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y; 
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	system("pause");
//	return 0;
//}

//void paixu(int* arr, int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void Print(int* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//int main()
//{
//	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	paixu(arr, len);
//	Print(arr, len);
//	system("pause");
//	return 0;
//}

//#include<string.h>
//struct stu 
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	struct stu s1;
//	s1.name = "张三";
//	s1.age = 18;
//	s1.score = 98;
//	cout << "姓名：" << s1.name << "年龄：" << s1.age << "成绩：" << s1.score;
//	cout << endl;
//	system("pause");
//	return 0;
//}

//#include<string.h>
//struct Stu 
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	struct Stu arr[3] =
//	{
//		{"张三",18,100},
//		{"里斯",18,90},
//		{"王五",18,60}
//	};
//	for (int i = 0; i < 3; i++)
//	{
//		cout << arr[i].name
//			<< arr[i].age
//			<< arr[i].score << endl;
//	}
//	system("pause");
//	return 0;
//}

//#include<string.h>
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	struct Stu s = { "张三",18,100 };
//	struct Stu* p = &s;
//	cout << p->name << p->age << p->score << endl;
//	system("pause");
//	return 0;
//}

//#include<string.h>
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	struct Stu s1;
//};
//int main()
//{
//	teacher t;
//	t.id = 10000;
//	t.name = "老王";
//	t.age = 50;
//	t.s1.name = "小王";
//	t.s1.age = 18;
//	t.s1.score = 90;
//	cout << t.name << t.id << t.age
//		<< t.s1.name << t.s1.age << t.s1.score << endl;
//	system("pause");
//	return 0;
//}

//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
////值传递(实参不会发生改变)
//void printStu1(struct Stu s)
//{
//	cout << "子函数 姓名：" << s.name << "年龄：" << s.age << "分数：" << s.score;
//}
////地址传递(实参会发生改变)
//void printStu2(struct Stu* s)
//{
//	cout << "子函数 姓名：" << s->name << "年龄：" << s->age << "分数：" << s->score;
//}
//int main()
//{
//	struct Stu s;
//	s.name = "张三";
//	s.age = 20;
//	s.score = 85;
//	//cout << "main函数结果 姓名：" << s.name << "年龄：" << s.age << "分数：" << s.score;
//	printStu1(s);
//	printStu2(&s);
//	system("pause");
//	return 0;
//}

////将函数形参改为指针，可以减少内存且不复制新的副本，但外侧 数据也会随之更改
////所以加上const 无法更改
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//void printStu(Stu s)
//{
//	s.age = 20;
//	cout << "姓名：" << s.name << "年龄：" << s.age << "分数：" << s.score;
//}
//int main()
//{
//	struct Stu s = { "张三",15,90 };
//	printStu(s);
//	//cout << "姓名：" << s.name << "年龄：" << s.age << "分数：" << s.score;
//	
//	system("pause");
//	return 0;
//}

//#include<ctime>
//#include<string.h>
//struct Stu
//{
//	string sname;
//	int age;
//	int score;
//};
//struct teacher
//{
//	string tname;
//	struct Stu s[5];
//};
////赋值函数
//void allocateSpace(struct teacher ta[],int len)
//{
//	string nameSeed = "ABCDE";
//	//老师赋值
//	for (int i = 0; i < len; i++)
//	{
//		ta[i].tname = "T_";
//		ta[i].tname += nameSeed[i];
//		//通过循环给学生赋值
//		for (int j = 0; j < 5; j++)
//		{
//			ta[i].s[j].sname = "S_";
//			ta[i].s[j].sname += nameSeed[j];
//			int random = rand() % 61 + 40;//40~100随机数
//			ta[i].s[j].score = random;
//		}
//	}
//}
//void printInfo(struct teacher ta[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师姓名：" << ta[i].tname << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生姓名：" << ta[i].s[j].sname <<
//				" 考试分数：" << ta[i].s[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	//随机数
//	srand((unsigned int)time(NULL));
//	struct teacher ta[3];
//	int len = sizeof(ta) / sizeof(ta[0]);
//	allocateSpace(ta, len);
//	printInfo(ta, len);
//	system("pause");
//	return 0;
//}
struct Hero
{
	string name;
	int age;
	string sex;
};
void bubbleSort(struct Hero ha[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (ha[j].age > ha[j + 1].age)
			{
				struct Hero tmp = ha[j];
				ha[j] = ha[j + 1];
				ha[j + 1] = tmp;
			}
		}
	}
}
void printHero(struct Hero ha[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << ha[i].name << " 年龄：" << ha[i].age << " 性别：" << ha[i].sex << endl;
	}
}
int main()
{
	struct Hero ha[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	int len = sizeof(ha) / sizeof(ha[0]);
	/*for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << ha[i].name << " 年龄：" << ha[i].age << " 性别：" << ha[i].sex << endl;
		}*/
	bubbleSort(ha, len);
	printHero(ha, len);
	system("pause");
	return 0;
}