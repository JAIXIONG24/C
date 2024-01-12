#include <stdio.h>
#include <string.h>

int main (  int argc, 
            char *argv[]) {
    int n;
    
    for ( n = 1; n < argc; n++){  //start at n = 1 because argv[0] is the name of program
        printf("%s\n", argv[n]);

    }
    

    return 0;
}