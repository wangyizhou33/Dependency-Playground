# Dependency Playground

## FetchContent

#### How to build
```sh
    $ mkdir build
    $ cd build
    $ cmake ..
    $ make -j12
    $ ./main
```

## ExternalProject

#### How to build
```sh
    $ mkdir build
    $ cd build
    $ cmake ..
    $ make -j12
    $ ./main
```

## Conan

See [Conan tutorial](https://docs.conan.io/2/tutorial.html) to understand the basic concept of `Conan`.

## Install Conan

```sh
    $ pip install conan
    $ source ~/.profile
```


#### How to build
```sh
    $ conan install . --output-folder=build --build=missing
    $ cd build
    $ cmake ..
    $ make -j12
    $ ./main
```

#### Conan Center

https://conan.io/center/recipes/nlohmann_json?version=3.11.2