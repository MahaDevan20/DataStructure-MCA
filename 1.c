/*Demonstration of storage classes
@Mahadevan Nair M P
28/07/2025
*/

#include <stdio.h>

int global_var = 10; // global variable

void demo() {
    static int static_var = 0; // static variable
    register int reg_var = 5;  // register variable
    static_var++;
    printf("Inside demo() -> static_var: %d, reg_var: %d\n", static_var, reg_var);
}

int main() {
    int local_var = 20; // local variable
    printf("In main() -> global_var: %d, local_var: %d\n", global_var, local_var);
    demo();
    demo();
    return 0;
}

