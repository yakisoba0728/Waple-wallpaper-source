// Function: FUN_1404b1660
// Addr: 1404b1660
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1660(longlong param_1,longlong param_2)

{
  byte in_CF;
  
  *(int *)(param_2 + param_1) = (*(int *)(param_2 + param_1) - (int)param_2) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

