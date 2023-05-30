cmake_minimum_required(VERSION 3.8)

project(ugraphviz VERSION 0.3.0)

find_package(ament_cmake REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
# set(BUILD_SHARED_LIBS OFF)

include_directories(
  include
)

add_library(ugraphviz SHARED
  src/core/Graph.cpp
  src/core/Subgraph.cpp
  src/core/Registry.cpp
)

install(
  DIRECTORY include/
  DESTINATION include
)

install(
  TARGETS ugraphviz
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

ament_export_include_directories(include)
ament_export_libraries(ugraphviz)
ament_package()
