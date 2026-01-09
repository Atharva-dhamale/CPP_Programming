#include<iostream>
using namespace std;

template<class T>
T SumEven(T *arr,int iSize)
{
    int iCnt=0;
    T Sum;
    Sum=Sum-Sum;
    

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if((arr[iCnt]%2)==0)
       {
            Sum=Sum+arr[iCnt];
       } 
       
    }
    return Sum;
    
}

int main()
{
    int arr[]={10,20,3,40,50};

    int iRet=SumEven(arr,5);

    cout<<"Sum of even numbers are :"<<iRet<<"\n";

    
 

    return 0;
}