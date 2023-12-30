#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string c = "abcdefgh";
        string r = "12345678";
        for(int i=0;i<8;i++)
        {
            if(c[i]!=s[0])
            cout<<c[i]<<s[1]<<endl;
            if(r[i]!=s[1])
            cout<<s[0]<<r[i]<<endl;
            cout<<"Ishita"<<endl;
        } 
    }
}