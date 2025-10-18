#include <stdio.h>

int main(void) {

	int numbers[100] = {0};
	int count = 0;

	while (scanf("%d", &numbers[count]) == 1 && count < 100) {
		count++;
	}

	int switch_num = 0;
	for (int i = 0; i < count - 1; i++) {
		for (int j = i + 1; j < count; j++) {
			if (numbers[j] < numbers[i]) {
				switch_num = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = switch_num;
			}
		}
	}

	for (int i = 0; i < count; i++) {
		printf("%d ", numbers[i]);
	}

	printf("\n");

	return 0;
}