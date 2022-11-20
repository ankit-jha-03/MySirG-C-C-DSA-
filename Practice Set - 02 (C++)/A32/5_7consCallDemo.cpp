#include<iostream>
using namespace std;
class Person
{
    protected :
    string name;
    int age;

    public :
    Person() {}
    Person(string name, int age) 
    {
        this->name = name;
        this->age = age;
        cout<<"Person's class Const. called\n";
    }
    ~Person()
    {
        cout<<"Person's class Dest. called\n";
    }
};
class Student : public Person
{
    protected :
    string batch;

    public :
    Student() {}    // if default const. exist in Parent class.. it calls by default
    Student(string name, int age, string batch) : Person(name, age)
    {
        this->batch = batch;
        cout<<"Student's class Const. called\n";
    }
    ~Student()
    {
        cout<<"Student's class Dest. called\n";
    }
};
class Result : public Student
{
    int rank;

    public :
    Result(string name, int age, string batch, int rank) : Student(name, age, batch)
    {
        this->rank = rank;
        cout<<"Result's class Const. called\n";
    }
    ~Result()
    {
        cout<<"Result's class Dest. called\n";
    }
    void print()
    {
        cout<<"Rank : "<<rank<<", Name : "<<name<<", Age : "<<age<<", Batch : "<<batch<<endl;
    }
};
int main()
{
    Result r("Aakash", 17, "MCA", 1);
    r.print();
    return 0;
}