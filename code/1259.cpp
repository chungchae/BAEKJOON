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
	while (1)
	{
		string str;
		cin >> str;
		if (str == "0")
			break;
		string str2 = str;
		reverse(str2.begin(), str2.end());
		if (str == str2)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}