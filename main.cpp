#include "socd.h"

struct dpad {
    bool up, down, left, right;
};

dpad d = {};

SOCD socd;
SOCD::mode_t mode = SOCD::mode_t::natural;

int main() {
    d.up = true; // input
    socd.queryY(d.up, d.down, mode);
    d.up = true; d.down = true; // input
    socd.queryY(d.up, d.down, mode);
    d.up = true; // input
    socd.queryY(d.up, d.down, mode);
    d.down = true; // input
    socd.queryY(d.up, d.down, mode);
    d.down = true; // input
    socd.queryY(d.up, d.down, mode);
    return 0;
}