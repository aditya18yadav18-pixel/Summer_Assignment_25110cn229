#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,7,5,3};
    int n=5;
 int first_element = arr[0];
    for(int i=0;i<4;i++)
    {
        arr[i] =arr[i+1];
    }
    arr[n-1] = first_element;
    for(int k=0;k<=4;k++)
    {
        cout<<arr[k];
    }
}
