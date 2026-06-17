#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,2,1};
    bool found=false;
    for(int i=0;i<=4;i++)
    {
        for(int j=i+1;j<=4;j++)
        {
            if(arr[i] == arr[j])
            {
            cout<<"duplicate found:"<< arr[i]<<endl;
            found =true;
}
        }
    }
    if(!found)
    {
    cout<<"no result"<<endl;
    }
}
