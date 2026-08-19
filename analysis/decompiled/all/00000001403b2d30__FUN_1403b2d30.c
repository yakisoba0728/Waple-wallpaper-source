// Function: FUN_1403b2d30
// Addr: 1403b2d30
// Size: 175 bytes


void FUN_1403b2d30(undefined8 *param_1,int *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  double *pdVar8;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (*(int *)((longlong)param_1 + 0x1c) == 0) {
    *(undefined1 *)(param_1 + 3) = 1;
    pdVar8 = (double *)&DAT_1404e4ff0;
    DAT_1404e4ff0 = DAT_14045dde0;
  }
  else {
    uVar7 = *(int *)((longlong)param_1 + 0x1c) - 1;
    *(uint *)((longlong)param_1 + 0x1c) = uVar7;
    pdVar8 = (double *)(param_1 + (ulonglong)uVar7 + 4);
  }
  uVar7 = (int)*pdVar8 + *param_2;
  if ((((-1 < (int)uVar7) && (pbVar3 = *(byte **)(param_2 + 2), pbVar3 != (byte *)0x0)) &&
      (uVar7 < (uint)pbVar3[1] + (uint)*pbVar3 * 0x100)) &&
     (*(uint *)((longlong)param_1 + 0x105c) < 10)) {
    param_1[0x205] = *param_1;
    param_1[0x206] = param_1[1];
    param_1[0x207] = param_1[2];
    uVar2 = *(uint *)((longlong)param_1 + 0x105c);
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x102c);
    uVar5 = *(undefined4 *)(param_1 + 0x206);
    uVar6 = *(undefined4 *)((longlong)param_1 + 0x1034);
    puVar1 = param_1 + (ulonglong)uVar2 * 4 + 0x20c;
    *(undefined4 *)puVar1 = *(undefined4 *)(param_1 + 0x205);
    *(undefined4 *)((longlong)puVar1 + 4) = uVar4;
    *(undefined4 *)(puVar1 + 1) = uVar5;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uVar6;
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x103c);
    uVar5 = *(undefined4 *)(param_1 + 0x208);
    uVar6 = *(undefined4 *)((longlong)param_1 + 0x1044);
    puVar1 = param_1 + (ulonglong)uVar2 * 4 + 0x20e;
    *(undefined4 *)puVar1 = *(undefined4 *)(param_1 + 0x207);
    *(undefined4 *)((longlong)puVar1 + 4) = uVar4;
    *(undefined4 *)(puVar1 + 1) = uVar5;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uVar6;
    *(int *)((longlong)param_1 + 0x105c) = *(int *)((longlong)param_1 + 0x105c) + 1;
    pbVar3 = *(byte **)(param_2 + 2);
    if ((pbVar3 == (byte *)0x0) || ((uint)pbVar3[1] + (uint)*pbVar3 * 0x100 <= uVar7)) {
      uStack_28 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
    }
    else {
      func_0x0001403979e0(pbVar3,&uStack_28,uVar7);
    }
    *(undefined4 *)((longlong)param_1 + 0x103c) = 0;
    *(undefined4 *)(param_1 + 0x208) = param_3;
    param_1[0x205] = uStack_28;
    param_1[0x206] = uStack_20;
    *(undefined4 *)(param_1 + 0x207) = uStack_18;
    *(uint *)((longlong)param_1 + 0x1044) = uVar7;
    *param_1 = param_1[0x205];
    param_1[1] = param_1[0x206];
    param_1[2] = param_1[0x207];
    return;
  }
  *(int *)((longlong)param_1 + 0x14) = *(int *)(param_1 + 2) + 1;
  return;
}

