#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
int marks[6],marksObtained=0,counter; char grade[5],remarks[20]; float percentage(int);   // user function declaration. 
const grandTotal=600; 
main() 
{ 
float percent=1.0; 
printf("\n______________________________"); printf("\n This is sample Practical No.12\n"); 
printf("Enter Marks of Student below"); 
 
for(counter=0;counter<6;counter++) 
{ 
printf("\n Enter student subject[%d] marks? ",counter+1); 
scanf("%d",&marks[counter]); 
 
marksObtained=marksObtained+marks[counter]; 
} 
 
percent=percentage(marksObtained); 
 
printf("Showing the Prepared Marks sheet of Student"); 
 
for(counter=0;counter<6;counter++) 
{ 
printf("\nStudent subject[%d] marks = %d",counter+1,marks[counter]); 
 } 
printf("\n Student Marks of all subjects= %d",marksObtained); printf("\n Student Percentage= %.2f",percent); 
 
if(percent<33) 
{ 
strcpy(grade,"FAIL");strcpy(remarks,"Very BAD"); 
printf("\n Grade is %s, \n\t Remarks are %s",grade,remarks); 
} 
else if(percent>=33 && percent<40) 
{ 
strcpy(grade,"E");strcpy(remarks,"BAD"); 
printf("\n Grade is %s, \n\t Remarks are %s",grade,remarks); 
} 
else if(percent>=40 && percent<50) 
{ 
strcpy(grade,"D");strcpy(remarks,"Unsatisfactory"); printf("\n Grade is %s, \n\t Remarks are %s",grade,remarks); 
 
}else if(percent>=50 && percent<60) 
{ 
strcpy(grade,"C");strcpy(remarks,"Just Satisfactory"); printf("\n Grade is %s, \n\t Remarks are %s",grade,remarks); 
} 
else if(percent>=60 && percent<70) 
{ 
strcpy(grade,"B");strcpy(remarks,"Good"); 
printf("\n Grade is %s, \n\t Remarks are %s",grade,remarks); 
 } 
else if(percent>=70 && percent<80) 
{ 
strcpy(grade,"A");strcpy(remarks,"Very Good"); printf("\n Grade is %s, \n\t Remarks are %s",grade,remarks); 
 } 
else if(percent>=80 && percent<=100) 
{ 
strcpy(grade,"A+");strcpy(remarks,"EXCELLENT"); 
printf("\n Grade is %s, \n\t Remarks are %s",grade,remarks); 
 } else 
{ 
strcpy(grade,"X");strcpy(remarks,"Result With held"); 
printf("\n Grade is %s, \n\t Remarks are %s",grade,remarks); 
 
} 
} 
float percentage(int a) 
{ 
return (a*100.0/grandTotal); 
} 
 

