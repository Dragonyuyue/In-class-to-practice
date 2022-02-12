#pragma once
#define ROW 3//ÐÐ
#define COL 3//ÁÐ
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void initboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);