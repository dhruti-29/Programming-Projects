  /*A health-monitoring startup stores step-count logs for every user.
Each user has a small note written by the AI coach, an array storing
 step counts for different time slots of the day,
and a dynamically allocated ID-code that the system generates during 
login.
The company wants a function that reads multiple users’ records, 
verifies whether any step count is abnormally low,
processes the coach-notes to remove extra spaces, and prints only 
those users whose generated ID-code length is valid.
Write a C program using functions + arrays + malloc/calloc + strings 
to perform all these checks.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ai
{
    char note[100];
    int steps[5];
    char *id;
};

int valid(char *id)
{
    int n = strlen(id);
    if(n >= 4)
        return 1;
    return 0;
}

void readuser(struct ai *u)
{
    fgets(u->note, sizeof(u->note), stdin);

    for(int i = 0; i < 5; i++)
        scanf("%d", &u->steps[i]);

    u->id = (char*)calloc(10, sizeof(char));
    scanf("%s", u->id);
}

int main()
{
    struct ai u;
    readuser(&u);

    if(valid(u.id))
        printf("user valid");
    else
        printf("invalid id");

    free(u.id);
    return 0;
}
