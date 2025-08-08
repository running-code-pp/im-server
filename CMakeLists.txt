cmake_minimum_required(VERSION 3.10)

add_subdirectory(${CMAKE_SOURCE_DIR}/lib-core)
add_subdirectory(${CMAKE_SOURCE_DIR}/lib-proto)
add_subdirectory(${CMAKE_SOURCE_DIR}/node-dbproxy)
add_subdirectory(${CMAKE_SOURCE_DIR}/node-fileserver)
add_subdirectory(${CMAKE_SOURCE_DIR}/node-imgserver)
add_subdirectory(${CMAKE_SOURCE_DIR}/node-msgserver)
add_subdirectory(${CMAKE_SOURCE_DIR}/node-routeserver)


# add_executable(main.cpp)
# 在 lib-core/CMakeLists.txt 中

# 设置 TBB 的 CMake 配置文件路径
set(TBB_DIR ${CMAKE_SOURCE_DIR}/third-party/oneTBB/build/install/lib/cmake/TBB)
# 设置 yaml-cpp 的 CMake 配置文件路径
set(yaml-cpp_DIR ${CMAKE_SOURCE_DIR}/third-party/yaml-cpp/build/install/share/cmake/yaml-cpp)

find_package(TBB REQUIRED CONFIG)


# # 链接 TBB
# target_link_libraries(libcore TBB::tbb)



# # 查找 yaml-cpp
# find_package(yaml-cpp REQUIRED CONFIG)

# # 链接
# target_link_libraries(libcore yaml-cpp::yaml-cpp)