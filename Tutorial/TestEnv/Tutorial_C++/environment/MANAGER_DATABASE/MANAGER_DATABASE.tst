-- VectorCAST 21.sp3 (08/04/21)
-- Test Case Script
--
-- Environment    : MANAGER_DATABASE
-- Unit(s) Under Test: database manager
--
-- Script Features
TEST.SCRIPT_FEATURE:C_DIRECT_ARRAY_INDEXING
TEST.SCRIPT_FEATURE:CPP_CLASS_OBJECT_REVISION
TEST.SCRIPT_FEATURE:MULTIPLE_UUT_SUPPORT
TEST.SCRIPT_FEATURE:REMOVED_CL_PREFIX
TEST.SCRIPT_FEATURE:MIXED_CASE_NAMES
TEST.SCRIPT_FEATURE:STANDARD_SPACING_R2
TEST.SCRIPT_FEATURE:OVERLOADED_CONST_SUPPORT
TEST.SCRIPT_FEATURE:UNDERSCORE_NULLPTR
TEST.SCRIPT_FEATURE:FULL_PARAMETER_TYPES
TEST.SCRIPT_FEATURE:STRUCT_DTOR_ADDS_POINTER
TEST.SCRIPT_FEATURE:STRUCT_FIELD_CTOR_ADDS_POINTER
TEST.SCRIPT_FEATURE:STATIC_HEADER_FUNCS_IN_UUTS
TEST.SCRIPT_FEATURE:VCAST_MAIN_NOT_RENAMED
--

-- Unit: manager

-- Subprogram: Manager::AddIncludedDessert

-- Test Case: COND_1_ROW_1_PAIR_a_T
TEST.UNIT:manager
TEST.SUBPROGRAM:Manager::AddIncludedDessert
TEST.NEW
TEST.NAME:COND_1_ROW_1_PAIR_a_T
TEST.MCDC_BASIS_PATH:2 of 10
TEST.NOTES:
This is an automatically generated test case.
   Test Path 2
      (1) if (!Order) ==> FALSE
      Row number 1 forms a pair with Row 2 for Condition #1, subcondition "a".
         Condition a ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.(cl).Manager.Manager.<<constructor>>.Manager().<<call>>:0
TEST.VALUE:manager.Manager::AddIncludedDessert.Order:<<malloc 1>>
TEST.END

-- Test Case: COND_1_ROW_2_PAIR_a_F
TEST.UNIT:manager
TEST.SUBPROGRAM:Manager::AddIncludedDessert
TEST.NEW
TEST.NAME:COND_1_ROW_2_PAIR_a_F
TEST.MCDC_BASIS_PATH:1 of 10
TEST.NOTES:
This is an automatically generated test case.
   Test Path 1
      (1) if (!Order) ==> TRUE
      Row number 2 forms a pair with Row 1 for Condition #1, subcondition "a".
         Condition a ==> FALSE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.(cl).Manager.Manager.<<constructor>>.Manager().<<call>>:0
TEST.VALUE:manager.Manager::AddIncludedDessert.Order:<<null>>
TEST.END

-- Test Case: COND_2_ROW_1_PAIR_a_TTT
TEST.UNIT:manager
TEST.SUBPROGRAM:Manager::AddIncludedDessert
TEST.NEW
TEST.NAME:COND_2_ROW_1_PAIR_a_TTT
TEST.MCDC_BASIS_PATH:4 of 10
TEST.NOTES:
This is an automatically generated test case.
   Test Path 4
      (1) if (!Order) ==> FALSE
      (2) if ((Order->Entree == (Steak) && Order->Salad == (Caesar)) && Order->Beverage == (MixedDrink)) ==> TRUE
      Row number 1 forms a pair with Row 5 for Condition #2, subcondition "a".
         Condition a ==> TRUE
         Condition b ==> TRUE
         Condition c ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.(cl).Manager.Manager.<<constructor>>.Manager().<<call>>:0
TEST.VALUE:manager.Manager::AddIncludedDessert.Order:<<malloc 1>>
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Salad:Caesar
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Entree:Steak
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Beverage:MixedDrink
TEST.END

-- Test Case: COND_2_ROW_2_PAIR_c_TTF
TEST.UNIT:manager
TEST.SUBPROGRAM:Manager::AddIncludedDessert
TEST.NEW
TEST.NAME:COND_2_ROW_2_PAIR_c_TTF
TEST.MCDC_BASIS_PATH:6 of 10
TEST.NOTES:
This is an automatically generated test case.
   Test Path 6
      (1) if (!Order) ==> FALSE
      (2) if ((Order->Entree == (Steak) && Order->Salad == (Caesar)) && Order->Beverage == (MixedDrink)) ==> FALSE
      Row number 2 forms a pair with Row 1 for Condition #2, subcondition "c".
         Condition a ==> TRUE
         Condition b ==> TRUE
         Condition c ==> FALSE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.(cl).Manager.Manager.<<constructor>>.Manager().<<call>>:0
TEST.VALUE:manager.Manager::AddIncludedDessert.Order:<<malloc 1>>
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Salad:Caesar
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Entree:Steak
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Beverage:NoBeverage
TEST.END

-- Test Case: COND_2_ROW_3_PAIR_b_TFx
TEST.UNIT:manager
TEST.SUBPROGRAM:Manager::AddIncludedDessert
TEST.NEW
TEST.NAME:COND_2_ROW_3_PAIR_b_TFx
TEST.MCDC_BASIS_PATH:5 of 10
TEST.NOTES:
This is an automatically generated test case.
   Test Path 5
      (1) if (!Order) ==> FALSE
      (2) if ((Order->Entree == (Steak) && Order->Salad == (Caesar)) && Order->Beverage == (MixedDrink)) ==> FALSE
      Row number 3 forms a pair with Row 1 for Condition #2, subcondition "b".
         Condition a ==> TRUE
         Condition b ==> FALSE
         Condition c ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.(cl).Manager.Manager.<<constructor>>.Manager().<<call>>:0
TEST.VALUE:manager.Manager::AddIncludedDessert.Order:<<malloc 1>>
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Salad:NoSalad
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Entree:Steak
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Beverage:MixedDrink
TEST.END

-- Test Case: COND_2_ROW_5_PAIR_a_Fxx
TEST.UNIT:manager
TEST.SUBPROGRAM:Manager::AddIncludedDessert
TEST.NEW
TEST.NAME:COND_2_ROW_5_PAIR_a_Fxx
TEST.MCDC_BASIS_PATH:3 of 10
TEST.NOTES:
This is an automatically generated test case.
   Test Path 3
      (1) if (!Order) ==> FALSE
      (2) if ((Order->Entree == (Steak) && Order->Salad == (Caesar)) && Order->Beverage == (MixedDrink)) ==> FALSE
      Row number 5 forms a pair with Row 1 for Condition #2, subcondition "a".
         Condition a ==> FALSE
         Condition b ==> TRUE
         Condition c ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.(cl).Manager.Manager.<<constructor>>.Manager().<<call>>:0
TEST.VALUE:manager.Manager::AddIncludedDessert.Order:<<malloc 1>>
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Salad:Caesar
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Entree:NoEntree
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Beverage:MixedDrink
TEST.END

-- Test Case: COND_3_ROW_1_PAIR_a_TTT
TEST.UNIT:manager
TEST.SUBPROGRAM:Manager::AddIncludedDessert
TEST.NEW
TEST.NAME:COND_3_ROW_1_PAIR_a_TTT
TEST.MCDC_BASIS_PATH:8 of 10
TEST.NOTES:
This is an automatically generated test case.
   Test Path 8
      (1) if (!Order) ==> FALSE
      (2) if ((Order->Entree == (Steak) && Order->Salad == (Caesar)) && Order->Beverage == (MixedDrink)) ==> FALSE
      (3) if ((Order->Entree == (Lobster) && Order->Salad == (Green)) && Order->Beverage == (Wine)) ==> TRUE
      Row number 1 forms a pair with Row 5 for Condition #3, subcondition "a".
         Condition a ==> TRUE
         Condition b ==> TRUE
         Condition c ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.(cl).Manager.Manager.<<constructor>>.Manager().<<call>>:0
TEST.VALUE:manager.Manager::AddIncludedDessert.Order:<<malloc 1>>
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Salad:Green
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Entree:Lobster
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Beverage:Wine
TEST.END

-- Test Case: COND_3_ROW_2_PAIR_c_TTF
TEST.UNIT:manager
TEST.SUBPROGRAM:Manager::AddIncludedDessert
TEST.NEW
TEST.NAME:COND_3_ROW_2_PAIR_c_TTF
TEST.MCDC_BASIS_PATH:10 of 10
TEST.NOTES:
This is an automatically generated test case.
   Test Path 10
      (1) if (!Order) ==> FALSE
      (2) if ((Order->Entree == (Steak) && Order->Salad == (Caesar)) && Order->Beverage == (MixedDrink)) ==> FALSE
      (3) if ((Order->Entree == (Lobster) && Order->Salad == (Green)) && Order->Beverage == (Wine)) ==> FALSE
      Row number 2 forms a pair with Row 1 for Condition #3, subcondition "c".
         Condition a ==> TRUE
         Condition b ==> TRUE
         Condition c ==> FALSE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.(cl).Manager.Manager.<<constructor>>.Manager().<<call>>:0
TEST.VALUE:manager.Manager::AddIncludedDessert.Order:<<malloc 1>>
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Salad:Green
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Entree:Lobster
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Beverage:NoBeverage
TEST.END

-- Test Case: COND_3_ROW_3_PAIR_b_TFx
TEST.UNIT:manager
TEST.SUBPROGRAM:Manager::AddIncludedDessert
TEST.NEW
TEST.NAME:COND_3_ROW_3_PAIR_b_TFx
TEST.MCDC_BASIS_PATH:9 of 10
TEST.NOTES:
This is an automatically generated test case.
   Test Path 9
      (1) if (!Order) ==> FALSE
      (2) if ((Order->Entree == (Steak) && Order->Salad == (Caesar)) && Order->Beverage == (MixedDrink)) ==> FALSE
      (3) if ((Order->Entree == (Lobster) && Order->Salad == (Green)) && Order->Beverage == (Wine)) ==> FALSE
      Row number 3 forms a pair with Row 1 for Condition #3, subcondition "b".
         Condition a ==> TRUE
         Condition b ==> FALSE
         Condition c ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.(cl).Manager.Manager.<<constructor>>.Manager().<<call>>:0
TEST.VALUE:manager.Manager::AddIncludedDessert.Order:<<malloc 1>>
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Salad:NoSalad
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Entree:Lobster
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Beverage:Wine
TEST.END

-- Test Case: COND_3_ROW_5_PAIR_a_Fxx
TEST.UNIT:manager
TEST.SUBPROGRAM:Manager::AddIncludedDessert
TEST.NEW
TEST.NAME:COND_3_ROW_5_PAIR_a_Fxx
TEST.MCDC_BASIS_PATH:7 of 10
TEST.NOTES:
This is an automatically generated test case.
   Test Path 7
      (1) if (!Order) ==> FALSE
      (2) if ((Order->Entree == (Steak) && Order->Salad == (Caesar)) && Order->Beverage == (MixedDrink)) ==> FALSE
      (3) if ((Order->Entree == (Lobster) && Order->Salad == (Green)) && Order->Beverage == (Wine)) ==> FALSE
      Row number 5 forms a pair with Row 1 for Condition #3, subcondition "a".
         Condition a ==> FALSE
         Condition b ==> TRUE
         Condition c ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.(cl).Manager.Manager.<<constructor>>.Manager().<<call>>:0
TEST.VALUE:manager.Manager::AddIncludedDessert.Order:<<malloc 1>>
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Salad:Green
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Entree:NoEntree
TEST.VALUE:manager.Manager::AddIncludedDessert.Order[0].Beverage:Wine
TEST.END

-- Subprogram: Manager::PlaceOrder

-- Test Case: BASIS-PATH-001
TEST.UNIT:manager
TEST.SUBPROGRAM:Manager::PlaceOrder
TEST.NEW
TEST.NAME:BASIS-PATH-001
TEST.BASIS_PATH:1 of 5
TEST.NOTES:
This is an automatically generated test case.
   Test Path 1
      (5) case (Order.Entree) ==> default
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.(cl).Manager.Manager.<<constructor>>.Manager().<<call>>:0
TEST.VALUE:manager.Manager::PlaceOrder.Table:<<MIN>>
TEST.VALUE:manager.Manager::PlaceOrder.Seat:<<MIN>>
TEST.VALUE:manager.Manager::PlaceOrder.Order.Entree:NoEntree
TEST.END

-- Test Case: BASIS-PATH-002
TEST.UNIT:manager
TEST.SUBPROGRAM:Manager::PlaceOrder
TEST.NEW
TEST.NAME:BASIS-PATH-002
TEST.BASIS_PATH:2 of 5
TEST.NOTES:
This is an automatically generated test case.
   Test Path 2
      (1) case (Order.Entree) ==> Steak
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.(cl).Manager.Manager.<<constructor>>.Manager().<<call>>:0
TEST.VALUE:manager.Manager::PlaceOrder.Table:<<MIN>>
TEST.VALUE:manager.Manager::PlaceOrder.Seat:<<MIN>>
TEST.VALUE:manager.Manager::PlaceOrder.Order.Entree:Steak
TEST.END

-- Test Case: BASIS-PATH-003
TEST.UNIT:manager
TEST.SUBPROGRAM:Manager::PlaceOrder
TEST.NEW
TEST.NAME:BASIS-PATH-003
TEST.BASIS_PATH:3 of 5
TEST.NOTES:
This is an automatically generated test case.
   Test Path 3
      (2) case (Order.Entree) ==> Chicken
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.(cl).Manager.Manager.<<constructor>>.Manager().<<call>>:0
TEST.VALUE:manager.Manager::PlaceOrder.Table:<<MIN>>
TEST.VALUE:manager.Manager::PlaceOrder.Seat:<<MIN>>
TEST.VALUE:manager.Manager::PlaceOrder.Order.Entree:Chicken
TEST.END

-- Test Case: BASIS-PATH-004
TEST.UNIT:manager
TEST.SUBPROGRAM:Manager::PlaceOrder
TEST.NEW
TEST.NAME:BASIS-PATH-004
TEST.BASIS_PATH:4 of 5
TEST.NOTES:
This is an automatically generated test case.
   Test Path 4
      (3) case (Order.Entree) ==> Lobster
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.(cl).Manager.Manager.<<constructor>>.Manager().<<call>>:0
TEST.VALUE:manager.Manager::PlaceOrder.Table:<<MIN>>
TEST.VALUE:manager.Manager::PlaceOrder.Seat:<<MIN>>
TEST.VALUE:manager.Manager::PlaceOrder.Order.Entree:Lobster
TEST.END

-- Test Case: BASIS-PATH-005
TEST.UNIT:manager
TEST.SUBPROGRAM:Manager::PlaceOrder
TEST.NEW
TEST.NAME:BASIS-PATH-005
TEST.BASIS_PATH:5 of 5
TEST.NOTES:
This is an automatically generated test case.
   Test Path 5
      (4) case (Order.Entree) ==> Pasta
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.(cl).Manager.Manager.<<constructor>>.Manager().<<call>>:0
TEST.VALUE:manager.Manager::PlaceOrder.Table:<<MIN>>
TEST.VALUE:manager.Manager::PlaceOrder.Seat:<<MIN>>
TEST.VALUE:manager.Manager::PlaceOrder.Order.Entree:Pasta
TEST.END
