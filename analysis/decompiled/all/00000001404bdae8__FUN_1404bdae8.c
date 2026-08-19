// Function: FUN_1404bdae8
// Addr: 1404bdae8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdae8(void)

{
  byte *pbVar1;
  char *pcVar2;
  char in_AL;
  undefined7 in_register_00000001;
  byte unaff_BH;
  longlong unaff_RBP;
  
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + 0x15);
  *pbVar1 = *pbVar1 | unaff_BH;
  pcVar2 = (char *)(CONCAT71(in_register_00000001,in_AL) + unaff_RBP * 2);
  *pcVar2 = *pcVar2 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

