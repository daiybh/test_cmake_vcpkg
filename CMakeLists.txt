cmake_minimum_required (VERSION 3.16)
set(VCPKG_TARGET_ARCHITECTURE x64)
set(VCPKG_CRT_LINKAGE static)
set(VCPKG_LIBRARY_LINKAGE static)

project ("tttt")
 find_package(CURL CONFIG REQUIRED)
 find_package(Boost COMPONENTS filesystem REQUIRED)

 message("this is ${Boost_INCLUDE_DIRS}"   ${Boost_LIBRARIES})
add_executable(tt "libcurl_ftp.cpp" "main.cpp")

#target_include_directories(tt PRIVATE ${Boost_INCLUDE_DIRS})
 target_link_libraries(tt PRIVATE CURL::libcurl ${Boost_LIBRARIES})