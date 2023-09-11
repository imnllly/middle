#include <iostream>
#include "middle.h"

using namespace std;

void itc_num_print(int number) {
	cin >> number;
	cout << number;
}

int itc_len_num(long long number) {
	int i = 0;
	if (number < 0) number = -number;
	if (number > 0) {
		while (number > 0) {
			number /= 10;
			i++;
		}
		return i;
	}
	else return 1;
}
int itc_sum_num(long long number) {
	int sum = 0;
	while (number > 0) {
		sum += (number % 10);

	}
}