#include <stdio.h>

#define alumno 5
#define calificacion 5

void ingresarCalificaciones(int calificaciones[][calificacion]) {
    int a, j;

    for (a = 0; a < alumno; a++) {
        printf("Alumno %d:\n", a + 1);
        for (j = 0; j < calificacion; j++) {
            printf("Ingrese la calificacion %d: ", j + 1);
            scanf("%d", &calificaciones[a][j]);
        }
    }
}

void calcularPromedios(const int calificaciones[][calificacion], float promedios[]) {
    int a, j;

    for (a = 0; a < alumno; a++) {
        int suma = 0;
        for (j = 0; j < calificacion; j++) {
            suma += calificaciones[a][j];
        }
        promedios[a] = (float) suma / calificacion;
    }
}

void mostrarPromedios(const float promedios[]) {
    int a;

    printf("\nPromedios:\n");
    for (a = 0; a < alumno; a++) {
        printf("Alumno %d: %.2f\n", a + 1, promedios[a]);
    }
}

int main() {
    int calificaciones[alumno][calificacion];
    float promedios[alumno];

    ingresarCalificaciones(calificaciones);
    calcularPromedios(calificaciones, promedios);
    mostrarPromedios(promedios);

    return 0;
}
