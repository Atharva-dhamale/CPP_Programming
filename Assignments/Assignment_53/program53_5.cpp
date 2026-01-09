#include<iostream>
using namespace std;

template<class T>
void Replace(T *arr,int iSize,T oldVal,T newVal)
{
    int iCnt=0;
    

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(arr[iCnt]==oldVal)
       {
        arr[iCnt]=newVal;
       } 
       cout<<arr[iCnt]<<" ";
    }
    cout<<"\n";
    
}

int main()
{
    int arr[]={10,20,30,40,50};

    Replace(arr,5,30,60);
 

    return 0;
}