// Function: FUN_1404ab598
// Addr: 1404ab598
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab598(char param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char *unaff_RDI;
  char in_CF;
  
  pcVar1 = (char *)(param_2 * 2 + 0xf);
  *pcVar1 = *pcVar1 + param_1 + *unaff_RDI + in_CF;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x21004ab4);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

