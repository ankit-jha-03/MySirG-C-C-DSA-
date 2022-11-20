#include<iostream>
using namespace std;
class Array
{
    int *a = (int*)malloc(1*sizeof(int));     //better memory utilization
    int currentSize = 1, sizeLimit = 100;

    public :
    void changeArraySize(int newSize)  {sizeLimit = newSize;}
    void operator()(int index, int elem)
    {
        if(index<currentSize)
        {
            a[index] = elem;
        }
        else if(index>=currentSize && index<sizeLimit)
        {
            currentSize = index;
            realloc(a,(index+1)*sizeof(int));
            a[index] = elem;
        }
        else
        {
            cout<<"index number "<<index<<" is out of range("<<sizeLimit<<")"<<endl;
        }
    }
    int operator[](int index)
    {
        if(index<sizeLimit)
            return a[index];
        else
            cout<<"index number "<<index<<" is out of range("<<sizeLimit<<")";
        
        exit(0);
    }
};
int main()
{
    Array a;
    a(99,100);      // functional call operator
    a(0,0);
    cout<<a[0]<<endl<<a[99]<<endl;      // subscript operator
    cout<<a[100];
    return 0;
}