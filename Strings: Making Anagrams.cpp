#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b)
{
    int i,ans=0;
    int arr[26]={0};

    for(i=0; i<a.length(); i++)
        arr[a[i]-'a']++;

    for(i=0; i<b.length(); i++)
        arr[b[i]-'a']--;

    for(i=0; i<26; i++)
        ans+= abs(arr[i]);

    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
