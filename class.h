#pragma once
#ifndef __STACK_H__
#define __STACK_H__

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <windows.h>

typedef int DataType;
const int MAXSIZE = 20;
using namespace std;

/*----------------------------------*
	           栈类定义
*-----------------------------------*/
class Stack
{

private:

	int top;         //栈顶访问指示器

	double data[MAXSIZE];//存储栈数据

public:

	Stack(); //无参构造函数
	~Stack(); //析构函数
	void  initial(); //栈的初始化

	bool  isFull(); //判断栈是否满
	bool  isEmpty(); //判断栈是否空

	void push(double& val); //元素入栈
	double pop(); //元素出栈

	int sizeStack(); //栈的大小
	int getTop(); //返回栈大小

};

//构造函数
Stack::Stack()
{
	top = 0;
	memset(data, 0, sizeof(data));//统一初始化为0
}

//析构函数
Stack::~Stack()
{

}

//普通初始化函数
void Stack::initial()
{
	top = 0;
	memset(data, 0, sizeof(data));//统一初始化为0

}

//判断栈是否为满
bool Stack::isFull()
{
	if (top == MAXSIZE)

		return true;

	else
		return false;
}

//判断栈是否为空
bool Stack::isEmpty()
{
	if (top == 0)

		return true;

	else
		return false;
}

//入栈操作
void Stack::push(double& val)
{
	data[top] = val;
	top++;//先入元素,后上移指示器

}

//出栈操作
double Stack::pop()
{
	top--;//下移指示器到元素

	return data[top];//输出元素

}

//计算栈大小
int Stack::sizeStack()
{
	return top;
}

//返回栈大小
int Stack::getTop()
{
	return top;
}


/*----------------------------------*
	        字符串类定义
*-----------------------------------*/
class Mystring
{
private:

	char *m_data;
	int count; //字符串长度

public:

	Mystring();
	Mystring(const char *str=NULL);
	~Mystring();
	int strLen(const char *s1); //字符串长度
	char *strncat(char *s1, char *s2); //字符串连接
	char *strcom(char *s1, char *s2); //字符串比较
	char *strint(char *s1, int pos,const char *s2); //字符串插入
	char *strera(char *s1, int pos, int len); //字符串删减
	char *strmod(char *s1, int pos, char *s2); //字符串改动
	bool strsrh(char *s1,char *s2); //字符串查找
	char *strrev(char *s1); //字符串反转
	
};

//默认构造函数
Mystring::Mystring()
{
	m_data = new char[1];
	*m_data = '\0';
}

//自定义构造函数
Mystring::Mystring(const char *str)
{
	if (NULL == str)
	{
		m_data = new char[1];
		*m_data = '\0';
	}
	else
	{
		int iLen = strlen(str);
		m_data = new char[iLen + 1];
		strcpy(m_data, str);
	}
}

//析构函数
Mystring::~Mystring()
{
	
}

//字符串长度
int Mystring::strLen(const char *s1)
{
	return strlen(s1);
}

//字符串连接
char *Mystring::strncat(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		++s1;
	}
	while (*s2 != '\0')
	{
		*s1++ = *s2++;
	}
	*s1 = *s2;
	return s1;
}

//字符串比较
char *Mystring::strcom(char *s1, char *s2)
{
	if (strcmp(s1, s2) > 0)
	{
		return s1;
	}
	else
	{
		return s2;
	}
}

//字符串插入
char *Mystring::strint(char *s1, int pos,const char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *tmp = (char *)malloc(sizeof(char));
	int cnt = 0;
	for (int i = pos - 1; i <= len1; i++)
	{
		//*tmp++ = str1[i];    //指针要初始化或者有相应的值，这样是错误的
		tmp[cnt++] = s1[i];
	}
	int j;
	for (j = 0; j < len2; j++)
	{
		s1[pos + j - 1] = *s2++;
	}
	s1[pos + j - 1] = '\0';
	strcat(s1, tmp);
	return s1;
}

//字符串删减
char *Mystring::strera(char *s1, int pos, int len)
{
	int l = strlen(s1);
	char *s2=s1;
	for (int i = pos-1; i < pos+len ; i++)
	{
		s2[i] = s2[i + len];
	}
	return s1;
}

//字符串改动
char *Mystring::strmod(char *s1, int pos, char *s2)
{
	int len = strlen(s2);
	for (int i = 0; i < len; i++)
	{
		s1[pos + i - 1] = s2[i];
	}
	return s1;
}

//字符串查找
bool Mystring::strsrh(char *s1,char *s2)
{
	char *s = s1;
	char *p1 = s1;
	char *p2 = s2;
	while ((*p1) && (*p2) && (*p1 == *p2))
	{
		p1++;
		p2++;
	}

	if ((*p2 == '\0'))
	{
		return true;
	}
}

//字符串反转
char *Mystring::strrev(char *s1)
{
	int len = strlen(s1);
	for (int i = 0; i <= len / 2 ; i++)
	{
		char temp;
		temp = s1[i];
		s1[i] = s1[len - 1 - i];
		s1[len - 1 - i] = temp;
	}
	return s1;
}

/*----------------------------------*
			   三角形类定义
*-----------------------------------*/
class Triangle
{
private:
	double a;
	double b;
	double c;
public:
	Triangle();
	Triangle(double aa, double bb, double cc);
	Triangle(const Triangle&t);
	~Triangle();
	bool IsTriangle(); //判断是否是三角形；
	double Perimeter(); //输出三角形周长；
	double TriArea(); //输出三角形面积；
	void TriType(); //判断三角形类型；
};

Triangle::Triangle()
{
	
}

Triangle::Triangle(double aa, double bb, double cc)
{
	a = aa;
	b = bb;
	c = cc;
}

Triangle::Triangle(const Triangle&t)
{
	a = t.a;
	b = t.b;
	c = t.c;
}

Triangle::~Triangle()
{

}

bool Triangle::IsTriangle()
{
	if (a + b > c&&a + c > b&&b + c > a)
	{
		return true;
	}
	else
	{
		return false;
	}
}

double Triangle::Perimeter()
{
		return a + b + c;
}

double Triangle::TriArea()
{
	double p, s;
	p = (a + b + c) / 2;
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	return s;
}

void Triangle::TriType()
{
	if (a > b)
	{
		double temp;
		temp = b;
		b = c;
		c = temp;
	}
	if (b > c)
	{
		double temp;
		temp = b;
		b = c;
		c = temp;
	}
	if (a > c)
	{
		double temp;
		temp = b;
		b = c;
		c = temp;
	}

	if (a * a + b * b == c * c)
		cout << "Right Triangle!" << endl; //直角三角形
	else if (a * a + b * b > c*c)
		cout << "Obtuse Triangle!" << endl; //钝角三角形
	else
		cout << "Acute Triangle!" << endl; //锐角三角形
	
}

/*----------------------------------*
			   学生类定义
*-----------------------------------*/
class Student
{
private:
	char *name;
	int sex;
	char *number;
	int year,month,day;
	char *address;
	int score[6];
public:
	Student();
	Student(char ,int ,char ,int ,int ,int ,char ,int ); //有参构造函数
	Student(const Student&stu); //拷贝构造函数
	~Student(); //析构函数
	void GetInfor(); //获取学生任意信息
	void ModInfor(); //修改学生成绩信息
	void OutInfor(); //输出学生信息
};

//学生类定义
Student::Student()
{
	name=new char[10];
	address = new char[30];
	number = new char[10];
    cout <<"input the name ,sex(1:boy,2:girl) ,number ,birthday (year/month/day) ,address" << endl;
		cin >> name >> sex >> number >> year >> month >> day >> address;
		for (int i = 0; i < 6; i++)
		{
			cout << "score" << i + 1 << ": ";
			cin >> score[i];
		}
}

Student::~Student()
{
	delete[]name;
	delete[]address;
	delete[]number;
}

Student::Student(const Student &stu)
{
	cout << "Warnning:This Copy constructors!!" << endl;
	name = stu.name;
	sex = stu.sex;
	number = stu.number;
	address = stu.address;
	score[6] = stu.score[6];
}

void Student::GetInfor()
{
	cout << "Which information you want to get about him or her?" << endl;
	cout << "1.sex" << endl << "2.number" << endl << "3.birthday" << endl << "4.address" << endl << "5.scores" << endl;
	int key;
	cin >> key;
	switch (key)
	{
		cout << "name:" << name << endl;
		break;
	case 1:
		cout << "sex:" << sex << endl;
		break;
	case 2:
		cout << "number:" << number << endl;
		break;
	case 3:
		cout << year << "/" << month << "/" << day << endl;
		break;
	case 4:
		cout << "address:" << address << endl;
		break;
	case 5:
		for (int i = 0; i < 6; i++)
		{
			cout << "score" << i+1 <<":"<< score[i] << endl;
		}
		break;
	}
}

void Student::ModInfor()
{
	for (int i = 0; i < 6; i++)
	{
		cout << "now, score" << i + 1 << ":" << score[i] << endl;
	}
	cout << "which score you want to modify?" << endl;
	int n;
	cin >> n;
	cout << "change into:" << endl;
	int s;
	cin >> s;
	score[n] = s;
	cout << "OK!They are:" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "now, score" << i + 1 << ":" << score[i] << endl;
	}
}

void Student::OutInfor()
{
	cout << "name: " << name << endl;
	if (sex == 1)
		cout << "sex: boy" << endl;
	else
		cout << "sex: girl" << endl;
	cout << "number: " << number << endl;
	cout << "birthday: " << year <<"/" << month <<"/"<< day << endl;
	cout << "address: " << address << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "score" << i + 1 << ":" << score[i] << endl;
	}
}

/*----------------------------------*
			   点类定义
*-----------------------------------*/
class Point
{
private:
	float x;
	float y;
	float z;
public:
	Point();
	Point(float, float,float);
	Point(const Point &p);
	~Point();
	void IniPoint(); //点坐标初始化
	void ModPoint(); //坐标修改
	void OutPoint(); //坐标位置输出	
	friend double Distance(Point &,Point &);
	friend class Segment;
};

class Segment
{
private:
	Point origin, end;
public:
	Segment()
	{

	}
	~Segment()
	{

	}
    void Length()
	{
		Distance(origin, end);
	}
};

//点类函数定义
Point::Point()
{

}

Point::Point(float xx,float yy,float zz)
{
	x = xx;
	y = yy;
	z = zz;
}

Point::Point(const Point&p)
{
	x = p.x;
	y = p.y;
	z = p.z;
}

Point::~Point()
{

}

void Point::IniPoint()
{
	cout << "input three numbers as x,y,z:";
	float x, y,z;
	cin >> x >> y>> z;
}

void Point::ModPoint()
{
	cout << "you want to change the point to?" << endl;
	cin >> x >> y>> z;
}

void Point::OutPoint()
{
	cout << "the point is:" << endl;
	cout << "(" << x << "," << y << "," << z << ")" << endl;
}

double Distance(Point &A, Point &B)
{
	cout << "Their distance is:" << endl;
	return sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y) + (A.z - B.z)*(A.z - B.z));
}

#endif