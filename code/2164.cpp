#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>
#include <deque>

using namespace std;

int main() {
	//vector로 풀면 시간 초과!! vector는 새 원소가 추가될 때 메모리 재할당 후 이전 원소를 복사, 따라서 삽입 시 성능이 저하됨
	deque<int> v;
	int N, i, temp;
	cin >> N;

	//N까지 차례대로 deque에 추가
	for (i = N; i > 0; i--)
		v.push_back(i);
	while (v.size() != 1)
	{
		//맨 위의 카드를 제거
		v.pop_back();
		if (v.size() == 1)
			break;

		//맨 위 카드를 맨 아래에 위치
		temp = v.back();
		v.pop_back();
		v.insert(v.begin(), temp);
		if (v.size() == 1)
			break;
	}
	//남은 카드가 1장이면 반복 종료 후 마지막 카드를 출력
	cout << v.front();
}