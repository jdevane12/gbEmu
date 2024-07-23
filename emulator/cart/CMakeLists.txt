add_library(
    cart
    cart.c
)

target_include_directories(cart PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(cart)