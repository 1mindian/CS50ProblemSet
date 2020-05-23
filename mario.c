#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int n = 0;
  //int counter = 0;
  int i = 0;
  int height = 0;
  while ( n < 1 || n > 8)
  {
    
    n = get_int ("Choose a positive number between 1 and 8.\n");
   
  }
    
     
     
         
       for ( int row = 0; row < n; row++)
          {
               for( int counter = 0; counter < n-row; counter++)
                  {
                  printf("#");
        
                  }
                  printf("\n");
         }
   
  
   }




      
   
    

