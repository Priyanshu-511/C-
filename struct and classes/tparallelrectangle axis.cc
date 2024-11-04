#include <iostream>

struct Point {
    double x, y;
};

struct Rectangle {
    Point top_left, bottom_right;
};

bool is_point_inside_rectangle(const Rectangle& rect, const Point& point) {
    return (point.x >= rect.top_left.x && point.x <= rect.bottom_right.x &&
            point.y >= rect.top_left.y && point.y <= rect.bottom_right.y);
}

Rectangle shift_rectangle(const Rectangle& rect, double dx, double dy) {
    Rectangle shifted_rect;
    shifted_rect.top_left.x = rect.top_left.x + dx;
    shifted_rect.top_left.y = rect.top_left.y + dy;
    shifted_rect.bottom_right.x = rect.bottom_right.x + dx;
    shifted_rect.bottom_right.y = rect.bottom_right.y + dy;
    return shifted_rect;
}

int main() {
    Rectangle rect = {{0, 0}, {5, 5}};
    Point point = {3, 3};
    if (is_point_inside_rectangle(rect, point)) {
        std::cout << "Point is inside the rectangle." << std::endl;
    } else {
        std::cout << "Point is not inside the rectangle." << std::endl;
    }

    Rectangle shifted_rect = shift_rectangle(rect, 2, 3);
    std::cout << "Shifted rectangle: (" << shifted_rect.top_left.x << ", " << shifted_rect.top_left.y << "), (" << shifted_rect.bottom_right.x << ", " << shifted_rect.bottom_right.y << ")" << std::endl;

    return 0;
}