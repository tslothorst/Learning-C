#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <stdlib.h>

void drawBoard(char a[]);
void drawDevide();
bool checkForWin(char a[]);
void makeMove(char a[], int userInput, char mark, int player);

int main() {
    char board[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    int userInput;
    int player =1;
    char mark;


    while(!checkForWin(board)) {
        drawBoard(board);

        // change turns
        player = (player % 2) ? 1 : 2;

        // get input
        printf("Player %d, enter a number: ", player);
        scanf("%d", &userInput);

        // set the correct character based on player turn
        mark = (player == 1) ? 'X' : 'O';

        makeMove(board,userInput,mark,player);

        player++;
    }

    if (checkForWin(board))
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    return 0;
}

void drawBoard (char a[])
{
    system("cls");
    printf("Play Tic Tac Toe\n \n");
    printf("  %c  |  %c  |  %c \n", a[1], a[2], a[3]);
    drawDevide();
    printf("  %c  |  %c  |  %c \n", a[4], a[5], a[6]);
    drawDevide();
    printf("  %c  |  %c  |  %c \n", a[7], a[8], a[9]);

}

void drawDevide()
{
    printf("\n---------------\n");
}

bool checkForWin(char a[])
{
    if (a[1] == a[2] && a[2] == a[3])
    {
        return true;
    }
    if (a[4] == a[5] && a[5] == a[6]){
        return true;}

    if (a[7] == a[8] && a[8] == a[9]){
        return true;}

    if (a[1] == a[4] && a[4] == a[7]){
        return  true;}

    if (a[2] == a[5] && a[5] == a[8]){
        return true;}

    if (a[3] == a[6] && a[6] == a[9]){
        return  true;}

    if (a[1] == a[5] && a[5] == a[9]){
        return  true;}

    if (a[3] == a[5] && a[5] == a[7]){
        return  true;}
    return false;
}

void makeMove(char a[], int userInput, char mark, int player){
    if (userInput == 1 && a[1] == '1'){
        a[1] = mark;
    }

    if (userInput == 2 && a[2] == '2'){
        a[2] = mark;
    }

    if (userInput == 3 && a[3] == '3'){
        a[3] = mark;
    }

    if (userInput == 4 && a[4] == '4'){
        a[4] = mark;
    }

    if (userInput == 5 && a[5] == '5'){
        a[5] = mark;
    }

    if (userInput == 6 && a[6] == '6'){
        a[6] = mark;
    }

    if (userInput == 7 && a[7] == '7'){
        a[7] = mark;
    }

    if (userInput == 8 && a[8] == '8'){
        a[8] = mark;
    }

    if (userInput == 9 && a[9] == '9'){
        a[9] = mark;
    }
    else {
        printf("Illegal move");
        player--;
        getch();
    }
}