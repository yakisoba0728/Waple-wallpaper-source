// Function: FUN_14039cd40
// Addr: 14039cd40
// Size: 263 bytes


void FUN_14039cd40(undefined8 param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint local_res10 [2];
  int local_res18 [2];
  
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
    puVar3 = &DAT_14045dd10;
    if (3 < (uint)piVar1[6]) {
      puVar3 = *(undefined8 **)(piVar1 + 4);
    }
    lVar2 = FUN_1403c8890(puVar3,*(undefined2 *)(param_3 + 1),local_res18);
    FUN_1403c2840(lVar2,param_2,local_res10);
    if (local_res10[0] < (uint)*(byte *)(lVar2 + 5) + (uint)*(byte *)(lVar2 + 4) * 0x100) {
      pbVar4 = (byte *)((ulonglong)local_res10[0] * 0x10 + 0x18 + lVar2);
      pbVar5 = (byte *)((ulonglong)local_res10[0] * 0x10 + 0x14 + lVar2);
    }
    else {
      pbVar4 = (byte *)((longlong)&DAT_14045dd18 + 4);
      pbVar5 = (byte *)&DAT_14045dd18;
    }
    FUN_140413f90(*param_3,(uint)pbVar5[3] +
                           (uint)*pbVar5 * 0x1000000 + local_res18[0] +
                           (uint)pbVar5[1] * 0x10000 + (uint)pbVar5[2] * 0x100,
                  (uint)pbVar4[1] * 0x10000 + (uint)pbVar4[2] * 0x100 + (uint)*pbVar4 * 0x1000000 +
                  (uint)pbVar4[3]);
  }
  return;
}

