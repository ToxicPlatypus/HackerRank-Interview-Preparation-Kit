#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,min;
    cin>>T;
    int arr[T];

    for(i=0; i<T; i++)
        cin>>arr[i];

    sort(arr, arr+T);

    for(i=0; i<T-1; i++)
    {
        if(abs(arr[i]-arr[i+1]) < min)
            min = abs(arr[i]-arr[i+1]);
    }

    cout<<min<<endl;
    return 0;
}
