#include <stdio.h>
#include <math.h>

int main() {
    float p1x;
    float p1y;
    float p2x;
    float p2y;
    float distance;

  scanf("%f %f", &p1x, &p1y);
  scanf("%f %f", &p2x, &p2y);

  distance = sqrt(pow(p2x - p1x,2) + pow(p2y - p1y,2));

  printf("%0.4f\n", distance);
}
