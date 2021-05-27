#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int);

int main(void) {
  float pi;
  for (int i=500; i<1000; i++) {
    pi = wallis_pi(i);
    assert(abs(pi - M_PI) < 0.01);
  }
}

