cmake_minimum_required(VERSION 3.12)
project(gbEmu)

add_executable(
    main
    main.c
)

target_link_libraries(main
    emulator
    )

add_subdirectory(emulator)