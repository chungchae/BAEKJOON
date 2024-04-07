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

//한수를 체크하는 함수
bool check(int N)
{
	int i, count = 0, diff = 0;
	vector <int>v;
	if (N / 10 == 0)
		return true;

	while (N / 10 > 0)
	{
		v.push_back(N % 10);
		count++;
		N /= 10;
	}
	count++;
	if (count == 2)
		return true;

	v.push_back(N % 10);
	reverse(v.begin(), v.begin());

	for (i = 0; i < count - 2; i++)
	{
		//등차수열인지 검사
		if (v[i + 1] - v[i] != v[i + 2] - v[i + 1])
			return false;
	}
	return true;
}
int main() {
	int N, i;
	cin >> N;

	int count = 0;
	for (i = 1; i <= N; i++)
	{
		if (check(i))
			count++;
	}
	cout << count;
}