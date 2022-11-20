#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];

    public :
    void setMatrix()
    {
        int i, j;
        cout<<"Enter Matrix Element (3 X 3) : "<<endl;
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
                cin>>a[i][j];
        }
        cout<<endl;
    }
    void showMatrix()
    {
        int i, j;
        cout<<endl;
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
                cout<<a[i][j]<<"    ";
            cout<<endl;
        }
        cout<<endl;
    }
    Matrix operator+(Matrix m)
    {
        Matrix temp;
        int i, j;
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
                temp.a[i][j] = a[i][j] + m.a[i][j];
        }
        return temp;
    }
};
int main()
{
    Matrix m1, m2, m3;
    m1.setMatrix();
    m2.setMatrix();

    cout<<"First Matrix : "<<endl;;
    m1.showMatrix();
    cout<<"Second Matrix : "<<endl;;
    m2.showMatrix();
    
    m3 = m1+m2;
    cout<<"Addition of Matrix : "<<endl;;
    m3.showMatrix();
    return 0;
}