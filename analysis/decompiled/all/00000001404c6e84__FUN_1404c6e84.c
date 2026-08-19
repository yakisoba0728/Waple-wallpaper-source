// Function: FUN_1404c6e84
// Addr: 1404c6e84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6e84(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_SPL;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + param_2;
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

