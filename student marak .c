/*A coaching center maintains the marks of students for three subjects in an exam.
The marks are stored using dynamic memory allocation so that memory is assigned only when required.
The teacher wants a function that calculates the average marks of the student
and checks whether the student has passed or failed based on the average score.
Write a C program that allocates marks using calloc,
calculates the average using a separate function, and prints “Pass” or “Fail”.
*/


#include <stdio.h>
#include <stdlib.h>

float avg(int *a, int n)
{
    int i, s = 0;
    for(i = 0; i < n; i++)
    {
        s = s + a[i];
    }
    return (float)s / n;
}

int main()
{
    int n = 2, i;
    int *m = (int*)calloc(n, sizeof(int));
    for(i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    float a = avg(m, n);
    if(a >= 40)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    free(m);
    return 0;
}
