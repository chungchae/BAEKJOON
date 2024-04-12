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
	int N, K, i;
	cin >> N >> K;
	vector <int>v;

	for (i = 0; i < N; i++)
	{//각 배열에 N까지의 수 저장
		v.push_back(i + 1);
	}

	int index = K - 1;
	cout << "<";
	while (v.size() > 0)
	{
		if (index < v.size())
		{
			if (v.size() == 1)
				cout << v[index];
			else

				cout << v[index] << ", ";

			v.erase(v.begin() + index);
		}
		else
		{//인덱스가 벡터 사이즈를 넘어서면 나눈 나머지로 바꿈
			index %= v.size();
			if (v.size() == 1)
				cout << v[index];
			else

				cout << v[index] << ", ";

			v.erase(v.begin() + index);
		}
		index -= 1;
		index += K;
	}
	cout << ">";
}