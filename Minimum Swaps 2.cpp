#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n], i, j, count=0;

    for(i=0; i<n; i++)
        cin>>arr[i];

    for(i=0; i<n; i++)
    {
        if(arr[i] != i+1)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[j]==i+1)
                {
                    swap(arr[j], arr[i]);
                    break;
                }
            }
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}
