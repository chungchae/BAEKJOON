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

//�Ѽ��� üũ�ϴ� �Լ�
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
		//������������ �˻�
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