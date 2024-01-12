#include <stdio.h>
#include <string.h>
/* how to complie c on command prompt and interminal 
 1. gcc [filename].c -o [filename]
 2. ./[filename] [text that you want to print] 

 Ex. gcc lesson05.c -o lesson05
     ./lesson05 i got it

Output: i
        got
        it
*/
int main (  int argc, 
            char *argv[]) {
    int n;
    
    for ( n = 1; n < argc; n++){  //start at n = 1 because argv[0] is the name of program
        printf("%s\n", argv[n]);

    }
    
    return 0;
}