#include <stdio.h>

int main() {
    char *message = new char[42];

    scanf("%[^\n]\n", message);
    printf("%s\n", message);

    return 0;
}
