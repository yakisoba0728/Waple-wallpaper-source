// Function: FUN_1404c6b34
// Addr: 1404c6b34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6b34(char *param_1,char *param_2,char param_3)

{
  char cVar3;
  int in_EAX;
  uint uVar1;
  char *pcVar2;
  ulonglong uVar4;
  char unaff_R12B;
  byte in_CF;
  
  uVar4 = (ulonglong)((int)&stack0x00000000 + (int)param_2 + (uint)in_CF);
  uVar1 = in_EAX + 0x90000bc4;
  *(undefined8 *)(uVar4 - 8) = 0x2f;
  cVar3 = (char)(uVar1 >> 8);
  param_2[0x48002f6a] = param_2[0x48002f6a] + cVar3;
  *(undefined8 *)(uVar4 - 0x10) = 0x4c;
  *param_1 = *param_1 + cVar3;
  *(char *)((ulonglong)uVar1 * 2) = *(char *)((ulonglong)uVar1 * 2) + (char)uVar1;
  uVar1 = CONCAT22((short)(uVar1 >> 0x10),CONCAT11(cVar3 * '\x02',(char)uVar1)) + 0xa640000;
  pcVar2 = (char *)(ulonglong)uVar1;
  cVar3 = (char)param_2;
  pcVar2[-0x5dffd096] = pcVar2[-0x5dffd096] + cVar3;
  *(undefined8 *)(uVar4 - 0x18) = 0x2f;
  pcVar2[0x6a] = pcVar2[0x6a] + (char)param_1;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x5dffd096] = pcVar2[-0x5dffd096] + cVar3;
  *(undefined8 *)(uVar4 - 0x20) = 0x2f;
  pcVar2[0x6a] = pcVar2[0x6a] + (char)param_1;
  *param_1 = *param_1 + param_3;
  *param_2 = *param_2 + cVar3;
  *param_2 = *param_2 + cVar3;
  *(char **)(uVar4 - 0x28) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

