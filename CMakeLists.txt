cmake_minimum_required(VERSION 3.31)
project(rust-cpp)
add_subdirectory(./deps/corrosion)

corrosion_import_crate(MANIFEST_PATH ./Cargo.toml)

add_executable(main src/main.cpp)
target_link_libraries(main PUBLIC rust_lib)
