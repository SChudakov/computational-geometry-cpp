//
// Created by semen on 21.03.19.
//
#include <vector>
#include <utility>
#include <string>
#include <fstream>
#include <set>
#include <random>
#include <iostream>

#include "convex_hull.hpp"
#include "point_util.hpp"

namespace {
    std::vector<std::pair<int, int>> get_random_points(unsigned long num_of_points) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 10000);

        std::set<std::pair<int, int>> s;

        while (s.size() < num_of_points) {
            s.insert({dis(gen), dis(gen)});
        }

        std::vector<std::pair<int, int>> result;
        result.reserve(s.size());
        for (auto item : s) {
            result.push_back(item);
        }

        return result;
    }

    void write_points(const std::vector<std::pair<int, int>> &points, const std::string &path) {
        std::ofstream output(path);
        for (const auto &item : points) {
            output << item.first << "," << item.second << std::endl;
        }
    }
}

int main() {
    std::string input_dir = "/home/semen/drive/workspace.java/computational-geometry/src/test/resources/convexhull/input";
    std::string output_dir = "/home/semen/drive/workspace.java/computational-geometry/src/test/resources/convexhull/output";

    unsigned long num_of_tests = 100;
    unsigned long num_of_points = 100;

    for (int i = 0; i < num_of_tests; i++) {
        std::cout << i << std::endl;
        std::vector<std::pair<int, int>> points = ::get_random_points(num_of_points);
//        point_util::print(points);
        ::write_points(points, input_dir + "/" + std::to_string(i) + ".txt");

        std::vector<std::pair<int, int>> convex_hull = convex_hull::get_convex_hull(points);
//        point_util::print(convex_hull);
        ::write_points(convex_hull, output_dir + "/" + std::to_string(i) + ".txt");
    }
    return 0;
}