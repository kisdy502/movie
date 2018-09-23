cmake_minimum_required(VERSION 3.8)
project(movie)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp c_function_pointer.c c_function_param.c printf_self.c reverse_int.c ascii.c prime_data.cpp armstrong.c reverseSentence.c day_in_year.c american.c chess.c monkey_eat.c save_char.cpp tool.cpp)
add_executable(movie ${SOURCE_FILES})