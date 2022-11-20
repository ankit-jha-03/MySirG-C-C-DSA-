#include<iostream>
using namespace std;
class Item
{
    char name[20];
    int item_no;
    float price;

    public :
    Item()
    {
        cout<<"Enter Item Name  :  ";
        fflush(stdin);
        fgets(name, 20, stdin);
        name[19] = '\n';
        
        cout<<"Enter Item No.  :  ";
        cin>>item_no;
        
        cout<<"Enter Item Price  :  ";
        cin>>price;
    }
    void display()
    {
        cout<<"Item Name  :  "<<name<<endl;;
        cout<<"Item Number  :  "<<item_no<<endl;;
        cout<<"Item Price  :  "<<price<<endl;
    }
    float getPrice() {return price;}
};
class Discounted_Item : public Item
{
    float discount;

    public :
    Discounted_Item()
    {
        cout<<"Enter Discout Percentage  :  ";
        cin>>discount;
        cout<<"----------------------------------\n";
    }
    void display()
    {
        Item::display();
        cout<<"Discount Percentage  :  "<<discount<<endl;
        cout<<"Discounted Price  :  "<<getPrice()-(discount*getPrice())/100<<endl;
        cout<<"------------------------------\n";
    }
    float getDiscount() {return discount;}
};
int main()
{
    int i = 0, n;
    float totalPrice = 0, totalDiscount = 0;
    cout<<"Enter no. of Items  :  ";
    cin>>n;
    cout<<endl;

    Discounted_Item item[n];

    while (i<n)
    {
        item[i].display();
        totalPrice += item[i].getPrice();
        totalDiscount += (item[i].getDiscount()*item[i].getPrice())/100;
        i++;
    }
    
    cout<<"Total Price  :  "<<totalPrice<<endl;
    cout<<"Total Discount  :  "<<totalDiscount;
    return 0;
}