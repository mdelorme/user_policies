# Prototype for User Policies definition

## Goal 

The goal of this repo is to provide a proof of concept of a Cmake-friendly way of defining a file for user-policies so a default file of behaviours can be replaced by another defined by the user.

## Compilation and execution

The project compiles with CMake. First create a build folder and move there: 

```
mkdir build
cd build
``` 

Default behaviour will use the user policies defined in the default file (`src/user_policy.cpp`):

```
cmake ..
make -j
./user_policies
```

and will yield the following results:

```
User Policies test !
Hello World
0.005
10.004
```

User policies can be defined by providing the path to the file using the variable `USER_POLICY`. There are two example of those in the `policies` folder:

```
cmake -DUSER_POLICY=../policies/policy2.cpp ..
make -j
./user_policies
```

will return :

```
User Policies test !
I want a totally different text !
20 100
0.5
```


