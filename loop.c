#include<stdio.h>
#include<stdlib.h>

void loop_fun() {
  puts("Hello, World!");
  loop_fun();
}

int main(int argc, const char *argv[]) {
  loop_fun();
  return 0;
}
