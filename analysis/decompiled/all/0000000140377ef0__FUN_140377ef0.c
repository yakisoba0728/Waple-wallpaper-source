// Function: FUN_140377ef0
// Addr: 140377ef0
// Size: 54 bytes


undefined8 FUN_140377ef0(byte *param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  undefined *puStack_38;
  byte *pbStack_30;
  
  iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar4 == 1) {
    uVar6 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
    if (uVar6 == 0) {
      pbVar8 = (byte *)&DAT_14045dde0;
    }
    else {
      pbVar8 = param_1 + uVar6;
    }
    func_0x00014036fab0(pbVar8,*(undefined8 *)(param_3 + 0x18));
    puStack_38 = &UNK_1403b3a50;
    pbVar8 = param_1 + 6;
    pbStack_30 = (byte *)0x0;
    for (iVar4 = (uint)param_1[5] + (uint)param_1[4] * 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar6 = (uint)pbVar8[1] + (uint)*pbVar8 * 0x100;
      if (uVar6 == 0) {
        pbVar5 = (byte *)&DAT_14045dde0;
      }
      else {
        pbVar5 = param_1 + uVar6;
      }
      func_0x0001403b3f30(pbVar5,param_3,&puStack_38);
      pbVar8 = pbVar8 + 2;
    }
  }
  else if (iVar4 == 2) {
    uVar6 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
    if (uVar6 == 0) {
      pbVar8 = (byte *)&DAT_14045dde0;
    }
    else {
      pbVar8 = param_1 + uVar6;
    }
    func_0x00014036fab0(pbVar8,*(undefined8 *)(param_3 + 0x18));
    uVar6 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
    if (uVar6 == 0) {
      pbStack_30 = (byte *)&DAT_14045dde0;
    }
    else {
      pbStack_30 = param_1 + uVar6;
    }
    pbVar8 = param_1 + 8;
    puStack_38 = (undefined *)0x1403b39f0;
    for (iVar4 = (uint)param_1[7] + (uint)param_1[6] * 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar6 = (uint)*pbVar8 * 0x100 + (uint)pbVar8[1];
      if (uVar6 == 0) {
        pbVar5 = (byte *)&DAT_14045dde0;
      }
      else {
        pbVar5 = param_1 + uVar6;
      }
      func_0x0001403b3f30(pbVar5,param_3,&puStack_38);
      pbVar8 = pbVar8 + 2;
    }
  }
  else if (iVar4 == 3) {
    uVar6 = (uint)param_1[7] + (uint)param_1[6] * 0x100;
    if (uVar6 == 0) {
      pbVar8 = (byte *)&DAT_14045dde0;
    }
    else {
      pbVar8 = param_1 + uVar6;
    }
    func_0x00014036fab0(pbVar8,*(undefined8 *)(param_3 + 0x18));
    pbVar8 = param_1 + 8;
    bVar1 = param_1[5];
    uVar3 = *(undefined8 *)(param_3 + 0x18);
    iVar7 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
    bVar2 = param_1[4];
    iVar4 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar4 = 0;
    }
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      (*(code *)&UNK_1403b3a10)(uVar3,(uint)*pbVar8 * 0x100 + (uint)pbVar8[1],param_1);
      pbVar8 = pbVar8 + 2;
    }
    func_0x00014038b0e0(param_3,(uint)bVar1 + (uint)bVar2 * 0x100,
                        param_1 + (ulonglong)(uint)(iVar7 * 2) + 6);
    return param_2;
  }
  return param_2;
}

