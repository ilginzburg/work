#ifndef MAZE_H
#define MAZE_H

struct Point
{
    int x = 0;
    int y = 0;
};

int find (bool* arr, int x_size, int y_size, Point start, Point exit);
void printArray (bool* arr, int x_size, int y_size);

#endif // MAZE_H
