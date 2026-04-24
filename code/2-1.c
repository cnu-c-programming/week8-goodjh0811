#include <stdio.h>

int main(){

    char arr[] = "Hello";
    char *p = "Hello"; 

    arr[0] = 'H';
    printf("%s\n", arr);

    // p[0] = 'H';
    // printf("%s\n", p); // This will cause undefined behavior
    return 0;
}