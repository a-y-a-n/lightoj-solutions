#include<bits/stdc++.h>
using namespace std;
int f(int a)
{
		int an=(a/3)*2;
		
		if(a%3 == 2)an++;
		return an;
}
int main() {
	
   int t;
   scanf("%d",&t);
   for(int cs=1;cs<=t;cs++)
   {
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Case %d: %d\n",cs,f(b)-f(a-1));
	
	}
}
