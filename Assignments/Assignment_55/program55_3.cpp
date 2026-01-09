
#include<iostream>
using namespace std;

template<class T>
T Div(T no1,T no2)
{
    T Ans;
    Ans=no1/no2;
    
    return Ans;
}

int main()
{
    int iRet=Div(20,10);
    cout<<iRet<<"\n";

    float fRet=Div(20.3f,10.5f);
    cout<<fRet<<"\n";

    return 0;
}