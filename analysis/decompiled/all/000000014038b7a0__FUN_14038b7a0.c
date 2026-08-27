// Function: FUN_14038b7a0
// Addr: 14038b7a0
// Size: 196 bytes


undefined8 FUN_14038b7a0(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar2 = FUN_1403eaf70();
  if ((char)uVar2 != '\0') {
    if (1 < param_2) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        FUN_1403ec280(param_1);
      }
      else {
        FUN_14040eef0();
      }
    }
    uVar6 = *(uint *)(param_1 + 0x5c);
    if (uVar6 < *(uint *)(param_1 + 0x60)) {
      lVar3 = *(longlong *)(param_1 + 0x70);
    }
    else {
      uVar6 = *(int *)(param_1 + 100) - 1;
      if (*(int *)(param_1 + 100) == 0) {
        uVar6 = 0;
      }
      lVar3 = *(longlong *)(param_1 + 0x78);
    }
    puVar1 = (undefined8 *)(lVar3 + (ulonglong)uVar6 * 0x14);
    uVar7 = 0;
    uVar4 = *(ulonglong *)(param_1 + 0x78);
    puVar5 = (undefined8 *)(uVar4 + (ulonglong)*(uint *)(param_1 + 100) * 0x14);
    if (param_3 != 0) {
      do {
        uVar2 = puVar1[1];
        *puVar5 = *puVar1;
        puVar5[1] = uVar2;
        uVar4 = (ulonglong)*(uint *)(puVar1 + 2);
        *(uint *)(puVar5 + 2) = *(uint *)(puVar1 + 2);
        lVar3 = uVar7 * 4;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        *(undefined4 *)puVar5 = *(undefined4 *)(param_4 + lVar3);
        puVar5 = (undefined8 *)((longlong)puVar5 + 0x14);
      } while (uVar6 < param_3);
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_2;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + param_3;
    return CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar2;
}

