// Packed structure size example
#include <stdio.h>

// Struct including an int
struct packedStruct {
    char a;
    int b;
    char c;
} __attribute__((packed));

// Main
int main() {
    printf("Size:%zu \n",sizeof(struct packedStruct));
}