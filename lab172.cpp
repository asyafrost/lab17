#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	setlocale(LC_ALL, "");
	cout << "Введите длину вашего массива : ";
	int n, k, l;
	double q = 0, m = 0;
	cin >> n;
	vector <int> a(n);
	cout << "Введите " << n << " элементов массива(элементы должны не повторяться): ";
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	int z = 0;
	for (int i = 0; i <= n - 3; i++) {
		if (a[i + 2] - a[i + 1] != a[i + 1] - a[i]) {
			z++;
		}
	}
	if (z == 0) {
		cout << "Разность прогрессии равна : " << a[1] - a[0] << endl;
	}
	else {
		cout << "0" << endl;
	}

}

