#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	int i;
	while (N != 1) {
		for (i = 2; i <= N; i++)
		{
			if (N % i == 0)
			{
				N /= i;
				cout << i << endl;
				break;
			}
		}
	}
}