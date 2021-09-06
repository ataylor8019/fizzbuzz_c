/*
    Fizzbuzz solution:
    Common problem statement is to test all numbers from 1 to 100, and if the
    number is a multiple of 3, to print the word "fizz", and if the number is
    a multiple of 5, to print the word "buzz". If the number is a multiple of
    both, then the program should print the word "fizzbuzz". Otherwise, print
    out the number.

    Allan Taylor
    09/06/2021
*/

#include <stdio.h>

int main(void) {

    for (int i=1; i<=100; i++) {

        //i mod 3 AND i mod 5 having a nonzero value means this number is not
        //a multiple of either, therefore print the number.
        if ((i%3) && (i%5)) {    //Most common scenario, is placed first.
            printf("%d\n", i);
            continue;    //No need to test more factors, go to the next iteration of the loop.
        }

        //Inverting i mod 3's output results in "true" for factors of 3
        //(i mod 3 for factors of 3 equals 0).
        if (!(i%3))    //Second most common scenario, is placed second.
            printf("fizz");

        //The previous logic applies to the output of i mod 5 as well.
        if (!(i%5))    //Third most common scenario, is placed last.
            printf("buzz");

        printf("\n");    //No test for factors of 3 and 5 simultaneously is needed

        /*
            If a number is a factor of 3 and 5, the execution will fall 
            through both of the if statements starting at line 28. As no end
            of line character ("\n") is printed in either if statement, and
            because the test for being a factor of 3 is always done before the
            test for being a factor of 5, the resulting output is "fizzbuzz".

            If a number is only a factor of 3 or only a factor of 5, the
            respective word will be printed, and the alternate if case ignored.
            In all cases where i is a factor of 3, 5, or both, the end of line 
            character is printed after the determination is made, allowing the
            calculation as to what text to print to be as short as possible.
        */
    }


}
