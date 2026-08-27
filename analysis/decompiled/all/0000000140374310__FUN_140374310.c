// Function: FUN_140374310
// Addr: 140374310
// Size: 177 bytes


undefined1 FUN_140374310(undefined8 param_1,longlong param_2,uint *param_3,longlong *param_4)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar2 = *param_3;
  cVar4 = FUN_140409660(param_2,param_1,uVar2);
  if (cVar4 == '\0') {
    return 0;
  }
  uVar6 = 0;
  if (uVar2 != 0) {
    do {
      lVar3 = *param_4;
      pbVar1 = (byte *)(param_2 + uVar6 * 2);
      cVar4 = FUN_1404093d0(pbVar1,param_1,lVar3);
      if ((cVar4 == '\0') ||
         (cVar4 = FUN_140407cc0((ulonglong)pbVar1[1] + (ulonglong)*pbVar1 * 0x100 + lVar3,param_1),
         cVar4 == '\0')) {
        return 0;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < uVar2);
  }
  return 1;
}

