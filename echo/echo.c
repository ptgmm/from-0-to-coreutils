#include<stdio.h>

int main (int argc, char *argv[]) {

    int i;
    if (argc > 1) { 
        for (i = 1; i < argc; i ++) {
            printf("%s ", argv[i]);
    }
}
    else {
        printf(" \n");
    }

    return 0;
}
