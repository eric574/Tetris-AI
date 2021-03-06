#ifndef tetris_engine
#define tetris_engine
#include "genetic.h"

extern const int DECISION_THRESHOLD;
extern const int HEIGHT;
extern const int WIDTH;

extern int x, y;
extern int type, next_type, otype;
extern int score, delay;
extern int **board; //this is the current board
extern int rotate_cnt, left_cnt, right_cnt;
extern int lines_completed;

void generate();
void translate_right();
void translate_left();
void slam();

char safe(int y, int x);
void clear(int y1, int x1, int y2, int x2);
void rotate();

void  update_tetris();
bool update_board();
bool check_board();
void freeze();
bool end_game_checker();

void  printb(int **board);
int** make_2darr(int h, int w);

char  coil_whine(int n);
int** deep_copyover(int **original);
void  free_2darr(int **ptr);

void choose_moves(organism nn);
void do_move();
void reset_move_var();
#endif

