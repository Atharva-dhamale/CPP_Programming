#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr,int iSize)
{
    int start=0;
    int end=iSize-1;
    T temp;
    int i=0;

    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }

    for(i=0;i<iSize;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    
}

int main()
{
    int arr[]={10,20,3,40,5};

    Reverse(arr,5);
 

    return 0;
}