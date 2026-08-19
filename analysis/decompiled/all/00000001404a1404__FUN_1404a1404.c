// Function: FUN_1404a1404
// Addr: 1404a1404
// Size: 1 bytes


void FUN_1404a1404(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  char cVar6;
  undefined8 in_RAX;
  longlong unaff_RDI;
  byte *pbVar5;
  
  bVar4 = (byte)in_RAX;
  cVar6 = (char)((ulonglong)in_RAX >> 8) + bVar4;
  pbVar5 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar6,bVar4));
  bVar2 = *pbVar5;
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)pbVar5 >> 8),bVar4 | bVar2) + param_2);
  *pcVar1 = *pcVar1 + cVar6;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + (char)param_2;
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

