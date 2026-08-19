// Function: FUN_1404ae868
// Addr: 1404ae868
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char in_AL;
  undefined7 in_register_00000001;
  char *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

