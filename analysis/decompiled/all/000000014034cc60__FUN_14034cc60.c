// Function: FUN_14034cc60
// Addr: 14034cc60
// Size: 18 bytes


longlong FUN_14034cc60(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int aiStackX_8 [2];
  
  puVar6 = param_2 + 4;
  aiStackX_8[0] = 0;
  uVar7 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]);
  uVar8 = uVar7 + 1;
  if (*(uint *)(param_1 + 0x2c) < uVar8) {
    *(undefined8 *)(param_1 + 0x38) = param_3;
    uVar5 = FUN_1402f80c0(param_3,4,*(uint *)(param_1 + 0x2c),uVar8,*(undefined8 *)(param_1 + 0x30),
                          aiStackX_8);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    if (aiStackX_8[0] != 0) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar8;
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  uVar9 = 0;
  if (uVar7 != 0) {
    do {
      uVar3 = *puVar6;
      puVar1 = puVar6 + 1;
      puVar2 = puVar6 + 2;
      puVar6 = puVar6 + 5;
      *(uint *)(lVar4 + uVar9 * 4) = (uint)CONCAT21(CONCAT11(uVar3,*puVar1),*puVar2);
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < uVar7);
  }
  *(undefined4 *)(lVar4 + uVar9 * 4) = 0;
  return lVar4;
}

