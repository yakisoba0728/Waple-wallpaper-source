// Function: FUN_14049f530
// Addr: 14049f530
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f530(int *param_1,int *param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  char *pcVar4;
  
  uVar3 = in_EAX + 0x22000954;
  pcVar4 = (char *)(ulonglong)uVar3;
  *param_1 = *param_1 + 0x1813e00;
  bVar2 = (byte)uVar3;
  pcVar4[-0xc] = pcVar4[-0xc] + bVar2;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar4 = *pcVar4 + bVar2;
  *(char *)param_2 = (char)*param_2 + (char)(uVar3 >> 8);
  *param_1 = *param_1 + 0x1813e00;
  pcVar4[-0xc] = pcVar4[-0xc] + bVar2;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar4 = *pcVar4 + bVar2;
  *pcVar4 = *pcVar4 + bVar2;
  *param_1 = *param_1 + 0x1812200;
  pcVar4 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar4 = *pcVar4 + (char)((ulonglong)param_2 >> 8);
  bVar1 = *param_4;
  *param_4 = *param_4 + bVar2;
  iRam00000001484b0667 = iRam00000001484b0667 + uVar3 + (uint)CARRY1(bVar1,bVar2);
  *param_2 = *param_2 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

