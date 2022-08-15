# Minimal gtest example with conan
Have you ever tried to unit test your project with gtest? Did you have problems by getting gtest's source code, compiling it then linking it? With conan all that hassle is away

# Steps to get this example working

## Prerequisities

1. installed python
2. installed conan
3. installed cmake
4. installed ninja or make or Visual Studio

## Working with this repository

Here are the 7 steps you must follow:

### 1. clone this repository and cd into it

```git clone https://github.com/keszegrobert/minimal_gtest_example_with_conan.git```

```cd minimal_gtest_example_with_conan```

### 2. make a build directory which will hold the temporary build files

```mkdir build```

```cd build```

### 3. using the conanfile.txt build the requirements and put them into conan's cache. 
The path provided to the conan command should contain a conanfile.txt or conanfile.py

```conan install ../  --generator=virtualenv --build=missing```


### 4. activate the virtual environment 
... created by the previous step. The paths will be set to contain everything needed for the development

On *nix systems use: ```source activate.sh```

On Windows* systems use: ```activate.bat```

### 5. generate the build files 
...using the contents of the CMakeLists.txt file. The path provided to the cmake command should contain the CMakeLists.txt file

```cmake .. -G Ninja -DCMAKE_BUILD_TYPE=Release```

### 6. Build the generated solution

```cmake --build .```

7. Run the console application

```./gtest_sample```
