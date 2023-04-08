cmake_minimum_required( VERSION 3.1 )
project( MakeHands_lib 
         VERSION 1.0.0
         DESCRIPTION "Status manager"
         LANGUAGES CXX )
add_library( BattleManager STATIC BattleManager.cc )
target_compile_features( BattleManager PRIVATE cxx_std_11 )
target_include_directories( BattleManager INTERFACE ../../include )
set_target_properties( BattleManager
                       PROPERTIES
                       VERSION ${PROJECT_VERSION})