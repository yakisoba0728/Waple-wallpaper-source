// Function: FUN_1404a13f0
// Addr: 1404a13f0
// Size: 1 bytes


void FUN_1404a13f0(undefined1 *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  byte *in_RAX;
  uint *puVar5;
  byte *pbVar6;
  char *unaff_RSI;
  longlong unaff_RDI;
  char cVar7;
  undefined6 uVar8;
  
  *param_1 = *param_1;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  bVar4 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar4;
  *in_RAX = *in_RAX | bVar4;
  uVar8 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar7 = (char)((ulonglong)in_RAX >> 8) * '\x02';
  puVar5 = (uint *)CONCAT62(uVar8,CONCAT11(cVar7,bVar4));
  *puVar5 = *puVar5 | (uint)puVar5;
  cVar7 = cVar7 + bVar4;
  pbVar6 = (byte *)CONCAT62(uVar8,CONCAT11(cVar7,bVar4));
  bVar2 = *pbVar6;
  param_1[param_2] = param_1[param_2] + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)pbVar6 >> 8),bVar4 | bVar2) + param_2);
  *pcVar1 = *pcVar1 + cVar7;
  param_1[unaff_RDI] = param_1[unaff_RDI] + (char)param_2;
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

