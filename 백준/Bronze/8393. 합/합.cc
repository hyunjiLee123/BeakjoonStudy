#include <iostream>
using namespace std;
int main() {
	int n;
	int a = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a += i;
	}
	cout << a << endl;
}