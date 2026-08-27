// Function: FUN_1400a9830
// Addr: 1400a9830
// Size: 566 bytes


/* WARNING: Removing unreachable block (ram,0x0001400aa7c1) */
/* WARNING: Removing unreachable block (ram,0x0001400aa7c6) */

char * FUN_1400a9830(int *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
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
    param_1[1] = 0;
    lVar5 = *param_2;
    if (lVar5 == 0) {
      lVar4 = 0;
      lVar3 = 0;
    }
    else {
      lVar4 = lVar5 + param_2[2] * 8;
      lVar3 = lVar4;
      if ((char)param_2[5] == '\0') {
        lVar3 = lVar5 + param_2[1] * 8;
      }
    }
    if (*param_3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = param_3[3] + *param_3;
    }
    uVar1 = param_1[0xb];
    if (uVar1 != 0) {
      if (8 < uVar1) {
        param_1[0xb] = 0;
        param_1[1] = 0;
        *(undefined8 *)(param_1 + 0x84c) = *(undefined8 *)(param_1 + 0x84c);
        param_1[0x84e] = param_1[0x84e];
        *(char *)(param_1 + 0x84f) = (char)param_1[0x84f];
        *(undefined1 *)((longlong)param_1 + 0x213d) = *(undefined1 *)((longlong)param_1 + 0x213d);
        if (*param_2 != 0) {
          param_2[2] = lVar4 - *param_2 >> 3;
        }
        if (*param_3 != 0) {
          param_3[3] = lVar5 - *param_3;
        }
        return (char *)0x0;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001400a99aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar2 = (char *)(*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                               *(uint *)(&LAB_1400aa7f8 + (ulonglong)uVar1 * 4)))
                               (IMAGE_DOS_HEADER_140000000.e_magic +
                                *(uint *)(&LAB_1400aa7f8 + (ulonglong)uVar1 * 4),lVar3,0x80000000);
    return pcVar2;
  }
  *param_1 = 0x75ae3d2;
  return "#base: bad argument";
}

