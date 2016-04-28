#include<iostream>
#include <bits/stdc++.h>
#define whatis(x) cout << #x << " is " << x << endl;

using namespace std;

typedef long long int ll;

ll A[1000];
ll voted[1000];

int main()
{
	std::ios_base::sync_with_stdio(false);
	ll a,b,c,i,j,k,n,m,t;
	TC(){
		ll state=0;
		cin >> n;
		for(j=0;j<1000;j++)
		{
			A[j]=0;
			voted[j]=-1;
		}
		for(j=0;j<n;j++)
		{
			cin >> A[j];
			if(A[j]>=n)
				state=1;
		}
		ll sum=0;
		for(j=0;j<n;j++)
			sum+=A[j];
		if(sum!=n)
			state=1;
		if(state==1)
			cout << -1 << endl;
		else
		{
			ll state=0,cnt=0,j=0;
			for(j=0;j<n;j++)
			{
				ll max=0,pos=0;
				for(k=0;k<n;k++)
				{
					if(k!=j && A[k]>=max)
					{
						max=A[k];
						pos=k;
					}
				}
				A[pos]--;
				voted[j]=pos;
			}
			for(j=0;j<n;j++)
			{
				if(j!=n-1)
					cout << voted[j]+1 << " ";
				else
					cout << voted[j]+1 << endl;
			}
		}
	}
	return 0;
}

