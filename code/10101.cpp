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
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;
	if (A == 60 && B == 60 && C == 60)
		cout << "Equilateral";
	else if ((A + B + C) == 180 && (A == B) || (B == C) || (C == A))
		cout << "Isosceles";
	else if ((A + B + C) == 180 && (A != B) && (B != C) && (C != A))
		cout << "Scalene";
	else
		cout << "Error";
}