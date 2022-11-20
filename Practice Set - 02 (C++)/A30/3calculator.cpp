#include<iostream>
using namespace std;
int main()
{
    float num1, num2, ans;
    char Operator;

    cout<<"start calculation :\n";
    cin>>num1>>Operator>>num2;

    try
    {
        switch (Operator)
        {
        case '+':
            ans = num1 + num2;
            break;
        case '-':
            ans = num1 - num2;
            break;
        case '*':
            ans = num1 * num2;
            break;
        case '/':
            if(num2 == 0)
                throw "Division by 0 Error!!";
            ans = num1 / num2;
            break;
        default:
            throw "Operator doesn't matches!!";
        }
        cout<<num1<<" "<<Operator<<" "<<num2<<" = "<<ans;
    }
    catch (const char *str)
    {
        cout<<str;
    }
    return 0;
}