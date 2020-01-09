#include "Figure.h"

std::ostream& operator << (std::ostream& os, const Figure& fig) {
    fig.Print(os);
    return os;
}

std::istream& operator >> (std::istream& is, Figure& fig) {
    fig.Scan(is);
    return is;
}

