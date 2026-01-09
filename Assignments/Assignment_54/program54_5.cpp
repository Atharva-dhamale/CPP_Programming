#include<iostream>
using namespace std;

template<class T>
T Min(T *arr,int iSize)
{
    int iCnt=0;
    T Min;
    Min=arr[iCnt];
    
    

    for(iCnt=1;iCnt<iSize;iCnt++)
    {
        if(Min>arr[iCnt])
        {
            Min=arr[iCnt];
        }
    }
    return Min;
}

int main()
{
    int arr[]={10,60,5,40,50};

    int iRet=Min(arr,5);

    cout<<"The Smallest Value is :"<<iRet<<"\n";

    

    return 0;
}