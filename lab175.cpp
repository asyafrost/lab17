#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	setlocale(LC_ALL, "");
	cout << "Введите длину вашего массива: ";
	int n, k, min = 10000;
	double q = 0, m = 0;
	cin >> n;
	vector <int> a(n);
	cout << "Введите " << n << " элементов массива (ровно 2 элемента должны повторяться): ";
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	int j = 0, z = 0;
	for (j; j <= n - 1; j++) {
		for (int i = j + 1; i <= n - 1; i++) {
			if (a[j] == a[i]) {
				cout <<"Повторяющиеся номера: "<< j + 1 <<" "<< i + 1 << endl;
				z += 1;
				break;

			}

		}
	}
	if (z == 0) {
		cout << "Повторяющихся элементов нет , попробуйте еще раз" << endl;
	}

}

