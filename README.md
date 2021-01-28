# Vector

## Idea

The idea is to create a tool to facilitate the use of vectors with Intel and Arm processors. For this I create new types in order to use vectors easily.

## About The Project

The project is still under construction.

For the moment, I just have headers file with new type and useful functions (add, mul, sub, ..).

## Compilation

For AVX2 you need to use -mavx2 option

```sh
clang file.c -mavx2
```

# Types

* int4: 4 int of 32 bits
* int8: 8 int of 32 bits
* int16: 16 int of 32 bits (just with AVX512)

<br>

* float4: 4 float of 32 bits
* float8: 8 float of 32 bits
* float16: 16 float of 32 bits (just with AVX512)

<br>

* double2: 2 double of 64 bits
* double4: 4 double of 64 bits
* double8: 8 double of 64 bits (just with AVX512)

# Functions

TYPE ∈ {int4, int8, int16, float4, float8, float16, double2, double4, double8}



## Arithmetic Function

```C
FCT_TYPE(TYPE a, TYPE b)
```

FCT ∈ {add, sub, mul}

For example if you want to add two vectors int8:
```C
int8 a;
int8 b;
int8 c;
c = add_int8(a, b);
```

## Load Functions

```C
load_TYPE({int, float, double} *array)
```

## Store Functions

```C
store_TYPE(TYPE vector, {int, float, double} *array)
```
