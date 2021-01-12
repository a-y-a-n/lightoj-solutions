#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
	 int n;
	 scanf("%d",&n);
	 if(n>10)
		printf("%d %d\n",n-10,10);
	 else
		printf("0 %d\n",n);
	}
	
}
