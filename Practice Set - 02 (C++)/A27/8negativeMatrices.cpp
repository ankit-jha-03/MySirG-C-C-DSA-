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
                cout<<a[i][j]<<"\t";
            cout<<endl;
        }
        cout<<endl;
    }
    Matrix operator-()
    {
        Matrix temp;
        int i, j;
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
                temp.a[i][j] = -a[i][j];
        }
        return temp;
    }
};
int main()
{
    Matrix m;
    m.setMatrix();
    cout<<"Matrix is : "<<endl;;
    m.showMatrix();
    
    m = -m;
    cout<<"Matrix is : "<<endl;;
    m.showMatrix();
    return 0;
}