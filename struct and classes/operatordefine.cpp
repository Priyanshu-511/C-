#include <iostream>

struct v3 {
    float x, y, z;
};

std::istream& operator>>(std::istream& in, v3& vec) {
    in >> vec.x >> vec.y >> vec.z;
    return in;
}

std::ostream& operator<<(std::ostream& out, const v3& vec) {
    out << "(" << vec.x << ", " << vec.y << ", " << vec.z << ")";
    return out;
}

int main() {
    v3 v;
    std::cout << "Enter three floating-point numbers (x y z): ";
    std::cin >> v;
    std::cout << "You entered: " << v << std::endl;
    return 0;
}
