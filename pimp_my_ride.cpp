
#include <bits/stdc++.h>
//#include <stdio.h>
#include <limits.h>
//#include <string.h>
using namespace std;

#define set(x, y) (x | (1 << i))
#define reset(x, y) (x & (1 << i))

int arr[10][10];
long long dp[10][2 << 16];
int n;

int mask(int i, int x)
{

	int b,sum;
	int mini = INT_MAX;

	sum = 0;
	b = 0;
	if(dp[i][x] != -1) {
		return dp[i][x];
	}
	for (int j = 1; j <= n; j++) {
		if(reset(x, j)) {
			sum += arr[i][j];
		}
		else {
			b = 1;
		}


	}

	if(b == 0) {
		return sum;
	}

	for (int j = 1; j <= n; j++) {
		if(reset(x, j) == 0) {
			mini = min(mini, mask(j, set(x, j)));
		}
	}

	mini = mini + sum;

	return dp[i][x] = mini;

}


int main()
{

	int c;
    printf("case value: ");
	scanf("%d", &c);

    printf("Enter case number: ");
	for (int cs = 1; cs <= c; cs++)
        {
		scanf("%d", &n);
		memset(arr, 0, sizeof arr);
		memset(dp, -1, sizeof dp);

        printf("Enter array value: \n");
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				scanf("%d", &arr[i][j]);
			}
		}

		printf("Case %d: %d\n", cs, mask(0, 0));
	}
}
