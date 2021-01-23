#include<bits/stdc++.h>
using namespace std;
int bin_to_int(int s)
{
	int r=0,i=0;
	while(s)
		{	
			if(s%10)r+=(1<<i);
			i++;
			s/=10;
			
		}
	
	return r;
	
}
int main() {
	
   int t;
   scanf("%d",&t);
   for(int cs=1;cs<=t;cs++)
   {
	int a[4],b[4];
	
	scanf("%d.%d.%d.%d",&a[0],&a[1],&a[2],&a[3]);
	scanf("%d.%d.%d.%d",&b[0],&b[1],&b[2],&b[3]);
	
	bool ok=1;
	for(int i=0;i<4;i++)
	if(a[i]!=bin_to_int(b[i]))
		{ok=0;
		break;
		}
	
	if(ok)
		printf("Case %d: Yes\n",cs);
	else 
		printf("Case %d: No\n",cs);
	
	}
}
