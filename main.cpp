#include <iostream>
#include <iomanip>
using namespace std;


double product(int n, double b) {
	double fact = 1;
	double step = 1, mult = 1;
	for (int i = 1; i <= n; i++) {
		fact *= i;
		step *= b * b;

		mult *= fact + step;
	}
	return mult;
}

double sigma(int m) {
	double fact = 120;
	double step = 1, sm = 0;
	for (int i = 1; i <= m; i++) {
		if (i > 1)
			fact *= i + 4;
		step *= 2;

		sm += fact - step;
	}
	return sm;
}

int main() {
	int n, m;
	double b, d, a;
	cin >> n >> m >> a >> b >> d;

	double res = (m * product(n, b) + d) / (a * a * a * sigma(m));
	cout << setprecision(15) << res;
}
