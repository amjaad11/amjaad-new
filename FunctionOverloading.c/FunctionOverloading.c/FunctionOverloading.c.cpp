#include <iostream>
using namespace std;

double Mysum(double a, double b) {
	return a + b;
}
int Mysum(int k, int w) {
	return k + w;
}

int Mysum(int p, int q, int r) {
	return p + q + r;
}
int Mysum(int x, int y, int z, int t) {
	return x + y + z + t;
}

int main() {
	cout << Mysum(10, 20,30);
	  return 0;
	
};

