#pragma once

#include "grid.hpp"

namespace pacman {
    class Actor {
        Cell& currentCell;
        float animDeltaX, animDeltaY;
    public:
        int getGridX() { return currentCell.getGridX(); }
        int getGridY() { return currentCell.getGridY(); }
        float getAnimX() { return getGridX() + animDeltaX; }
        float getAnimY() { return getGridY() + animDeltaY; }
        //? get cell

        Actor(Cell& homeCell): currentCell(homeCell), animDeltaX(0), animDeltaY(0) {}

        virtual void render() = 0;
    };

    class Ghost : public Actor {

        virtual void render() {
            // TODO do stuff
            // DrawCircle();
        }
    };

    class Pacman : public Actor {

        virtual void render() {

        }

    };
}
