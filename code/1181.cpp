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


bool cmp(string str1, string str2)
{
	//길이가 같다면 사전순 비교
	if (str1.length() == str2.length())
		return str1 < str2;
	//길이가 다르다면 짧은 단어 우선
	else
		return str1.length() < str2.length();
}
int main() {
	int N, i;
	cin >> N;
	string* str = new string[N];
	for (int i = 0; i < N; i++)
		cin >> str[i];
	//정렬
	sort(str, str + N, cmp);
	for (int i = 0; i < N; i++)
	{
		//중복 단어 제거
		if ( i!=0 && str[i] == str[i - 1])
			continue;
		cout << str[i] << endl;
	}

}