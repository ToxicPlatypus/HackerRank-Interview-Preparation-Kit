#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    int count=0;
    sort(arr,arr+n);

    for(i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
            i++;
        }
    }

    cout<<count<<endl;

    return 0;
}
