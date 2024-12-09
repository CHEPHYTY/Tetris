#pragma once
#include <vector>
#include <raylib.h>
#include <iostream>

class Grid
{

public:
    Grid();
    void Initialize();
    void Print();
    void Draw();

    bool IsCellOutSide(int row, int column);
    int grid[20][10];

private:
    std::vector<Color> GetCellColors();
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;
};