#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	setlocale(LC_ALL, "");
	cout << "Введите длину массива : ";
	int n, k, min = 10000;
	double q = 0, m = 0;
	cin >> n;
	vector <int> a(n);
	cout << "Введите " << n << " элементов массива  : ";
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n - 1; i += 2) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	cout << "Минимальный четный элемент последовательности равен : " << min << endl;
}

