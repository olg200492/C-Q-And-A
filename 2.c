 /* 19L06.c Using nested structures */
 #include <stdio.h>
struct automobile {
int year;
char model[10];
int engine_power;
double weight;
} sedan = {
  1997,
  "New Model",
  200,
  2345.67};

typedef struct automobile AUTO;
 int main(void)
 {
    printf("%d\n",sedan.year);
    printf("%s\n",sedan.model);
    printf("%d\n",sedan.engine_power);
    printf("%0.2lf\n",sedan.weight);
    return 0;
 }
 