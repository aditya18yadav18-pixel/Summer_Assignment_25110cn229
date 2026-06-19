#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,6,2,8};
    int size=5;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            cout<<arr[i];

        }
    }


}