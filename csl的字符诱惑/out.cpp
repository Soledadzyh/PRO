#include<bits/stdc++.h>
using namespace std;

bool find (string s)
{
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='+') return true;
	}
	return false ;
}

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	int T;
	while(cin >> T)
	{
		string s;
		int ans=0;
		while(T--)
		{
			cin >> s;
			if(find(s))
			{
				ans ++ ;
			}
			else 
			{
				ans--;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
