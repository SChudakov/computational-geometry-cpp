//
// Created by semen on 21.03.19.
//
#include <utility>
#include <vector>
#include <iostream>

namespace point_util {
    void print(const std::vector<std::pair<int, int>> &points) {
        for (const auto &e  :points) {
            std::cout << "(" << e.first << ";" << e.second << ")";
        }
        std::cout << std::endl;
    }
}