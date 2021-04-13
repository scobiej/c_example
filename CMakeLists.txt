cmake_minimum_required(VERSION 3.17)

project(linked_list)

include_directories(
    ${PROJECT_SOURCE_DIR}/headers
  )

add_executable(linklist ${PROJECT_SOURCE_DIR}/src/list.c ${PROJECT_SOURCE_DIR}/src/list_manage.c)
