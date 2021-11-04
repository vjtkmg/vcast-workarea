/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              21.sp3 (08/04/21)              *
 ***********************************************/
/*
---------------------------------------------
-- Copyright 2019 Vector Informatik, GmbH. --
---------------------------------------------
*/
#if defined (VCAST_PARADIGM)
  return;
#elif defined(VCAST_PARADIGM_SC520) && defined(__cplusplus)
  return;
#elif defined (VCAST_NEC_V850)
  return;
#elif defined (VCAST_THREADX)
  return;
#elif defined (VCAST_MAIN_NO_ARGS)
  return;
#else
  return(0);
#endif