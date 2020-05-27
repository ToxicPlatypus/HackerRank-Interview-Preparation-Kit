#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,sea_lvl=0,n,res=0;

    cin>>n;

    string s;
    cin>>s;

    for(i=0;i<n;i++)
    {
        if(s[i] == 'U')
            sea_lvl++;
        else
            sea_lvl--;

        if(sea_lvl==0 && s[i]=='U')
            res++;
    }

    cout<<res<<endl;

    return 0;
}
