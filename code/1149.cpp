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
	int N, i, j;
	cin >> N;
	int result = 0;
	int prev = 0;
	int cost[1001][3] = { 0, };

	for (i = 1; i <= N; i++)
	{
		cin >> cost[i][0] >> cost[i][1] >> cost[i][2];

		cost[i][0] += min(cost[i - 1][1], cost[i - 1][2]);
		cost[i][1] += min(cost[i - 1][0], cost[i - 1][2]);
		cost[i][2] += min(cost[i - 1][0], cost[i - 1][1]);
	}
	cout << min(cost[N][0], min(cost[N][1], cost[N][2]));
	
}