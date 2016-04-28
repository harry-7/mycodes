#include<iostream>
#include<vector>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#define N 9
using namespace std;
int pos[N],a,b,sc;
bool check(int q,int r){
	for(int i =1;i<=q-1;i++)if(pos[i]==r||abs(pos[i]-r)==abs(q-i))return false;
	return true;
}
void solve(int q){
	int r,j;
	for(r=1;r<=8;r++)
		if(check(q,r)){
			pos[q]=r;
			if(q==8 && pos[a]==b){
				sc++;
				printf("%2d      %d",sc,pos[1]);
				for(int i=2;i<=8;i++)cout<<" "<<pos[i];cout<<endl;

			}
			else solve(q+1);
		}
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>a>>b;
		memset(pos,0,sizeof(pos));
		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
		sc=0;
		solve(1);
		if(t)cout<<endl;
	}
	return 0;
}
