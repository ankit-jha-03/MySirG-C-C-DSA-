#include<iostream>
using namespace std;
class A
{
    int n;

    public :
    void setData(int a) {n = a;}
    void showData() {cout<<n<<endl;}
    void swap(A *got)
    {
        int temp = n;
        n = got->n;     // how got->n accessiable?? (,coz we are inside the class)
        got->n = temp;
    }
};
int main()
{
    A n1, n2;
    n1.setData(2);
    n2.setData(3);
    n1.swap(&n2);
    n1.showData();
    n2.showData();
    return 0;
}