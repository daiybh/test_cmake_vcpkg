cmake_minimum_required (VERSION 3.16)

project ("tttt${VCPKG_TARGET_TRIPLET}")

message(status "bbbbbbb  CMAKE_C_COMPILER  ${CMAKE_C_COMPILER}")
message(status "aaaaaaaaaaCMAKE_TOOLCHAIN_FILE ${CMAKE_TOOLCHAIN_FILE}")
message(status "aaaaaaaaaaVCPKG_TARGET_TRIPLET ${VCPKG_TARGET_TRIPLET}")
find_package(CURL CONFIG REQUIRED)
find_package(Boost COMPONENTS filesystem REQUIRED)
message("this is ${Boost_INCLUDE_DIRS}"   ${Boost_LIBRARIES})
add_executable(tt  "main.cpp" "libcurl_ftp.cpp")

#set runtime /mt /mtd
set_property(TARGET tt PROPERTY  MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

target_link_libraries(tt PRIVATE CURL::libcurl ${Boost_LIBRARIES})
