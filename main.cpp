#include <iostream>
#include <string>
#include <vector>

#include "Trapeze.h"
#include "Square.h"
#include "Rectangle.h"

int main() {
    std::string command;
    std::vector<Figure*> figures;
    while (std::cin >> command) {
        if (command == "add") {
            std::string fig_name;
            std::cin >> fig_name;
            Figure* new_figure = nullptr;
            try {
                if (fig_name == "trapeze") {
                    new_figure = new Trapeze;
                } else if (fig_name == "square") {
                    new_figure = new Square;
                } else if (fig_name == "rectangle") {
                    new_figure = new Rectangle;
                }
                std::cin >> *new_figure;
            } catch (std::exception& e) {
                std::cout << e.what() << "\n";
                delete new_figure;
                continue;
            }

            figures.push_back(new_figure);
            std::cout << "Успешно добавлено\n";
            continue;

        } else if (command == "remove") {
            size_t index;
            std::cin >> index;
            if (index >= figures.size()) {
                std::cout << "Слишком большой индекс\n";
                continue;
            }
            figures.erase(figures.begin() + index);
            continue;

        } else if (command == "area") {
            size_t index;
            std::cin >> index;
            if (index >= figures.size()) {
                std::cout << "Слишком большой индекс\n";
                continue;
            }
            std::cout << *figures[index] << "\n" << figures[index]->Area() << "\n";
            continue;
        } else if (command == "center") {
            size_t index;
            std::cin >> index;
            if (index >= figures.size()) {
                std::cout << "Слишком большой индекс\n";
                continue;
            }
            std::cout << *figures[index] << "\n" << figures[index]->Center() << "\n";
            continue;
        } else if (command == "print") {
            size_t index;
            std::cin >> index;
            if (index >= figures.size()) {
                std::cout << "Слишком большой индекс\n";na
                continue;
            }
            std::cout << *figures[index] << "\n";
            continue;
        } else if (command == "printall") {
            for (Figure* ptr : figures) {
                std::cout << *ptr << "\n";
            }
            continue;
        } else if (command == "exit") {
            break;
        } else {
            std::cout << "Неизвестная команда\n";
            std::cin.ignore(32768, '\n');
            continue;
        }
    }
    for (Figure* ptr : figures) {
        delete ptr;
    }
    return 0;
}