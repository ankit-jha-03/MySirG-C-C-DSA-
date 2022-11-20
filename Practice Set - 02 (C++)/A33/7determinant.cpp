#include<iostream>
using namespace std;
class Matrix
{
    protected :
    int a, b, c, d;

    public :
    Matrix(int a, int b, int c, int d)
    {
        this->a = a, this->b = b, this->c = c, this->d = d;
    }
    void showMatrix()
    {
        cout<<"  "<<a<<"   "<<b<<endl;
        cout<<"  "<<c<<"   "<<d<<endl;
    }
};
class Determinant : public Matrix
{
    public :
    Determinant(int a, int b, int c, int d) : Matrix(a,b,c,d) {} 
    void calcDeterminant() {cout<<"Determinant is : "<<a*d-b*c;}
};
int main()
{
    Determinant d(1,2,3,4);
    d.showMatrix();
    d.calcDeterminant();
    return 0;
}