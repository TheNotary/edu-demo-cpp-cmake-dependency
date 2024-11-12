file (GLOB_RECURSE SRCS . *.cpp)

# add_library(${PROJECT_NAME}
#     ${SRCS}
# )

add_library(my_dep
    ${SRCS}
)

#add_dependencies(${PROJECT_NAME} ${EXTERNAL_PROJECTS} ${EXTERNAL_TEST_PROJECTS})

# This can be removed, but creates a demo executable called main
add_executable(main
    my_dep.cpp
    main.cpp
)

target_link_libraries(my_dep
   # Add libraries here
   ${PROJECT_NAME}
   ${EXTERNAL_LIBRARIES}
)

# Install the headers here
install(FILES my_dep.h
    DESTINATION include/my_dep
)

# Install the library which can be linked here
install(TARGETS my_dep EXPORT my_dep-targets
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)
