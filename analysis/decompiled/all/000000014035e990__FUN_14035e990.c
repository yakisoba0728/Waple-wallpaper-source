// Function: FUN_14035e990
// Addr: 14035e990
// Size: 384 bytes


longlong FUN_14035e990(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  
  lVar5 = _calloc_base(1,0x24);
  if (lVar5 == 0) {
    return 0;
  }
  uVar8 = 0;
  do {
    if ((*(byte *)(&DAT_14045d154 + uVar8 * 2) & 1) == 0) {
      iVar7 = 0;
      iVar6 = *(int *)(param_1 + 0x3c) + -1;
      if (-1 < iVar6) {
        do {
          uVar1 = (uint)(iVar6 + iVar7) >> 1;
          uVar3 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar1 * 0x24);
          if ((uint)(&DAT_14045d150)[uVar8 * 2] < uVar3) {
            iVar6 = uVar1 - 1;
          }
          else {
            if ((uint)(&DAT_14045d150)[uVar8 * 2] <= uVar3) {
              uVar2 = *(undefined4 *)
                       (*(longlong *)(param_1 + 0x40) + (ulonglong)uVar1 * 0x24 + 0x1c);
              goto LAB_14035ea28;
            }
            iVar7 = uVar1 + 1;
          }
        } while (iVar7 <= iVar6);
      }
    }
    uVar2 = 0;
LAB_14035ea28:
    *(undefined4 *)(lVar5 + uVar8 * 4) = uVar2;
    iVar6 = (int)uVar8;
    uVar3 = iVar6 + 1;
    if ((*(byte *)(&DAT_14045d154 + (ulonglong)uVar3 * 2) & 1) == 0) {
      iVar9 = 0;
      iVar7 = *(int *)(param_1 + 0x3c) + -1;
      if (-1 < iVar7) {
        do {
          uVar4 = (uint)(iVar7 + iVar9) >> 1;
          uVar1 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24);
          if ((uint)(&DAT_14045d150)[(ulonglong)uVar3 * 2] < uVar1) {
            iVar7 = uVar4 - 1;
          }
          else {
            if ((uint)(&DAT_14045d150)[(ulonglong)uVar3 * 2] <= uVar1) {
              uVar2 = *(undefined4 *)
                       (*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24 + 0x1c);
              goto LAB_14035ea7e;
            }
            iVar9 = uVar4 + 1;
          }
        } while (iVar9 <= iVar7);
      }
    }
    uVar2 = 0;
LAB_14035ea7e:
    *(undefined4 *)(lVar5 + (ulonglong)uVar3 * 4) = uVar2;
    uVar3 = iVar6 + 2;
    if ((*(byte *)(&DAT_14045d154 + (ulonglong)uVar3 * 2) & 1) == 0) {
      iVar9 = 0;
      iVar7 = *(int *)(param_1 + 0x3c) + -1;
      if (-1 < iVar7) {
        do {
          uVar4 = (uint)(iVar7 + iVar9) >> 1;
          uVar1 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24);
          if ((uint)(&DAT_14045d150)[(ulonglong)uVar3 * 2] < uVar1) {
            iVar7 = uVar4 - 1;
          }
          else {
            if ((uint)(&DAT_14045d150)[(ulonglong)uVar3 * 2] <= uVar1) {
              uVar2 = *(undefined4 *)
                       (*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24 + 0x1c);
              goto LAB_14035eade;
            }
            iVar9 = uVar4 + 1;
          }
        } while (iVar9 <= iVar7);
      }
    }
    uVar2 = 0;
LAB_14035eade:
    uVar8 = (ulonglong)(iVar6 + 3U);
    *(undefined4 *)(lVar5 + (ulonglong)uVar3 * 4) = uVar2;
    if (8 < iVar6 + 3U) {
      return lVar5;
    }
  } while( true );
}

