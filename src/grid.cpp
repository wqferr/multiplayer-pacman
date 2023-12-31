#include "grid.hpp"

Vector2 pacman::getDirectionOffset(pacman::Direction d) {
    static Vector2 offsets[] = {{0, 0}, {0, -1}, {0, 1}, {-1, 0}, {1, 0}};
    return offsets[static_cast<int>(d)];
}
