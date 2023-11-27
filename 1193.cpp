#include <iostream>
using namespace std;

int step(int n) {
	int sum = 0;
	int i = 1;
	if (n == 1) return 1;
	while (sum <= n) {
		sum += i;
		if (sum >= n) break;
		i++;
	}
	return i;
}

int pre(int n) {
	if (n == 1) return 0;
	int p = 0;
	for (int i = 0; i < n; i++) {
		p += i;
	}
	return p;
}

int child(int n) {
	int s = step(n);
	int p = pre(s);
	return s - n + p + 1;
}

int mother(int n) {
	int s = step(n);
	int p = pre(s);
	return n-p;
}

int main() {
	int n;
	cin >> n;
	if (step(n) % 2 == 0) {
		cout << mother(n) << "/" << child(n);
	}
	else {
		cout << child(n) << "/" << mother(n);
	}
}