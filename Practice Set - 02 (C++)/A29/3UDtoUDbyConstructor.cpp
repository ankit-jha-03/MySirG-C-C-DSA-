#include<iostream>
using namespace std;
class Product
{
    int p1, p2;

    public :
    void setProduct(int a, int b)  {p1 = a, p2 = b;}
    void display()
    {
        cout<<"Products : "<<p1<<" , "<<p2<<endl;
    }
    int getP1()  {return p1;}
    int getP2()  {return p2;}
};
class Item
{
    int i;

    public :
    Item()  {} 
    Item(Product p)
    {
        cout<<"CC in Item"<<endl;
        i = p.getP1() + p.getP2();
    }
    void display()
    {
        cout<<"Items : "<<i<<endl;
    }
    Item operator=(Item a)
    {
        cout<<"CO in Item"<<endl;
        i = a.i;
    }
};
int main()
{
    Item i1;
    Product p1;
    p1.setProduct(3,4);
    i1 = p1;            // CO --> CC
    i1.display();
    return 0;
}