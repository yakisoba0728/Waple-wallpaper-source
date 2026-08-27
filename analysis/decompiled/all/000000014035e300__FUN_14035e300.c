// Function: FUN_14035e300
// Addr: 14035e300
// Size: 405 bytes


longlong * FUN_14035e300(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  
  uVar7 = 1;
  plVar4 = (longlong *)_calloc_base(1,0xf8);
  if (plVar4 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  *plVar4 = (longlong)&DAT_14045c020;
  do {
    if (*(int *)(param_1 + 4) == *(int *)(&DAT_14045c020 + uVar7 * 0x18)) {
      *plVar4 = (longlong)(&DAT_14045c020 + uVar7 * 0x18);
      break;
    }
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
  } while (uVar6 < 10);
  if ((*(char *)(*plVar4 + 4) == '\0') || (*(char *)(param_1 + 0x28) == '2')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(plVar4 + 1) = uVar1;
  *(undefined4 *)((longlong)plVar4 + 0xc) = 0xffffffff;
  if (((char)plVar4[1] == '\0') && (*(int *)(param_1 + 4) != 0x4d6c796d)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  FUN_1403e36d0(plVar4 + 2,param_1 + 0x28,0x72706866,uVar1);
  FUN_1403e36d0(plVar4 + 6,param_1 + 0x28,0x70726566,uVar1);
  FUN_1403e36d0(plVar4 + 10,param_1 + 0x28,0x626c7766,uVar1);
  FUN_1403e36d0(plVar4 + 0xe,param_1 + 0x28,0x70737466,uVar1);
  FUN_1403e36d0(plVar4 + 0x12,param_1 + 0x28,0x76617475,uVar1);
  lVar9 = 0;
  do {
    if (((&DAT_14045c114)[lVar9 * 8] & 1) == 0) {
      iVar8 = 0;
      iVar5 = *(int *)(param_1 + 0x3c) + -1;
      if (-1 < iVar5) {
        do {
          uVar2 = (uint)(iVar5 + iVar8) >> 1;
          uVar6 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar2 * 0x24);
          if ((uint)(&DAT_14045c110)[lVar9 * 2] < uVar6) {
            iVar5 = uVar2 - 1;
          }
          else {
            if ((uint)(&DAT_14045c110)[lVar9 * 2] <= uVar6) {
              uVar3 = *(undefined4 *)
                       (*(longlong *)(param_1 + 0x40) + (ulonglong)uVar2 * 0x24 + 0x1c);
              goto LAB_14035e466;
            }
            iVar8 = uVar2 + 1;
          }
        } while (iVar8 <= iVar5);
      }
    }
    uVar3 = 0;
LAB_14035e466:
    *(undefined4 *)((longlong)plVar4 + lVar9 * 4 + 0xb0) = uVar3;
    lVar9 = lVar9 + 1;
    if (lVar9 == 0x11) {
      return plVar4;
    }
  } while( true );
}

