
void vCAST_VALUE_USER_CODE_11(int vcast_slot_index ) {
  {
  /* INSERT VALUE_USER_CODE_11 */
  }
}

void vCAST_EXPECTED_USER_CODE_11(int vcast_slot_index ) {
  {
  /* INSERT EXPECTED_USER_CODE_11 */
  }
}

void vCAST_EGLOBALS_USER_CODE_11(int vcast_slot_index ) {
  {
  /* INSERT EXPECTED_GLOBALS_USER_CODE_11 */
  }
}

void vCAST_STUB_PROCESSING_11(
        int  UnitIndex, 
        int  SubprogramIndex ) {
  vCAST_GLOBAL_STUB_PROCESSING();
  {
  /* INSERT STUB_VAL_USER_CODE_11 */
  }
}

void vCAST_BEGIN_STUB_PROC_11(
        int  UnitIndex, 
        int  SubprogramIndex ) {
  vCAST_GLOBAL_BEGINNING_OF_STUB_PROCESSING();
  {
  /* INSERT STUB_EXP_USER_CODE_11 */
  }
}

void VCAST_USER_CODE_UNIT_11( VCAST_USER_CODE_TYPE uct, int vcast_slot_index ) {
  switch( uct ) {
    case VCAST_UCT_VALUE:
      vCAST_VALUE_USER_CODE_11(vcast_slot_index);
      break;
    case VCAST_UCT_EXPECTED:
      vCAST_EXPECTED_USER_CODE_11(vcast_slot_index);
      break;
    case VCAST_UCT_EXPECTED_GLOBALS:
      vCAST_EGLOBALS_USER_CODE_11(vcast_slot_index);
      break;
  } /* switch( uct ) */
}
