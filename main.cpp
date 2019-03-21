//
// Created by semen on 21.03.19.
//

#include <utility>
#include <vector>
#include <algorithm>
#include <iostream>

#include "convex_hull.hpp"


//int main() {
//    std::vector<std::pair<int, int> > a;
//    a.push_back(std::make_pair(0, 0));
//    a.push_back(std::make_pair(1, -4));
//    a.push_back(std::make_pair(-1, -5));
//    a.push_back(std::make_pair(-5, -3));
//    a.push_back(std::make_pair(-3, -1));
//    a.push_back(std::make_pair(-1, -3));
//    a.push_back(std::make_pair(-2, -2));
//    a.push_back(std::make_pair(-1, -1));
//    a.push_back(std::make_pair(-2, -1));
//    a.push_back(std::make_pair(-1, 1));
//
//
//    // sorting the set of points according
//    // to the x-coordinate
//    sort(a.begin(), a.end());
//    std::vector<std::pair<int, int> > ans = convex_hull::get_convex_hull(a);
//
//    std::cout << "convex hull:" << std::endl;
//    point_util::print(ans);
//
//    return 0;
//}
