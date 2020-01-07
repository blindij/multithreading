#include <iostream>
#include <omp.h>
#include <string>

int main(int argc, char *argv[]){
   std::cout << "number of available processors: " << omp_get_num_procs() << std::endl;
   return 0;
}
