cmake_minimum_required(VERSION 3.18)
project(MyProjectCommonSubproject LANGUAGES CXX)

find_package(Drogon CONFIG REQUIRED)
find_package(Protobuf CONFIG REQUIRED)
find_package(unofficial-argon2 CONFIG REQUIRED)
find_package(ada CONFIG REQUIRED)
find_package(unofficial-ada-idna CONFIG REQUIRED)

set(PROTO_INCLUDE_DIR "${CMAKE_BINARY_DIR}/gen_include")
set(PROTO_OUT_DIR "${PROTO_INCLUDE_DIR}/common/proto")
file(MAKE_DIRECTORY "${PROTO_OUT_DIR}")

add_custom_command(
  OUTPUT "${PROTO_OUT_DIR}/chat.pb.h" "${PROTO_OUT_DIR}/chat.pb.cc"
  COMMAND protobuf::protoc
    --cpp_out="${PROTO_OUT_DIR}"
    -I "${CMAKE_CURRENT_SOURCE_DIR}/protobuf"
    "${CMAKE_CURRENT_SOURCE_DIR}/protobuf/chat.proto"
  DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/protobuf/chat.proto"
)

add_library(common_lib STATIC
  ${PROTO_OUT_DIR}/chat.pb.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/src/utils/utils.cpp
)

target_include_directories(common_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${PROTO_INCLUDE_DIR}
)

target_precompile_headers(common_lib PRIVATE
    "${CMAKE_SOURCE_DIR}/common/include/pch.h"
)

target_link_libraries(common_lib PUBLIC Drogon::Drogon protobuf::libprotobuf-lite unofficial::argon2::libargon2 ada::ada unofficial::ada-idna::ada-idna)
