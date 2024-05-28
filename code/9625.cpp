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
	int K;
	cin >> K;

	int A[45] = { 0, };
	int B[45] = { 0, };

	int i;
	A[0] = 1; B[0] = 0;
	for (i = 1; i <= K; i++)
	{
		A[i] = B[i - 1];
		B[i] = A[i - 1] + B[i - 1];
	}
	cout << A[K] << " " << B[K];
}