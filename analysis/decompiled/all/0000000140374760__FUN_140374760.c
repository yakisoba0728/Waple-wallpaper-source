// Function: FUN_140374760
// Addr: 140374760
// Size: 196 bytes


undefined1 FUN_140374760(undefined8 param_1,longlong param_2,byte *param_3,longlong *param_4)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar6 = (uint)*param_3 * 0x100 + (uint)param_3[1];
  cVar3 = FUN_140409660(param_2,param_1,uVar6);
  if (cVar3 == '\0') {
    return 0;
  }
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *param_4;
      pbVar1 = (byte *)(param_2 + uVar5 * 2);
      cVar3 = FUN_1404093d0(pbVar1,param_1,lVar2);
      if (cVar3 == '\0') {
        return 0;
      }
      uVar4 = (uint)pbVar1[1] + (uint)*pbVar1 * 0x100;
      if ((uVar4 != 0) && (cVar3 = FUN_1404013e0((ulonglong)uVar4 + lVar2,param_1), cVar3 == '\0'))
      {
        return 0;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < uVar6);
  }
  return 1;
}

