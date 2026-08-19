// Function: FUN_1404c5830
// Addr: 1404c5830
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5830(undefined8 param_1,longlong param_2)

{
  char unaff_BH;
  
  *(char *)(param_2 + -0x6b) = *(char *)(param_2 + -0x6b) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

