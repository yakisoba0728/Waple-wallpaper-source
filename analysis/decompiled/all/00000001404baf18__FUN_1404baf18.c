// Function: FUN_1404baf18
// Addr: 1404baf18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404baf18(undefined8 param_1,longlong param_2)

{
  byte in_AL;
  
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

