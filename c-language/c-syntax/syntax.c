#include <stdio.h>

int main(int argc, char const *argv[])
{
	const int NUMS_SIZE = 3;
	int nums[NUMS_SIZE] = {1, 2, 5};  // Correct initialization

	for (int i = 0; i < NUMS_SIZE; i++) {
		printf("Num at index %d is %d\n", i, nums[i]);
	}

	const char* str = "abcd";
	printf("My string is %s\n", str);
	return 0;
}
