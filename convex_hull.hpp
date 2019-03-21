//
// Created by semen on 21.03.19.
//

#ifndef COMPUTATIONAL_GEOMETRY_CONVEX_HULL_H
#define COMPUTATIONAL_GEOMETRY_CONVEX_HULL_H

#include <utility>
#include <vector>
#include "point_util.hpp"


namespace convex_hull{
    int quad(std::pair<int, int> p);
    int orientation(std::pair<int, int> a, std::pair<int, int> b, std::pair<int, int> c);
    bool compare(std::pair<int, int> p1, std::pair<int, int> q1);
    std::vector<std::pair<int, int>> merger(std::vector<std::pair<int, int> > a, std::vector<std::pair<int, int> > b);
    std::vector<std::pair<int, int>> bruteHull(std::vector<std::pair<int, int>> a);
    std::vector<std::pair<int, int>> get_convex_hull(std::vector<std::pair<int, int>> a);
}

#endif //COMPUTATIONAL_GEOMETRY_CONVEX_HULL_H
