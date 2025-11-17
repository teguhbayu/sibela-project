cmake_minimum_required(VERSION 3.10)


project(sibela)

# add_executable(sibela main.c)
add_executable(sibela main.c components/header.c libs/utils.c model/model.c update/update.c views/drawView.c views/homeView.c data/initDb.c data/staf.c)

add_library(draw SHARED components/header.c)
add_library(utils SHARED libs/utils.c)
add_library(model SHARED model/model.c)
add_library(update SHARED update/update.c)
add_library(view SHARED views/drawView.c)
add_library(home SHARED views/homeView.c)
# add_library(login SHARED views/loginView.c)
add_library(initDb SHARED data/initDb.c)
add_library(staf SHARED data/staf.c)


target_link_libraries(sibela PRIVATE pdcurses)