//
// Created by Ericn on 2021-01-05.
//

#include "../include/video_card.hpp"

video_card::video_card()
        : equipment( 70.0 , "Video Card") {}

double video_card::price() {
    return unit_price;
}