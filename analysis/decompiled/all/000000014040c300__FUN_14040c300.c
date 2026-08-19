// Function: FUN_14040c300
// Addr: 14040c300
// Size: 10 bytes


void FUN_14040c300(undefined4 *param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = param_1[4];
    param_3 = (ulonglong)uVar4;
    param_2 = (ulonglong)(uint)param_1[2];
    uVar5 = *(ulonglong *)(param_1 + 2);
    uVar6 = *(ulonglong *)(param_1 + 4);
  }
  else {
    *(ulonglong *)(param_1 + 2) = param_2;
    *(ulonglong *)(param_1 + 4) = param_3;
    uVar4 = (uint)param_3;
    uVar5 = param_2;
    uVar6 = param_3;
  }
  lVar1 = *(longlong *)(param_1 + 0xc);
  if (lVar1 == 0) {
    param_3 = param_3 & 0xffffffff;
    param_2 = param_2 & 0xffffffff;
  }
  else {
    param_2 = *(ulonglong *)(lVar1 + 0x10);
    *(ulonglong *)(param_1 + 2) = param_2;
    param_3 = *(uint *)(lVar1 + 0x18) + param_2;
    *(ulonglong *)(param_1 + 4) = param_3;
    uVar4 = (uint)param_3;
    uVar5 = param_2;
    uVar6 = param_3;
  }
  uVar3 = (int)param_3 - (int)param_2;
  param_1[6] = uVar3;
  if (uVar3 < 0x3ffffff) {
    uVar2 = 0x4000;
    if (0x3fff < uVar3 * 0x40) {
      uVar2 = uVar3 * 0x40;
    }
    uVar3 = 0x3fffffff;
    if (uVar2 < 0x40000000) {
      uVar3 = uVar2;
    }
  }
  else {
    uVar3 = 0x3fffffff;
  }
  param_1[7] = uVar3;
  *param_1 = 0;
  param_1[9] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SANITIZE",uVar5,0,1,0,1,"start [%p..%p] (%lu bytes)",uVar5,uVar6,uVar4 - (int)uVar5
               );
}

