#include<iostream>
using namespace std;
int main()
{
    int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;

    cout<<"enter the number of elements:";
    cin>>n;

    if(n<=0||n > MAX_SIZE)
    {
        cout<<"invalid size!";
        return 1;
    }
    cout<<"enter " <<n<<"elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"element "<<i+1<<":";
        cin>>arr[i];

    }
    cout<< "\nthe element in the array are :"<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i] << " ";
    }
    cout<< endl;
}
