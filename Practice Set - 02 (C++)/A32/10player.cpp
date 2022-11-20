#include<iostream>
using namespace std;
class Player
{
    int playerNo;
    string name;
    int Matches;
    int *goals;

    public :
    Player()
    {
        cout<<"Enter Player no. : ";
        cin>>playerNo;
        cout<<"Enter Player Name : ";
        cin>>name;
        cout<<"Enter no. of Matches Played : ";
        cin>>Matches;
        goals = new int[Matches];
        cout<<"Enter no. of Goals in each Match : \n";
        for(int i = 0; i<Matches; i++)
            cin>>goals[i];
    }
    void displayStatus()
    {
        cout<<"Player no. : "<<playerNo<<endl;
        cout<<"Player Name : "<<name<<endl;
        cout<<"Total Matches : "<<Matches<<endl;
        for(int i = 0; i<Matches; i++)
            cout<<"Goals in Match "<<i+1<<" : "<<goals[i]<<endl;
    }
};
int main()
{
    Player p;
    p.displayStatus();
    return 0;
}