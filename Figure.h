#pragma once

#include <numeric>
#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

#include "Point.h"

class Figure {
public:

    virtual Point Center() const = 0;
    virtual double Area() const = 0;
    virtual void Scan(std::istream& is) = 0;
    virtual void Print(std::ostream& os) const = 0;
    virtual ~Figure() = default;
};

std::ostream& operator << (std::ostream& os, const Figure& fig);

std::istream& operator >> (std::istream& is, Figure& fig);
