#include<bits/stdc++.h>

using namespace std;

void minBribe(vector<int> arr)
{
    int count = 0;
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
        for (int j = max(0, arr[i] - 2); j<i; j++)
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
        vector <int> arr(n);

        for(i=0; i<n; i++)
            cin>>arr[i];

        minBribe(arr);
    }
    return 0;
}
