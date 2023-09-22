#include "middle.h" 

int itc_rev_num(long long number) {
	int i = 0;
	if (number < 0) number = -number;
	if (number == 0) return 1;
	if (number % 10 == 0) {
		while (number % 10 == 0) {
			number /= 10;
		}
	}
	while (number > 0) {
		i++;
		number /= 10;
	}
	return i;
}
int itc_null_count(long long number) {
	int i = 0;
	if (number == 0) return 1;
	if (number < 0) number = -number;
	while (number > 0) {
		if (number % 10 == 0) i++;
		number /= 10;
	}
	return i;
}

bool itc_mirror_num(long long number) {
	long long num1 = number;
	long long num2 = 0;
	long long raz{};
	if (number < 0) number = -number;
	while (number > 0) {
		raz = number % 10;
		num2 = num2 * 10 + raz;
		number /= 10;
	}
	return num1 == num2;
}

int itc_mirror_count(long long number) {
	long long sum = 0;
	for (long long i = 1; i <= number; i++) {
		if(itc_mirror_num(i)) sum++;
	}
	return sum;
}