// Function: FUN_140317090
// Addr: 140317090
// Size: 308 bytes


undefined8 FUN_140317090(longlong param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar3 = *(uint **)(param_1 + 0x2e0);
  if (puVar3 == (uint *)0x0) {
    return 6;
  }
  if (param_3 == (uint *)0x0) {
    if (param_2 != 0) {
      return 6;
    }
    uVar5 = 0;
    if (*puVar3 == 0) {
      return 0;
    }
    do {
      lVar2 = uVar5 * 4;
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
      *(undefined4 *)(lVar2 + *(longlong *)(puVar3 + 0x42)) =
           *(undefined4 *)(lVar2 + *(longlong *)(puVar3 + 0x44));
    } while (uVar7 < *puVar3);
    return 0;
  }
  uVar7 = *puVar3;
  if (param_2 < *puVar3) {
    uVar7 = param_2;
  }
  uVar6 = 0;
  if (uVar7 != 0) {
    if (3 < uVar7) {
      puVar1 = puVar3 + 0x42;
      puVar4 = *(uint **)puVar1;
      if (((param_3 + (uVar7 - 1) < puVar4) || (puVar4 + (uVar7 - 1) < param_3)) &&
         ((puVar1 < puVar4 || (puVar4 + (uVar7 - 1) < puVar1)))) {
        FUN_1404210f0(puVar4,param_3,(ulonglong)uVar7 << 2);
        do {
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
        goto LAB_14031717e;
      }
    }
    do {
      uVar5 = (ulonglong)uVar6;
      uVar6 = uVar6 + 1;
      *(uint *)(uVar5 * 4 + *(longlong *)(puVar3 + 0x42)) = param_3[uVar5];
    } while (uVar6 < uVar7);
  }
LAB_14031717e:
  if (uVar6 < *puVar3) {
    do {
      uVar5 = (ulonglong)uVar6;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(*(longlong *)(puVar3 + 0x42) + uVar5 * 4) = 0;
    } while (uVar6 < *puVar3);
  }
  return 0;
}

