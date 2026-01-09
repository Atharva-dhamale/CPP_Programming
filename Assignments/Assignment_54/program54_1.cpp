#include<iostream>
using namespace std;

template<class T>
bool Search(T *arr,int iSize,T value)
{
    int iCnt=0;
    

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(arr[iCnt]==value)
       {
        return true;
       } 
       
    }
    return false;
    
}

int main()
{
    int arr[]={10,20,30,40,50};

    bool bRet=Search(arr,5,30);

    if(bRet==true)
    {
        cout<<"Value is present in array\n";
    }
    else
    {
        cout<<"Value is not present in array\n";
    }
 

    return 0;
}