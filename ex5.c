#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[]) {  //What exactly are argc and char *argv[] ?
	int distance = 100;

	//this is also a comment
	printf("You are %d miles away.\n", distance);

	return 0;  
}

/*Why do we need to return 0? The code compiles fine without it and valgrind 
doesn't seem to return anything either.

Turns out while usually the compiler expects main to return an integer value, 
some compilers can succesfully compile without needing to see the return 0.
*/
