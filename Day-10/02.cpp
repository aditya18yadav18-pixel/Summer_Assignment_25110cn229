#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            if(j >=n-(i-1) && j<=n+(i-1))
            {
                cout<<" * ";
            }
                else
                {
                    cout<<" ";
                }


                }
                cout<<endl;
            }
        
        }
        
        
