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
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	cout << min({ A, B, C - A, D - B });
}