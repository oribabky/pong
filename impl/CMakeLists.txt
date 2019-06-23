cmake_minimum_required(VERSION 3.3)
project(impl)

set(CMAKE_CXX_STANDARD 17)

add_executable(impl main.cpp util/OsUtil/OsUtil.cpp util/OsUtil/OsUtil.h util/StringUtil/StringUtil.cpp util/StringUtil/StringUtil.h)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(impl ${SFML_LIBRARIES})
endif()