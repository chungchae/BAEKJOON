#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	int n, i;
	cin >> n;
	int dp[1000];
	dp[1] = 1; dp[2] = 2;

	for (i = 3; i <= n; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}
	cout << dp[n];
}