// Function: FUN_1404c46d0
// Addr: 1404c46d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c46d0(undefined8 param_1,longlong param_2)

{
  byte in_CF;
  
  *(int *)(param_2 + -0x4a2faff6) = *(int *)(param_2 + -0x4a2faff6) + (int)param_2 + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

