#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "./agcv.h"

int main(void){
  raspiCV Camera1;

  Camera1.capture(0);
  Camera1.compute();


  return 0;
}
