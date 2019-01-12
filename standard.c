/**
 * This version of hello world uses the standard conventions for declaring main and its inputs
 * In Java, the main method returns void, but the process has a return value. 0 means the program
 * completed successfully, and non-zero represents an error.
 * In C, we can explicitly set a return value (in Java, we do so using System.exit), and the main
 * function returns said value.
 *
 * In Java, the input to our main function is a String array (generally called args). These are
 * the command line arguments.
 * In C, we also have the command line arguments, but they are organized in a different way:  
 * The first parameter to main is a number (int argc). 
 * As you will learn soon, we cannot tell array lengths in C like we can in Java where we could 
 * do args.length. Therefore in C, we must give the array length is the first parameter to main.
 * The second parameter is an array of c-strings that contains all space separated strings
 * entered on the command line (terminal) when the program is run. The first element 
 * is this array is always the name of the executable.  
 * 
 * Compile: 
 *   gcc standard.c -o standard
 * Run:
 *   ./standard 
 *  or
 *   ./standard arguments to this program 
 * 
 * (try other command line arguments and try to figure out what the program is doing)
 */

#include <stdio.h>

int main(int argc, char **argv){
    printf("Hello world! (standard.c)\n");
    int i = 0;
    while (i < argc ) {
        printf("argv[%2d] = %s \n", i, argv[i] ); 
        i++;
    }
    return 0;
}
