/*************************************************************************/
/* File:        project3.c                                               */
/* Description: User project #3 - empty project directory for project    */
/*              developement                                             */
/* Date:        01-2015                                                  */
/*************************************************************************/
#include <math.h>
#include <stdio.h>
#include "Xkw/Xkw.h"
#include "roger.h"
#include "simulate.h"
#include "control.h"
#include "modes.h"

void project3_control(roger, time)
double compute_average_location_of_red_pixels();
Robot* roger;
double time;
{ 
 


}
double compute_average_location_of_red_pixels(){
int count=0;
  for (i=0;i<2;i++){
    for (j=0;j<127;j++){
      if(roger->image[i][j][0]==255){
        count=count++;
      }
    }
  }
  average=
}

/************************************************************************/
void project3_reset(roger)
Robot* roger;
{ }

// prompt for and read user customized input values
void project3_enter_params() 
{
  printf("Project 4 enter_params called. \n");
}

//function called when the 'visualize' button on the gui is pressed
void project3_visualize(roger)
Robot* roger;
{ }
