// Function: FUN_1404c2410
// Addr: 1404c2410
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2410(undefined8 param_1,int *param_2)

{
  int unaff_EBP;
  byte in_CF;
  
  *param_2 = (*param_2 - unaff_EBP) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

