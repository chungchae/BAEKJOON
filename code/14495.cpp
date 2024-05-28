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
	//DP
	int n;
	cin >> n;

	long long dp[117] = { 0, };
	dp[0] = 1; dp[1] = 1; dp[2] = 1;

	for (int i = 3; i < n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 3];
	}
	cout << dp[n - 1];
}