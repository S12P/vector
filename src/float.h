#ifndef FLOAT_H
#define FLOAT_H

typedef __m128 float4;
typedef __m256 float8;
typedef __m512 float16;

/* BEGIN 128 bits */

float4 load_float4(float *f){
    return _mm_maskload_ps(f, _mm_setr_epi32(-1, -1, -1, -1));
}

void store_float4(float4 v, float *a){
    _mm_maskstore_ps(a, _mm_setr_epi32(-1, -1, -1, -1), v);
}

float4 add_float4(float4 a, float4 b){
  return _mm_add_ps(a, b);
}

float4 sub_float4(float4 a, float4 b){
  return _mm_sub_ps(a, b);
}

float4 mul_float4(float4 a, float4 b){
  return _mm_mul_ps(a, b);
}

/* END 128 bits */

/* BEGIN 256 bits */

float8 load_float8(float *f){
    return _mm256_maskload_ps(f, _mm256_setr_epi32(-1, -1, -1, -1, -1, -1, -1, -1));
}

void store_float8(float8 v, float *a){
    _mm256_maskstore_ps(a, _mm256_setr_epi32(-1, -1, -1, -1, -1, -1, -1, -1), v);
}

float8 add_float8(float8 a, float8 b){
  return _mm256_add_ps(a, b);
}

float8 sub_float8(float8 a, float8 b){
  return _mm256_sub_ps(a, b);
}

float8 mul_float8(float8 a, float8 b){
  return _mm256_mul_ps(a, b);
}


/* END 256 bits */

/* BEGIN 512 bits */


/* END 512 bits */

#endif //VECTOR_H
