#include "point.h"

Point::Point(int x, int y) {
    x_coord = x;
    y_coord = y;
    hit = false;
}

Point::Point(const Point &point) {
    x_coord = point.x_coord;
    y_coord = point.y_coord;
    hit     = point.hit;
}

Point::~Point() {
    // does nothing for now
}

int Point::get_x() const {
    return x_coord;
}

int Point::get_y() const {
    return y_coord;
}

bool Point::is_hit() const {
    return hit;
}

void Point::set_hit() {
    hit = !hit;
}
