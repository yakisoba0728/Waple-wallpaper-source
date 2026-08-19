// Function: FUN_1404cc300
// Addr: 1404cc300
// Size: 1 bytes


void FUN_1404cc300(byte *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int in_EAX;
  uint uVar5;
  ulonglong unaff_RBX;
  char *pcVar7;
  char unaff_R12B;
  byte *pbVar6;
  
  uVar5 = in_EAX + 0x14000cd4;
  pcVar7 = (char *)(unaff_RBX & 0xffffffff);
  cVar2 = (char)uVar5;
  cVar1 = (char)param_2 + cVar2;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + cVar2;
  pcVar7[CONCAT71((int7)((ulonglong)param_2 >> 8),cVar1) * 4] =
       pcVar7[CONCAT71((int7)((ulonglong)param_2 >> 8),cVar1) * 4] + cVar1;
  cVar3 = (char)pcVar7;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar7 = *pcVar7 + cVar3;
  cVar4 = cVar3 + cVar1 + cVar3;
  pbVar6 = (byte *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),cVar4);
  *pbVar6 = *pbVar6 & cVar1 + cVar3 + 0x93U;
  *param_1 = *param_1 + cVar2;
  *param_1 = *param_1 & (byte)param_1;
  *param_1 = *param_1 + cVar4;
  return;
}

