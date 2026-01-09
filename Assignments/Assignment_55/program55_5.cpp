
#include<iostream>
using namespace std;

template<class T>
void Max(T no1,T no2,T no3,T no4)
{
    if((no1>no2)&&(no1>no3)&&(no1>no4))
    {
        cout<<no1<<" is greater\n";
    }
    else if((no2>no1)&&(no2>no3)&&(no2>no4))
    {
        cout<<no2<<" is greater\n";
    }
    else if((no3>no1)&&(no3>no2)&&(no3>no4))
    {
        cout<<no3<<" is greater\n";
    }
    else
    {
       cout<<no4<<" is greater\n"; 
    }
}

int main()
{
    Max(25,35,93,27);

    return 0;
}