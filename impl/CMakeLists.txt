cmake_minimum_required(VERSION 3.3)
project(impl)

set(CMAKE_CXX_STANDARD 17)

add_executable(impl src/impl/main.cpp src/impl/util/OsUtil/OsUtil.cpp src/impl/util/OsUtil/OsUtil.h src/impl/util/StringUtil/StringUtil.cpp src/impl/util/StringUtil/StringUtil.h src/testing/exploratory/sfml/sfml.cpp src/testing/exploratory/sfml/sfml.h src/impl/view/GameWindow.cpp src/impl/view/GameWindow.h src/impl/model/PongBall.h src/impl/model/PongBall.cpp src/impl/model/domainprimitives/AngleDegrees.h src/impl/model/domainprimitives/AngleDegrees.cpp src/impl/model/PongWorld.cpp src/impl/model/PongWorld.h src/impl/model/Wall.cpp src/impl/model/Wall.h src/impl/util/intersectionutil/IntersectionUtil.cpp src/impl/util/intersectionutil/IntersectionUtil.h)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(impl ${SFML_LIBRARIES})
endif()