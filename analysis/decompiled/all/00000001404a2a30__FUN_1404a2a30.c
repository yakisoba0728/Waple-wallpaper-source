// Function: FUN_1404a2a30
// Addr: 1404a2a30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2a30(char *param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_SPL;
  int unaff_ESI;
  char *pcVar1;
  byte in_CF;
  
  pcVar1 = (char *)(ulonglong)((unaff_ESI - iRam0000000169722a3b) - (uint)in_CF);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar1 = *pcVar1 + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

