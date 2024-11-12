# CMake Consumer/ Dependency Demo - Dependency

This repo is holds the dependency consumed by the sister-demo repo, https://github.com/TheNotary/edu-demo-cpp-cmake-consumer.git



#### Deploy

```
git tag -a v1.0.0 -m "v1.0.0"
git push --tags
```


#### Build

The consumer will automatically build this repo, but to do so manually...

```
cd build
cmake ..
make -j 8

./src/main
```


#### Refs

- cmake template https://github.com/ggarber/cmake-bootstrap/tree/master

