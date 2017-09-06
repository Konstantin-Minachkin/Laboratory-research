# Laboratory-research
Первая лабораторная по процедурномму программированию 
#include <stdio.h> 
#include <stdlib.h> 
#include "windows.h" 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 

int main(int argc, char *argv[]) { 
float a; int b = 0; 
scanf ("%f", &a); 
b = getchar();

if (b == 'C') 
printf ("%.2f K\n %.2f F\n", 273.15 + a, a*1.8+32); 
 else {
 
if (b == 'F') 
printf ("%.2f C\n %.2f K\n", (a-32)/1.8, 273.15+(a-32)/1.8); 
else {
if (b == 'K') 
printf ("%.2f C\n %.2f F\n", a-273.15, (a-273.15)*1.8+32); 
else {
if (b == 0) { 
printf ("C:\n"); 
printf ("%.2f K\n %.2f F\n", 273.15 + a, a*1.8+32); 
printf ("F:\n"); 
printf ("%.2f C\n %.2f K\n", (a-32)/1.8, 273.15+(a-32)/1.8); 
printf ("K:\n"); 
printf ("%.2f C\n %.2f F\n", a-273.15, (a-273.15)*1.8+32); } 
} } }
system("pause"); 
return 0; 
}
