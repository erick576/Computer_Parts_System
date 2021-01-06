//
// Created by Ericn on 2021-01-05.
//

#include "../include/disk_drive.hpp"

disk_drive::disk_drive()
: equipment( 50.0 , "Disk Drive") {}

double disk_drive::price() {
    return unit_price;
}