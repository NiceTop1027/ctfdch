#include <stdio.h>
#include <stdlib.h>

char *binsh = "/bin/sh";

void init() {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

int main() {
    init();
    char buf[30];

    system("cat fakeflag.txt");

    printf("system : %p\n", system);
    printf("binsh : %p\n", binsh);

    printf("input : ");
    scanf("%s", buf);
    return 0;
} 
