// Function: FUN_1404d0570
// Addr: 1404d0570
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0570(longlong param_1,char *param_2)

{
  uint *puVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  
  puVar1 = (uint *)(CONCAT71(in_register_00000001,in_AL) + param_1);
  *puVar1 = *puVar1 & (uint)param_2;
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_2;
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

