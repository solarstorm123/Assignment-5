#include <iostream>

using namespace std;

int maximum(int tab[],int size)
{
if(size==1)
return tab[0];
else
return max(tab[size-1],maximum(tab,size-1));

}

int minimum(int tab[],int size)
{
if(size==1)
return tab[0];
else
return min(tab[size-1],minimum(tab,size-1));

}


void newarray(int tab1[],int tab2[],int x,int n)
{
    int arr3[x+n];
    for(int i=0;i<x;i++)
    {
      arr3[i]=tab1[i];
    }
    for(int i=x;i<x+n;i++)
    {
        arr3[i]=tab2[i-x];
    }
 cout<<"new array :"<<endl;
 for(int i=0;i<x+n;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<""<<endl;
cout<<"maximum element among both :"<<endl;
cout<<maximum(arr3,x+n)<<endl;
cout<<"minimum element among both :"<<endl;
cout<<minimum(arr3,x+n)<<endl;

}

int main()
{
    int x;int n;int arr1[x];int arr2[n];

    cout <<"number of elements in first array :";
    cin>>x;
    cout<<"elements of first array :"<<endl;
    for(int i=0;i<=x-1;i++)
    {
        cin>>arr1[i];
    }

    cout<<"number of elements in second array :";
    cin>>n;
    cout<<"elements of second array :"<<endl;
    for(int i=0;i<=x-1;i++)
    {
        cin>>arr2[i];
    }


    newarray(arr1,arr2,x,n);



    return 0;
}


