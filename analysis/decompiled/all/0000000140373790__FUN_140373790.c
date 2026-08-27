// Function: FUN_140373790
// Addr: 140373790
// Size: 196 bytes


undefined1 FUN_140373790(undefined8 param_1,byte *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 local_res10;
  
  cVar1 = FUN_1404078b0(param_2,param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar4 = 0;
  uVar3 = (uint)*param_2 * 0x100 + (uint)param_2[1];
  if (uVar3 != 0) {
    do {
      cVar1 = FUN_1404093d0(param_2 + uVar4 * 2 + 2,param_1,param_2);
      if ((cVar1 == '\0') ||
         ((uVar2 = (uint)param_2[uVar4 * 2 + 2] * 0x100 + (uint)param_2[uVar4 * 2 + 3], uVar2 != 0
          && (cVar1 = FUN_14036afa0(param_1,param_2 + uVar2,local_res10), cVar1 == '\0')))) {
        return 0;
      }
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
    } while (uVar2 < uVar3);
  }
  return 1;
}

