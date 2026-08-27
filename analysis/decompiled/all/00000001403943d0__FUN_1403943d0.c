// Function: FUN_1403943d0
// Addr: 1403943d0
// Size: 246 bytes


/* WARNING: Removing unreachable block (ram,0x00014039444d) */

uint * FUN_1403943d0(uint *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar3 = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = uVar1;
  uVar5 = uVar3;
  if (uVar1 < 0x41) {
    if (uVar1 != 0) {
      FUN_1404210f0(param_1 + 5,*(undefined8 *)(param_2 + 8));
      return param_1;
    }
  }
  else {
    do {
      uVar4 = (int)uVar5 + 8 + (int)(uVar5 >> 1);
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < uVar1);
    if (uVar4 < 0x3fffffff) {
      if ((uVar4 == 0) || (uVar3 = _realloc_base(0,(ulonglong)uVar4 << 2), uVar3 != 0)) {
        *(ulonglong *)(param_1 + 2) = uVar3;
        *param_1 = uVar4;
        uVar2 = uVar4;
      }
      else {
        uVar2 = *param_1;
        if (uVar2 < uVar4) {
          uVar2 = -uVar2 - 1;
          *param_1 = uVar2;
        }
      }
    }
    else {
      *param_1 = 0xffffffff;
      uVar2 = 0xffffffff;
    }
    if (-1 < (int)uVar2) {
      if (uVar1 * 4 != 0) {
        FUN_1404210f0(*(longlong *)(param_1 + 2) + (ulonglong)param_1[1] * 4,
                      *(undefined8 *)(param_2 + 8),uVar1 * 4);
      }
      param_1[1] = param_1[1] + uVar1;
    }
  }
  return param_1;
}

