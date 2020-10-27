#include <stdlib.h>
#include <stdio.h>

void CommandCenter(){
    int a, b;
    scanf("%d %d", &a, &b);
    if((func4(a, 0, 14) != 31) || (b != 31)){ // a = 13, b = 31
        bad_instruction();
    }
    // else print valid message
}

int func4(int a, int b, int c){
    int hasil;

    hasil = b + (c - b)/2;
    if(hasil > a){
        hasil += func4(a, b, hasil - 1);
    }
    else if(hasil < a){
        hasil += func4(a, hasil + 1, c);
    }
    return hasil;
}
