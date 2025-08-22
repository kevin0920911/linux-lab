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
        printf("Your Flag: NCYU{You_are_goooooooood_hacker!!!!!}\n");
        exit(0);
    }
    else{
        printf("you are bad hacker\n");
    }
}