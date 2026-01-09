#include<iostream>
using namespace std;

template<class T>
T Add(T no1,T no2)
{
    T Ans;
    Ans=no1+no2;
    
    return Ans;
}

int main()
{
    int iRet=Add(10,20);
    cout<<iRet<<"\n";

    float fRet=Add(10.5f,20.3f);
    cout<<fRet<<"\n";

    return 0;
}