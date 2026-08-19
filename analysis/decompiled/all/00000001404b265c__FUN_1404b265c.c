// Function: FUN_1404b265c
// Addr: 1404b265c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b265c(undefined8 param_1,longlong param_2)

{
  *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | (uint)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

