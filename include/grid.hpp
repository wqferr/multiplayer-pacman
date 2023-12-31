#pragma once

#include <vector>

#include <raylib.h>

namespace pacman {
    enum class Direction {
        NONE,
        UP,
        DOWN,
        LEFT,
        RIGHT
    };
    Vector2 getDirectionOffset(Direction d);



    class Cell {
    public:
        enum class CellType {
            EMPTY,
            WALL,
            DOT,
            SUPERDOT
        };

        Cell(Grid& g, int x, int y, CellType type): grid(g), gridX(x), gridY(y), type(type) {}

        int getGridX() { return gridX; }
        int getGridY() { return gridY; }
        Grid& getGrid() { return grid; }
        Rectangle get2dBounds() {
            unsigned short cellSize = grid.cellSize();
            Rectangle r = {
                gridX * cellSize,
                gridY * cellSize,
                cellSize,
                cellSize
            };
        }

    private:
        int gridX;
        int gridY;
        CellType type;
        Grid& grid;
    };



    class Grid {
        std::size_t nRows;
        std::size_t nCols;
        std::vector<Cell> elements;
        unsigned short cellSizePx;

    public:
        Grid(std::size_t rows, std::size_t cols, unsigned short cellSizePx):
            nRows(rows),
            nCols(cols),
            elements(rows * cols),
            cellSizePx(cellSizePx) {

        }

        unsigned short cellSize() const {
            return cellSizePx;
        }

        Cell& operator()(int x, int y) {
            return elements[nCols * y + x];
        }
    };
}

