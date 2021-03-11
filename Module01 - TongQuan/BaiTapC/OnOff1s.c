/**
 * --COPYRIGHT--,
 * Copyright (c) 2021, TAPIT Engineering Co., Ltd.
 * https://tapit.vn
 *
 ******************************Toggle USER LED**********************************
 *  Description: Print to the screen the LED status
 *
 *  Version:  	1.0
 *  Author: 	Hang Tran
 *  Release: 	March 8, 2021
 *******************************************************************************
 */

// C function showing how to do time delay 
#include <stdio.h> 
// To use time library of C 
#include <time.h> 

void delay(int number_of_seconds) 
{ 
	// Converting time into milli_seconds 
	int milli_seconds = 1000 * number_of_seconds; 

	// Storing start time 
	clock_t start_time = clock(); 

	// looping till required time is not achieved 
	while (clock() < start_time + milli_seconds) 
		; 
} 

// Driver code to test above function 
int main() 
{ 
    int ledStatus = 1;
	while (1)
    {
		// delay of one second 
		delay(1000); 
		if (ledStatus) 
            {
             printf("LED ON\n"); 
            }
          else 
            {
             printf("LED OFF\n"); 
            }
        ledStatus = !ledStatus;
	
    }

}