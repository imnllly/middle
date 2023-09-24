#include "middle.h" 

int itc_second_max_num(long long number) {
	int raz = 0;
	int max1 = 0, max2 = 0;
	if (number < 10) return -1;
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
	int max = 0;
	int max2 = itc_second_max_num(number);
	while (number > 0) {
		int raz = number % 10;
		if (raz > max) max = raz;
		number /= 10;
	}
	if (max == max2) return -1;
	return max2;
} 

/* long long itc_bin_num(long long number) {
	int z = 0;
	int bin = 0;
	while (number > 0) {
		z = number % 2;
		bin = z * 10 + z;
		number /= 2;
	}
	return bin;
} */

long long itc_oct_num(long long number) {
	int z = 0;
	int oct = 0;
	int ost = 0;
	int ost2 = 0;
	while (number > 0) {
		z = number % 8;
		oct = oct * 10 + z;
		number /= 8;
	}
	/*for (int i = 1; oct > 0; i * 10) {
		ost = oct % 10;
		ost2 = ost2 * i + ost;
		oct /= 10;
	} */
	return oct;
}