// Function: FUN_1404c131c
// Addr: 1404c131c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c131c(longlong param_1,longlong param_2)

{
  byte in_AH;
  
  *(byte *)(param_1 + param_2) = *(byte *)(param_1 + param_2) | in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

