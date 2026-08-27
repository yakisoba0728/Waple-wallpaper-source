// Function: FUN_1403c03e0
// Addr: 1403c03e0
// Size: 221 bytes


undefined8 * FUN_1403c03e0(longlong param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  
  if (*(int *)(param_1 + 8) == 0x10000) {
    if (param_3 < 0x102) {
      uVar1 = *(uint *)(&DAT_14045d900 + (ulonglong)param_3 * 4);
LAB_1403c040b:
      param_2[1] = "serpsvbaswlbstsp.notdef" + (ulonglong)uVar1 + 0x10;
      *(uint *)(param_2 + 2) =
           (*(int *)(&DAT_14045d900 + (ulonglong)(param_3 + 1) * 4) - uVar1) + -1;
      *(undefined4 *)((longlong)param_2 + 0x14) = 0;
      return param_2;
    }
  }
  else if ((*(int *)(param_1 + 8) == 0x20000) &&
          (pbVar2 = *(byte **)(param_1 + 0x10), param_3 < (uint)pbVar2[1] + (uint)*pbVar2 * 0x100))
  {
    param_3 = (uint)pbVar2[(ulonglong)param_3 * 2 + 3] +
              (uint)pbVar2[(ulonglong)param_3 * 2 + 2] * 0x100;
    if (param_3 < 0x102) {
      uVar1 = *(uint *)(&DAT_14045d900 + (ulonglong)param_3 * 4);
      goto LAB_1403c040b;
    }
    if (param_3 - 0x102 < *(uint *)(param_1 + 0x1c)) {
      pbVar2 = (byte *)((ulonglong)
                        *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(param_3 - 0x102) * 4)
                       + *(longlong *)(param_1 + 0x28));
      param_2[1] = pbVar2 + 1;
      *(uint *)(param_2 + 2) = (uint)*pbVar2;
      *(undefined4 *)((longlong)param_2 + 0x14) = 0;
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

