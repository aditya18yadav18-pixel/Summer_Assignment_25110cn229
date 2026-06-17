#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,4,7,8,9};
    int search;
    cout<<"enter the number";
    cin>>search;
    bool  found = false;
    for(int i =0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            if(arr[i] + arr[j] ==search)
            {
                found = true;
                cout<<"required number is:" <<arr[i] << "and"<< arr[j];
            }
            
        }

    }
    if(!found)
    cout<<"no result";
    }

