//
// Created by Ericn on 2021-01-05.
//

#include "../include/composite_equipment.hpp"

composite_equipment::composite_equipment(double unit_price, std::string name)
: equipment(unit_price , name) {}

double composite_equipment::price() {
    double result = 0;
    for(auto it = children.begin() ; it < children.end() ; it ++){
        result += (* it)->price();
    }
    return result;
}