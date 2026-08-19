// Function: FUN_140341dd0
// Addr: 140341dd0
// Size: 326 bytes


undefined8 FUN_140341dd0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int local_res8 [2];
  
  iVar6 = *(int *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x18);
  local_res8[0] = 0;
  uVar5 = iVar6 + 1;
  if (*(uint *)(param_1 + 0x2c) < uVar5) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
    uVar4 = FUN_1402f80c0(param_2,4,*(uint *)(param_1 + 0x2c),uVar5,*(undefined8 *)(param_1 + 0x30),
                          local_res8);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    if (local_res8[0] != 0) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar5;
  }
  puVar1 = (undefined1 *)(lVar2 + 10);
  puVar7 = *(uint **)(param_1 + 0x30);
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar1[3],puVar1[4]),puVar1[5]),puVar1[6]);
    if (((uVar5 != 0) &&
        (iVar3 = FUN_14034c8b0((ulonglong)uVar5 + *(longlong *)(param_1 + 0x18),param_3), iVar3 != 0
        )) || ((uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar1[7],puVar1[8]),puVar1[9]),puVar1[10]),
               uVar5 != 0 &&
               (iVar3 = FUN_14034c950((ulonglong)uVar5 + *(longlong *)(param_1 + 0x18),param_3),
               iVar3 != 0)))) {
      *puVar7 = (uint)CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]);
      puVar7 = puVar7 + 1;
    }
    puVar1 = puVar1 + 0xb;
  }
  *puVar7 = 0;
  return *(undefined8 *)(param_1 + 0x30);
}

