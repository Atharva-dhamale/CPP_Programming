#include<iostream>

using namespace std;

void Display()
{
    static int iCnt=1;

    while(iCnt<=4)
    {

    cout<<"Jay Ganesh\n";
    iCnt++;
    }    
}
int main()
{
    Display();
    return 0;
}