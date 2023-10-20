/*
 * main.c
 *
 * Created: 10/20/2023 6:07:05 PM
 *  Author: NEG
 */ 

#include <xc.h>
#include "SSD.h"
int main(void)
{
	SSD_init();
	
    while(1)
    {
        SSD_Display(8);
    }
}