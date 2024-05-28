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
	int N;
	long long dp[90] = { 0, };
	cin >> N;
	dp[0] = 0; dp[1] = 1;
	for (int i = 2; i <= N; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[N];
}