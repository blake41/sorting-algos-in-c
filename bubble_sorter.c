#include <stdio.h>

void sort(int *my_array, int count)
{
	int swaps = 1;
	while(swaps > 0) {
		swaps = 0;
		int i;
		for (i = 0; i < (count - 1); i++) {
			if(my_array[i] > my_array[i + 1]) {
				int first_value = my_array[i];
				int second_value = my_array[i + 1];
				my_array[i] = second_value;
				my_array[i + 1] = first_value;
				swaps++;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int my_array[] = {12,13,14,20,11};
	int *array_ptr = my_array;
	int count = sizeof(my_array) / sizeof(int);
	sort(array_ptr, count);
	int i;
	for(i = 0; i < count; i++) {
		printf("%d\n",my_array[i]);
	}
	return 0;
}