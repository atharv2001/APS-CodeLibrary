#include <bits/stdc++.h>
using namespace std;
int crayons()
{
    int n,i,nu=0,nd=0,ans;
    string s;
    cin>>s;
    n=s.length();
    for(i=0;i<n;i++)
    {
        if(s[i]=='U' && s[i+1]=='D')
            nu++;
        else if(s[i]=='D' && s[i+1]=='U')
            nd++;
    }
    ans=min(nd,nu);
    return ans;
}

int main() {
	int t,p,ans;
	cin>>t;
	for(p=0;p<t;p++)
	{
	    ans=crayons();
	    cout<<ans<<endl;
	}
	return 0;
}
