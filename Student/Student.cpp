

#include <iostream>
#include<string>
using namespace std;
class Student
{
public:
	Student()
	{
		id = 0;
		group = "";
		name = "";
		money = 0;
		cout << "Construktor Student [default]\t" << this << endl;
	}
	Student(int id, string name, string group, double money)
	{
		this->id = id;
		this->group = group;
		this->name = name;
		this->money = money;
		cout << "Constructor Student whis params \t" << this << endl;
	}
	//Seters
	void setId(int id) { this->id = id; }
	void setName(string name) { this->name = name; }
	void setGroup(string group) { this->group = group; }
	void setMoney(double money) { this->money = money; }
	//Geters
	int getId() { return this->id; }
	string getName() { return this->name; }
	string getGroup() { return this->group; }
	double getMoney() { return this->money; }
	~Student()
	{
		cout << "Destructor Student \t"<<this << endl;
	}
private:
	int id;
	string group;
	string name;
	double money;

};
int main()
{
	const int size = 5;
	Student students[size]
	{
		*new Student(1,"Alex","SBD121",135.5),
		*new Student(2,"Felix","P12",85.7),
		*new Student(3,"Arnold","P12",0),
		*new Student(4,"Tom","SBD121",1500),

		* new Student(5,"Tomash","SBD121",14600)
	};
	for (int i = 0; i < size; i++)
	{
		cout << "id\t" << students[i].getId() << endl;
		cout << "Name\t" << students[i].getName() << endl;
		cout << "Group\t" << students[i].getGroup() << endl;
		cout << "Money\t" << students[i].getMoney() << endl;
	}
	

	return 0;
}
