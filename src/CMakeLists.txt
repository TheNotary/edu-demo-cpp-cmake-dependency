file (GLOB_RECURSE SRCS . *.cpp)

add_library(${PROJECT_NAME}
    ${SRCS}
)

# If any EXTERNAL_PROJECTS
add_dependencies(${PROJECT_NAME} ${EXTERNAL_PROJECTS} ${EXTERNAL_TEST_PROJECTS})

# This can be removed, but creates a demo executable called main
add_executable(main
    my_dep.cpp
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
   ${EXTERNAL_LIBRARIES}
)

# Install the headers here
install(FILES my_dep.h
    DESTINATION include/my_dep
)

# Install the library which can be linked here
install(TARGETS ${PROJECT_NAME} EXPORT my_dep-targets
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)
