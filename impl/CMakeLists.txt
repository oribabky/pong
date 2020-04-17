cmake_minimum_required(VERSION 3.3)
project(impl)

set(CMAKE_CXX_STANDARD 17)

add_executable(impl src/impl/main.cpp src/impl/util/osutil/OsUtil.cpp src/impl/util/osutil/OsUtil.h src/impl/util/stringutil/StringUtil.cpp src/impl/util/stringutil/StringUtil.h src/testing/exploratory/sfml/sfml.cpp src/testing/exploratory/sfml/sfml.h src/impl/view/GameWindow.cpp src/impl/view/GameWindow.h src/impl/model/gameobjects/pongball/PongBall.h src/impl/model/gameobjects/pongball/PongBall.cpp src/impl/model/domainprimitives/AngleDegrees.h src/impl/model/domainprimitives/AngleDegrees.cpp src/impl/model/gameobjects/pongworld/PongWorld.cpp src/impl/model/gameobjects/pongworld/PongWorld.h src/impl/model/gameobjects/wall/Wall.cpp src/impl/model/gameobjects/wall/Wall.h src/impl/util/intersectionutil/IntersectionUtil.cpp src/impl/util/intersectionutil/IntersectionUtil.h src/impl/model/gameobjects/playerbar/PlayerBar.cpp src/impl/model/gameobjects/playerbar/PlayerBar.h src/impl/util/randomutil/RandomUtil.cpp src/impl/util/randomutil/RandomUtil.h)

include_directories(src/impl/model/domainprimitives)
include_directories(src/impl/model/gameobjects/playerbar)
include_directories(src/impl/model/gameobjects/pongball)
include_directories(src/impl/model/gameobjects/pongworld)
include_directories(src/impl/model/gameobjects/wall)

include_directories(src/impl/util/intersectionutil)
include_directories(src/impl/util/osutil)
include_directories(src/impl/util/randomutil)
include_directories(src/impl/util/stringutil)

include_directories(src/impl/view)


set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(impl ${SFML_LIBRARIES})
endif()