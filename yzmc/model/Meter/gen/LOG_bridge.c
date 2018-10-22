/*----------------------------------------------------------------------------
 * File:  LOG_bridge.c
 *
 * Description:
 * Methods for bridging to an external entity.
 *
 * External Entity:  Logging (LOG)
 * 
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Meter_sys_types.h"
#include "LOG_bridge.h"

/*
 * Bridge:  LogSuccess
 */
void
LOG_LogSuccess( c_t p_message[ESCHER_SYS_MAX_STRING_LEN] )
{
  printf( "LOG::LogSuccess:  %s\n", p_message );
  fflush(stdout);
}


/*
 * Bridge:  LogFailure
 */
void
LOG_LogFailure( c_t p_message[ESCHER_SYS_MAX_STRING_LEN] )
{
  printf( "LOG::LogFailure:  %s\n", p_message );
  fflush(stdout);
}


/*
 * Bridge:  LogInfo
 */
void
LOG_LogInfo( c_t p_message[ESCHER_SYS_MAX_STRING_LEN] )
{
  printf( "LOG::LogInfo:  %s\n", p_message );
  fflush(stdout);
}


/*
 * Bridge:  LogDate
 */
void
LOG_LogDate( Escher_Date_t p_d, c_t p_message[ESCHER_SYS_MAX_STRING_LEN] )
{
  /* Replace/Insert your implementation code here... */
}


/*
 * Bridge:  LogTime
 */
void
LOG_LogTime( c_t p_message[ESCHER_SYS_MAX_STRING_LEN], Escher_TimeStamp_t p_t )
{
  /* Replace/Insert your implementation code here... */
}


/*
 * Bridge:  LogReal
 */
void
LOG_LogReal( c_t p_message[ESCHER_SYS_MAX_STRING_LEN], const dt_xtUMLReal p_r )
{
  printf( "LOG::LogReal: %f %s\n", p_r, p_message );
  fflush(stdout);
}


/*
 * Bridge:  LogInteger
 */
void
LOG_LogInteger( const dt_xtUMLInteger p_message )
{
  printf( "LOG::LogInteger: %d\n", p_message );
  fflush(stdout);
}


