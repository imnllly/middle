#include "middle.h" 

int itc_rev_bin_num(long long number) {
	long long rev_bin = 0;
	int ost = 0;
	for (int i = 0; number > 0; i++) {
		int z = itc_pow(2, i);
		ost = number % 10;
		rev_bin = rev_bin + ost * z;
		number /= 10;
	}
	return rev_bin;
}

 int itc_rev_oct_num(long long number) {
	long long rev_oct = 0;
	int ost = 0;
	for (int i = 0; number > 0; i++) {
		int z = itc_pow(8, i);
		ost = number % 10;
		rev_oct = rev_oct + ost * z;
		number /= 10;
	}
	return rev_oct;
}