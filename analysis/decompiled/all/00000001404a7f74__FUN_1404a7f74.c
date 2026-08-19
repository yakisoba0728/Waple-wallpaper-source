// Function: FUN_1404a7f74
// Addr: 1404a7f74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7f74(char *param_1,char *param_2)

{
  uint uVar1;
  char unaff_BH;
  char unaff_SPL;
  char *pcVar2;
  
  param_1[-0x3ffff51b] = param_1[-0x3ffff51b] + (char)param_2;
  uVar1 = in(10);
  pcVar2 = (char *)(ulonglong)uVar1;
  pcVar2[0x7e] = pcVar2[0x7e] + unaff_BH;
  *param_1 = *param_1 + unaff_SPL;
  *param_2 = *param_2 + (char)uVar1;
  *pcVar2 = *pcVar2 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

