#include <stdio.h>
ur;

// global function found in index 1
void cs361() {

}

// global variable found in index 3 of size 1 byte
char are = 'R';

// global variable found in COMMON (uninitialized) of size 4 bytes
int belong;

// global variable found in index 4 of size 4 bytes
int to = 0;

// unitialized global var (in COMMON) of size 37 bytes
char us[37];

int main(int argc, char *argv[]) {
    // need to use the return value of printf to avoid compiler
    // from optimizing it away and using puts instead.
    int chars_printed = printf("%s", "zalakp20\n");
    
    // return 0 if some chars were printed -1
    return chars_printed > 0 ? 0 : -1;
}

