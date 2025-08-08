project(lib-core VERSION 1.0)

# 设置C++标准
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 定义头文件目录
include_directories(${PROJECT_SOURCE_DIR}/include)

# 查找所有源文件并添加到变量中
file(GLOB SOURCES "src/*.cpp")

# 创建共享库（动态库）
add_library(${PROJECT_NAME} SHARED ${SOURCES})

# 链接其他库
 target_link_libraries(${PROJECT_NAME} pthread)

# 安装规则，如果需要安装的话
install(TARGETS ${PROJECT_NAME}
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION bin)

# 安装头文件
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/
        DESTINATION include/${PROJECT_NAME})