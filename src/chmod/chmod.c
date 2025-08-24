#include <stdio.h>

int main(){
    char enc[18] = {0xdc, 0x3, 0x7c, 0xc, 0x4f, 0x46, 0x50, 0x98, 0x1c, 0xd5, 0x18, 0x5, 0x3, 0x54, 0x47, 0xfc, 0xeb, 0xa5};
    char key[18] = {146, 64, 37, 89, 52, 37, 56, 249, 114, 178, 125, 90, 110, 59, 35, 153, 202, 216};
    
    printf("Flag: ");
    for (int i=0; i<18; i++){
        char c = enc[i] ^ key[i];
        printf("%c", c);
    }
    

    return 0;
}