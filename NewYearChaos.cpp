//using array

#include<bits/stdc++.h>
using namespace std;

void minBribe(int n)
{
    int arr[n],i,j;
    
    for(i=0; i<n; i++)
            cin>>arr[i];
            
    int count = 0;
    
    for (i = n-1; i >= 0; i--) {
        if (arr[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
        for (j = max(0, arr[i] - 2); j<i; j++)
            if (arr[j] > arr[i])
                count++;
    }
    cout << count << endl;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,i;
        cin>>n;
        minBribe(n);
    }
    return 0;
}
