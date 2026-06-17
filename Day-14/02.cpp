 #include<iostream>
 using namespace std;
 int main()
 {
    int arr[5]={2,2,6,2,6};
    int count = 0;

    int search;
    cout<<"enter the element:";
    cin>>search;
    for(int i=0;i<=4;i++)
    {

        if(arr[i]==search)
        {
        count++;
        }


    }
    if(count>0){
        cout<<"number frequency is "<<count<<" times<<";
    }
    else{
        cout<<"not available";
    }
 }