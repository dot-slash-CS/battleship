#ifndef POINT_H
#define POINT_H

class Point
{
private:
    int x_coord;
    int y_coord;
    bool hit;
public:
    Point(int x = 0, int y = 0);
    Point(const Point &point);
    ~Point();

    int get_x() const;
    int get_y() const;
    bool is_hit() const;

//    void set_x(int x);
//    void set_y(int y);

    void set_hit();
};

#endif // POINT_H
