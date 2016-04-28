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

bool mark[1000006];
vector<ipair>cnts;
/*Functions */

/*main code*/
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	TC(){
		init(mark,false);
		int i,n,rem,ans,x,cnt;
		cin>>n;
		ans=rem=0;
		rep(i,0,n-1){
			cin>>x;
			mark[x]=1;
		}
		i=0;
		while(i<MAX){
			while(i<MAX && mark[i]==0)i++;//not there in array 
			cnt=0;
			while(i<MAX && mark[i]==1){//there    in array and forms a continous segment
			i++;
			cnt++;
			}
			//so 
			rem+=(cnt+2)/3;
			ans+=(cnt+1)/2;
		}
		cout<<rem<<" "<<ans<<endl;
	}
	return 0;
}
