#include <stdio.h>
#include <stdlib.h>

int main() {
const float VALORHORA=10.0;
int horas;
float a_receber;
printf("Entre numero de horas trabalhadas: ");
scanf("%d", &horas );
a_receber = horas * VALORHORA;
printf("A receber: %.2f\n", a_receber);

system("pause");
return 0;
}
