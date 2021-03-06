#ifndef MAZE_H
#define MAZE_H

struct Point
{
    int x = 0;
    int y = 0;
};

int find (int* a_arr, int x_size, int y_size, Point start, Point exit);
void fillArray (bool* arr, int* a_arr, int x_size, int y_size, Point exit);
void printArray (bool* arr, int x_size, int y_size);
void printAstarArray (int* arr, int x_size, int y_size);
void deleteArray (int* arr);

#endif // MAZE_H
