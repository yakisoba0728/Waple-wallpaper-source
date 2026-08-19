// Function: FUN_1403a4d50
// Addr: 1403a4d50
// Size: 200 bytes


undefined8 FUN_1403a4d50(uint *param_1,uint param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar2 = *param_1;
  if ((int)uVar2 < 0) {
    return 0;
  }
  if (param_3 == '\0') {
    if (param_2 <= uVar2) {
      return 1;
    }
    uVar5 = (ulonglong)uVar2;
    do {
      uVar4 = (int)uVar5 + 8 + (int)(uVar5 >> 1);
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < param_2);
  }
  else {
    uVar4 = param_1[1];
    if (param_1[1] <= param_2) {
      uVar4 = param_2;
    }
    uVar5 = (ulonglong)uVar4;
    if ((uVar4 <= uVar2) && (uVar2 >> 2 <= uVar4)) {
      return 1;
    }
  }
  uVar4 = (uint)uVar5;
  if (0x15555554 < uVar4) {
    *param_1 = ~uVar2;
    return 0;
  }
  if (uVar4 == 0) {
    if ((uVar2 != 0) && (uVar2 != 0xffffffff)) {
      func_0x0001402bf8e0(*(undefined8 *)(param_1 + 2));
    }
    lVar3 = 0;
  }
  else {
    puVar1 = param_1 + 2;
    if ((uVar2 == 0) && (*(longlong *)puVar1 != 0)) {
      lVar3 = thunk_FUN_1402da070(uVar5 * 0xc);
      if (lVar3 == 0) {
LAB_1403a4e5b:
        if (uVar4 <= *param_1) {
          return 1;
        }
        *param_1 = -*param_1 - 1;
        return 0;
      }
      if ((ulonglong)param_1[1] * 3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(lVar3,*(undefined8 *)puVar1);
      }
    }
    else {
      lVar3 = func_0x0001402cb2b0(*(undefined8 *)puVar1,uVar5 * 0xc);
      if (lVar3 == 0) goto LAB_1403a4e5b;
    }
  }
  *(longlong *)(param_1 + 2) = lVar3;
  *param_1 = uVar4;
  return 1;
}

