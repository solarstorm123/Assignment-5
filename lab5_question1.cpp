#include<iostream>
using namespace std;

int sum(int tab[],int x)
{
    int a=0;
    for(int i=0;i<x;i++)
    {
        a=tab[i]+a;
    }
    return a;
}

int main()
{
    int x;int arr[x];int n;

    cout<<"enter number of elements in array :";
    cin>>x;
    cout <<"enter elements :"<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }

    cout<<"sum of elements :"<<sum(arr,x);

    return 0;
}
