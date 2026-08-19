// Function: FUN_1404cd4ac
// Addr: 1404cd4ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd4ac(uint *param_1,char param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  uint unaff_EBP;
  char unaff_R12B;
  longlong unaff_R13;
  
  pcVar3 = (char *)(ulonglong)unaff_EBP;
  *param_1 = unaff_EBP;
  pbVar1 = (byte *)((longlong)param_1 + -0x2c4fffbf);
  bVar2 = (byte)param_1 & 7;
  *pbVar1 = *pbVar1 >> bVar2 | *pbVar1 << 8 - bVar2;
  *(char *)param_1 = (char)*param_1 + unaff_R12B;
  *pcVar3 = *pcVar3 + (char)unaff_EBP;
  pcVar3[-0x77] = pcVar3[-0x77] + (char)(unaff_EBP >> 8);
  *(char *)(unaff_R13 + 0x20004189) = *(char *)(unaff_R13 + 0x20004189) + param_2;
  *param_4 = *param_4 + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

