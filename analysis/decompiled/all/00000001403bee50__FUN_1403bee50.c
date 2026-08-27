// Function: FUN_1403bee50
// Addr: 1403bee50
// Size: 234 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1403bee50(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uStack_30;
  
  puVar9 = param_1 + 4;
  if (param_1 == (undefined8 *)0xffffffffffffffdf) {
    puVar9 = (undefined8 *)0x0;
  }
  uVar1 = *(uint *)(puVar9 + 2);
  lVar3 = puVar9[1];
  iVar2 = *(int *)((longlong)puVar9 + 0x14);
  uVar4 = *puVar9;
  puVar9 = param_1;
  if (param_1 == (undefined8 *)0xffffffffffffffe7) {
    puVar9 = (undefined8 *)0x0;
  }
  uVar6 = uRam0000000000000000;
  lVar7 = _DAT_00000008;
  uVar10 = _DAT_00000010;
  iVar8 = _DAT_00000014;
  if (puVar9 != (undefined8 *)0xffffffffffffffff) {
    uVar6 = *puVar9;
    lVar7 = puVar9[1];
    uVar10 = *(uint *)(puVar9 + 2);
    iVar8 = *(int *)((longlong)puVar9 + 0x14);
  }
  uVar5 = param_1[7];
  *param_2 = uVar6;
  param_2[1] = lVar7 + (ulonglong)uVar10 * 2;
  param_2[5] = lVar3 + (ulonglong)uVar1 * 2;
  param_2[2] = (ulonglong)(iVar8 + uVar10) << 0x20;
  param_2[3] = uStack_30;
  *(undefined4 *)(param_2 + 6) = 0;
  param_2[4] = uVar4;
  *(uint *)((longlong)param_2 + 0x34) = iVar2 + uVar1;
  param_2[7] = uVar5;
  return param_2;
}

