	#include <iostream>

	int main() {
        int grades[2][5] = {
            { 80, 70, 65, 89, 90 },
            { 85, 80, 80, 82, 87 }
        };

		float average;
		int i;
		int j;

		for (i = 0; i < 2; i++) {
			average = 0;

			for (j = 0; j < 5; j++) {
				average += grades[i][j];
			}

            average /= 5.0;
			printf("The average marks obtained in subject %d is: %.2f\n", i, average);
		}

		return 0;
	}