#include <stdlib.h>
#include <stdio.h>

void Pyramid(){
    int a, b;
    char c;
    scanf("%d %c %d", &a, &c, &b);
    if(c != 'b'){ // c = 'b'
        bad_instruction();
    }
    switch(a){
        case 0:
            if(b != 689){ // a = 0, b = 689
                bad_instruction();
            }
        case 1:
            if(b != 476){ // a = 1, b = 476
                bad_instruction();
            }
        case 2:
            if(b != 404){ // a = 2, b = 689
                bad_instruction();
            }
        case 3:
            if(b != 900){ // a = 3, b = 900
                bad_instruction();
            }
        case 4:
            if(b != 877){ // a = 4, b = 877
                bad_instruction();
            }
        case 5:
            if(b != 62){ // a = 5, b = 62
                bad_instruction();
            }
        case 6:
            if(b != 530){ // a = 6, b = 530
                bad_instruction();
            }
        case 7:
            if(b != 720){ // a = 7, b = 720
                bad_instruction();
            }
        default:
            bad_instruction();
    }
    // else print valid message
}
