// Function: FUN_140374ed0
// Addr: 140374ed0
// Size: 186 bytes


undefined1 FUN_140374ed0(undefined8 param_1,byte *param_2,undefined4 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  cVar2 = FUN_1404078b0(param_2,param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar4 = 0;
  uVar5 = (uint)*param_2 * 0x100 + (uint)param_2[1];
  if (uVar5 != 0) {
    do {
      lVar1 = uVar4 * 2;
      cVar2 = FUN_1404093d0(param_2 + lVar1 + 2,param_1,param_2);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar3 = (uint)param_2[lVar1 + 3] + (uint)param_2[lVar1 + 2] * 0x100;
      if ((uVar3 != 0) && (cVar2 = FUN_1404011f0(param_2 + uVar3,param_1,*param_3), cVar2 == '\0'))
      {
        return 0;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar5);
  }
  return 1;
}

