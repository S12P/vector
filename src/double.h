#ifndef DOUBLE_H
#define DOUBLE_H

typedef __m128d double2;
typedef __m256d double4;
typedef __m512d double8;

/* BEGIN 128 bits */

double2 load_double2(double *f){
    return _mm_maskload_pd(f, _mm_setr_epi32(-1, -1, -1, -1));
}

void store_double2(double2 v, double *a){
    _mm_maskstore_pd(a, _mm_setr_epi32(-1, -1, -1, -1), v);
}

double2 add_double2(double2 a, double2 b){
  return _mm_add_pd(a, b);
}

double2 sub_double2(double2 a, double2 b){
  return _mm_sub_pd(a, b);
}

double2 mul_double2(double2 a, double2 b){
  return _mm_mul_pd(a, b);
}

/* END 128 bits */

/* BEGIN 256 bits */

double4 load_double4(double *f){
    return _mm256_maskload_pd(f, _mm256_setr_epi32(-1, -1, -1, -1, -1, -1, -1, -1));
}

void store_double4(double4 v, double *a){
    _mm256_maskstore_pd(a, _mm256_setr_epi32(-1, -1, -1, -1, -1, -1, -1, -1), v);
}

double4 add_double4(double4 a, double4 b){
  return _mm256_add_pd(a, b);
}

double4 sub_double4(double4 a, double4 b){
  return _mm256_sub_pd(a, b);
}

double4 mul_double4(double4 a, double4 b){
  return _mm256_mul_pd(a, b);
}

/* END 256 bits */

/* BEGIN 512 bits */


/* END 512 bits */

#endif //VECTOR_H
