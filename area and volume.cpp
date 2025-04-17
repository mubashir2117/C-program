#include <stdio.h>
#define pi 3.14 

float areaOfTriangle,volumeOfSphere; 	 
int radius,base,height; 

 main() 
 { 	 	 	 	 
printf("\n\t Enter Base of a triangle? "); 
scanf("%d",&base); 
 
printf("\n\t Enter Height of a triangle? "); 
scanf("%d",&height); 
 
areaOfTriangle=(1.0/2)*base*height; 
 
printf("\n\t Enter radius of an sphere? "); 
scanf("%d",&radius); 
 
volumeOfSphere= (4.0/3)*pi*(radius*radius*radius); 
 
printf("\n\t Area of Triangle is %f  with %d base and %d height ", 
areaOfTriangle,base,height);
 
printf("\n\t Volume of Sphere is %f  with %d radius",radius,volumeOfSphere);
 printf("\n\t\t\t Press Enter to this program");
return 0;
 	 	 	 
} 	
 	

