// Function: FUN_1403f52a0
// Addr: 1403f52a0
// Size: 277 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1403f52a0(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  uVar5 = param_1[1] + 1;
  if ((int)(param_1[1] + 1) < 0) {
    uVar5 = 0;
  }
  if ((int)uVar1 < 0) {
LAB_1403f52e9:
    DAT_1404e4f20 = DAT_14045dd10;
    _DAT_1404e4f28 = DAT_14045dd18;
    _DAT_1404e4f40 = DAT_14045dd30;
    _DAT_1404e4f30 = DAT_14045dd20;
    _DAT_1404e4f38 = _DAT_14045dd28;
    return &DAT_1404e4f20;
  }
  uVar4 = uVar1;
  if (uVar1 < uVar5) {
    do {
      uVar4 = uVar4 + 8 + (uVar4 >> 1);
    } while (uVar4 < uVar5);
    if (0x6666665 < uVar4) {
      *param_1 = ~uVar1;
      goto LAB_1403f52e9;
    }
    lVar2 = FUN_1403a1fa0(param_1,uVar4);
    if ((uVar4 == 0) || (lVar2 != 0)) {
      *(longlong *)(param_1 + 2) = lVar2;
      *param_1 = uVar4;
    }
    else if (*param_1 < uVar4) {
      *param_1 = -*param_1 - 1;
      goto LAB_1403f52e9;
    }
  }
  uVar1 = param_1[1];
  if (uVar1 < uVar5) {
    do {
      uVar3 = (ulonglong)uVar1;
      lVar2 = *(longlong *)(param_1 + 2);
      *(undefined8 *)(lVar2 + uVar3 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x18 + uVar3 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x20 + uVar3 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 8 + uVar3 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x10 + uVar3 * 0x28) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    } while (uVar1 < uVar5);
  }
  else if (uVar5 < uVar1) {
    FUN_14040bdf0(param_1,uVar5);
  }
  param_1[1] = uVar5;
  return (undefined8 *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar5 - 1) * 0x28);
}

