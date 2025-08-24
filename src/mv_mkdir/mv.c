#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main() {
    const char *target = "/home/user/mv_mkdir/test";
    const char *goal   = "/home/user/mv_mkdir/mkdir/test";

    if (access(goal, F_OK) == 0) {
        FILE *f = fopen(goal, "r");
        if (f == NULL) exit(0);

        char text[1024];
        fgets(text, 45, f);
        if (strcmp(text, "move me!!!") == 0){
            char enc[18] = {0xf6, 0xdd, 0x57, 0x2b, 0xc1, 0x38, 0x64, 0x6b, 0x79, 0xea, 0xda, 0xa6, 0xd5, 0xd, 0xd7, 0x78, 0x87, 0xf3};
            char key[18] = {184, 158, 14, 126, 186, 85, 11, 29, 28, 181, 174, 201, 251, 35, 249, 86, 169, 142};
            
            printf("Your Flag: ");
            for (int i=0; i<18; i++){
                char c = enc[i] ^ key[i];
                printf("%c", c);
            }
        }
    } else {
        printf("Please move %s to %s\n", target, goal);
    }

    return 0;
}
