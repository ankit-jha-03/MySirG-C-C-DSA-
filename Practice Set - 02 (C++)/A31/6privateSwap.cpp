#include<iostream>
using namespace std;
class B;
class A
{
    int a;

    public :
    void set(int x) {a=x;}
    int get() {return a;}
    friend void swap(A &a, B &b);
};
class B
{
    int b;

    public :
    void set(int x) {b=x;}
    int get() {return b;}
    friend void swap(A &a, B &b);
};
void swap(A &a, B &b)
{
    int temp = a.get();
    a.set(b.get());
    b.set(temp);
};
int main()
{
    A a;
    B b;
    a.set(4);
    b.set(5);
    swap(a, b);
    cout<<"a = "<<a.get()<<" , b = "<<b.get();
    return 0;
}