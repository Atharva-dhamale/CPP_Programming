#include<iostream>
using namespace std;

template<class T>
T SecondMin(T *arr,int iSize)
{
    int iCnt=0;
    T Min;
    Min=Min-Min;
    T Second;
    Second=Second-Second;
    

    for(iCnt=1;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt]>Min)
        {
            if((Second==Min)||(Second>arr[iCnt]))
            {
                Second=arr[iCnt];
            }
        }
        
    }
    return Second;
}

int main()
{
    int arr[]={10,60,5,40,50};

    int iRet=SecondMin(arr,5);

    cout<<"The Second Smallest Value is :"<<iRet<<"\n";

    

    return 0;
}