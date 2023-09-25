#include "middle.h" 

int itc_second_max_num(long long number) {
	int raz = 0;
	int max1 = -1, max2 = -1;
	if (number < 10 && number > -10) return -1;
	if (number < 0) number = -number;
	while (number > 0) {
		raz = number % 10;
		if (raz >= max1) {
			max2 = max1;
			max1 = raz;
		}
		else if (raz < max1 && raz > max2) max2 = raz;
		number /= 10;
	}
	if (max1 == max2) return max2;
	return max2;

} 

int itc_second_simple_max_num(long long number) {
	int raz = 0;
	int max1 = -1, max2 = -1;
	if (number < 10 && number > -10) return -1;
	if (number < 0) number = -number;
	while (number > 0) {
		raz = number % 10;
		if (raz > max1) {
			max2 = max1;
			max1 = raz;
		}
		else if (raz < max1 && raz > max2) max2 = raz;
		number /= 10;
	}
	if (max1 == max2) return -1;
	return max2;
} 

 long long itc_bin_num(long long number) {
	int ost = 0;
	long long z = 0;
	long long bin = 0;
	for (int i = 0; number > 0; i++) {
		z = itc_pow(10, i);
		ost = number % 2;
		bin = bin + ost * z;
		number /= 2;
	}
	return bin;
} 

long long itc_oct_num(long long number) {
	int ost = 0;
	long long z = 0;
	long long oct = 0;
	for (int i = 0; number > 0; i++) {
			z = itc_pow(10, i);
			ost = number % 8;
			oct = oct + ost * z;
			number /= 8;
	}
	return oct;
}
