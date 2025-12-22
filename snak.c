#include <stdio.h>

int main() {
    printf("\t \t \t WELCOME TO SNAKE GAME\n");
    printf("-------------------------------\n");
    printf("# GAME RULLES\n");
    printf("1. The snake moves within a box of size 10x20.\n");
    printf("2. If the snake hits the wall, the game is over.\n");
    printf("3. Use 'r' to move right, 'l' to move left, 'u' to move up, and 'd' to move down.\n");
    printf("4. Enjoy the game!\n");
    
    printf("-------------------------------\n");
    printf("\t \t GAME START\n");
    printf("Box:\n");
for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 20; j++) {
        if(i==0 || i==9 || j==0 || j==19) {
            printf("*");
        } else {
            printf(" ");
        }
    }
    printf("\n");
} 
int x, y;
    
    scanf("%d %d", &x, &y);
 char c;
int s[9][19] = {0};
int food[1][2] = {{3,4}};
while(1) {
    
    
    if(x<=0 || x>=9 || y<=0 || y>=19) {
        printf("Out of bounds!\n");
        printf("Game Over!\n");
        break;
    } 
    if(x>=0 && x<9 && y>=0 && y<19) {
        printf("Inside the box!\n");
printf("enter position of snake : ");
    scanf("%c", &c);

    if(c=='r'){
x = x + 1;
printf("now snake =%d  \n",s[x][y]);

    }
    if(c=='l'){
x = x - 1;      
printf("now snake =%d \n",s[x][y]);
    }   
    if(c=='u'){
y = y - 1;
printf("now snake =%d \n",s[x][y]);
    }
    if(c=='d'){
y = y + 1;
printf("now snake =%d \n",s[x][y]);
    printf("Continue playing...\n");


    if(s[x][y] == food[0][0]) {
        printf("Food eaten!\n");


}
      } }   }  return 0;
     }