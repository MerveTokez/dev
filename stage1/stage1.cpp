#include <iostream>
using namespace std;
int main() {

	int a;
	cout << "dik kenar uzunlugu giriniz." << endl;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "#";
		}
		cout << endl;
	}
}