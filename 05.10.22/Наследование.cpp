#include<iostream>
using namespace std;

class Person
{
protected:
	string name;
	int age;
public:
	Person()
	{
		name = "Ivan";
		age = 10;
	}
	Person(string n, int a):name(n),age(a)
	{}
	void Print()
	{
		cout << name << endl << age << endl;
	}
};

class Student: public Person
{
	string Academy;
public:
	Student(string n, int a, string Ac):Person(n,a)
	{
	/*	name = n;
		age = a;*/
		Academy = Ac;
	}
	void PrintStudent()
	{
		this->Print();
		cout << "Academy - " << Academy << endl;
	}

};

class Teacher : public Person
{
	string school;
	double pay;
public:
	Teacher()
	{
		school = "";
		pay = 0.0;
	}
	Teacher(string n, int a, string s, double p) :Person(n, a)
	{
		school = s;
		pay = p;
	}
	void PrintTeacher()
	{
		Print();
		cout << school << endl;
		cout << pay << endl;
	}
};

int main()
{
	Teacher teach("Nikita", 18, "ItStep", 24000);
	teach.PrintTeacher();
}