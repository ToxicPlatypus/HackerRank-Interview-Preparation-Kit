#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n], res=0;

    for(i=0;i<n;i++)
        cin>>arr[i];


    for(i=0;i<n-1;i++)
    {
        if(arr[i+2]==0)
        {
            i++;
        }
            res++;
    }

    cout<<res<<endl;

    return 0;
}
