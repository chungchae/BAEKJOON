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
	int N, i;
	vector <int>v;
	cin >> N;

	while (N / 10 > 0)
	{
		v.push_back(N % 10);
		N /= 10;
	} 
	v.push_back(N % 10);
	sort(v.rbegin(), v.rend());

	for (i = 0; i < v.size(); i++)
		cout << v[i];
}