-- VectorCAST 21.sp3 (08/04/21)
-- Test Case Script
--
-- Environment    : TEMPLATE_EXAMPLE
-- Unit(s) Under Test: manager
--
-- Script Features
TEST.SCRIPT_FEATURE:C_DIRECT_ARRAY_INDEXING
TEST.SCRIPT_FEATURE:CPP_CLASS_OBJECT_REVISION
TEST.SCRIPT_FEATURE:MULTIPLE_UUT_SUPPORT
TEST.SCRIPT_FEATURE:REMOVED_CL_PREFIX
TEST.SCRIPT_FEATURE:MIXED_CASE_NAMES
TEST.SCRIPT_FEATURE:STATIC_HEADER_FUNCS_IN_UUTS
TEST.SCRIPT_FEATURE:VCAST_MAIN_NOT_RENAMED
--

-- Unit: manager

-- Subprogram: Place_Order

-- Test Case: (MAP)Place_Order.001
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:(MAP)Place_Order.001
TEST.CSV_FILENAME:C:/Users/vjtkmg/Documents/GitLocal/VectorCAST/Tutorial/SourceCode/c/csv_test_data.csv
TEST.CSV_DELIMITER:COMMA
TEST.CSV_HEADER_ROWS: 5
TEST.CSV_SKIPPED_ROWS: 5
TEST.CSV_ROWS_PER_TESTCASE: 1
TEST.CSV_NAME_COL: 1
TEST.CSV_COLUMN_INFO: 2, TEST.VALUE:manager.Place_Order.Table
TEST.CSV_COLUMN_INFO: 3, TEST.VALUE:manager.Place_Order.Seat
TEST.CSV_COLUMN_INFO: 4, TEST.VALUE:manager.Place_Order.MyOrder.Salad
TEST.CSV_COLUMN_INFO: 5, TEST.VALUE:manager.Place_Order.MyOrder.Entree
TEST.CSV_COLUMN_INFO: 6, TEST.VALUE:manager.Place_Order.MyOrder.Beverage
TEST.CSV_COLUMN_INFO: 7, TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Is_Occupied
TEST.CSV_COLUMN_INFO: 8, TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Number_In_Party
TEST.CSV_COLUMN_INFO: 9, TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Order[1].Entree
TEST.CSV_COLUMN_INFO: 10, TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Check_Total
TEST.END

-- Test Case: CSV_Chicken
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:CSV_Chicken
TEST.NOTES:
-----------------------------------------------------------------------
Row 2 from C:/Users/vjtkmg/Documents/GitLocal/VectorCAST/Tutorial/SourceCode/c/csv_test_data.csv
Column    2: TEST.VALUE:manager.Place_Order.Table
Column    3: TEST.VALUE:manager.Place_Order.Seat
Column    4: TEST.VALUE:manager.Place_Order.MyOrder.Salad
Column    5: TEST.VALUE:manager.Place_Order.MyOrder.Entree
Column    6: TEST.VALUE:manager.Place_Order.MyOrder.Beverage
Column    7: TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Is_Occupied
Column    8: TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Number_In_Party
Column    9: TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Order[1].Entree
Column   10: TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Check_Total
TEST.END_NOTES:
TEST.VALUE:manager.Place_Order.Table:1
TEST.VALUE:manager.Place_Order.Seat:1
TEST.VALUE:manager.Place_Order.MyOrder.Salad:GREEN
TEST.VALUE:manager.Place_Order.MyOrder.Entree:CHICKEN
TEST.VALUE:manager.Place_Order.MyOrder.Beverage:BEER
TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Is_Occupied:v_true
TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Number_In_Party:1
TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Order[1].Entree:CHICKEN
TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Check_Total:10.0
TEST.END

-- Test Case: CSV_Lobster
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:CSV_Lobster
TEST.NOTES:
-----------------------------------------------------------------------
Row 3 from C:/Users/vjtkmg/Documents/GitLocal/VectorCAST/Tutorial/SourceCode/c/csv_test_data.csv
Column    2: TEST.VALUE:manager.Place_Order.Table
Column    3: TEST.VALUE:manager.Place_Order.Seat
Column    4: TEST.VALUE:manager.Place_Order.MyOrder.Salad
Column    5: TEST.VALUE:manager.Place_Order.MyOrder.Entree
Column    6: TEST.VALUE:manager.Place_Order.MyOrder.Beverage
Column    7: TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Is_Occupied
Column    8: TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Number_In_Party
Column    9: TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Order[1].Entree
Column   10: TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Check_Total
TEST.END_NOTES:
TEST.VALUE:manager.Place_Order.Table:1
TEST.VALUE:manager.Place_Order.Seat:1
TEST.VALUE:manager.Place_Order.MyOrder.Salad:GREEN
TEST.VALUE:manager.Place_Order.MyOrder.Entree:LOBSTER
TEST.VALUE:manager.Place_Order.MyOrder.Beverage:BEER
TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Is_Occupied:v_true
TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Number_In_Party:1
TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Order[1].Entree:LOBSTER
TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Check_Total:18.0
TEST.END

-- Test Case: CSV_Steak
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:CSV_Steak
TEST.NOTES:
-----------------------------------------------------------------------
Row 1 from C:/Users/vjtkmg/Documents/GitLocal/VectorCAST/Tutorial/SourceCode/c/csv_test_data.csv
Column    2: TEST.VALUE:manager.Place_Order.Table
Column    3: TEST.VALUE:manager.Place_Order.Seat
Column    4: TEST.VALUE:manager.Place_Order.MyOrder.Salad
Column    5: TEST.VALUE:manager.Place_Order.MyOrder.Entree
Column    6: TEST.VALUE:manager.Place_Order.MyOrder.Beverage
Column    7: TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Is_Occupied
Column    8: TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Number_In_Party
Column    9: TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Order[1].Entree
Column   10: TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Check_Total
TEST.END_NOTES:
TEST.VALUE:manager.Place_Order.Table:1
TEST.VALUE:manager.Place_Order.Seat:1
TEST.VALUE:manager.Place_Order.MyOrder.Salad:GREEN
TEST.VALUE:manager.Place_Order.MyOrder.Entree:STEAK
TEST.VALUE:manager.Place_Order.MyOrder.Beverage:BEER
TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Is_Occupied:v_true
TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Number_In_Party:1
TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Order[1].Entree:STEAK
TEST.EXPECTED:uut_prototype_stubs.Update_Table_Record.Data.Check_Total:24.0
TEST.END
