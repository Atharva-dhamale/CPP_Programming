#include<iostream>
using namespace std;

template<class T>
bool CheckSorted(T *arr,int iSize)
{
    int iCnt=0;
    

    for(iCnt=1;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt]<arr[iCnt-1])
        {
            return false;
        }
        
    }
    return true;
}

int main()
{
    int arr[]={10,20,30,40,50};

    bool bRet=CheckSorted(arr,5);

    if(bRet==true)
    {
        cout<<"Array is Sorted\n";
    }
    else if(bRet==false)
    {
        cout<<"Array is not Sorted\n";
    }

    return 0;
}