#include <iostream>

float fast_exp(float y) {
    float d;
    *(reinterpret_cast<short*>(&d) + 0) = 0;
    *(reinterpret_cast<short*>(&d) + 1) = static_cast<short>(184 * y + (16256-7));
    return d;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    float y = -1;
    fast_exp(y);
//    std::cout << y << std::endl;

    return 0;
}

