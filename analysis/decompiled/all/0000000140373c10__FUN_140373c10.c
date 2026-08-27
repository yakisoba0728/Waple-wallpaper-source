// Function: FUN_140373c10
// Addr: 140373c10
// Size: 174 bytes


undefined1 FUN_140373c10(undefined8 param_1,byte *param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  cVar1 = FUN_1404078b0(param_2,param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar3 = 0;
  uVar4 = (uint)*param_2 * 0x100 + (uint)param_2[1];
  if (uVar4 != 0) {
    do {
      cVar1 = FUN_1404093d0(param_2 + uVar3 * 2 + 2,param_1,param_2);
      if (cVar1 == '\0') {
        return 0;
      }
      uVar2 = (uint)param_2[uVar3 * 2 + 2] * 0x100 + (uint)param_2[uVar3 * 2 + 3];
      if ((uVar2 != 0) && (cVar1 = FUN_140373b60(param_1,param_2 + uVar2), cVar1 == '\0')) {
        return 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar4);
  }
  return 1;
}

