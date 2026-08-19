// Function: FUN_14039ce10
// Addr: 14039ce10
// Size: 54 bytes


void FUN_14039ce10(undefined8 param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint auStackX_10 [2];
  int aiStackX_18 [2];
  
  piVar1 = (int *)*param_3;
  if (param_2 == 0) {
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      return;
    }
  }
  else {
    puVar3 = &DAT_14045dde0;
    if (3 < (uint)piVar1[6]) {
      puVar3 = *(undefined8 **)(piVar1 + 4);
    }
    lVar2 = func_0x0001403c8960(puVar3,*(undefined2 *)(param_3 + 1),aiStackX_18);
    func_0x0001403c2910(lVar2,param_2,auStackX_10);
    if (auStackX_10[0] < (uint)*(byte *)(lVar2 + 5) + (uint)*(byte *)(lVar2 + 4) * 0x100) {
      pbVar4 = (byte *)((ulonglong)auStackX_10[0] * 0x10 + 0x18 + lVar2);
      pbVar5 = (byte *)((ulonglong)auStackX_10[0] * 0x10 + 0x14 + lVar2);
    }
    else {
      pbVar4 = &DAT_14045ddec;
      pbVar5 = &DAT_14045dde8;
    }
    func_0x000140414060(*param_3,(uint)pbVar5[3] +
                                 (uint)*pbVar5 * 0x1000000 + aiStackX_18[0] +
                                 (uint)pbVar5[1] * 0x10000 + (uint)pbVar5[2] * 0x100,
                        (uint)pbVar4[1] * 0x10000 + (uint)pbVar4[2] * 0x100 +
                        (uint)*pbVar4 * 0x1000000 + (uint)pbVar4[3]);
  }
  return;
}

