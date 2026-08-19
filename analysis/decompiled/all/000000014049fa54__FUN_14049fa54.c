// Function: FUN_14049fa54
// Addr: 14049fa54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fa54(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_SPL;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + 0x300001cc) = *(char *)(unaff_RSI + 0x300001cc) + unaff_SPL;
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

