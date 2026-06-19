#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,4,6};
    int sum=0;
    int count=0;
    for(int i=0;i<=3;i++)
    {
        sum = sum+arr[i];


    }
    for(int j=2;j<=6;j++)
    {
        count =count+j;

    }
    cout<<(count-sum);

}