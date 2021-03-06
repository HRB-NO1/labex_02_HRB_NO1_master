cmake_minimum_required(VERSION 3.17)
project(labex_02_HRB_NO1_master)

set(CMAKE_CXX_STANDARD 14)

include_directories(prob01)
include_directories(prob01/cpputils/graphics)
include_directories(prob01/cpputils/graphics/cimg)
include_directories(prob01/cpputils/graphics/test)
include_directories(prob01/cpputils/karel)
include_directories(prob01/cpputils/karel/src)
include_directories(prob01/tools/cppaudit)
include_directories(prob01/tools/cppaudit/termcolor)
include_directories(prob01/tools/cppaudit/test)
include_directories(prob02)
include_directories(prob02/tools/cppaudit)
include_directories(prob02/tools/cppaudit/termcolor)
include_directories(prob02/tools/cppaudit/test)
include_directories(prob03/tools/cppaudit)
include_directories(prob03/tools/cppaudit/termcolor)
include_directories(prob03/tools/cppaudit/test)
include_directories(prob04/tools/cppaudit)
include_directories(prob04/tools/cppaudit/termcolor)
include_directories(prob04/tools/cppaudit/test)
include_directories(prob05)
include_directories(prob05/tools/cppaudit)
include_directories(prob05/tools/cppaudit/termcolor)
include_directories(prob05/tools/cppaudit/test)

add_executable(labex_02_HRB_NO1_master
        prob01/cpputils/graphics/cimg/CImg.h
        prob01/cpputils/graphics/test/image_test_utils.h
        prob01/cpputils/graphics/test/image_unittest.cc
        prob01/cpputils/graphics/test/test_event_generator.h
        prob01/cpputils/graphics/image.cc
        prob01/cpputils/graphics/image.h
        prob01/cpputils/graphics/image_event.h
        prob01/cpputils/karel/src/test/karel_unittest.cc
        prob01/cpputils/karel/src/cell.h
        prob01/cpputils/karel/src/error.h
        prob01/cpputils/karel/src/orientation.h
        prob01/cpputils/karel/src/robot.cc
        prob01/cpputils/karel/src/robot.h
        prob01/cpputils/karel/karel.cc
        prob01/cpputils/karel/karel.h
        prob01/tools/cppaudit/termcolor/termcolor.hpp
        prob01/tools/cppaudit/test/tools/settings/unittest.cc
        prob01/tools/cppaudit/test/main.cc
        prob01/tools/cppaudit/test/math.cc
        prob01/tools/cppaudit/test/math.h
        prob01/tools/cppaudit/gtest_ext.h
        prob01/tools/settings/unittest.cc
        prob01/main.cc
        prob01/pizza.cc
        prob01/pizza.h
        prob02/tools/cppaudit/termcolor/termcolor.hpp
        prob02/tools/cppaudit/test/tools/settings/unittest.cc
        prob02/tools/cppaudit/test/main.cc
        prob02/tools/cppaudit/test/math.cc
        prob02/tools/cppaudit/test/math.h
        prob02/tools/cppaudit/gtest_ext.h
        prob02/tools/settings/unittest.cc
        prob02/input.cc
        prob02/input.h
        prob02/main.cc
        prob03/tools/cppaudit/termcolor/termcolor.hpp
        prob03/tools/cppaudit/test/tools/settings/unittest.cc
        prob03/tools/cppaudit/test/main.cc
        prob03/tools/cppaudit/test/math.cc
        prob03/tools/cppaudit/test/math.h
        prob03/tools/cppaudit/gtest_ext.h
        prob03/tools/settings/unittest.cc
        prob03/main.cc
        prob04/tools/cppaudit/termcolor/termcolor.hpp
        prob04/tools/cppaudit/test/tools/settings/unittest.cc
        prob04/tools/cppaudit/test/main.cc
        prob04/tools/cppaudit/test/math.cc
        prob04/tools/cppaudit/test/math.h
        prob04/tools/cppaudit/gtest_ext.h
        prob04/tools/settings/unittest.cc
        prob04/main.cc
        prob05/tools/cppaudit/termcolor/termcolor.hpp
        prob05/tools/cppaudit/test/tools/settings/unittest.cc
        prob05/tools/cppaudit/test/main.cc
        prob05/tools/cppaudit/test/math.cc
        prob05/tools/cppaudit/test/math.h
        prob05/tools/cppaudit/gtest_ext.h
        prob05/tools/settings/unittest.cc
        prob05/header.cc
        prob05/header.h
        prob05/main.cc)
