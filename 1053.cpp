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
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	a*=a;
	b*=b;
	c*=c;
	if(a+b==c || b+c==a|| a+c==b)
		printf("Case %d: yes\n",cs);
	else
		printf("Case %d: no\n",cs);
	}
}
