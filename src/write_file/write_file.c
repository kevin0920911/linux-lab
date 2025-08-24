#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rtrim(char *s) {
    int len = strlen(s);
    while (len > 0 && (s[len-1] == '\n' || s[len-1] == '\r' || s[len-1] == ' ' || s[len-1] == '\t')) {
        s[len-1] = '\0';
        len--;
    }
}

int main(){
    FILE* f = fopen("/home/user/write_file/password", "r");

    char flag[1024] = {0};
    if (f == NULL){
        printf("Are you a good hacker?\n");
        printf("If your are a good hacker please write 'good_hacker' at ~/write_file/password\n");
        exit(0);
    }
    fgets(flag, 1023, f);
    rtrim(flag);
    if (strcmp(flag, "good_hacker") == 0){

        char enc[37] = {0x37, 0x5c, 0xe4, 0x48, 0x3e, 0xad, 0xa1, 0x98, 0xf9, 0xd2, 0xc5, 0x5d, 0x1a, 0x34, 0x9e, 0x28, 0x86, 0xd4, 0x35, 0x61, 0x37, 0xc4, 0xa0, 0x7, 0x88, 0xad, 0xc6, 0x94, 0x2, 0x75, 0x6e, 0x6a, 0x46, 0xd6, 0xb, 0x4a, 0x8c};
        char key[37] = {121, 31, 189, 29, 69, 244, 206, 237, 166, 179, 183, 56, 69, 83, 241, 71, 233, 187, 90, 14, 88, 171, 207, 99, 215, 197, 167, 247, 105, 16, 28, 75, 103, 247, 42, 107, 241};
            
        printf("Your Flag: ");
        for (int i=0; i<37; i++){
            char c = enc[i] ^ key[i];
            printf("%c", c);
        }
        
        exit(0);
    }
    else{
        printf("you are bad hacker\n");
    }
}