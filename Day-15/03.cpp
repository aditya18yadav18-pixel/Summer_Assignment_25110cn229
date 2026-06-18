
#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,7,5,3};
    int n=5;
 int last_element = arr[n-1];
    for(int i=n-2;i>=0;i++)
    {
        arr[i+1] =arr[i];
    }
    arr[0] = last_element;
    for(int k=0;k<=4;k++)
    {
        cout<<arr[k];
    }
}
