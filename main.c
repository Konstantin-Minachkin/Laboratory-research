#include <stdio.h> 
#include <stdlib.h> 
#include "windows.h" 

int main(int argc, char *argv[]) { 
float a; char b, c ; 
scanf ("%f", &a); c=getchar ();
if (c== '\n') b = '\n';
else scanf ("%c", &b);
if (b == 'C') {
if (a < -273.15) printf ("Error"); 
else
printf ("%.2f K\n %.2f F\n", 273.15 + a, a*1.8+32); }
 else {
if (b == 'F') {
if (a < -459.67) printf ("Error"); 
else 
printf ("%.2f C\n %.2f K\n", (a-32)/1.8, 273.15+(a-32)/1.8); }
else {
if (b == 'K') {
if (a < 0) printf ("Error");
else
printf ("%.2f C\n %.2f F\n", a-273.15, (a-273.15)*1.8+32); }
else {
if (b == '\n') 
printf ("C:\n");
if (a < -273.15) printf ("Error\n"); 
else printf ("%.2f K\n %.2f F\n", 273.15 + a, a*1.8+32);
printf ("F:\n");
if (a < -459.67) printf ("Error\n"); 
else printf ("%.2f C\n %.2f K\n", (a-32)/1.8, 273.15+(a-32)/1.8 );
printf ("K:\n");
if (a < 0) printf ("Error\n");
else printf ("%.2f C\n %.2f F", a-273.15, (a-273.15)*1.8+32 ); 
} } }
return 0; }
