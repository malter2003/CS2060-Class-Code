// Fig. 3.10: fig03_10.c
// Analysis of examination results 
#include <stdio.h>

// function main begins program execution 
int main( void )
{
   // initialize variables in definitions 
   unsigned int passes = 0; // number of passes   
   unsigned int failures = 0; // number of failures 
   unsigned int student = 1; // student counter    
   int result = 0; // one exam result

   // process 10 students using counter-controlled loop 
   while ( student <= 10 ) {
      int scannedValue = 0;
      // prompt user for input and obtain value from user 
      printf( "%s", "Enter result ( 1=pass,2=fail ): " );
      scannedValue = scanf( "%d", &result );
      while ((getchar() != '\n'));

      if ( scannedValue == 1 ) { // if scanf() properly scanned an int
         if ( ( result == 1 ) || ( result == 2 ) ) {
            if ( result == 1 ) { // if result 1, increment passes
               passes = passes + 1;
            } // end if
            else { // otherwise, increment failures
               failures = failures + 1;
            }
            student = student + 1; // increment student counter, only if result is 1 or 2
         }
      }
   } // end while 

   // termination phase; display number of passes and failures 
   printf( "Passed %u\n", passes );
   printf( "Failed %u\n", failures );

   // if more than eight students passed, print "Bonus to instructor!" 
   if ( passes > 8 ) {
      puts( "Bonus to instructor!" );
   } // end if 
} // end function main 




/**************************************************************************
 * (C) Copyright 1992-2013 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

