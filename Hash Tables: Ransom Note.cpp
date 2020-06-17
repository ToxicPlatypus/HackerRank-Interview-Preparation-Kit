#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,count=0;
    cin>>n>>m;
    string input;
    map <string,int> mag,note;

    for(i=0; i<n; i++)
    {
        cin>>input;
        mag[input]++;
    }

    for(i=0; i<m; i++)
    {
        cin>>input;
        note[input]++;
    }

    for(auto it=note.begin(); it!=note.end(); it++)
    {
        if(mag[it->first]<it->second)
        {
            count=1;
            break;
        }
    }

    if(count)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;

    return 0;
}
