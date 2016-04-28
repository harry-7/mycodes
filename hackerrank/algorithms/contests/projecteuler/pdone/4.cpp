/*Author: Hemanth Kumar */

/*handle: harry7*/

/*header files*/

#include<bits/stdc++.h>

using namespace std;

/*debugging*/

#define out1(x)cout<<#x<<" is "<<x<<endl
#define out2(x,y)cout<<#x<<" is "<<x<<" "<<#y <<" is "<<y<<endl
#define out3(x,y,z)cout<<#x<<" is "<<x<<" "<<#y<<" is "<<y<<" "<<#z<<" is "<<z<<endl;
#define out4(a,b,c,d)cout<<#a<<" is "<<a<<" "<<#b<<"  is "<<b<<" "<<#c<<" is "<<c<<" "<<#d<<" is "<<d<<endl;
#define show(i,a,n) for(i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
#define sz(a) cout<<"size of "<<#a<<" is "<<a.size()

/*standard values*/

#define INF 1e18
#define PI 3.14159265359
#define MAX 1000006

/*Frequent functions*/

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define si(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define pu putchar
#define gu getchar


/*loops and initialisation*/

#define init(a,b) memset(a,b,sizeof(a))
#define rep(i,a,b) for(i=a;i<=b;i++)
#define repi(i,a,b) for(i=a;i>=b;i--)
#define repdf(i,a,b,d) for(i=a;i<=b;i+=d)
#define repdb(i,a,b,d) for(i=a;i>=b;i-=d)
#define TC() int t;cin>>t;while(t--)

/*typedef's for frequently used*/

typedef long long int ll;
typedef vector<int>VI;
typedef vector<ll>VLI;
typedef pair<int,int> ipair;
typedef pair<ll,ll> lpair;
typedef unsigned long long int ull;

/*space for global variables*/

bool check(int n){
	int temp,rem,reverse=0;
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		reverse=reverse*10+rem;
		temp/=10;
	} 
	if(n==reverse)return true;
	return false;
}
/*Functions */

VI v;

/*main code*/
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	int i,j,n;
	rep(i,100,999)
		rep(j,100,999){
			n=i*j;
			if(check(n))v.PB(n);
		}
	sort(v.begin(),v.end());
	TC(){
		int n;
		cin>>n;
		i=lower_bound(v.begin(),v.end(),n)-v.begin();
		if(v[i]>=n)i--;
		printf("%d\n",v[i]);
	}
	return 0;
}
