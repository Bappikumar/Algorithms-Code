#include<bits/stdc++.h>
#define MAXM 10004

using namespace std;

class NewtonForwardMethod
{
    float x,y;
    double y = f(x);
    void show();
};

void show(double x,double p)
{
    cout<<"x   "<<"  f(x)  "<<endl;
    cout<<x<<y<<endl;
    cout<<"value of the table is: "<<p<<endl;
}

int main()
{
    int arr[10];
    int i,j,n,k,l;

    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    cout<<"Enter array table: "<<endl;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }

    NewtonForwardMethod();
}
