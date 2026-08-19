// Function: FUN_1404c3dac
// Addr: 1404c3dac
// Size: 1 bytes


void FUN_1404c3dac(int param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  undefined1 uVar6;
  undefined6 uVar7;
  uint unaff_EBX;
  char unaff_SPL;
  undefined8 *unaff_RSI;
  byte *unaff_RDI;
  byte in_CF;
  undefined8 in_MM1;
  byte *pbVar4;
  char *pcVar5;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar6 = SUB81(param_2,0);
  uVar3 = in_EAX + 0x11e013f0 + (uint)in_CF;
  pbVar4 = (byte *)(ulonglong)uVar3;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  bVar1 = (byte)uVar3;
  *pbVar4 = *pbVar4 + bVar1;
  *param_2 = *param_2 & unaff_EBX;
  *pbVar4 = *pbVar4 | bVar1;
  cVar2 = (char)((ulonglong)param_2 >> 8) - (char)(uVar3 >> 8);
  *pbVar4 = *pbVar4 | bVar1;
  pmulhuw(in_MM1,*unaff_RSI);
  *(char *)CONCAT62(uVar7,CONCAT11(cVar2,uVar6)) =
       *(char *)CONCAT62(uVar7,CONCAT11(cVar2,uVar6)) + (char)param_1;
  if (*(char *)CONCAT62(uVar7,CONCAT11(cVar2,uVar6)) != '\0') {
    cRam00000001304c4a05 = cRam00000001304c4a05 + bVar1;
    return;
  }
  cVar2 = in(CONCAT11(cVar2,uVar6));
  pcVar5 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar2);
  *(char *)(longlong)param_1 = *(char *)(longlong)param_1 + unaff_SPL;
  *pcVar5 = *pcVar5 + cVar2;
  return;
}

