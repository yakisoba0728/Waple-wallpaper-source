// Function: FUN_1403a5250
// Addr: 1403a5250
// Size: 264 bytes


undefined8 FUN_1403a5250(uint *param_1,uint param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar2 = *param_1;
  if ((int)uVar2 < 0) {
    return 0;
  }
  if (param_3 == '\0') {
    uVar4 = uVar2;
    if (param_2 <= uVar2) {
      return 1;
    }
    do {
      uVar4 = uVar4 + 8 + (uVar4 >> 1);
    } while (uVar4 < param_2);
  }
  else {
    uVar4 = param_1[1];
    if (param_1[1] <= param_2) {
      uVar4 = param_2;
    }
    if ((uVar4 <= uVar2) && (uVar2 >> 2 <= uVar4)) {
      return 1;
    }
  }
  if (uVar4 == 0xffffffff) {
    *param_1 = ~uVar2;
    return 0;
  }
  if (uVar4 == 0) {
    if ((uVar2 != 0) && (uVar2 != 0xffffffff)) {
      thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 2));
    }
    lVar3 = 0;
  }
  else {
    puVar1 = param_1 + 2;
    if ((uVar2 == 0) && (*(longlong *)puVar1 != 0)) {
      lVar3 = _malloc_base(uVar4);
      if (lVar3 == 0) {
LAB_1403a5345:
        if (uVar4 <= *param_1) {
          return 1;
        }
        *param_1 = -*param_1 - 1;
        return 0;
      }
      if (param_1[1] != 0) {
        FUN_1404210f0(lVar3,*(undefined8 *)puVar1);
      }
    }
    else {
      lVar3 = _realloc_base(*(undefined8 *)puVar1,uVar4);
      if (lVar3 == 0) goto LAB_1403a5345;
    }
  }
  *(longlong *)(param_1 + 2) = lVar3;
  *param_1 = uVar4;
  return 1;
}

