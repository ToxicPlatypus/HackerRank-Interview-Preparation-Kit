#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, money;

    cin>>n>>money;

    int arr[n], i, count=0, sum=0;

    for(i=0; i<n; i++)
        cin>>arr[i];

    sort(arr,arr+n);

    for(i=0; i<n; i++)
    {
        sum+=arr[i];
        if(sum<=money)
            count++;
        else
            break;
    }

    cout<<count<<endl;

    return 0;
}
