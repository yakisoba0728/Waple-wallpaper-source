// Function: FUN_1400b2070
// Addr: 1400b2070
// Size: 588 bytes


/* WARNING: Removing unreachable block (ram,0x0001400b47f8) */
/* WARNING: Removing unreachable block (ram,0x0001400b47eb) */
/* WARNING: Removing unreachable block (ram,0x0001400b4872) */
/* WARNING: Removing unreachable block (ram,0x0001400b4879) */

char * FUN_1400b2070(int *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    pcVar2 = "#base: initialize not called";
    if (*param_1 == 0x75ae3d2) {
      pcVar2 = "#base: disabled by previous error";
    }
    return pcVar2;
  }
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    if (1 < (uint)param_1[1]) {
      *param_1 = 0x75ae3d2;
      return "#base: interleaved coroutine calls";
    }
    lVar3 = 0;
    param_1[1] = 0;
    if (*param_2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *param_2 + param_2[2] * 8;
    }
    if (*param_3 != 0) {
      lVar3 = param_3[3] + *param_3;
    }
    uVar1 = param_1[0x11];
    if (uVar1 != 0) {
      if (0x18 < uVar1) {
        param_1[0x11] = 0;
        param_1[0x36] = param_1[0x36];
        param_1[0x37] = param_1[0x37];
        param_1[0x38] = param_1[0x38];
        param_1[1] = 0;
        if (*param_2 != 0) {
          param_2[2] = lVar4 - *param_2 >> 3;
        }
        if (*param_3 != 0) {
          param_3[3] = lVar3 - *param_3;
        }
        return (char *)0x0;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001400b21f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar2 = (char *)(*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                               *(uint *)(&DAT_1400b48a8 + (ulonglong)uVar1 * 4)))
                               (IMAGE_DOS_HEADER_140000000.e_magic +
                                *(uint *)(&DAT_1400b48a8 + (ulonglong)uVar1 * 4));
    return pcVar2;
  }
  *param_1 = 0x75ae3d2;
  return "#base: bad argument";
}

