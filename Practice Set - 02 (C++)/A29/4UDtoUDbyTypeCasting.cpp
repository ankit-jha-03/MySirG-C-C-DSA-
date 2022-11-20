#include<iostream>
using namespace std;
class Item
{
    int i;

    public : 
    void setItem(int a) {i=a;}
    void display()
    {
        cout<<"Items : "<<i<<endl;
    }
    Item()  {}
    Item operator=(Item a)
    {
        cout<<"CO in Item"<<endl;
        i = a.i;
    }
    // Item(Product p)
    // {
    //     i = p.getP1() + p.getP2();
    // }
};
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
    operator Item()
    {
        cout<<"Item()"<<endl;
        Item i;
        i.setItem(p1+p2);
        return i;
    }
};
int main()
{
    Item i1;
    Product p1;
    p1.setProduct(3,4);
    i1 = (Item)p1;            // TCO -> CO
    i1.display();
    return 0;
}