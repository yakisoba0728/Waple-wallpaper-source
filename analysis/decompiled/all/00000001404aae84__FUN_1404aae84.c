// Function: FUN_1404aae84
// Addr: 1404aae84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aae84(char *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  char in_AH;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  pbVar1 = (byte *)(unaff_RBP + -0x7a1cfff2);
  *pbVar1 = *pbVar1 << 6 | *pbVar1 >> 2;
  pcVar2 = (char *)(unaff_RBX + 0x4a + unaff_RBP);
  *pcVar2 = *pcVar2 + (char)param_1;
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

