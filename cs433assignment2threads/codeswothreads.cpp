// code without threads

#include <stdio.h>
#include <random>

unsigned long addall(){
    int i=0;
    unsigned long sum=0;

    while(i < 10000000) {
        sum += i;
        i++;
    }
    return sum;
}

int main() {
    unsigned long sum;
    srandom(time(NULL));
    sum = addall();
    printf("%lu\n", sum);
}

// threads runs faster than the regular program