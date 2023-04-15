cmake_minimum_required( VERSION 3.1 )
project( StatManager_lib 
         VERSION 1.0.0
         DESCRIPTION "Status manager"
         LANGUAGES CXX )

list(APPEND CMAKE_PREFIX_PATH $ENV{MY_ROOT})
find_package(ROOT REQUIRED COMPONENTS RIO Net)

add_library( StatManager STATIC StatManager.cc )
target_compile_features( StatManager PRIVATE cxx_std_11 )
target_include_directories( StatManager INTERFACE ../../include ${ROOT_LIBRARIES})
set_target_properties( StatManager
                       PROPERTIES
                       VERSION ${PROJECT_VERSION} )