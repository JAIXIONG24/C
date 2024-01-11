#include <stdio.h> // Use for Input and Output 
#include <string.h> //  Use for String or char 

int main (int argc, char *argv[]){
    // データ型の宣言方法
    char    a;            // character
    int     b;            
    double  c;               
    float   d;             

    a = 'A';
    b = 12;
    c = 31.827364;
    d = 15.3;

    char e[] = "HELLO WORLD!";  // Data type of String 
    int length;
    length = strlen(e);         // Use strlen to get the length of String
  
    // ***************** Output Functions ***********************
    printf("HELLO WORLD 1 with printf function!\n");    // How to print String on by using printf function
    puts("HELLO WORLD 2 with pust function!"); // Output a string to the standard output
    putchar(a);       // Use for output one character to the standard output
    fprintf(stdout, "Say %s.", e); 
    
    // **************** Output of Variable values ***************
    printf("\na  = %c\n", a);
    printf("b = %d\n", b);
    printf("c = %f\n", c);
    printf("d = %f\n", d);
    printf("e = %s\n", e);
    
    // *************** Operators ********************
    printf("A + B = %.7f\n", (b+c));
    printf("A - B = %.7f\n", (b-c));
    printf("A * B = %.7f\n", (b*c));
    printf("A / B = %.7f\n", (b/c));
    printf("A %% A = %d\n", (b%b));        // % is an operation for integer only

    // *************** Input Functions ***************

    return 0; // End of the program 
}