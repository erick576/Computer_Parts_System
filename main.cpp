#include <iostream>

#include "include/composite_equipment.hpp"
#include "include/equipment.hpp"
#include "include/video_card.hpp"
#include "include/disk_drive.hpp"
#include "include/chasis.hpp"
#include "include/cabinent.hpp"
#include "include/bus.hpp"

int main()
{
    video_card vc_1, vc_2, vc_3;
    disk_drive dd_1, dd_2, dd_3;

    bus b_1;
    chasis ch_1;
    cabinent ca_1;

    equipment *ptr_1, *ptr_2, *ptr_3, *ptr_4, *ptr_5, *ptr_6, *ptr_7, *ptr_8;

    ptr_1 = &vc_1;
    ptr_2 = &vc_2;
    ptr_3 = &vc_3;
    ptr_4 = &dd_1;
    ptr_5 = &dd_2;
    ptr_6 = &dd_3;
    ptr_7 = &b_1;
    ptr_8 = &ch_1;

    b_1.add(ptr_1);
    b_1.add(ptr_2);
    ch_1.add(ptr_7);
    ch_1.add(ptr_3);
    ch_1.add(ptr_4);
    ca_1.add(ptr_8);
    ca_1.add(ptr_5);
    ca_1.add(ptr_6);

    /*
     * This Creates the Recursive System Of
     *
     *                 cabinent
     *                  / | \
     *               d_d d_d chasis
     *                       /  |  \
     *                      d_d v_c bus
     *                              /  \
     *                             v_c v_c
     *
     * Calling 50 + 50 + Recursive Call -> + 50 + 70 + Recursive Call -> + 70 + 70 = 360
     */

    std::cout<< "Total Price of the System : " << ca_1.price() << std::endl;
    return 0;
}
