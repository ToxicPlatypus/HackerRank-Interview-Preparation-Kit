#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,count=0;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
        cin>>arr[i];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
    }

    cout<<"Array is sorted in "<<count<<" swaps."<<endl;
    cout<<"First Element: "<<arr[0]<<endl;
    cout<<"Last Element: "<<arr[n-1]<<endl;

    return 0;
}
