// Function: FUN_1404cae88
// Addr: 1404cae88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cae88(char *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char in_AL;
  char unaff_BL;
  longlong unaff_RBP;
  
  pbVar1 = (byte *)(param_2 + 0x33);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  pcVar2 = (char *)(unaff_RBP * 5 + 0x4c);
  *pcVar2 = *pcVar2 + unaff_BL;
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

