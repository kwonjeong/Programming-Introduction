#include <stdio.h>

main() {
	char prime[1000];
	prime[0] = prime[1] = 0;
	int p;

	for (p = 2; p < 1000; p++) {
		prime[p] = 1;
	}
	for (p = 2; p < 32; p++) {
		if (prime[p] == 1) {
			int n = 2;
			for (n = 2; n * p < 1000; n++) {
				prime[n * p] = 0;
			}
		}
	}
	int i = 0;
	for (p = 0; p < 1000; p++) {
		if (prime[p] == 1) {
			printf("%3d   ", p);
			i++;
			if (i % 15 == 0) {
				printf("\n");
			}
		}
	}
}