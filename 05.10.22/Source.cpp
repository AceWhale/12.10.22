#include <iostream>
using namespace std;

class Animal
{
	string name;
	double size;
	double weight;
	int age;
public:
	Animal()
	{
		name = "";
		size = 0;
		weight = 0;
		age = 0;
	}
	Animal(string n, double s, double w, int a)
	{
		name = n;
		size = s;
		weight = w;
		age = a;
	}
	void Print()
	{
		cout << "Animal: " << name << endl;
		cout << "Size: " << size << endl;
		cout << "Weight: " << weight << endl;
		cout << "Age: " << age << endl;
	}
	void Input()
	{
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter age: ";
		cin >> age;
		cout << "Enter size: ";
		cin >> size;
		cout << "Enter weight: ";
		cin >> weight;
	}
};

class Elephant: public Animal
{
	double trunk;
	double foot;
public:
	Elephant()
	{
		trunk = foot = 0;
	}
	Elephant(string n, double s, double w, int a, double t, double f) :Animal(n, s, w, a)
	{
		trunk = t;
		foot = f;
	}
	void Print()
	{
		Animal::Print();
		cout << "Trunk size: " << trunk << endl;
		cout << "Foot size: " << foot << endl;
	}
};

class Penguin : public Animal
{
	string kind;
	double feed;
public:
	Penguin()
	{
		kind = "";
		feed = 0;
	}
	Penguin(string n, double s, double w, int a, string k, double f) :Animal(n, s, w, a)
	{
		kind = k;
		feed = f;
	}
	void Print()
	{
		Animal::Print();
		cout << "Kind: " << kind << endl;
		cout << "Feed: " << feed << endl;
	}
};

class Parrot : public Animal
{
	string color;
	bool speak;
public:
	Parrot()
	{
		color = "";
		speak = false;
	}
	Parrot(string n, double s, double w, int a, string c, bool f) :Animal(n, s, w, a)
	{
		color = c;
		speak = f;
	}
	void Print()
	{
		Animal::Print();
		cout << "Color: " << color << endl;
		if (speak)
			cout << "can speak" << endl;
		else
			cout << "cant speak" << endl;
	}
};

class Dog :public Animal
{
	string nick;
	bool train;
public:
	Dog()
	{
		nick = "";
		train = false;
	}
	Dog(string n, double s, double w, int a, string c, bool f) :Animal(n, s, w, a)
	{
		nick = c;
		train = f;
	}
	void Print()
	{
		Animal::Print();
		cout << "Nickname: " << nick << endl;
		if (train)
			cout << "trained" << endl;
		else
			cout << "not trained" << endl;
	}
};

int main()
{
	Elephant obj1("Elephant", 23, 3000, 50, 3, 1.5);
	Penguin obj2("Penguin", 1, 30, 3, "Antartic", 100);
	Parrot obj3("Parrot", 0.5, 3, 2, "green", true);
	Dog obj4("Dog", 2, 30, 5, "Persik", true);
	obj1.Print();
	cout << endl;
	obj2.Print();
	cout << endl;
	obj3.Print();
	cout << endl;
	obj4.Print();
}