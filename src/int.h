#ifndef INT32_H
#define INT32_H

typedef __m128i int4;
typedef __m256i int8;
typedef __m512i int16;


/* BEGIN 128 bits */

int4 load_int4(int *f){
    return _mm_maskload_epi32(f, _mm_setr_epi32(-1, -1, -1, -1));
}

void store_int4(int4 v, int *a){
    _mm_maskstore_epi32(a, _mm_setr_epi32(-1, -1, -1, -1), v);
}

int4 add_int4(int4 a, int4 b){
  return _mm_add_epi32(a, b);
}

int4 sub_int4(int4 a, int4 b){
  return _mm_sub_epi32(a, b);
}

int4 mul_int4(int4 a, int4 b){
  return _mm_mullo_epi32(a, b);
}

/* END 128 bits */

/* BEGIN 256 bits */

int8 load_int8(int *f){
    return _mm256_maskload_epi32(f, _mm256_setr_epi32(-1, -1, -1, -1, -1, -1, -1, -1));
}

void store_int8(int8 v, int *a){
    _mm256_maskstore_epi32(a, _mm256_setr_epi32(-1, -1, -1, -1, -1, -1, -1, -1), v);
}

int8 add_int8(int8 a, int8 b){
  return _mm256_add_epi32(a, b);
}

int8 sub_int8(int8 a, int8 b){
  return _mm256_sub_epi32(a, b);
}

int8 mul_int8(int8 a, int8 b){
  return _mm256_mullo_epi32(a, b);
}

int8 abs_int8(int8 a){
  return _mm256_abs_epi32(a);
}

/* END 256 bits */

/* BEGIN 512 bits */


/* END 512 bits */


#endif //VECTOR_H
