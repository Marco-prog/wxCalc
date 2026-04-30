cmake_minimum_required(VERSION 3.10)

# Prende il nome della cartella dove si trova questo file CMakeLists.txt
get_filename_component(PROJECT_ID "${CMAKE_CURRENT_LIST_DIR}" NAME)

# Setta il nome dell'eseguibile
project(${PROJECT_ID})

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 1. Trova wxWidgets
find_package(wxWidgets REQUIRED COMPONENTS core base)
include(${wxWidgets_USE_FILE})

# 2. Specifica la cartella degli header (FONDAMENTALE per Zed)
include_directories(include)

# 3. Lista file comuni (tutti i .cpp)
file(GLOB SOURCES "src/*.cpp")

# 4. Gestione specifica per Windows
if(WIN32)
    # Aggiunge il file di risorse alla lista dei sorgenti
    list(APPEND SOURCES "win32/app.rc")
    # windres usa win32/ come base per trovare res/ e app.manifest
    set(CMAKE_RC_FLAGS "-I ${CMAKE_CURRENT_SOURCE_DIR}/win32")

    # Se vuoi evitare la console nera dietro l'app grafica
    set(EXE_TYPE WIN32)
else()
    # Su Mac/Linux non servono file extra
    set(EXE_TYPE "")
endif()

# 5. Creazione eseguibile
add_executable(${PROJECT_NAME} ${EXE_TYPE} ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
