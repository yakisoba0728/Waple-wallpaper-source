// Function: FUN_1404ad554
// Addr: 1404ad554
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad554(undefined8 param_1,longlong param_2)

{
  byte in_AH;
  
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

