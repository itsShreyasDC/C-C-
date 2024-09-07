#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char choice[]={'0','1','2','3','4','5','6','7','8','9'};
int win();
int draw();
int i;
int j;
char mark;
int op;
int player=1;


   char name1[20];
   char name2[20];
   int n1w;int n2w;


int win(){
    if(choice[1]==choice[2]&&choice[2]==choice[3])
        return 1;
    else if(choice[4]==choice[5]&&choice[5]==choice[6])
        return 1;
    else if(choice[7]==choice[8]&&choice[8]==choice[9])
        return 1;
    else if(choice[1]==choice[4]&&choice[4]==choice[7])
        return 1;
    else if(choice[2]==choice[5]&&choice[5]==choice[8])
        return 1;
    else if(choice[3]==choice[6]&&choice[6]==choice[9])
        return 1;
    else if(choice[1]==choice[5]&&choice[5]==choice[9])
        return 1;
    else if(choice[7]==choice[5]&&choice[5]==choice[3])
        return 1;

       else return 0;
}

int draw(){

    system("cls");
    printf("\n\n         TIC-TAC-TOE\n");
     printf("\n      %s=X  %s=Y\n\n\n",name1,name2);
     printf("no of wins   %s=%d       %s=%d     TOTAL=%d\n",name1,n1w,name2,n2w,n1w+n2w);
    printf("          |      |      \n");
    printf("       %c  |   %c  |  %c  \n",choice[7],choice[8],choice[9]);
    printf("     -----|------|------\n");
    printf("          |      |      \n");
    printf("       %c  |   %c  |  %c  \n",choice[4],choice[5],choice[6]);
    printf("     -----|------|------\n");
    printf("          |      |      \n");
    printf("       %c  |   %c  |  %c  \n",choice[1],choice[2],choice[3]);
    printf("          |      |      \n");
return 0;
}

int main()
{
   system("color gf");
   int trail=0;
   int no;
   int mc;
   printf("\n   click 1 to play\n");
   printf("   click 2 to exit\n");
   printf ("   select your choice=");
   scanf("%d",&mc);
  if(mc==1) {printf("\n\n PLAYER1 select your name=");
   scanf("%s",name1);}
  if(mc==1){printf("\n\n PLAYER2 select your name=");
   scanf("%s",name2);}


  while(mc==1){ trail=0;choice[1]='1';choice[2]='2';choice[3]='3';choice[4]='4';choice[5]='5';choice[6]='6';
  choice[7]='7';choice[8]='8';choice[9]='9';
        do{
     draw();
        if(player==1){no=1;mark='X';}
        if(player==2){no=2;mark='Y';}

        if(no==1)printf("\n    %s select your option=",name1);
        if(no==2)printf("\n    %s select your option=",name2);
        scanf("%d",&op);
        if(op==1&& choice[1]=='1'){choice[1]= mark;}
else if(op==2&& choice[2]=='2'){choice[2]= mark;}
else if(op==3&& choice[3]=='3'){choice[3]= mark;}
else if(op==4&& choice[4]=='4'){choice[4]= mark;}
else if(op==5&& choice[5]=='5'){choice[5]= mark;}
else if(op==6&& choice[6]=='6'){choice[6]= mark;}
else if(op==7&& choice[7]=='7'){choice[7]= mark;}
else if(op==8&& choice[8]=='8'){choice[8]= mark;}
else if(op==9&& choice[9]=='9'){choice[9]= mark;}
else {printf("INVALID OPTION");}
  trail++;
       win();

       i=win();
       if (player==1){player=2;}
       else if (player==2){player=1;}


}
 while(i!=1 && trail<=8);
 if(i==1 && no==1){printf("\n\n         %s WON\n\n",name1); n1w++; }
if(i==1 && no==2){printf("\n\n         %s WON\n\n",name2); n2w++; }
if(trail>8){printf("\n\n         IT'S A DRAW\n\n");}
  printf("\n      %s=X  %s=Y\n\n\n",name1,name2);
     printf("no of wins %s=%d       %s=%d     TOTAL=%d",name1,n1w,name2,n2w,n1w+n2w);
 printf(" \n\n   click 1 ,to continue\n");
   printf("   click 2 to exit\n");
   scanf("%d",&mc);
}
return 0;
}

