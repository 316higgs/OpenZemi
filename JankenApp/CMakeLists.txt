cmake_minimum_required( VERSION 3.1 )
project( Janken CXX )
add_subdirectory( ./src/MakeHands )
add_executable( Janken 
                main/main.cc )
target_link_libraries( Janken MakeHands )