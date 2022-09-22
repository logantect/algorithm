cmake_minimum_required(VERSION 3.23)
project(data_structure_with_c)

set(CMAKE_CXX_STANDARD 14)

add_executable(SingleLinkedList linked-list/SimpleSingleLinkedList.c)
add_executable(SingleList linked-list/SingleLinkedList.cpp)
add_executable(linkedlist1 linked-list/linkedlist1.c)
add_executable(SingleLinkedList2 linked-list/SingleLinkedList2.cpp)
add_executable(StackBySingleLinkedList linked-list/Stack.c)