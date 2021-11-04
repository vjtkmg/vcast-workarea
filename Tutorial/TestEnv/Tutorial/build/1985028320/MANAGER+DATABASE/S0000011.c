/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              21.sp3 (08/04/21)              *
 ***********************************************/
/***********************************************
 * VectorCAST Unit Information
 *
 * Name: manager
 *
 * Path: C:/Users/vjtkmg/Documents/GitLocal/VectorCAST/Tutorial/SourceCode/c/manager.c
 *
 * Type: stub-by-function
 *
 * Unit Number: 11
 *
 ***********************************************/
#ifndef VCAST_DRIVER_ONLY
/* Include the file which contains function prototypes
for stub processing and value/expected user code */
#include "vcast_uc_prototypes.h"
#include "vcast_basics.h"
/* STUB_DEPENDENCY_USER_CODE */
/* STUB_DEPENDENCY_USER_CODE_END */
#else
#include "vcast_env_defines.h"
#define __VCAST_BASICS_H__
#endif /* VCAST_DRIVER_ONLY */
#ifndef VCAST_DRIVER_ONLY
#ifndef VCAST_DONT_RENAME_EXIT
#ifdef __cplusplus
extern "C" {
#endif
void exit (int status);
#ifdef __cplusplus
}
#endif
/* used to capture the exit call */
#define exit VCAST_exit
#endif /* VCAST_DONT_RENAME_EXIT */
#endif /* VCAST_DRIVER_ONLY */
#ifndef VCAST_DRIVER_ONLY
#define VCAST_HEADER_EXPANSION
#ifdef VCAST_COVERAGE
#include "manager_inst_prefix.c"
#else
#include "manager_vcast_prefix.c"
#endif
#ifdef VCAST_COVERAGE
/* If coverage is enabled, include the instrumented UUT */
#include "manager_inst.c"
#else
/* If coverage is not enabled, include the original UUT */
#include "manager_vcast.c"
#endif
#ifdef VCAST_COVERAGE
#include "manager_inst_appendix.c"
#else
#include "manager_vcast_appendix.c"
#endif
#endif /* VCAST_DRIVER_ONLY */
#include "manager_driver_prefix.c"
#ifdef VCAST_HEADER_EXPANSION
#ifdef VCAST_COVERAGE
#include "manager_exp_inst_driver.c"
#else
#include "manager_expanded_driver.c"
#endif /*VCAST_COVERAGE*/
#else
#include "S0000009.h"
#include "vcast_undef_11.h"
/* Include the file which contains function prototypes
for stub processing and value/expected user code */
#include "vcast_uc_prototypes.h"
#include "vcast_stubs_11.c"
/* begin declarations of inlined friends */
/* end declarations of inlined friends */
void VCAST_DRIVER_11( int VC_SUBPROGRAM ) {
#ifdef VCAST_SBF_UNITS_AVAILABLE
  vCAST_MODIFY_SBF_TABLE(11, VC_SUBPROGRAM, vCAST_false);
#endif
  switch( VC_SUBPROGRAM ) {
    case 0:
      vCAST_SET_HISTORY_FLAGS ( 11, 0);
      vCAST_USER_CODE_TIMER_START();
      break;
    case 1: {
      /* void Add_Included_Dessert(struct order_type * Order) */
      vCAST_SET_HISTORY_FLAGS ( 11, 1 );
      vCAST_USER_CODE_TIMER_START();
      ( Add_Included_Dessert(
        ( P_11_1_1 ) ) );
      break; }
    case 2: {
      /* int Place_Order(table_index_type Table, seat_index_type Seat, struct order_type MyOrder) */
      vCAST_SET_HISTORY_FLAGS ( 11, 2 );
      vCAST_USER_CODE_TIMER_START();
      R_11_2 = 
      ( Place_Order(
        ( P_11_2_1 ),
        ( P_11_2_2 ),
        ( P_11_2_3 ) ) );
      break; }
    case 3: {
      /* int Clear_Table(table_index_type Table) */
      vCAST_SET_HISTORY_FLAGS ( 11, 3 );
      vCAST_USER_CODE_TIMER_START();
      R_11_3 = 
      ( Clear_Table(
        ( P_11_3_1 ) ) );
      break; }
    case 4: {
      /* FLOAT Get_Check_Total(table_index_type Table) */
      vCAST_SET_HISTORY_FLAGS ( 11, 4 );
      vCAST_USER_CODE_TIMER_START();
      R_11_4 = 
      ( Get_Check_Total(
        ( P_11_4_1 ) ) );
      break; }
    case 5: {
      /* void Add_Party_To_Waiting_List(char * Name) */
      vCAST_SET_HISTORY_FLAGS ( 11, 5 );
      vCAST_USER_CODE_TIMER_START();
      ( Add_Party_To_Waiting_List(
        ( P_11_5_1 ) ) );
      break; }
    case 6: {
      /* char *Get_Next_Party_To_Be_Seated(void) */
      vCAST_SET_HISTORY_FLAGS ( 11, 6 );
      vCAST_USER_CODE_TIMER_START();
      R_11_6 = 
      ( Get_Next_Party_To_Be_Seated( ) );
      break; }
    default:
      vectorcast_print_string("ERROR: Internal Tool Error\n");
      break;
  } /* switch */
  vCAST_USER_CODE_TIMER_STOP();
}

void VCAST_SBF_11( int VC_SUBPROGRAM ) {
  switch( VC_SUBPROGRAM ) {
    case 1: {
      SBF_11_1 = 0;
      break; }
    case 2: {
      SBF_11_2 = 0;
      break; }
    case 3: {
      SBF_11_3 = 0;
      break; }
    case 4: {
      SBF_11_4 = 0;
      break; }
    case 5: {
      SBF_11_5 = 0;
      break; }
    case 6: {
      SBF_11_6 = 0;
      break; }
    default:
      break;
  } /* switch */
}
#include "vcast_ti_decls_11.h"
void VCAST_RUN_DATA_IF_11( int VCAST_SUB_INDEX, int VCAST_PARAM_INDEX ) {
  switch ( VCAST_SUB_INDEX ) {
    case 0: /* for global objects */
      switch( VCAST_PARAM_INDEX ) {
        case 1: /* for global object WaitingList */
          VCAST_TI_11_12 ( WaitingList);
          break;
        case 2: /* for global object WaitingListSize */
          VCAST_TI_11_3 ( &(WaitingListSize));
          break;
        case 3: /* for global object WaitingListIndex */
          VCAST_TI_11_3 ( &(WaitingListIndex));
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      } /* switch( VCAST_PARAM_INDEX ) */
      break; /* case 0 (global objects) */
    case 1: /* function Add_Included_Dessert */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_11_1 ( &(P_11_1_1));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &SBF_11_1 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Add_Included_Dessert */
    case 2: /* function Place_Order */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(P_11_2_1));
          break;
        case 2:
          VCAST_TI_9_5 ( &(P_11_2_2));
          break;
        case 3:
          VCAST_TI_9_12 ( &(P_11_2_3));
          break;
        case 4:
          VCAST_TI_8_3 ( &(R_11_2));
          break;
        case 5:
          VCAST_TI_SBF_OBJECT( &SBF_11_2 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Place_Order */
    case 3: /* function Clear_Table */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(P_11_3_1));
          break;
        case 2:
          VCAST_TI_8_3 ( &(R_11_3));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &SBF_11_3 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Clear_Table */
    case 4: /* function Get_Check_Total */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(P_11_4_1));
          break;
        case 2:
          VCAST_TI_8_2 ( &(R_11_4));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &SBF_11_4 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Get_Check_Total */
    case 5: /* function Add_Party_To_Waiting_List */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_11_10 ( &(P_11_5_1));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &SBF_11_5 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Add_Party_To_Waiting_List */
    case 6: /* function Get_Next_Party_To_Be_Seated */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_11_10 ( &(R_11_6));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &SBF_11_6 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Get_Next_Party_To_Be_Seated */
    default:
      vCAST_TOOL_ERROR = vCAST_true;
      break;
  } /* switch ( VCAST_SUB_INDEX ) */
}


/* An array */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_11_12 ( char vcast_param[10][32] ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_11_12 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_11_12 ( char vcast_param[10][32] ) 
{
  {
    int VCAST_TI_11_12_array_index = 0;
    int VCAST_TI_11_12_index = 0;
    int VCAST_TI_11_12_first, VCAST_TI_11_12_last;
    int VCAST_TI_11_12_local_field = 0;
    int VCAST_TI_11_12_value_printed = 0;

    vcast_get_range_value (&VCAST_TI_11_12_first, &VCAST_TI_11_12_last);
    VCAST_TI_11_12_local_field = vCAST_DATA_FIELD;
    {
      int VCAST_TI_11_12_upper = 10;
      for (VCAST_TI_11_12_array_index=0; VCAST_TI_11_12_array_index< VCAST_TI_11_12_upper; VCAST_TI_11_12_array_index++){
        if ( (VCAST_TI_11_12_index >= VCAST_TI_11_12_first) && ( VCAST_TI_11_12_index <= VCAST_TI_11_12_last)){
          VCAST_TI_11_15 ( vcast_param[VCAST_TI_11_12_index]);
          VCAST_TI_11_12_value_printed = 1;
          vCAST_DATA_FIELD = VCAST_TI_11_12_local_field;
        } /* if */
        if (VCAST_TI_11_12_index >= VCAST_TI_11_12_last)
          break;
        VCAST_TI_11_12_index++;
      } /* loop */
      if ((vCAST_COMMAND == vCAST_PRINT)&&(!VCAST_TI_11_12_value_printed))
        vectorcast_fprint_string(vCAST_OUTPUT_FILE,"<<past end of array>>\n");
    }
  }
} /* end VCAST_TI_11_12 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* An integer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_11_3 ( unsigned *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_11_3 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_11_3 ( unsigned *vcast_param ) 
{
  switch (vCAST_COMMAND) {
    case vCAST_PRINT :
      if ( vcast_param == 0)
        vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
      else {
        vectorcast_fprint_unsigned_integer(vCAST_OUTPUT_FILE, *vcast_param);
        vectorcast_fprint_string(vCAST_OUTPUT_FILE, "\n");
      }
      break;
    case vCAST_KEEP_VAL:
      break; /* KEEP doesn't do anything */
  case vCAST_SET_VAL :
    *vcast_param = ( unsigned  ) vCAST_VALUE_UNSIGNED;
    break;
  case vCAST_FIRST_VAL :
    *vcast_param = UINT_MIN;
    break;
  case vCAST_MID_VAL :
    *vcast_param = (UINT_MIN / 2) + (UINT_MAX / 2);
    break;
  case vCAST_LAST_VAL :
    *vcast_param = UINT_MAX;
    break;
  case vCAST_MIN_MINUS_1_VAL :
    *vcast_param = UINT_MIN;
    *vcast_param = *vcast_param - 1;
    break;
  case vCAST_MAX_PLUS_1_VAL :
    *vcast_param = UINT_MAX;
    *vcast_param = *vcast_param + 1;
    break;
  case vCAST_ZERO_VAL :
    *vcast_param = 0;
    break;
  default:
    break;
} /* end switch */
} /* end VCAST_TI_11_3 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_11_1 ( struct order_type **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_11_1 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_11_1 ( struct order_type **vcast_param ) 
{
  {
    int VCAST_TI_11_1_index;
    if (((*vcast_param) == 0) && (vCAST_COMMAND != vCAST_ALLOCATE)){
      if ( vCAST_COMMAND == vCAST_PRINT )
        vectorcast_fprint_string(vCAST_OUTPUT_FILE,"null\n");
    } else {
      if (vCAST_COMMAND == vCAST_ALLOCATE && vcast_proc_handles_command(1)) {
        int VCAST_TI_11_1_array_size = (int) vCAST_VALUE;
        if (VCAST_FIND_INDEX() == -1) {
          void **VCAST_TI_11_1_memory_ptr = (void**)vcast_param;
          *VCAST_TI_11_1_memory_ptr = (void*)VCAST_malloc(VCAST_TI_11_1_array_size*(sizeof(struct order_type )));
          VCAST_memset((void*)*vcast_param, 0x0, VCAST_TI_11_1_array_size*(sizeof(struct order_type )));
#ifndef VCAST_NO_MALLOC
          VCAST_Add_Allocated_Data(*VCAST_TI_11_1_memory_ptr);
#endif
        }
      } else if (vCAST_VALUE_NUL == vCAST_true && vcast_proc_handles_command(1)) {
        if (VCAST_FIND_INDEX() == -1)
          *vcast_param = 0;
      } else {
        VCAST_TI_11_1_index = vcast_get_param();
        VCAST_TI_9_12 ( &((*vcast_param)[VCAST_TI_11_1_index]));
      }
    }
  }
} /* end VCAST_TI_11_1 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_11_10 ( char **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_11_10 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_11_10 ( char **vcast_param ) 
{
  {
    int VCAST_TI_11_10_index;
    if (((*vcast_param) == 0) && (vCAST_COMMAND != vCAST_ALLOCATE)){
      if ( vCAST_COMMAND == vCAST_PRINT )
        vectorcast_fprint_string(vCAST_OUTPUT_FILE,"null\n");
    } else {
      if (vCAST_COMMAND == vCAST_ALLOCATE && vcast_proc_handles_command(1)) {
        int VCAST_TI_11_10_array_size = (int) vCAST_VALUE;
        if (VCAST_FIND_INDEX() == -1) {
          void **VCAST_TI_11_10_memory_ptr = (void**)vcast_param;
          *VCAST_TI_11_10_memory_ptr = (void*)VCAST_malloc(VCAST_TI_11_10_array_size*(sizeof(char )));
          VCAST_memset((void*)*vcast_param, 0x0, VCAST_TI_11_10_array_size*(sizeof(char )));
#ifndef VCAST_NO_MALLOC
          VCAST_Add_Allocated_Data(*VCAST_TI_11_10_memory_ptr);
#endif
        }
      } else if (vCAST_VALUE_NUL == vCAST_true && vcast_proc_handles_command(1)) {
        if (VCAST_FIND_INDEX() == -1)
          *vcast_param = 0;
      } else {
        if (VCAST_FIND_INDEX() == -1 )
          VCAST_TI_STRING ( (char**)vcast_param, 0,-1);
        else {
          VCAST_TI_11_10_index = vcast_get_param();
          VCAST_TI_8_1 ( &((*vcast_param)[VCAST_TI_11_10_index]));
        }
      }
    }
  }
} /* end VCAST_TI_11_10 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* An array */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_11_15 ( char vcast_param[32] ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_11_15 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_11_15 ( char vcast_param[32] ) 
{
  {
    int VCAST_TI_11_15_array_index = 0;
    int VCAST_TI_11_15_index = 0;
    int VCAST_TI_11_15_first, VCAST_TI_11_15_last;
    int VCAST_TI_11_15_local_field = 0;
    int VCAST_TI_11_15_value_printed = 0;
    int VCAST_TI_11_15_is_string = (VCAST_FIND_INDEX()==-1);

    vcast_get_range_value (&VCAST_TI_11_15_first, &VCAST_TI_11_15_last);
    VCAST_TI_11_15_local_field = vCAST_DATA_FIELD;
    {
      int VCAST_TI_11_15_upper = 32;
      for (VCAST_TI_11_15_array_index=0; VCAST_TI_11_15_array_index< VCAST_TI_11_15_upper; VCAST_TI_11_15_array_index++){
        if ( (VCAST_TI_11_15_index >= VCAST_TI_11_15_first) && ( VCAST_TI_11_15_index <= VCAST_TI_11_15_last)){
          if ( VCAST_TI_11_15_is_string )
            VCAST_TI_STRING ( (char**)&vcast_param, 1,VCAST_TI_11_15_upper);
          else
            VCAST_TI_8_1 ( &(vcast_param[VCAST_TI_11_15_index]));
          VCAST_TI_11_15_value_printed = 1;
          vCAST_DATA_FIELD = VCAST_TI_11_15_local_field;
        } /* if */
        if (VCAST_TI_11_15_index >= VCAST_TI_11_15_last)
          break;
        VCAST_TI_11_15_index++;
      } /* loop */
      if ((vCAST_COMMAND == vCAST_PRINT)&&(!VCAST_TI_11_15_value_printed))
        vectorcast_fprint_string(vCAST_OUTPUT_FILE,"<<past end of array>>\n");
    }
  }
} /* end VCAST_TI_11_15 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


#ifdef VCAST_PARADIGM_ADD_SEGMENT
#pragma new_codesegment(1)
#endif
void VCAST_TI_RANGE_DATA_11 ( void ) {
#define VCAST_TI_SCALAR_TYPE "NEW_SCALAR\n"
#define VCAST_TI_ARRAY_TYPE  "NEW_ARRAY\n"
#define VCAST_TI_VECTOR_TYPE "NEW_VECTOR\n"
  /* Range Data for TI (scalar) VCAST_TI_11_3 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"1100003\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,UINT_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,(UINT_MIN / 2) + (UINT_MAX / 2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,UINT_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (scalar) VCAST_TI_8_3 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"1100004\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,INT_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,(INT_MIN / 2) + (INT_MAX / 2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,INT_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (scalar) VCAST_TI_8_1 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"1100012\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,CHAR_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,(CHAR_MIN/2) + (CHAR_MAX/2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,CHAR_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (array) VCAST_TI_11_12 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_ARRAY_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"100006\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,10);
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"%%\n");
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,32);
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"%%\n");
#ifndef VCAST_NO_FLOAT
  /* Range Data for TI (scalar) VCAST_TI_8_2 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"1100013\n" );
  vectorcast_fprint_long_float (vCAST_OUTPUT_FILE,-(FLT_MAX) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_long_float (vCAST_OUTPUT_FILE,VCAST_FLT_MID );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_long_float (vCAST_OUTPUT_FILE,FLT_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
#endif
  /* Range Data for TI (scalar) VCAST_TI_9_5 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"1100014\n" );
  vectorcast_fprint_unsigned_short (vCAST_OUTPUT_FILE,USHRT_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_short (vCAST_OUTPUT_FILE,(USHRT_MIN / 2) + (USHRT_MAX / 2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_short (vCAST_OUTPUT_FILE,USHRT_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (array) VCAST_TI_11_15 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_ARRAY_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"100007\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,32);
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"%%\n");
}
/* Include the file which contains function implementations
for stub processing and value/expected user code */
#include "manager_uc.c"

void vCAST_COMMON_STUB_PROC_11(
            int unitIndex,
            int subprogramIndex,
            int robjectIndex,
            int readEobjectData )
{
   vCAST_BEGIN_STUB_PROC_11(unitIndex, subprogramIndex);
   if ( robjectIndex )
      vCAST_READ_COMMAND_DATA_FOR_ONE_PARAM( unitIndex, subprogramIndex, robjectIndex );
   if ( readEobjectData )
      vCAST_READ_COMMAND_DATA_FOR_ONE_PARAM( unitIndex, subprogramIndex, 0 );
   vCAST_SET_HISTORY( unitIndex, subprogramIndex );
   vCAST_READ_COMMAND_DATA( vCAST_CURRENT_SLOT, unitIndex, subprogramIndex, vCAST_true, vCAST_false );
   vCAST_READ_COMMAND_DATA_FOR_USER_GLOBALS();
   vCAST_STUB_PROCESSING_11(unitIndex, subprogramIndex);
}
#endif /* VCAST_HEADER_EXPANSION */
