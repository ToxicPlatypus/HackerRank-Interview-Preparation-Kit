#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    long int n,i,co=0,res;
    cin>>s>>n;

    int len=s.size();
    for(i=0;i<len;i++)
    {
        if(s[i]=='a')
            co++;
    }

    res=co*(n/len);

    for(i=0;i<n%len;i++)
    {
        if(s[i]=='a')
            res++;
    }

    cout<<res<<endl;

    return 0;
}
