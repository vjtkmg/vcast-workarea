-- VectorCAST 21.sp3 (08/04/21)
-- Test Case Script
--
-- Environment    : MGR_UT1
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

-- Subprogram: Add_Tax_Tip

-- Test Case: Normal
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Tax_Tip
TEST.NEW
TEST.NAME:Normal
TEST.VALUE:manager.Add_Tax_Tip.check_total:10.0
TEST.VALUE:manager.Add_Tax_Tip.sales_tax:0.05
TEST.VALUE:manager.Add_Tax_Tip.tip:0.15
TEST.EXPECTED:manager.Add_Tax_Tip.return:12.0
TEST.END

-- Test Case: TenPercentTax
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Tax_Tip
TEST.NEW
TEST.NAME:TenPercentTax
TEST.VALUE:manager.<<GLOBAL>>.default_tax:0.10
TEST.VALUE:manager.Add_Tax_Tip.check_total:10.0
TEST.VALUE:manager.Add_Tax_Tip.sales_tax:0.0
TEST.VALUE:manager.Add_Tax_Tip.tip:0.0
TEST.EXPECTED:manager.<<GLOBAL>>.log_err_cnt:0
TEST.EXPECTED:manager.<<GLOBAL>>.default_tax:0.10
TEST.EXPECTED:manager.Add_Tax_Tip.return:11.0
TEST.END

-- Test Case: Zero_Tax
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Tax_Tip
TEST.NEW
TEST.NAME:Zero_Tax
TEST.VALUE:manager.Add_Tax_Tip.check_total:10.0
TEST.VALUE:manager.Add_Tax_Tip.sales_tax:0.0
TEST.VALUE:manager.Add_Tax_Tip.tip:0.0
TEST.EXPECTED:manager.Add_Tax_Tip.return:10.0
TEST.END
