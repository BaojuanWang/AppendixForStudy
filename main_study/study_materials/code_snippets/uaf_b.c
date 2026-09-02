#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    time_t start_time;
    time(&start_time);

    char *username = NULL;
    char *password = NULL;
    int flag = 0;

    while (1) {
        if (username) {
            printf("USERNAME ADDRESS: %p\nUSERNAME: %s\n", (void*)username, username);
        }
        if (password) {
            printf("PASSWORD ADDRESS: %p\nPASSWORD: %s\n", (void*)password, password);
        }

        printf("1: Username\n2: Password\n3: Reset\n4: Login\n5: Exit\nChoose an option [1-5]: ");
        int choice = 0;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                username = malloc(20);
                printf("Enter username: ");
                scanf("%254s", username);
                if (!strcmp(username, "root")) {
                    printf("[root]: Ain't no way it's that easy. Try again fool!\n");
                    strcpy(username, "");
                }
                break;

            case 2:
                if (!username) {
                    printf("Set a username first.\n");
                    break;
                }
                password = malloc(20);
                printf("Enter password: ");
                scanf("%254s", password);
                break;

            case 3:
                if (!username && !password) {
                    printf("Nothing to reset.\n");
                    break;
                }
                free(password);
                free(username);
                break;

            case 4:
                if (!username || !password) {
                    printf("Set both username and password first.\n");
                    break;
                }
                char *temp_uname = malloc(20);
                char *temp_pwd = malloc(20);
                printf("Enter username: ");
                scanf("%254s", temp_uname);
                printf("Enter password: ");
                scanf("%254s", temp_pwd);

                if (!strcmp(username, "root")) {
                    time_t end_time;
                    time(&end_time);
                    printf("Exploit succeeded in %.2f seconds.\n", difftime(end_time, start_time));
                    flag = 1;
                    char *command = malloc(20);
                    printf("$ Shell> ");
                    scanf("%254s", command);
                    system(command);
                    free(command);
                    exit(0);
                }

                if (!strcmp(temp_uname, username) && !strcmp(temp_pwd, password)) {
                    printf("Login success.\n");
                } else {
                    printf("Login failed.\n");
                }
                free(temp_uname);
                free(temp_pwd);
                break;

            case 5:
                time_t end_time;
                time(&end_time);
                if (flag == 0) {
                    printf("You just wasted %.2f seconds!\n", difftime(end_time, start_time));
                }
                exit(0);

            default:
                printf("Invalid option.\n");
                break;
        }
    }
}
