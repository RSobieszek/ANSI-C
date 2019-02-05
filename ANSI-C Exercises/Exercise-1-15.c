#include <stdio.h>
int celcius(int fahr);

int main() 
{
  int fahr;
  
  for (fahr = 0; fahr <= 300; fahr = fahr + 20)
  {
    printf("%3d %3d\n", fahr, celcius(fahr));
  }
}

int celcius(int fahr)
{
  int celc;
  
  celc = (5.0/9.0)*(fahr-32);
  return celc;
}


//kod do zmiany temp poniżej:

/*
#include <stdio.h>

int main() {
  
  int fahr;
  
  for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }
    
  
}
*/