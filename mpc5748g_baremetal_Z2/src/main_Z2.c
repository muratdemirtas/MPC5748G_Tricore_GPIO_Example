/*
 * main implementation: use this 'C' sample to create your own application
 *
 */

#include "derivative.h" /* include peripheral declarations */

extern void xcptn_xmpl(void);


void init_gpio()
{
	SIUL2.MSCR[3].B.SSS = 0;
	SIUL2.MSCR[3].B.OBE = 0;
	SIUL2.MSCR[3].B.IBE = 1;


	SIUL2.MSCR[4].B.SSS = 0;
	SIUL2.MSCR[4].B.OBE = 1;
	SIUL2.MSCR[4].B.SRC = 3;


}

int main(void)
{
	volatile int counter = 0;
	
	xcptn_xmpl ();              /* Configure and Enable Interrupts */
	init_gpio();
	int i = 0 ;
	/* Loop forever */
	for(;;) {	   

		if( SIUL2.GPDI[3].R)   /* wait here until level is high, if not already */
			SIUL2.GPDO[4].R = 0x0;                              /* clear GPIO[188] */
		else
			SIUL2.GPDO[4].R = 0x1;                              /* clear GPIO[188] */
	}
}
