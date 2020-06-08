#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s1, s2;
        int key=0,i,j;
        cin>>s1>>s2;

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        for(i=0; i<s1.length(); i++)
        {
            if(binary_search(s2.begin(), s2.end(), s1[i]))
            {
                key=1;
                break;
            }
        }
        if(key==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
