cmake_minimum_required( VERSION 3.1 )
project( MakeHands_lib 
         VERSION 1.0.0
         DESCRIPTION "Prepare interface and judgement"
         LANGUAGES CXX )
add_library( MakeHands STATIC MakeHands.cc )
target_compile_features( MakeHands PRIVATE cxx_std_11 )
target_include_directories( MakeHands INTERFACE ../../include )
set_target_properties( MakeHands
                       PROPERTIES
                       VERSION ${PROJECT_VERSION})