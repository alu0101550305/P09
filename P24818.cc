/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Juan González Toledo
 * @date 1 Dic 2022
 * @brief  Parity of the number of divisors.
 *
 */
#include<iostream>
#include<stdio.h>
int main() {
  int n1, n2, i, resto;
  int x = 0;
  std::cin >> n1;
  for (i=1; i<=n1; i++) {
    resto = n1%i;
    if (resto==0) {
      x++;
} }        
  int y = 0;
  std::cin >> n2; 
  for (i=1; i<=n2; i++) {
    resto = n2%i;
    if (resto==0) {
      y++; 

} 
}
  if (x % 2 == 0) {
    std::cout << n1 << ": even" << std::endl;
}  
  else {
    std::cout << n1 << ": odd" << std::endl; 
}
 if (y % 2 == 0) {
    std::cout << n2 << ": even" << std::endl;
}
  else {
    std::cout << n2 << ": odd" << std::endl;
}  
return 0;
}
 
