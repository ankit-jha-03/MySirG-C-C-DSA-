#include<iostream>
using namespace std;
class Item
{
    int i;
 
    public :
    void setData(int a)  {i=a;}
    void display()  {cout<<"total item : "<<i<<endl;}
    void operator=(int a)
    {
        cout<<"item <- int"<<endl;
        i = a;
    }
    operator int()
    {
        cout<<"Item -> int"<<endl;
        return i;
    }
};
class Product
{
    int t1, t2;

    public :
    void setData(int a, int b)  {t1=a, t2=b;}
    void display()  {cout<<t1<<" , "<<t2<<endl;}
    void operator=(int a)
    {
        cout<<"product <- int"<<endl;
        t1 = a/2;
        t2 = a - t1;
    }
    operator int()
    {
        cout<<"product -> int"<<endl;
        return t1+t2;
    }
};
int main()
{
    Item i1;
    Product p1;
    p1.setData(4,5);
    i1 = p1;        // i1.operator=(int(p1))  :  int(p1) -> i1.operator=(int)
    i1.display();
    i1.setData(5);
    p1 = i1;        // p1.operator=(int(i1))  :  int(i1) -> p1.operator=(int)
    p1.display();
    return 0;
}