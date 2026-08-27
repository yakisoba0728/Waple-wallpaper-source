// Function: FUN_1402f7a70
// Addr: 1402f7a70
// Size: 148 bytes


undefined8 FUN_1402f7a70(longlong param_1,int param_2,uint param_3,uint param_4,longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar2 = 0;
  iVar5 = 0x400;
  if ((param_4 & 1) != 0) {
    iVar5 = 1;
  }
  uVar4 = 0;
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (param_3 != 0) {
    do {
      uVar2 = FUN_1402f12d0(param_1,(int)uVar4 + param_2,param_4 | 0x100);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *(int *)(param_5 + uVar4 * 4) =
           iVar5 * *(int *)((((ulonglong)(param_4 & 0x10) | 0x160) >> 2) + lVar1);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < param_3);
  }
  return uVar2;
}

