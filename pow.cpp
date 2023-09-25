#include "middle.h"

double itc_pow(int num, int step) {
	double a = num;
	if (num == 0) return 0;
	else if (step == 1) return num;
	else if (step == 0) return 1;
	else if (step < 0) {
		for (int i = -1; i > step; i--) {
			a = a * num;
		}
		return 1.0 / a;
	}
	else {
		for (int j = 1; j < step; j++) a = a * num;
	}
	return a;
}