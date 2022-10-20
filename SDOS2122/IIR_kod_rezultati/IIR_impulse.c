#include<stdio.h>

float impuls_odziv[512] = { 0 };

float temp[512] = { 0 };

void display(float* niz, float velicina) {

	int a;
	for (a = 0; a < velicina; a++)
		printf("%0.4f, \n", niz[a]);
}

void calculate(float* y, float* temp)
{
	int i = 0;

	while (i < 512) {

		//y[n]=x[n-5]-0.61x[n-7]+0.09x[n-9]+0.45y[n-2]+0.2537y[n-4]-0.306y[n-6]-0.2567y[n-8]-0.02048y[n-10]
		//Pomak za n->n+10:
		//y[n+6]=x[n+5]-0.61x[n+3]+0.09x[n+1]+0.45y[n+8]+0.2537y[n+6]-0.306y[n+4]-0.2567y[n+2]-0.02048y[n]

		if (i == 5) {

			temp[i + 10] = 0.45 * temp[i + 8] + 0.2537 * temp[i + 6] - 0.306 * temp[i + 4] - 0.2567 * temp[i + 2] - 0.02048 * temp[i] + 1 * 1;

		}
		else if (i == 7) {

			temp[i + 10] = 0.45 * temp[i + 8] + 0.2537 * temp[i + 6] - 0.306 * temp[i + 4] - 0.2567 * temp[i + 2] - 0.02048 * temp[i] - 0.61 * 1;

		}
		else if (i == 9) {

			temp[i + 10] = 0.45 * temp[i + 8] + 0.2537 * temp[i + 6] - 0.306 * temp[i + 4] - 0.2567 * temp[i + 2] - 0.02048 * temp[i] + 0.09 * 1;
		}

		else temp[i + 10] = 0.45 * temp[i + 8] + 0.2537 * temp[i + 6] - 0.306 * temp[i + 4] - 0.2567 * temp[i + 2] - 0.02048 * temp[i];

		y[i] = temp[i + 10];

		i++;
	}
}

int main(void)
{
	calculate(impuls_odziv, temp);
	printf("Impulsni odziv IIR filtra: \n");
	display(impuls_odziv, 512);

	return 0;
}
