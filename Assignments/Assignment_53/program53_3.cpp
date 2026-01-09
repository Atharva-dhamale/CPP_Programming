#include<iostream>
using namespace std;

template<class T>
T SecondMax(T *arr,int iSize)
{
    int iCnt=0;
    T Max;
    Max=Max-Max;
    T Second;
    Second=Second-Second;
    

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Max<arr[iCnt])
        {
            Max=arr[iCnt];
        }
        
    }

    for(iCnt=1;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt]<Max)
        {
            if((Second==Max)||(Second<arr[iCnt]))
            {
                Second=arr[iCnt];
            }
        }
        
    }
    return Second;
}

int main()
{
    int arr[]={10,20,30,40,50};

    int iRet=SecondMax(arr,5);

    cout<<"The Second Largest Value is :"<<iRet<<"\n";

    

    return 0;
}