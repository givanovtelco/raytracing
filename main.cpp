#include "vec3.h"
#include "color.h"

#include <iostream>

int main(int argc, char *argv[]) {
    int iheight = 256;
    int iwidth = 256;

    std::cout << "P3\n" << iwidth << ' ' << iheight << "\n255\n";

    for (int j = 0; j < iheight; j++) {
        for (int i = 0; i < iwidth; i++) {
            auto pixel_color = color(double(i)/(iwidth-1), double(j)/(iheight-1),0);
            write_color(std::cout, pixel_color);
        }
    }

    return 0;
}
