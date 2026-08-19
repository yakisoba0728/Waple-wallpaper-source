// Function: FUN_1404a6204
// Addr: 1404a6204
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6204(char *param_1)

{
  undefined8 in_RAX;
  char unaff_SPL;
  char in_CF;
  
  cRam0000000151ca6213 = (cRam0000000151ca6213 - (char)((ulonglong)in_RAX >> 8)) - in_CF;
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

