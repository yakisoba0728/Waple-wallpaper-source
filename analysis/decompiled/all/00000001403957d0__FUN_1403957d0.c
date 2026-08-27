// Function: FUN_1403957d0
// Addr: 1403957d0
// Size: 242 bytes


undefined4 * FUN_1403957d0(undefined4 *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  param_1[0xe] = 0x10000;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    *(int **)(param_1 + 0xc) = param_2;
    *(undefined1 *)(param_1 + 10) = 0;
    if (param_2 == (int *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *param_2 = *param_2 + 1;
    UNLOCK();
    *(int **)(param_1 + 0xc) = param_2;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  lVar1 = *(longlong *)(param_2 + 4);
  *(longlong *)(param_1 + 2) = lVar1;
  lVar5 = (ulonglong)(uint)param_2[6] + lVar1;
  *(longlong *)(param_1 + 4) = lVar5;
  uVar4 = (int)lVar5 - (int)lVar1;
  param_1[6] = uVar4;
  if (uVar4 < 0x3ffffff) {
    uVar3 = 0x4000;
    if (0x3fff < uVar4 * 0x40) {
      uVar3 = uVar4 * 0x40;
    }
    uVar2 = 0x3fffffff;
    if (uVar3 < 0x40000000) {
      uVar2 = uVar3;
    }
  }
  else {
    uVar2 = 0x3fffffff;
  }
  param_1[7] = uVar2;
  *param_1 = 0;
  param_1[9] = 0;
  FUN_1402fc370("SANITIZE",lVar1,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar1,lVar5,uVar4);
  return param_1;
}

