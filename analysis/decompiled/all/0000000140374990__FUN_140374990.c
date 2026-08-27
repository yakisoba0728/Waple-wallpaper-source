// Function: FUN_140374990
// Addr: 140374990
// Size: 210 bytes


undefined1 FUN_140374990(undefined8 param_1,byte *param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  cVar1 = FUN_140407cc0(param_2,param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar3 = 0;
  uVar4 = (uint)param_2[1] * 0x10000 + (uint)param_2[2] * 0x100 + (uint)*param_2 * 0x1000000 +
          (uint)param_2[3];
  if (uVar4 != 0) {
    do {
      cVar1 = FUN_140409580(param_2 + uVar3 * 4 + 4,param_1,param_2);
      if (cVar1 == '\0') {
        return 0;
      }
      uVar2 = (uint)param_2[uVar3 * 4 + 5] * 0x10000 + (uint)param_2[uVar3 * 4 + 6] * 0x100 +
              (uint)param_2[uVar3 * 4 + 4] * 0x1000000 + (uint)param_2[uVar3 * 4 + 7];
      if ((uVar2 != 0) && (cVar1 = FUN_140402d70(param_2 + uVar2,param_1), cVar1 == '\0')) {
        return 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar4);
  }
  return 1;
}

