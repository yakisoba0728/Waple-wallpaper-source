// Function: FUN_1404a4148
// Addr: 1404a4148
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4148(undefined8 param_1,longlong param_2)

{
  char unaff_BH;
  
  *(char *)(param_2 + 0x5c000739) = *(char *)(param_2 + 0x5c000739) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

