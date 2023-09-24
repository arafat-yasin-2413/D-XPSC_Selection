#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    while(!cin.eof())
    {
        cin>>s1;
        cin>>s2;
    }

    int cnt=0;
    for(int i = 0, j = 0; i<s1.size(), j<s2.size(); i++,j++)
    {
        if(s1[i] == s2[j])
        {
            cnt++;
            i++;
            j++;
            
        }

        else if(s1[i] != s2[j])
        {
            i++;
        }
    }

    cout<<cnt<<endl;
    // if(cnt== s2.size())cout<<"Possible"<<endl;
    // else cout<<"Impossible"<<endl;


    return 0;
}