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
        if (strcmp(text, "move me!!!") == 0)
            printf("Your Flag: NCYU{move_to.....}\n");
    } else {
        printf("Please move %s to %s\n", target, goal);
    }

    return 0;
}
