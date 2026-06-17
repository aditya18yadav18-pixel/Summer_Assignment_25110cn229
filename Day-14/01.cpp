#include<iostream>
using namespace std;
int main()
{
    int arr[5] = { 3,5,7,9,6};
    int search ;
    cout<<"enter the element to be search:";
    cin>>search;
    bool found = false;
    for(int i=0;i<=4;i++)
    {
    if(arr[i]==search)
    {
        cout<<"element is at" <<(i+1)<<"th position."<<endl;
        found = true;
        break;
    }
    }
    if(!found)
    {
        cout<<"not found";
    }

}


