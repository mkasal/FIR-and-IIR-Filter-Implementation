#include<stdio.h>

#define Nx 512
#define Ny 512
#define Nh 100

float xImpulse[Nx] = { 0 };
float yImpulse[Ny] = { 0 };


float h_FIR[100] = {
         0,
         0,
         0,
         0,
         0,
    1.0000,
    0.0000,
   - 0.1600,
    0.0000,
    0.2717,
    0.0000,
   - 0.2244,
    0.0000,
   - 0.2398,
   - 0.0000,
   - 0.2274,
   - 0.0000,
   - 0.1610,
   - 0.0000,
   - 0.0047,
   - 0.0000,
    0.0928,
    0.0000,
    0.1531,
    0.0000,
    0.1399,
    0.0000,
    0.0779,
    0.0000,
   - 0.0001,
    0.0000,
   - 0.0643,
   - 0.0000,
   - 0.0918,
   - 0.0000,
   - 0.0805,
   - 0.0000,
   - 0.0414,
   - 0.0000,
    0.0056,
   - 0.0000,
    0.0415,
    0.0000,
    0.0553,
    0.0000,
    0.0460,
    0.0000,
    0.0214,
    0.0000,
   - 0.0064,
    0.0000,
   - 0.0266,
   - 0.0000,
   - 0.0331,
   - 0.0000,
   - 0.0261,
   - 0.0000,
   - 0.0108,
   - 0.0000,
    0.0056,
   - 0.0000,
    0.0168,
    0.0000,
    0.0197,
    0.0000,
    0.0147,
    0.0000,
    0.0053,
    0.0000,
   - 0.0043,
    0.0000,
   - 0.0105
   - 0.0000,
   - 0.0116,
   - 0.0000,
   - 0.0082,
   - 0.0000,
   - 0.0024,
   - 0.0000,
    0.0032,
    0.0000,
    0.0065,
    0.0000,
    0.0068,
    0.0000,
    0.0046,
    0.0000,
    0.0010,
    0.0000,
   - 0.0022,
   - 0.0000,
   - 0.0040,
   - 0.0000,
   - 0.0040,
   - 0.0000,
   - 0.0025,
   - 0.0000,
   - 0.0004,
   - 0.0000,
    0.0015 };

void ImpulseGen(float* impulse, int sizeNx)
{
    impulse[0] = 1.0;
    int i = 1;
    while (i < sizeNx) {
        impulse[i] = 0;
        i++;
    }
}


void conv(float* x, float* h, float* y, int sizeNx, int sizeNh)
{
    int N = sizeNx + sizeNh - 1;
    int n, i;
    for (n = 0; n < N; n++) {
        for (i = 0; i < sizeNx; i++) {
            if (((n - i) >= 0) && ((n - i) < sizeNh))
                y[n] += x[i] * h[n - i];
        }
    }
}


void printArray(float* array, int sizeofArray) {
    int i = 0;

    while (i < sizeofArray) {
        printf("%0.4f, \n", array[i]);
        i++;
    }

}

int main(void)
{
    ImpulseGen(xImpulse, Nx);
    conv(xImpulse, h_FIR, yImpulse, Nx, Nh);

    printf("Impulsni odziv FIR filtra: \n");
    printArray(yImpulse, Ny);


    return 0;
}
