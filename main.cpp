#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
#include "class.h"
using namespace std;

int main()
{
/*----------------------------------*
	        栈类实现
   

	cout << "********Stack Class********" << endl;

	//1.生成栈对象
	Stack ss;

	cout << "the size of the stack is:  " << ss.sizeStack() << ", allowed to continue pushing..." << endl << endl;


	//2.执行入栈操作
	double temp = 0;

	while (!ss.isFull())
	{
		cout << "push to the stack,please input data(0 as the end):";

		cin >> temp;

		//提前终止循环
		if (temp == 0)
		{
			cout << "***********Push Over!**********" << endl << endl;
			break;
		}

		ss.push(temp);
		cout << "pushed successfully!" << endl;

	}


	//3. 输出栈内元素
	cout << "output " << ss.getTop() << " numbers from the stack" << endl;

	while (!ss.isEmpty())
	{
		cout << ss.pop() << " ";
	}

	cout << endl;
 *-----------------------------------*/

 /*----------------------------------*
		 字符串类实现

	cout << "********string class********" << endl;

	cout << "please input the number of function you want:" << endl;
	cout << "1:get the length of a string;" << endl;
	cout << "2:concatenate s2 to s1;" << endl;
	cout << "3:compare s1 with s2;" << endl;
	cout << "4:insert s2 to s1;" << endl;
	cout << "5:cut s1 from a position;" << endl;
	cout << "6:modify s1 using s2;" << endl;
	cout << "7:find s2 from s1;" << endl;
	cout << "8:reversal s1;" << endl;
	int key;
	cin >> key;
	switch (key)
	{
	case 1:
	{
		cout << "enter a string:";
		char s1[MAXSIZE];
		cin >> s1;
		Mystring SS(s1);
		int len = SS.strLen(s1);
		cout << len << endl;
		break;
	}
	case 2:
	{
		cout << "enter a string:";
		char s1[MAXSIZE];
		cin >> s1;
		cout << "enter another string,we will concatenate it to the former:";
		char s2[MAXSIZE];
		cin >> s2;
		char *s = strcat(s1, s2);
		cout << s << endl;
		break;
	}
	case 3:
	{
		cout << "enter a string:";
		char s1[MAXSIZE];
		cin >> s1;
		cout << "enter another string,we will compare it with the former:";
		char s2[MAXSIZE];
		cin >> s2;
		int ans = strcmp(s1, s2);
		if (ans = 1)
		{
			cout <<"the max is: "<< s1 << endl;
		}
		else
		{
			cout << "the max is " << s2 << endl;
		}
		break;
	}
	case 4:
	{
		cout << "enter a string:";
		char s1[MAXSIZE];
		cin >> s1;
		Mystring CC(s1);
		cout << "enter another string,we will insert it to the former:";
		char s2[MAXSIZE];
		cin >> s2;
		Mystring C(s2);
		cout << "input the position you want to insert:" << endl;
		int pos;
		cin >> pos;
		char *s = CC.strint(s1, pos, s2);
		cout << s <<endl;
		break;
	}
	case 5:
	{
		cout << "enter a string:";
		char s1[MAXSIZE];
		cin >> s1;
		Mystring CC(s1);
		cout << "input the number of a position and length,we will cut s1 from it:" << endl;
		int pos, len;
		cin >> pos >> len;
		char *s = CC.strera(s1, pos, len);
		cout << s << endl;
		break;
	}
	case 6:
	{
		cout << "enter a string:";
		char s1[MAXSIZE];
		cin >> s1;
		Mystring CC(s1);
		cout << "enter another string,we will use it to modify the former:";
		char s2[MAXSIZE];
		cin >> s2;
		Mystring C(s2);
		cout << "input the position you want to modify:" << endl;
		int pos;
		cin >> pos;
		char *s = CC.strmod(s1, pos, s2);
		cout << s << endl;
		break;
	}
	case 7:
	{
		cout << "enter a string:";
		char s1[MAXSIZE];
		cin >> s1;
		Mystring CC(s1);
		cout << "enter another string,we will use it to modify the former:";
		char s2[MAXSIZE];
		cin >> s2;
		Mystring C(s2);
		if (CC.strsrh(s1, s2)==true)
			cout << "find it!" << endl;
		else
			cout << "can't find it!" << endl;
		break;
	}
	case 8:
	{
		cout << "enter a string:";
		char s1[MAXSIZE];
		cin >> s1;
		Mystring CC(s1);
		char *s2=CC.strrev(s1);
		cout << s2 << endl;
		break;
	}
	}

*-----------------------------------*/
/*----------------------------------*
			   三角形类实现

    cout << "********Triangle class********" << endl;
	cout << "input three sides:" << endl;
	double a, b, c;
	cin >> a >> b >> c;
	Triangle t(a,b,c);
	bool flag = t.IsTriangle();
	if (flag == 0)
	{
		cout << "these sides cannot be a triangle!" << endl;
	}
	else
	{
		double S, C;
		S = t.TriArea();
		C = t.Perimeter();
		cout << "Perimeter is: " << S << endl;
		cout << "Area is: " << C << endl;
		t.TriType();
	}
*-----------------------------------*/
/*----------------------------------*
			学生类实现

    cout << "********Student class********" << endl;
	Student stu;
	stu.GetInfor();
	cout << "Do you want to modify some information?" << endl;
	cout << "if you do,input 1" << endl;
	int flag;
	cin >> flag;
	if (flag == 1)
	{
		stu.ModInfor();
	}
	cout << "Do you want to see all the information?" << endl;
	cout << "if you do,input 1" << endl;
	int flag2;
	cin >> flag2;
	if (flag2 == 1)
	{
	    stu.OutInfor();
	}
*-----------------------------------*/
/*----------------------------------*
			点类实现
*-----------------------------------*/
    cout<< "********Point class********" << endl;
	Point p;
	p.IniPoint();
	p.ModPoint();
	p.OutPoint();
	char answer;
	cout << "Do you want to calculate the distance of two points?(Y or N)" << endl;
	cin >> answer;
	if (answer == 'Y')
	{
		Point q;
		q.IniPoint();
		q.ModPoint();
	    q.OutPoint();
	    double dis=Distance(p, q);
	    cout<<dis<<endl;
	}
	else
	{
		cout << "OK!Bye!" << endl;
	}
	system("pause");

	return 0;
}