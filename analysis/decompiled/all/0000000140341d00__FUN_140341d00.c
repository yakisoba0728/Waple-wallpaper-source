// Function: FUN_140341d00
// Addr: 140341d00
// Size: 200 bytes


longlong FUN_140341d00(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  int local_res8 [2];
  
  uVar4 = *(uint *)(param_1 + 0x28);
  lVar5 = *(longlong *)(param_1 + 0x18);
  local_res8[0] = 0;
  uVar9 = uVar4 + 1;
  if (*(uint *)(param_1 + 0x2c) < uVar9) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
    uVar7 = FUN_1402f80c0(param_2,4,*(uint *)(param_1 + 0x2c),uVar9,*(undefined8 *)(param_1 + 0x30),
                          local_res8);
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    if (local_res8[0] != 0) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar9;
  }
  lVar6 = *(longlong *)(param_1 + 0x30);
  puVar8 = (undefined1 *)(lVar5 + 10);
  uVar10 = 0;
  if (uVar4 != 0) {
    do {
      uVar3 = *puVar8;
      puVar1 = puVar8 + 1;
      puVar2 = puVar8 + 2;
      puVar8 = puVar8 + 0xb;
      *(uint *)(lVar6 + uVar10 * 4) = (uint)CONCAT21(CONCAT11(uVar3,*puVar1),*puVar2);
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 < uVar4);
  }
  *(undefined4 *)(lVar6 + uVar10 * 4) = 0;
  return lVar6;
}

