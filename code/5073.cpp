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
	vector<int> v(3);
	while (1)
	{
		cin >> v[0] >> v[1] >> v[2];
		sort(v.begin(), v.end());
		if (v[0] == 0 && v[1] == 0 && v[2] == 0)
			break;
		else if ( v[2] >= v[0] + v[1])
			cout << "Invalid" << endl;
		else if (v[0] == v[1] && v[1] == v[2] && v[2] == v[0])
			cout << "Equilateral" << endl;
		else if (v[0] == v[1] || v[1] == v[2] || v[2] == v[0])
			cout << "Isosceles" << endl;
		else if (v[0] != v[1] && v[1] != v[2] && v[2] != v[0])
			cout << "Scalene" << endl;
	}
}