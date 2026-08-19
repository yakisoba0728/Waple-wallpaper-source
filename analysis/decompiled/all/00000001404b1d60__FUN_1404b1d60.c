// Function: FUN_1404b1d60
// Addr: 1404b1d60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1d60(longlong param_1,undefined8 param_2)

{
  char in_AL;
  char in_AH;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + in_AH;
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + (char)param_2;
  *(char *)(param_1 + 0x164a2000) =
       *(char *)(param_1 + 0x164a2000) + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + 0x4a) = *(char *)(unaff_RSI + 0x4a) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

