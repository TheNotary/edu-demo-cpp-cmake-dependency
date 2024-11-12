file (GLOB_RECURSE SRCS . *.cpp)

# add_library(${PROJECT_NAME}
#     ${SRCS}
# )

add_library(my_dep
    ${SRCS}
)

#add_dependencies(${PROJECT_NAME} ${EXTERNAL_PROJECTS} ${EXTERNAL_TEST_PROJECTS})

add_executable(main
    my_dep.cpp
    main.cpp
)

target_link_libraries(my_dep
   # Add libraries here
   ${PROJECT_NAME}
   ${EXTERNAL_LIBRARIES}
)

# This might be required
install(FILES my_dep.h DESTINATION include/my_dep)
install(TARGETS my_dep EXPORT my_dep-targets DESTINATION lib)
