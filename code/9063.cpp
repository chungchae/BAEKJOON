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
	int N, i;
	cin >> N;
	int max_A, min_A, max_B, min_B;
	int** arr = new int* [N];
	for (i = 0; i < N; i++)
		arr[i] = new int[2];
	for (i = 0; i < N; i++)
		cin >> arr[i][0] >> arr[i][1];
	min_A = arr[0][0]; max_A = arr[0][0];
	min_B = arr[0][1]; max_B = arr[0][1];
	for (i = 0; i < N; i++)
	{
		if (arr[i][0] < min_A)
			min_A = arr[i][0];
		if (arr[i][0] > max_A)
			max_A = arr[i][0];
	}
	for (i = 0; i < N; i++)
	{
		if (arr[i][1] < min_B)
			min_B = arr[i][1];
		if (arr[i][1] > max_B)
			max_B = arr[i][1];
	}
	/*cout << max_A << " " << min_A << " " << max_B << " " << min_B << endl;*/
	cout << (max_A - min_A) * (max_B - min_B);
		

}