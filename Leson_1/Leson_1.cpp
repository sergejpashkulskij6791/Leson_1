
#include <iostream>
#include <string>
using namespace std;
class Person
{
    public:
    Person(string name,string surname)
    {
        _name = name;

        _surname = surname;
        cout << "Constructor whith params Person" << endl;
    }
    Person()
    {
        _name = " ";
        _surname = " ";

        cout << "Constructor default Person" << endl;
    }
    ~Person()
    {
        cout << "Destruktor" << endl;
    }
    void Print()
    {
        cout << "Name " << _name << endl;

        cout << "Surname " << _surname << endl;
    }
    //Seters
    void setName(string name)
    {
        _name = name;
    }
    void setsurName(string surname)
    {
        _surname = surname;
    }
    //Geters
    string getName()
    {
        return _name;

    }
    string getSurname()
    
    {
        return _surname;

    }
private:
    string _name;
    string _surname;

};
int main()
{
    Person person("Alex","Wildom");
    person.Print();
    

    Person chaild;
    chaild.setName("Bob");
    chaild.setsurName("Smidt");
    cout << chaild.getName() << endl;
    cout << chaild.getSurname() << endl;
    return 0;
}
