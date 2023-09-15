#include "middle.h" 


long long itc_multi_num(long long number) {
	long long sum = 1;
	if (number < 0) number = -number;
	if (number == 0) return 0;
	while (number > 0) {
		sum *= (number % 10);
		number /= 10;
	}
	return sum;
}

int itc_max_num(long long number) {
	long long last = 0;
	long long max = 1;
	if (number == 0) return 0;
	if (number < 0) number = -number;
	while (number > 0) {
		last = number % 10;
		if (last > max) max = last;
		number /= 10;
	}
	return max;
}

int itc_min_num(long long number) {
	long long last = 0;
	long long min = 10;
	if (number == 0) return 0;
	if (number < 0) number = -number;
	while (number > 0) {
		last = number % 10;
		if (last < min) min = last;
		number /= 10;
	}
	return min;
}