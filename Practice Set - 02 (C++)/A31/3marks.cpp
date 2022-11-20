#include<iostream>
using namespace std;
class Marks
{
    int s1, s2, s3, max;

    public :
    Marks()
    {
        cout<<"Enter max possible marks per subject : ";
        cin>>max;
    }
    void setMarks() {cin>>s1>>s2>>s3;}
    int getS1() {return s1;}
    int getS2() {return s2;}
    int getS3() {return s3;}
    int getMaxPossible() {return max*3;}
};
class Total : public Marks
{
    public :
    int getTotal()  {return getS1() + getS2() + getS3();}
};
class Percentage : public Total
{
    public :
    float getPercentage() {return (100.0*getTotal())/getMaxPossible();}
};
int main()
{
    Percentage p;
    cout<<"Enter marks of all Three Subjects  :  ";
    p.setMarks();
    cout<<"You got "<<p.getTotal()<<" out of "<<p.getMaxPossible()<<endl;
    cout<<"so you score "<<p.getPercentage()<<"%";
    return 0;
}