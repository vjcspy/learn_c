cmake_minimum_required(VERSION 3.21)
project(learnc VERSION 1.0 LANGUAGES CXX)

# Thiết lập chuẩn C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Tạo executable từ mã nguồn
add_executable(learnc src/main.cpp
        src/learn_class.cpp)

# Thêm thư mục include
target_include_directories(learnc PRIVATE include)
