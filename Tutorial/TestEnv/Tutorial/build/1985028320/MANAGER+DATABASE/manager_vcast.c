/*vcast_header_expansion_start:C:/Users/vjtkmg/Documents/GitLocal/VectorCAST/Tutorial/SourceCode/c/ctypes.h*/
typedef float FLOAT;
enum boolean { v_false, v_true };
enum soups { NO_SOUP, ONION, CHOWDER };
enum salads { NO_SALAD, CAESAR, GREEN };
enum entrees { NO_ENTREE, STEAK, CHICKEN, LOBSTER, PASTA };
enum desserts { NO_DESSERT, CAKE, PIE, FRUIT };
enum beverages { NO_BEVERAGE, WINE, BEER, MIXED_DRINK, SODA };
struct order_type
{
  enum soups Soup;
  enum salads Salad;
  enum entrees Entree;
  enum desserts Dessert;
  enum beverages Beverage;
};
typedef unsigned short seat_index_type;
typedef unsigned short table_index_type;
struct table_data_type
{
  enum boolean Is_Occupied;
  seat_index_type Number_In_Party;
  char Designator;
  char Wait_Person[10];
  struct order_type Order[4];
  FLOAT Check_Total;
};
typedef char name_type[32];
/*vcast_header_expansion_end*/
struct table_data_type Get_Table_Record(table_index_type Table);
void Update_Table_Record(table_index_type Table, struct table_data_type Data);
/* Allow 10 Parties to wait */
static name_type WaitingList[10];
static unsigned int WaitingListSize = 0;
static unsigned int WaitingListIndex = 0;
/* This function will add a free dessert to specific orders based on the 
   entree, salad, and beverage choice */
void Add_Included_Dessert(struct order_type* Order)
{ /*vcast_internal_start*/
extern struct order_type *P_11_1_1;
extern unsigned char SBF_11_1;
if(SBF_11_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_11_1220426544
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_11_1220426544
  if ( vcast_is_in_driver ) {
    P_11_1_1 = Order;
    vCAST_COMMON_STUB_PROC_11( 11, 1, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_11_1220426544
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_11_1220426544
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/
 /*vcast_internal_start*/{/*vcast_internal_end*/
  if(Order->Entree == STEAK &&
     Order->Salad == CAESAR &&
     Order->Beverage == MIXED_DRINK) {
    Order->Dessert = PIE;
  } else if(Order->Entree == LOBSTER &&
            Order->Salad == GREEN &&
            Order->Beverage == WINE) {
    Order->Dessert = CAKE;
  }
 /*vcast_internal_start*/}/*vcast_internal_end*/
}
int Place_Order(table_index_type Table,
                seat_index_type Seat,
                struct order_type MyOrder)
{ /*vcast_internal_start*/
extern unsigned short P_11_2_1;
extern unsigned short P_11_2_2;
extern struct order_type P_11_2_3;
extern int R_11_2;
extern unsigned char SBF_11_2;
if(SBF_11_2) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_11_453126248
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_11_453126248
  if ( vcast_is_in_driver ) {
    P_11_2_1 = Table;
    P_11_2_2 = Seat;
    P_11_2_3 = MyOrder;
    vCAST_COMMON_STUB_PROC_11( 11, 2, 4, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_11_453126248
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_11_453126248
  vCAST_USER_CODE_TIMER_START();
  return R_11_2;
}
/*vcast_internal_end*/
 /*vcast_internal_start*/{/*vcast_internal_end*/
  struct table_data_type Table_Data;
  Table_Data = Get_Table_Record(Table);
  Table_Data.Is_Occupied = v_true;
  Table_Data.Number_In_Party = Table_Data.Number_In_Party + 1;
  Table_Data.Order[Seat] = MyOrder;
  /* Add a free dessert in some cases */
  Add_Included_Dessert(&Table_Data.Order[Seat]);
  switch(MyOrder.Entree)
    {
    case NO_ENTREE :
       break;
    case STEAK :
       Table_Data.Check_Total = Table_Data.Check_Total + 14.0 + 10;
       break;
    case CHICKEN :
       Table_Data.Check_Total = Table_Data.Check_Total + 10.0;
       break;
    case LOBSTER :
       Table_Data.Check_Total = Table_Data.Check_Total + 18.0;
       break;
    case PASTA :
       Table_Data.Check_Total = Table_Data.Check_Total + 12.0;
       break;
    }
  Update_Table_Record(Table, Table_Data);
  return 0;
 /*vcast_internal_start*/}/*vcast_internal_end*/
}
int Clear_Table(table_index_type Table)
{ /*vcast_internal_start*/
extern unsigned short P_11_3_1;
extern int R_11_3;
extern unsigned char SBF_11_3;
if(SBF_11_3) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_11_2460377677
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_11_2460377677
  if ( vcast_is_in_driver ) {
    P_11_3_1 = Table;
    vCAST_COMMON_STUB_PROC_11( 11, 3, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_11_2460377677
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_11_2460377677
  vCAST_USER_CODE_TIMER_START();
  return R_11_3;
}
/*vcast_internal_end*/
 /*vcast_internal_start*/{/*vcast_internal_end*/
  struct table_data_type Table_Data;
  seat_index_type Seat;
  Table_Data = Get_Table_Record(Table);
  Table_Data.Is_Occupied = v_false;
  Table_Data.Number_In_Party = 1;
  for (Seat=0; Seat < 4; Seat++){
      Table_Data.Order[Seat].Soup = NO_SOUP;
      Table_Data.Order[Seat].Salad = NO_SALAD;
      Table_Data.Order[Seat].Entree = NO_ENTREE;
      Table_Data.Order[Seat].Dessert = NO_DESSERT;
      Table_Data.Order[Seat].Beverage = NO_BEVERAGE;
   }
  Table_Data.Check_Total = 0;
  Update_Table_Record(Table, Table_Data);
  return 0;
 /*vcast_internal_start*/}/*vcast_internal_end*/
}
FLOAT Get_Check_Total(table_index_type Table)
{ /*vcast_internal_start*/
extern unsigned short P_11_4_1;
extern float R_11_4;
extern unsigned char SBF_11_4;
if(SBF_11_4) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_11_3462039048
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_11_3462039048
  if ( vcast_is_in_driver ) {
    P_11_4_1 = Table;
    vCAST_COMMON_STUB_PROC_11( 11, 4, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_11_3462039048
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_11_3462039048
  vCAST_USER_CODE_TIMER_START();
  return R_11_4;
}
/*vcast_internal_end*/
 /*vcast_internal_start*/{/*vcast_internal_end*/
  struct table_data_type Table_Data;
  Table_Data = Get_Table_Record(Table);
  return (Table_Data.Check_Total);
 /*vcast_internal_start*/}/*vcast_internal_end*/
}
void Add_Party_To_Waiting_List(char* Name)
{ /*vcast_internal_start*/
extern char *P_11_5_1;
extern unsigned char SBF_11_5;
if(SBF_11_5) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_11_1361818386
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_11_1361818386
  if ( vcast_is_in_driver ) {
    P_11_5_1 = Name;
    vCAST_COMMON_STUB_PROC_11( 11, 5, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_11_1361818386
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_11_1361818386
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/
 /*vcast_internal_start*/{/*vcast_internal_end*/
  int i = 0;
  if(WaitingListSize > 9)
    WaitingListSize = 0;
  while(Name && *Name) {
    WaitingList[WaitingListSize][i++] = *Name;
    Name++;
  }
  WaitingList[WaitingListSize++][i] = 0;
 /*vcast_internal_start*/}/*vcast_internal_end*/
}
char* Get_Next_Party_To_Be_Seated(void)
{ /*vcast_internal_start*/
extern char *R_11_6;
extern unsigned char SBF_11_6;
if(SBF_11_6) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_11_11444024
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_11_11444024
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_11( 11, 6, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_11_11444024
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_11_11444024
  vCAST_USER_CODE_TIMER_START();
  return R_11_6;
}
/*vcast_internal_end*/
 /*vcast_internal_start*/{/*vcast_internal_end*/
  if(WaitingListIndex > 9)
    WaitingListIndex = 0;
  return WaitingList[WaitingListIndex++];
 /*vcast_internal_start*/}/*vcast_internal_end*/
}
 /*vcast_internal_start*/
struct order_type *P_11_1_1;
unsigned char SBF_11_1 = 0;
/*vcast_internal_end*/
 /*vcast_internal_start*/
unsigned short P_11_2_1;
unsigned short P_11_2_2;
struct order_type P_11_2_3;
int R_11_2;
unsigned char SBF_11_2 = 0;
/*vcast_internal_end*/
 /*vcast_internal_start*/
unsigned short P_11_3_1;
int R_11_3;
unsigned char SBF_11_3 = 0;
/*vcast_internal_end*/
 /*vcast_internal_start*/
unsigned short P_11_4_1;
float R_11_4;
unsigned char SBF_11_4 = 0;
/*vcast_internal_end*/
 /*vcast_internal_start*/
char *P_11_5_1;
unsigned char SBF_11_5 = 0;
/*vcast_internal_end*/
 /*vcast_internal_start*/
char *R_11_6;
unsigned char SBF_11_6 = 0;
/*vcast_internal_end*/
