#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int main()
//{
//	int a = 10;
//	//����ָ��
//	const int* p = &a;
//	//ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�
//
//	//ָ�볣��
//	int const* p = &a;
//	//ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
//
//	//
//	const int* const p = &a;
//	//ָ���ָ���ָ��ָ���ֵ�������Ը�
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
//	s1.name = "����";
//	s1.age = 18;
//	s1.score = 98;
//	cout << "������" << s1.name << "���䣺" << s1.age << "�ɼ���" << s1.score;
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
//		{"����",18,100},
//		{"��˹",18,90},
//		{"����",18,60}
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
//	struct Stu s = { "����",18,100 };
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
//	t.name = "����";
//	t.age = 50;
//	t.s1.name = "С��";
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
////ֵ����(ʵ�β��ᷢ���ı�)
//void printStu1(struct Stu s)
//{
//	cout << "�Ӻ��� ������" << s.name << "���䣺" << s.age << "������" << s.score;
//}
////��ַ����(ʵ�λᷢ���ı�)
//void printStu2(struct Stu* s)
//{
//	cout << "�Ӻ��� ������" << s->name << "���䣺" << s->age << "������" << s->score;
//}
//int main()
//{
//	struct Stu s;
//	s.name = "����";
//	s.age = 20;
//	s.score = 85;
//	//cout << "main������� ������" << s.name << "���䣺" << s.age << "������" << s.score;
//	printStu1(s);
//	printStu2(&s);
//	system("pause");
//	return 0;
//}

////�������βθ�Ϊָ�룬���Լ����ڴ��Ҳ������µĸ���������� ����Ҳ����֮����
////���Լ���const �޷�����
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//void printStu(Stu s)
//{
//	s.age = 20;
//	cout << "������" << s.name << "���䣺" << s.age << "������" << s.score;
//}
//int main()
//{
//	struct Stu s = { "����",15,90 };
//	printStu(s);
//	//cout << "������" << s.name << "���䣺" << s.age << "������" << s.score;
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
////��ֵ����
//void allocateSpace(struct teacher ta[],int len)
//{
//	string nameSeed = "ABCDE";
//	//��ʦ��ֵ
//	for (int i = 0; i < len; i++)
//	{
//		ta[i].tname = "T_";
//		ta[i].tname += nameSeed[i];
//		//ͨ��ѭ����ѧ����ֵ
//		for (int j = 0; j < 5; j++)
//		{
//			ta[i].s[j].sname = "S_";
//			ta[i].s[j].sname += nameSeed[j];
//			int random = rand() % 61 + 40;//40~100�����
//			ta[i].s[j].score = random;
//		}
//	}
//}
//void printInfo(struct teacher ta[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ������" << ta[i].tname << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ��������" << ta[i].s[j].sname <<
//				" ���Է�����" << ta[i].s[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	//�����
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
		cout << "������" << ha[i].name << " ���䣺" << ha[i].age << " �Ա�" << ha[i].sex << endl;
	}
}
int main()
{
	struct Hero ha[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	int len = sizeof(ha) / sizeof(ha[0]);
	/*for (int i = 0; i < len; i++)
	{
		cout << "������" << ha[i].name << " ���䣺" << ha[i].age << " �Ա�" << ha[i].sex << endl;
		}*/
	bubbleSort(ha, len);
	printHero(ha, len);
	system("pause");
	return 0;
}