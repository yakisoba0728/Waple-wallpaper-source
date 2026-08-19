// Function: FUN_1404a67d4
// Addr: 1404a67d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a67d4(longlong param_1)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  char in_CF;
  
  pcVar1 = (char *)(param_1 + CONCAT71(in_register_00000001,(in_AL + -3) - in_CF));
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

