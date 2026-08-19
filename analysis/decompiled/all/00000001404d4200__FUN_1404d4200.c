// Function: FUN_1404d4200
// Addr: 1404d4200
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4200(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char unaff_R13B;
  
  *(char *)(param_3 + 0x31) = *(char *)(param_3 + 0x31) + unaff_R13B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

