
/* 
 *	ALLMAXMSP.h
 *	AUTHOR:			Daniel Bennett
 *	DATE:			03/07/2015
 *	DESCRIPTION:	Universal Header for all my MAX MSP Dev
 *
 */

#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h>					
#include "ext.h"
#include "z_dsp.h"
#include "jit.math.h"
#include "ext_obex.h"



float danScaler(t_double x, t_double in_low, t_double in_high, t_double out_low, t_double out_high, t_double power)
{
	// this is just the formula from the scale object
	return (out_low + (out_high-out_low) * ( (out_high - out_low) * exp(-1*(in_high-in_low)*log(power)) * exp(x*log(power)) )) ;

}

