void print_int4(int4 v){
    int x1 = (int)v[0];
    int x2 = (int)(v[0]>>32);
    int x3 = (int)v[1];
    int x4 = (int)(v[1]>>32);

    printf("{%d, %d, %d, %d}\n", x1, x2, x3, x4);
}

void print_int8(int8 v){
    int x1 = (int)v[0];
    int x2 = (int)(v[0]>>32);
    int x3 = (int)v[1];
    int x4 = (int)(v[1]>>32);
    int x5 = (int)v[2];
    int x6 = (int)(v[2]>>32);
    int x7 = (int)v[3];
    int x8 = (int)(v[3]>>32);

    printf("{%d, %d, %d, %d, %d, %d, %d, %d}\n", x1, x2, x3, x4, x5, x6, x7, x8);
}

void print_float4(float4 v){
    float x1 = (float)v[0];
    float x2 = (float)v[1];
    float x3 = (float)v[2];
    float x4 = (float)v[3];

    printf("{%f, %f, %f, %f}\n", x1, x2, x3, x4);
}

void print_float8(float8 v){
    float x1 = (float)v[0];
    float x2 = (float)v[1];
    float x3 = (float)v[2];
    float x4 = (float)v[3];
    float x5 = (float)v[4];
    float x6 = (float)v[5];
    float x7 = (float)v[6];
    float x8 = (float)v[7];

    printf("{%f, %f}\n", x1, x2);
}

void print_double2(double2 v){
    double x1 = (double)v[0];
    double x2 = (double)v[1];

    printf("{%f, %f}\n", x1, x2);
}

void print_double4(double4 v){
    double x1 = (double)v[0];
    double x2 = (double)v[1];
    double x3 = (double)v[2];
    double x4 = (double)v[3];

    printf("{%f, %f, %f, %f}\n", x1, x2, x3, x4);
}
