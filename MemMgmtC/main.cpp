#include <stdio.h>
#include <stdlib.h>

int main() {
//    auto *p = (int*)malloc(sizeof(int));
//    auto *p = (int*)calloc(1, sizeof(int));
//    auto *p = (int*)calloc(5, sizeof(int)); //Array of 5
    auto *p = (int*)malloc(5*sizeof(int));
    if (p == nullptr) {
        printf("Failed to allocate memory\n");
        return -1;
    }
    *p = 5;
    printf("%d", *p);
    free(p);
    p = nullptr;
    free(p);
    return 0;
}