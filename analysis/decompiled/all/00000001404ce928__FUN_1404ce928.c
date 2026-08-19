// Function: FUN_1404ce928
// Addr: 1404ce928
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce928(undefined8 param_1,int *param_2)

{
  int unaff_ESP;
  byte in_CF;
  
  *param_2 = *param_2 + unaff_ESP + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

