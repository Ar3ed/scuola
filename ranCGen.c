#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void print_classmates(int max, int min){
   int nums[max],i=0,t=0;

   for ( i ; i <=max; i++){
       
       
        nums[i]= (rand() % (max - min + 1)) + min;

         for ( t; t < i; t++)
         {
             while (nums[t]==nums[i]){
                nums[i]=(rand() % (max - min + 1)) + min;
                t=-1;
             }
         }
         t = 0;
            
        
   switch (nums[i])
     {
     case 0:
         printf("%d:ADAMO\n",i+1);
         break;
     case 1:
         printf("%d:BONIFACI\n",i+1);
         break;
     case 2:
         printf("%d:BRULLO\n",i+1);
         break;
     case 3:
         printf("%d:CARBONE\n",i+1);
         break;
     case 4:
         printf("%d:CARUSO\n",i+1);
         break;
     case 5:
         printf("%d:CAVALLO\n",i+1);
         break;
      case 6:
         printf("%d:CHIOFALO\n",i+1);
         break;
     case 7:
         printf("%d:CIOACA\n",i+1);
         break;
     case 8:
         printf("%d:DI MARTINO\n",i+1);
         break;
     case 9:
         printf("%d:DI ROSA\n",i+1);
         break;
     case 10:
         printf("%d:DITTA\n",i+1);
         break;
     case 11:
         printf("%d:DONZELLI\n",i+1);
         break;
     case 12:
         printf("%d:MARCELLINO\n",i+1);
         break;
     case 13:
         printf("%d:MONGIOVI'\n",i+1);
         break;
     case 14:
         printf("%d:STIMOLO\n",i+1);
         break;
     case 15:
         printf("%d:SALLEMI\n",i+1);
         break;
     case 16:
         printf("%d:SERGES\n",i+1);
         break;
     case 17:
         printf("%d:ZISA\n",i+1);
         break;        
     default:
         printf("\n");
         break;
     }
   }

    
}
int main (int argc, char* argv[]){
 printf("Inserici la materia : ");
 char m[10];
 scanf("%s",m);
 char materia[30] = "\nVolontari di ";

 srand(time(0));             // set a seed for the rand generation 
 printf("%s %s :\n",materia ,m);
 print_classmates(17,0);         // set the max and min values 
 printf("19:GRAVINA\n");
 printf("20:PALUMBO");
       
       
return 0;
}