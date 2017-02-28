#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int board[10][10];
void printSolution(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d\t", board[i][j]);
        printf("\n");
    }
}
bool isSafe(int row, int col,int N)
{
    int i, j;
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;
    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j])
            return false;
    for (i=row, j=col; j>=0 && i<N; i++, j--)
        if (board[i][j])
            return false;
    return true;
}

bool solveNQUtil(int col,int N)
{
    if (col >= N)
        return true;
    for (int i = 0; i < N; i++)
    {
        if ( isSafe(i, col, N) )
        {
            board[i][col] = 1;
            if ( solveNQUtil(col + 1,N) )
                return true;
            board[i][col] = 0;
        }
    }
    return false;
}
bool solveNQ(int N)
{
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            board[i][j]=0;
        }
    }
    if ( solveNQUtil(0,N) == false )
    {
        printf("NO\n");
        return false;
    }
    printSolution(N);
    return true;
}
int main()
{
int n;
scanf("%d",&n);
    solveNQ(n);
    return 0;
}
