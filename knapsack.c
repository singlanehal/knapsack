# knapsack
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int P[5] = {0, 1, 2, 5, 6};
	int wt[5] = {0, 2, 3, 4, 5};
	int n=4;
	int m=8;
	int k[5][9];
	for(int i=0; i<=n; i++)
	{
		for(int w=0; w<=m; w++)
		{
			if(i==0 || w==0)
			{
				k[i][w]==0;
			}
			else if(wt[i]<=w)
			{
				k[i][w] = max(P[i] + k[i-1][w - wt[i]], k[i-1][w]);

			}
			else
			{
				k[i][w]=k[i-1][w];
			}
		}
	}
	cout<<k[n][m];
}
