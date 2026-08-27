// Function: FUN_140377000
// Addr: 140377000
// Size: 599 bytes


undefined8 FUN_140377000(byte *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  
  iVar9 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar9 == 1) {
    puVar8 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar8[1] = &LAB_14036c870;
    puVar7 = puVar8 + 5;
    *puVar8 = param_1;
    puVar8[2] = &LAB_14036c870;
    puVar8[3] = &LAB_14036e160;
    puVar8[4] = 0;
    *puVar7 = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    uVar4 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
    if (uVar4 == 0) {
      param_1 = (byte *)&DAT_14045dd10;
    }
    else {
      param_1 = param_1 + uVar4;
    }
  }
  else {
    if (iVar9 == 2) {
      puVar1 = (undefined1 *)0x0;
      uVar4 = 0;
      if ((*(uint *)(param_3 + 0x10) < 8) &&
         (puVar1 = (undefined1 *)_malloc_base(0x100), puVar1 != (undefined1 *)0x0)) {
        for (puVar2 = puVar1; puVar2 != puVar1 + 0x100; puVar2 = puVar2 + 1) {
          *puVar2 = 0xff;
        }
      }
      pbVar6 = (byte *)&DAT_14045dd10;
      puVar7 = (undefined8 *)
               ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
      puVar7[1] = &LAB_14036cb20;
      puVar7[2] = &LAB_14036c880;
      puVar7[3] = &LAB_14036e170;
      *puVar7 = param_1;
      puVar7[4] = puVar1;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      uVar5 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
      if (uVar5 == 0) {
        pbVar3 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar3 = param_1 + uVar5;
      }
      FUN_14036f580(pbVar3,puVar7 + 5);
      uVar5 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
      if (uVar5 != 0) {
        pbVar6 = param_1 + uVar5;
      }
      iVar9 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
      if (iVar9 == 1) {
        uVar4 = 1;
      }
      else if ((iVar9 == 2) && (uVar5 = (uint)pbVar6[2] * 0x100 + (uint)pbVar6[3], uVar5 != 0)) {
        iVar9 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        uVar4 = iVar9 + 1;
      }
      if (uVar4 <= *(uint *)(param_3 + 0x18)) {
        return param_2;
      }
      *(uint *)(param_3 + 0x18) = uVar4;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x10) + -1;
      return param_2;
    }
    if (iVar9 != 3) {
      return param_2;
    }
    puVar7 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar7[1] = &LAB_14036c930;
    puVar7[2] = &LAB_14036c930;
    puVar7[3] = &LAB_14036e160;
    *puVar7 = param_1;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    uVar4 = (uint)param_1[7] + (uint)param_1[6] * 0x100;
    if (uVar4 == 0) {
      param_1 = (byte *)&DAT_14045dd10;
      puVar7 = puVar7 + 5;
    }
    else {
      puVar7 = puVar7 + 5;
      param_1 = param_1 + uVar4;
    }
  }
  FUN_14036f580(param_1,puVar7);
  return param_2;
}

