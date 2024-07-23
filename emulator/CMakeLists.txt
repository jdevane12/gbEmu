add_library(
    emulator
    emulator.c
)

target_include_directories(emulator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(emulator cpu)

add_subdirectory(cpu)
add_subdirectory(cart)