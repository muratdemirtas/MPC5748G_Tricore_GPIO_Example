/*
 * main implementation: use this 'C' sample to create your own application
 *
 */

#include "derivative.h" /* include peripheral declarations */

extern void xcptn_xmpl(void);


void init_demo_pins()
{
	SIUL2.MSCR[7].B.SSS = 0;
	SIUL2.MSCR[7].B.OBE = 1;
	SIUL2.MSCR[7].B.SRC = 3;

}

int main(void)
{
	volatile int counter = 0;
	AXBS_0.PORT[3].CRS.B.ARB = 1;  /* Round-robin (rotating) priority */
	init_demo_pins();
	xcptn_xmpl ();              /* Configure and Enable Interrupts */
	int i = 0;
	/* Loop forever */
	for(;;) {	   
	   	for( i= 0 ; i <10000;i++)
	   	{
	   		SIUL2.GPDO[7].R = 0x0;                              /* clear GPIO[188] */
	   	}

	   	for(i = 0 ; i <10000;i++)
	   	{
	   		SIUL2.GPDO[7].R = 0x1;                              /* clear GPIO[188] */
	   	}
	}
}
