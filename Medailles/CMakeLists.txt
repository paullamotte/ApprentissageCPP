cmake_minimum_required(VERSION 3.16)

project(1er_cours_de_la_deuxieme_annee_de_bts_omg_cest_oncroyable LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(1er_cours_de_la_deuxieme_annee_de_bts_omg_cest_oncroyable main.cpp)

include(GNUInstallDirs)
install(TARGETS 1er_cours_de_la_deuxieme_annee_de_bts_omg_cest_oncroyable
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
