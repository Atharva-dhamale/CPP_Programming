#include<iostream>
using namespace std;

template<class T>
void Largest(T no1,T no2,T no3)
{
    if((no1>no2)&&(no1>no3))
    {
        cout<<no1<<" is Largest\n";
    }
    else if((no2>no1)&&(no2>no3))
    {
        cout<<no2<<" is Largest\n";
    }
    else
    {
        cout<<no3<<" is Largest\n";  
    }
}
int main()
{
    Largest(10,20,40);
    

    Largest(35.0f,20.0f,10.0f);
    

    return 0;
}