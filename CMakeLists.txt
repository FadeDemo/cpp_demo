cmake_minimum_required(VERSION 3.25)
project(cpp_demo)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_demo main.cpp)

add_executable(myfirst cpp-primer-plus/sample/chapter-2/myfirst.cpp)
add_executable(carrot cpp-primer-plus/sample/chapter-2/carrot.cpp)
add_executable(getinfo cpp-primer-plus/sample/chapter-2/getinfo.cpp)
add_executable(sqrt cpp-primer-plus/sample/chapter-2/sqrt.cpp)
add_executable(ourfunc cpp-primer-plus/sample/chapter-2/ourfunc.cpp)
add_executable(convert cpp-primer-plus/sample/chapter-2/convert.cpp)
add_executable(1 cpp-primer-plus/exercise/chapter-2/1.cpp)
add_executable(2 cpp-primer-plus/exercise/chapter-2/2.cpp)
add_executable(3 cpp-primer-plus/exercise/chapter-2/3.cpp)