// Function: FUN_14034ca80
// Addr: 14034ca80
// Size: 258 bytes


undefined8 FUN_14034ca80(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int local_res8 [2];
  
  iVar6 = 0;
  pbVar1 = param_2 + 7;
  iVar7 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]);
  for (iVar8 = iVar7; iVar8 != 0; iVar8 = iVar8 + -1) {
    bVar3 = *pbVar1;
    pbVar1 = pbVar1 + 4;
    iVar6 = iVar6 + 1 + (uint)bVar3;
  }
  uVar5 = iVar6 + 1;
  puVar2 = (undefined8 *)(param_1 + 0x30);
  local_res8[0] = 0;
  if (*(uint *)(param_1 + 0x2c) < uVar5) {
    *(undefined8 *)(param_1 + 0x38) = param_3;
    uVar4 = FUN_1402f7ff0(param_3,4,*(uint *)(param_1 + 0x2c),uVar5,*puVar2,local_res8);
    *puVar2 = uVar4;
    if (local_res8[0] != 0) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar5;
  }
  puVar9 = (uint *)*puVar2;
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    uVar5 = (uint)CONCAT21(CONCAT11(param_2[4],param_2[5]),param_2[6]);
    iVar8 = (byte)param_2[7] + 1;
    do {
      *puVar9 = uVar5;
      uVar5 = uVar5 + 1;
      puVar9 = puVar9 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    param_2 = param_2 + 4;
  }
  *puVar9 = 0;
  return *puVar2;
}

