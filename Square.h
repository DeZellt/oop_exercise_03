#pragma once

#include "Figure.h"

class Square : public Figure {
public:
    Square() = default;
    Square(Point p1, Point p2, Point p3, Point p4);
    Point Center() const override;
    void Scan(std::istream& is) override;
    void Print(std::ostream& os) const override;
    double Area() const override;

private:
    Point p1_, p2_, p3_, p4_;
};