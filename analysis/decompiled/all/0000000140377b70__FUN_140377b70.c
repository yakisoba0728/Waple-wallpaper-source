// Function: FUN_140377b70
// Addr: 140377b70
// Size: 680 bytes


undefined8 FUN_140377b70(byte *param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  code *local_58;
  byte *local_50;
  byte *pbStack_48;
  byte *local_40;
  
  iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar2 == 1) {
    uVar5 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
    if (uVar5 == 0) {
      pbVar1 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar1 = param_1 + uVar5;
    }
    FUN_14036f9e0(pbVar1,*(undefined8 *)(param_3 + 0x18));
    local_58 = (code *)&LAB_1403b3980;
    pbVar1 = param_1 + 6;
    local_40 = (byte *)0x0;
    local_50 = (byte *)0x0;
    pbStack_48 = (byte *)0x0;
    for (iVar2 = (uint)param_1[4] * 0x100 + (uint)param_1[5]; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar5 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
      if (uVar5 == 0) {
        pbVar4 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar4 = param_1 + uVar5;
      }
      FUN_1403b3be0(pbVar4,param_3,&local_58);
      pbVar1 = pbVar1 + 2;
    }
  }
  else if (iVar2 == 2) {
    uVar5 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
    if (uVar5 == 0) {
      pbVar1 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar1 = param_1 + uVar5;
    }
    FUN_14036f9e0(pbVar1,*(undefined8 *)(param_3 + 0x18));
    uVar5 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
    if (uVar5 == 0) {
      local_50 = (byte *)&DAT_14045dd10;
    }
    else {
      local_50 = param_1 + uVar5;
    }
    uVar5 = (uint)param_1[6] * 0x100 + (uint)param_1[7];
    if (uVar5 == 0) {
      pbStack_48 = (byte *)&DAT_14045dd10;
    }
    else {
      pbStack_48 = param_1 + uVar5;
    }
    uVar5 = (uint)param_1[8] * 0x100 + (uint)param_1[9];
    if (uVar5 == 0) {
      local_40 = (byte *)&DAT_14045dd10;
    }
    else {
      local_40 = param_1 + uVar5;
    }
    pbVar1 = param_1 + 0xc;
    local_58 = (code *)&LAB_1403b3920;
    for (iVar2 = (uint)param_1[10] * 0x100 + (uint)param_1[0xb]; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar5 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
      if (uVar5 == 0) {
        pbVar4 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar4 = param_1 + uVar5;
      }
      FUN_1403b3be0(pbVar4,param_3,&local_58);
      pbVar1 = pbVar1 + 2;
    }
  }
  else if (iVar2 == 3) {
    pbVar6 = (byte *)&DAT_14045dd10;
    uVar3 = (ulonglong)CONCAT11(param_1[2],param_1[3]);
    pbVar4 = param_1 + uVar3 * 2 + 4;
    pbVar1 = (byte *)&DAT_14045dd10;
    if ((uint)*pbVar4 * 0x100 + (uint)param_1[uVar3 * 2 + 5] != 0) {
      pbVar1 = pbVar4 + 2;
    }
    uVar5 = (uint)pbVar1[1] + (uint)*pbVar1 * 0x100;
    if (uVar5 != 0) {
      pbVar6 = param_1 + uVar5;
    }
    FUN_14036f9e0(pbVar6,*(undefined8 *)(param_3 + 0x18));
    iVar7 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
    pbVar1 = pbVar4 + (iVar7 * 2 + 2);
    iVar2 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
    local_58 = FUN_1403b3940;
    uVar3 = (ulonglong)(iVar2 * 2 + 2);
    local_50 = param_1;
    pbStack_48 = param_1;
    local_40 = param_1;
    FUN_14036ecf0(param_3,(uint)param_1[2] * 0x100 + (uint)param_1[3],param_1 + 4,iVar7,pbVar4 + 4,
                  iVar2,pbVar1 + 2,(uint)pbVar1[uVar3] * 0x100 + (uint)pbVar1[uVar3 + 1],
                  pbVar1 + uVar3 + 2,&local_58);
  }
  return param_2;
}

