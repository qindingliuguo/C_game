//
// Created by 13129 on 2022/1/16.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifndef GAME2_GAME_H
#define GAME2_GAME_H

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 80

void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS],int row,int col);
void FineMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
void open_mine(int x, int y)
#endif //GAME2_GAME_H
