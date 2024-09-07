#include <iostream>
#include<stdlib.h>
#include<iomanip>
#include<stdio.h>

using namespace std;
int N;
int xi,yi;
int s=0;

void solveKT(int xi,int yi);
void printSolution(int sol[10][10]);
int solveKTUtil(int x, int y, int movei, int sol[10][10],int xMove[8], int yMove[8]);

int isSafe(int x, int y, int sol[10][10])
{
    if(x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1)
        return 1;
    else
        return 0;
}


void printSolution(int sol[10][10])
{
    for (int x = 0; x < N; x++)
    {   cout<<setw(50)<<right<<"________________";
        for(int i=0;i<N-2;i++)
         cout<<"________________";
         cout<<"________________"<<endl;
        cout<<setw(36)<<right<<"|";
        for (int y = 0; y < N; y++)
            cout << "\t" <<sol[x][y] << "\t|";
        cout<<endl;
    }
    cout<<setw(50)<<right<<"________________";
    for(int i=0;i<N-2;i++)
         cout<<"________________";
         cout<<"________________"<<endl;
}


void solveKT(int xi,int yi)
{
    int sol[10][10];

    for (int x = 0; x < N; x++)
        for (int y = 0; y < N; y++)
            sol[x][y] = -1;

    int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    sol[xi][yi] = 0;

    if (solveKTUtil(xi, yi, 1, sol, xMove, yMove) == 0)
   {
        cout << "\nKnight cannot move completely\n";
       // printSolution(sol);
    }
    else
        printSolution(sol);
}


int solveKTUtil(int x, int y, int movei, int sol[10][10],int xMove[8], int yMove[8])
{
    int k, next_x, next_y;
    if (movei == N * N)
        return 1;


    for (k = 0; k < 8; k++)
    {
        next_x = x + xMove[k];
        next_y = y + yMove[k];
        if (isSafe(next_x, next_y, sol))
        {
            sol[next_x][next_y] = movei;

            if (solveKTUtil(next_x, next_y, movei + 1, sol,xMove, yMove)== 1)
               {
                  return 1;
               }

            else
            {
                sol[next_x][next_y] = -1;
            }

        }
    }
    return 0;
}

int main()
{  int ch=1,clr=0;
    system("color F4");
    while(ch)
   {
    cout<<"\nEnter the N value :";
    cin>>N;
    cout<<"Enter the x position of knight : ";
    cin>>xi;
    cout<<"Enter the y position of knight : ";
    cin>>yi;
    solveKT(xi-1,yi-1);
    cout<<"\n click 1 to continue or 0 to exit : ";
    cin>>ch;
    cout<<"\n press 1 to clear : ";
    cin>>clr;
    if(clr==1)
        system("CLS");
    }
    return 0;
}
