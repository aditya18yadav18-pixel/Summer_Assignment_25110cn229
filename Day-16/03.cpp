#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,6,8,3,1};
    int n=5;
    int sum;
    cout<<"enter the number:";
    cin>>sum;
    for(int i =0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            cout<<arr[i]<< "and"<< arr[j];
        
        }
        cout<<endl;
    }


}
