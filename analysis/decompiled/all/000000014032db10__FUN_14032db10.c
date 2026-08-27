// Function: FUN_14032db10
// Addr: 14032db10
// Size: 476 bytes


void FUN_14032db10(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = param_1[0x10];
    FUN_1402f7f90(uVar2,*param_1);
    uVar4 = 0;
    *param_1 = 0;
    if (param_1[0xe] != 0) {
      FUN_1402f77c0(param_1[0xe],uVar2);
      FUN_1402f7f90(uVar2,param_1[0xe]);
      param_1[0xe] = 0;
    }
    FUN_1402f7f90(uVar2,param_1[0xc]);
    param_1[0xc] = 0;
    uVar3 = uVar4;
    if (*(int *)(param_1 + 10) != 0) {
      do {
        lVar1 = uVar3 * 0x18;
        if (*(int *)(lVar1 + 8 + param_1[0xb]) == 1) {
          FUN_1402f7f90(uVar2,*(undefined8 *)(lVar1 + 0x10 + param_1[0xb]));
          *(undefined8 *)(lVar1 + 0x10 + param_1[0xb]) = 0;
        }
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 10));
    }
    FUN_1402f7f90(uVar2,param_1[0xb]);
    puVar6 = (undefined8 *)param_1[7];
    param_1[0xb] = 0;
    uVar3 = uVar4;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      do {
        FUN_1402f7f90(uVar2,*puVar6);
        *puVar6 = 0;
        FUN_1402f7f90(uVar2,puVar6[4]);
        puVar6[4] = 0;
        puVar6 = puVar6 + 6;
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)((longlong)param_1 + 0x34));
    }
    puVar6 = (undefined8 *)param_1[9];
    uVar3 = uVar4;
    if (*(int *)((longlong)param_1 + 0x44) != 0) {
      do {
        FUN_1402f7f90(uVar2,*puVar6);
        *puVar6 = 0;
        FUN_1402f7f90(uVar2,puVar6[4]);
        puVar6[4] = 0;
        puVar6 = puVar6 + 6;
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)((longlong)param_1 + 0x44));
    }
    FUN_1402f7f90(uVar2,param_1[7]);
    param_1[7] = 0;
    FUN_1402f7f90(uVar2,param_1[9]);
    param_1[9] = 0;
    FUN_1402f77c0(param_1 + 0x13,uVar2);
    puVar6 = (undefined8 *)param_1[0x11];
    if (*(int *)(param_1 + 0x12) != 0) {
      do {
        FUN_1402f7f90(uVar2,*puVar6);
        *puVar6 = 0;
        puVar6 = puVar6 + 3;
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0x12));
    }
    FUN_1402f7f90(uVar2,param_1[0x11]);
    param_1[0x11] = 0;
  }
  return;
}

