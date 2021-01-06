//
// Created by Ericn on 2021-01-05.
//

#ifndef COMPUTER_PARTS_SYSTEM_COMPOSITE_EQUIPMENT_HPP
#define COMPUTER_PARTS_SYSTEM_COMPOSITE_EQUIPMENT_HPP

#include "composite.hpp"
#include "equipment.hpp"

class composite_equipment : public equipment , public composite<equipment> {
public:
    composite_equipment(double unit_price, std::string name);
    double price();
};


#endif //COMPUTER_PARTS_SYSTEM_COMPOSITE_EQUIPMENT_HPP
