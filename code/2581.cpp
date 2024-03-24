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
		return false; //1�� �Ҽ��� �ƴϹǷ� ����
	for (int i = 2; i <= sqrt(n); i++) {//2~n�� �����ٱ���
		if (n % i == 0) {//i�� n�� ������ �Ҽ��� �ƴϹǷ� false return
			return false;
		}
	}
	//2 ~ n-1���� ����� ���ٸ� �Ҽ��̹Ƿ�, true return
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