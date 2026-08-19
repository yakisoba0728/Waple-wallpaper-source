// Function: FUN_140376f60
// Addr: 140376f60
// Size: 303 bytes


undefined8 FUN_140376f60(byte *param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 local_res20 [8];
  
  iVar6 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar6 == 1) {
    puVar4 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar4[1] = &DAT_14036c920;
    puVar7 = puVar4 + 5;
    *puVar4 = param_1;
    puVar4[2] = &DAT_14036c920;
    puVar4[3] = &LAB_14036e230;
    puVar4[4] = 0;
    *puVar7 = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    uVar3 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
    if (uVar3 == 0) {
      pbVar5 = (byte *)&DAT_14045dde0;
      goto LAB_140377034;
    }
  }
  else {
    if (iVar6 == 2) {
      FUN_1403736d0(param_3,local_res20,param_1);
      return param_2;
    }
    if (iVar6 != 3) {
      return param_2;
    }
    puVar4 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar4[1] = &LAB_14036c9f0;
    puVar7 = puVar4 + 5;
    *puVar4 = param_1;
    puVar4[2] = &LAB_14036c9f0;
    puVar4[3] = &LAB_14036e230;
    puVar4[4] = 0;
    *puVar7 = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    pbVar5 = (byte *)&DAT_14045dde0;
    uVar2 = (ulonglong)CONCAT11(param_1[2],param_1[3]);
    pbVar1 = (byte *)&DAT_14045dde0;
    if ((uint)param_1[uVar2 * 2 + 5] + (uint)param_1[uVar2 * 2 + 4] * 0x100 != 0) {
      pbVar1 = param_1 + uVar2 * 2 + 6;
    }
    uVar3 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
    if (uVar3 == 0) goto LAB_140377034;
  }
  pbVar5 = param_1 + uVar3;
LAB_140377034:
  func_0x00014036f650(pbVar5,puVar7);
  return param_2;
}

