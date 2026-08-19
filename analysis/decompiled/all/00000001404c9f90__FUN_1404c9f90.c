// Function: FUN_1404c9f90
// Addr: 1404c9f90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9f90(char *param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong unaff_RSI;
  char unaff_R12B;
  
  puVar1 = (undefined1 *)(param_2 + 0x328da800 + unaff_RSI);
  *puVar1 = *puVar1;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

