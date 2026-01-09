#include<iostream>
using namespace std;

template<class T>
void CopyArray(T *src,T *dest,int iSize)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        dest[iCnt]=src[iCnt];
        cout<<dest[iCnt]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int arr[]={10,20,30,40,50};
    int brr[]={'\0'};

    CopyArray(arr,brr,5);

    return 0;
}