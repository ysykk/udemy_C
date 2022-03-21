#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *file; //FILEオブジェクト型のポイント変数fileを宣言

    file = fopen("./sample.txt", "w");

    if(file == NULL){
        printf("Can't open");
        exit(1);
    }

    fprintf(file, "Hello, world! \r\n");
    fclose(file);

}