// Function: FUN_1404c47c0
// Addr: 1404c47c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c47c0(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar6;
  char *pcVar5;
  int unaff_EBP;
  
  uVar3 = rdmsr((int)param_1);
  pcVar5 = (char *)(uVar3 & 0xffffffff);
  cVar4 = (char)pcVar5;
  *param_1 = *param_1 + cVar4;
  *pcVar5 = *pcVar5 + cVar4;
  pbVar1 = (byte *)(param_1 + -0x54ffd2e7);
  bVar2 = *pbVar1;
  bVar6 = (byte)((ulonglong)pcVar5 >> 8);
  *pbVar1 = *pbVar1 + bVar6;
  iRam00000001828243d7 = (iRam00000001828243d7 - unaff_EBP) - (uint)CARRY1(bVar2,bVar6);
  *pcVar5 = *pcVar5 + cVar4;
  *pcVar5 = *pcVar5 + cVar4;
  *param_1 = *param_1 + (char)(uVar3 >> 0x20);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

