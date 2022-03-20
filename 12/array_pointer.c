#include <stdio.h>

#define SIZE 5

void main(){
    int array1[SIZE];
    char array2[SIZE];
    int i;

    int* p1 = NULL;
    char* p2 = NULL;

    // 配列に値を代入
    for(i = 0; i < SIZE; i++){
        array1[i] = i;
        array2[i] = 'A' + i;
    }
    
    // ポイント：配列の先頭のアドレスを与える
    p1 = &array1[0];
    p2 = &array2[0];

    for(i = 0; i < SIZE; i++){
        printf("array1[%d] = %d  *(p1 + %d) = %d ", i, array1[i], i, p1[i]);
        printf("array2[%d] = %c  *(p2 + %d) = %c\n", i, array2[i], i, p2[i]);

    }
}