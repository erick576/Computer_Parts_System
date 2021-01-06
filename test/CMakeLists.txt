find_package(Catch2 REQUIRED)

add_executable( computer_parts_test computer_parts_test.cpp ../src/equipment.cpp ../src/composite_equipment.cpp ../src/video_card.cpp ../src/disk_drive.cpp ../src/cabinent.cpp ../src/chasis.cpp ../src/bus.cpp )

target_link_libraries( computer_parts_test PRIVATE Catch2::Catch2WithMain )