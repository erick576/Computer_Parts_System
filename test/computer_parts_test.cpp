#define CATCH_CONFIG_MAIN

#include <catch2/catch_all.hpp>

#include "../include/composite_equipment.hpp"
#include "../include/equipment.hpp"
#include "../include/video_card.hpp"
#include "../include/disk_drive.hpp"
#include "../include/chasis.hpp"
#include "../include/cabinent.hpp"
#include "../include/bus.hpp"

TEST_CASE("Recursive and Non Recursive Parts Being Used")
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

    SECTION("Non Recursive Parts Used")
    {
        REQUIRE(vc_1.price() == 70.0);
        REQUIRE(dd_1.price() == 50.0);
    }

    SECTION("Recurive Struture Formed")
    {
        b_1.add(ptr_1);
        b_1.add(ptr_2);
        ch_1.add(ptr_7);
        ch_1.add(ptr_3);
        ch_1.add(ptr_4);
        ca_1.add(ptr_8);
        ca_1.add(ptr_5);
        ca_1.add(ptr_6);

        REQUIRE(b_1.price() == 140.0);
        REQUIRE(ch_1.price() == 260.0);
        REQUIRE(ca_1.price() == 360.0);
    }
}

TEST_CASE("Part Names")
{
    video_card vc_1, vc_2, vc_3;
    disk_drive dd_1, dd_2, dd_3;

    bus b_1;
    chasis ch_1;
    cabinent ca_1;

    REQUIRE(vc_1.get_name() == "Video Card");
    REQUIRE(dd_1.get_name() == "Disk Drive");
    REQUIRE(b_1.get_name() == "Bus");
    REQUIRE(ch_1.get_name() == "Chasis");
    REQUIRE(ca_1.get_name() == "Cabinent");
}
