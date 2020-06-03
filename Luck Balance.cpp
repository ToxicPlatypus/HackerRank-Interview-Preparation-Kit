#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll n,k,i,l,t;
    cin>>n>>k;
    ll luck = 0;

    vector <int> contest;

    for(i=0;i<n;i++)
    {
        cin>>l;
        cin>>t;
        if(t==0)
            luck+=l;
        else
            contest.push_back(l);
    }

    sort(contest.rbegin(), contest.rend());

    while(k>0 && contest.size()>0)
    {
        luck+=contest[0];
        contest.erase(contest.begin());
        k--;
    }

    for(i=0; i<contest.size(); i++)
        luck-=contest[i];

    cout<<luck<<endl;

    return 0;
}
