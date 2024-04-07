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

int cmp(string str1, string str2)
{//두 문자열을 비교, 다른 문자만큼 리턴
	int i;
	int count = 0;
	for (i = 0; i < str1.length(); i++)
	{
		if (str1[i] == '0')
			continue;
		else if (str1[i] != str2[i])
			count++;
	}
	return count;
}
int main() {
	string str1, str2;
	cin >> str1 >> str2;
	string ans;

	if (str2.length() == str1.length())
	{
		cout << cmp(str1, str2);
		return 0;
	}
	int diff = str2.length() - str1.length();

	//문자열 길이 차이만큼 append (shift하여 비교하기 위함)
	str1.append(diff, '0');
	int i, j;
	int min = str2.length();

	for (i = 0; i < diff; i++)
	{
		if (cmp(str1, str2) < min)
		{
			//최솟값 갱신
			min = cmp(str1, str2);
			ans = str1;
		}
		//뒤의 문자를 맨 앞으로 이동 (문자열을 한 칸 shift)
		str1 = str1.back() + str1;
		str1.pop_back();
	}
	if (cmp(str1, str2) < min)
	{
		min = cmp(str1, str2);
		ans = str1;
	}
	//최종 문자열과의 diff를 출력
	cout << cmp(ans, str2);
}