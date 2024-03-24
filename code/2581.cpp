#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

bool isPrime(int n) {
	if (n == 1)
		return false; //1은 소수가 아니므로 제외
	for (int i = 2; i <= sqrt(n); i++) {//2~n의 제곱근까지
		if (n % i == 0) {//i가 n의 약수라면 소수가 아니므로 false return
			return false;
		}
	}
	//2 ~ n-1까지 약수가 없다면 소수이므로, true return
	return true;
}

int main() {
	int M, N, i, temp;
	int sum = 0;
	int min = 0;

	cin >> M;
	cin >> N;

	for (i = M; i <= N; i++)
		if (isPrime(i))
		{
			if (min == 0)
			{
				min = i;
			}
			sum += i;
		}
	if (sum == 0)
		cout << "-1";
	else
	{
		cout << sum << endl;
		cout << min;
	}
}