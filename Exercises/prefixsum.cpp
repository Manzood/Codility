#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n, k, m, t;
	scanf("%d %d %d",&n,&k,&m);
	vector<int> prefix(n);
	scanf("%d",&prefix[0]);
	for (int i=1;i<n;i++)
	{
		scanf("%d",&t);
		prefix[i]=prefix[i-1]+t;
	}
	int max=0;
	for (int p=0;p<n;p++)
	{
		if ((m+k-p)<n && (k-p)>=0)
			if (prefix[m+k-p]-prefix[k-p]>max)
				max=prefix[m+k-p]-prefix[k-p];
	}
	printf("%d\n",max);
}