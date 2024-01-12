/* * * * * * * * * * * * * * * *
 *  switch statement version   *
 * * * * * * * * * * * * * * * */
#include <stdio.h>

int main (int argc, char *argv[]){
    
    int input_character;
    int flag = 0;
    
    while (!flag) {
        /* character input */
        printf ("Input > ");
        input_character = getchar ();  //getchar()・・・input one character 

          /* Processing to skip unnecessary input */ 

        while (input_character != '\n' && getchar () != '\n'); 
           
        /* Branch according to input  */
    switch (input_character) {
        case 'o':
            printf ("Open file\n");
            break;
        case 's':
            printf ("Save file\n");
            break;
        case 'p':
            printf ("Print data\n"); 
            break;
        case 'a':
            printf ("Add data\n"); 
            break;
        case 'q':
            printf ("Quit program\n");
            flag = 1;   //flag = 1　means quitting the program
            break;
        default:
            printf ("Invalid command\n"); 
            break;
        }
        
    }
    
  return 0;

}