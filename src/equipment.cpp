//
// Created by Ericn on 2021-01-05.
//

#include "../include/equipment.hpp"

equipment::equipment(double unit_price, std::string name)
: unit_price(unit_price) , name(std::move(name)) {}

std::string equipment::get_name() {
    return name;
}