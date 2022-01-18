//
// Created by 13129 on 2022/1/13.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifndef GAME1_GAME_H
#define GAME1_GAME_H
#define ROW 3
#define COL 3
//º¯ÊýµÄÉùÃ÷
void Initboard(char board[ROW][COL],int row,int col);
void DisPlayBoard(char board[ROW][COL],int row,int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputMove(char board[ROW][COL],int row,int col);
char IsWin(char board[ROW][COL],int row,int col);
#endif //GAME1_GAME_H
