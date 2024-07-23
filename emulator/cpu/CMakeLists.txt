add_library(
    cpu
    cpu.c
)

target_include_directories(cpu PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(cpu cart)