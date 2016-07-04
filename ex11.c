#include <stdio.h>

int main(int argc, char *argv[]) {
	int i = argc - 1;
	char *states[argc];
	while (i >= 0) {
		printf("arg %d: %s\n", i, argv[i]);
		states[i] = argv[i];
		i--;
	}

	i = argc - 1;
	while (i >= 0) {
		printf("state %d: %s\n", i, states[i]);
		i--;
	}
	return 0;
}
