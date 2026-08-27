// Function: FUN_140357f40
// Addr: 140357f40
// Size: 235 bytes


int FUN_140357f40(undefined8 *param_1,uint param_2,longlong param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (uint *)((longlong)param_1 + 0x2074);
  iVar5 = 0;
  uVar3 = *puVar1;
  if (param_2 < uVar3) {
    iVar2 = FUN_1402f5c50(*param_1,*(undefined4 *)(param_1 + 0xe));
    if (iVar2 != 0) {
      return 0;
    }
    FUN_140359b30(param_1 + 3);
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[3] = (longlong)param_1 + 0x74;
    param_1[5] = (longlong)param_1 + 0x1074;
    uVar3 = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    param_1[0x410] = puVar1;
    param_1[0x40f] = puVar1;
    *puVar1 = 0;
  }
  if ((uVar3 < param_2) && (iVar2 = FUN_140358030(param_1,param_2 - uVar3), iVar2 != 0)) {
    return 0;
  }
  iVar2 = 0;
  if (param_4 != 0) {
    do {
      uVar3 = param_4;
      if ((uint)(*(int *)(param_1 + 0x410) - *(int *)(param_1 + 0x40f)) < param_4) {
        uVar3 = *(int *)(param_1 + 0x410) - *(int *)(param_1 + 0x40f);
      }
      FUN_1404210f0(param_3,param_1[0x40f],uVar3);
      param_1[0x40f] = param_1[0x40f] + (ulonglong)uVar3;
      iVar5 = iVar2 + uVar3;
      *(int *)((longlong)param_1 + 0x2074) = *(int *)((longlong)param_1 + 0x2074) + uVar3;
      param_4 = param_4 - uVar3;
      if (param_4 == 0) {
        return iVar5;
      }
      param_3 = param_3 + (ulonglong)uVar3;
      iVar4 = FUN_140357e10(param_1);
      iVar2 = iVar5;
    } while (iVar4 == 0);
  }
  return iVar5;
}

