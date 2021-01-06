//
// Created by Ericn on 2021-01-05.
//

#ifndef COMPUTER_PARTS_SYSTEM_EQUIPMENT_HPP
#define COMPUTER_PARTS_SYSTEM_EQUIPMENT_HPP

#include <string>
#include <memory>

class equipment {
public:
    equipment(double unit_price, std::string name);
    std::string get_name();
    virtual double price() = 0;

protected:
    double unit_price;
    std::string name;
};


#endif //COMPUTER_PARTS_SYSTEM_EQUIPMENT_HPP
