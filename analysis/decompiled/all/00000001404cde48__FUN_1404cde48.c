// Function: FUN_1404cde48
// Addr: 1404cde48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cde48(undefined8 param_1,longlong param_2)

{
  byte in_CF;
  
  *(int *)(param_2 + 0xd) = *(int *)(param_2 + 0xd) + (int)param_2 + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

