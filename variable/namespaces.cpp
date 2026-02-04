
#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main() {
    int x = 0;

    std::cout << "first namespace variable x: " << first::x << "\n";
    std::cout << "second namespace variable x: " << second::x;

    return 0;
}