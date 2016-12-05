
#include <iostream>
#include <math.h>

using namespace std;

double g = 9.8;
double sigma = 78.0 * pow(10.0, -6.0); // true value
//double sigma = 32.0 * pow(10.0, -6.0); // error value

double group_speed(double kappa) {
	return 0.5*pow(g*kappa + sigma*pow(kappa, 3.0), -0.5)*(g + 3.0*sigma*pow(kappa, 2.0));
}

double phase_speed(double kappa) {
	return (1.0/kappa)*pow(g*kappa + sigma*pow(kappa, 3.0), 0.5);
}

int main() {
	cout << "kappa, group speed, phase speed" << endl; 
	for (int i = 1; i < 1000; i++) {
		cout << i << "," << group_speed(i) << "," << phase_speed(i) << endl;
		
	}
}
