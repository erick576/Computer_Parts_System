//
// Created by Ericn on 2021-01-05.
//

#ifndef COMPUTER_PARTS_SYSTEM_COMPOSITE_HPP
#define COMPUTER_PARTS_SYSTEM_COMPOSITE_HPP

#include <vector>

template <class T>
class composite {
public:
    void add(T * child) {
        children.push_back(child);
    }
protected:
    std::vector<T *> children;
};


#endif //COMPUTER_PARTS_SYSTEM_COMPOSITE_HPP