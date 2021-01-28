#include "vector.h"

int main(int argc, char *argv[]){

  /* Test int */

  int int_array1[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 ,15, 16};
  int int_array2[8] = {2, 2, 2, 2, 2, 2, 2, 2};

  int8 int_vector1 = load_int8(&int_array1[4]);
  int8 int_vector2 = load_int8(&int_array2[0]); // load_int8(&int_array2) is the same

  int8 int_vector3 = add_int8(int_vector1, int_vector2);

  print_int8(int_vector3);

  /* Test float */

  float float_array1[8] = {1.4, 1.2, 1.5, 1.6, 1.3, 1.2, 1.2, 1.2};
  float float_array2[8] = {4.2, 1.2, 5.2, 1.2, 1.2, 1.2, 1.2, 1.2};

  float8 float_vector1 = load_float8(&float_array1[4]);
  float8 float_vector2 = load_float8(&float_array2[0]);

  float8 float_vector3 = add_float8(float_vector1, float_vector2);

  print_float8(float_vector3);

  /* Test double */

  double double_array1[8] = {1.4, 1.2, 1.5, 1.6, 1.3, 1.2, 1.2, 1.2};
  double double_array2[8] = {4.2, 1.2, 5.2, 1.2, 1.2, 1.2, 1.2, 1.2};

  double4 double_vector1 = load_double4(&double_array1[4]);
  double4 double_vector2 = load_double4(&double_array2[0]);

  double4 double_vector3 = add_double4(double_vector1, double_vector2);

  print_double4(double_vector3);


  return 0;
}
