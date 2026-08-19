// Function: FUN_1404cc884
// Addr: 1404cc884
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc884(longlong param_1,char param_2)

{
  char in_AH;
  int unaff_ESP;
  char in_R10B;
  byte in_CF;
  
  *(int *)(param_1 + 0xb) = (*(int *)(param_1 + 0xb) - unaff_ESP) - (uint)in_CF;
  *(char *)(param_1 + -0x1c) = *(char *)(param_1 + -0x1c) + in_AH;
  cRam00000001554d19e5 = cRam00000001554d19e5 + in_R10B;
  cRam000000014e4d129a = cRam000000014e4d129a + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

