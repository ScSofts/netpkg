set(source_gen "")
aux_source_directory(./gen/ source_gen)

set(source_src "")
aux_source_directory(./src/ source_src)

add_executable(packc ${source_gen} ${source_src})

add_subdirectory(./lib/)

target_link_libraries(packc PUBLIC antlr4_static)
target_compile_options(packc PUBLIC -DANTLR4CPP_STATIC)
target_include_directories(packc PUBLIC ./lib/runtime/src/)