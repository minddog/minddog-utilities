#include <stdio.h>
#include <stdlib.h>
#include "rdtsc.h"


void main() {
    setup_timer();
    start_timer();
    int a = 0;
    for(a; a < 10; a++) {
    }

    stop_timer();
    print_timer();
}
