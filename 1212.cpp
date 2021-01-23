#include<bits/stdc++.h>
using namespace std;

int main() {
	
   int t;
   scanf("%d",&t);
   for(int cs=1;cs<=t;cs++)
   {
	int r1,r2,c1,c2;
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
	
	if((r1+c1)%2!=(r2+c2)%2)
		printf("Case %d: impossible\n",cs);
	else if(abs(r1-r2)==abs(c1-c2))
		printf("Case %d: 1\n",cs);
	else
		printf("Case %d: 2\n",cs);
	
	}
}
