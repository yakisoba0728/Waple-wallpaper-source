// Function: FUN_14000e5b0
// Addr: 14000e5b0
// Size: 554 bytes


short FUN_14000e5b0(longlong param_1,short param_2)

{
  int iVar1;
  short *psVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar7 = auStack_68;
  puVar6 = auStack_68;
  if ((*(byte *)(param_1 + 0x70) & 2) != 0) {
    return -1;
  }
  uVar8 = 0;
  if (param_2 == -1) {
    return 0;
  }
  uVar5 = **(ulonglong **)(param_1 + 0x40);
  if (uVar5 == 0) {
    lVar11 = **(longlong **)(param_1 + 0x18);
    uVar5 = uVar8;
LAB_14000e6f2:
    uVar9 = 0x40;
  }
  else {
    iVar1 = **(int **)(param_1 + 0x58);
    uVar9 = uVar5 + (longlong)iVar1 * 2;
    if (uVar5 < uVar9) {
      **(int **)(param_1 + 0x58) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(param_1 + 0x40);
      **(longlong **)(param_1 + 0x40) = (longlong)(psVar2 + 1);
      *psVar2 = param_2;
      *(ulonglong *)(param_1 + 0x68) = uVar5 + 2;
      return param_2;
    }
    lVar11 = **(longlong **)(param_1 + 0x18);
    uVar5 = (longlong)(uVar9 - lVar11) >> 1;
    if (uVar5 < 0x20) goto LAB_14000e6f2;
    if (0x3ffffffe < uVar5) {
      if (0x7ffffffe < uVar5) {
        return -1;
      }
      uVar9 = 0xfffffffe;
      uVar8 = 0x100000025;
LAB_14000e6c0:
      lVar4 = FUN_14028af20(uVar8);
      if (lVar4 == 0) {
        pcVar3 = (code *)swi(0x29);
        lVar4 = (*pcVar3)(5);
        puVar6 = auStack_60;
      }
      uVar8 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar8 - 8) = lVar4;
      puVar7 = puVar6;
      goto LAB_14000e702;
    }
    if (0x7fffffffffffffff < uVar5 * 2) {
LAB_14000e7d5:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar9 = uVar5 * 4;
    if (uVar9 == 0) goto LAB_14000e702;
    if (0xfff < uVar9) {
      uVar8 = uVar9 + 0x27;
      if (uVar8 <= uVar9) goto LAB_14000e7d5;
      goto LAB_14000e6c0;
    }
  }
  uVar8 = FUN_14028af20(uVar9);
  puVar7 = auStack_68;
LAB_14000e702:
  *(undefined8 *)(puVar7 + -8) = 0x14000e713;
  FUN_1404210f0(uVar8,lVar11,uVar5 * 2);
  lVar4 = uVar5 * 2 + uVar8;
  *(longlong *)(param_1 + 0x68) = lVar4 + 2;
  **(ulonglong **)(param_1 + 0x20) = uVar8;
  **(longlong **)(param_1 + 0x40) = lVar4;
  **(undefined4 **)(param_1 + 0x58) = (int)((longlong)((uVar9 - lVar4) + uVar8) >> 1);
  if ((*(byte *)(param_1 + 0x70) & 4) == 0) {
    lVar4 = *(longlong *)(param_1 + 0x68);
    lVar10 = (**(longlong **)(param_1 + 0x38) - lVar11 & 0xfffffffffffffffeU) + uVar8;
    **(ulonglong **)(param_1 + 0x18) = uVar8;
    **(longlong **)(param_1 + 0x38) = lVar10;
    **(undefined4 **)(param_1 + 0x50) = (int)(lVar4 - lVar10 >> 1);
  }
  else {
    **(ulonglong **)(param_1 + 0x18) = uVar8;
    **(ulonglong **)(param_1 + 0x38) = uVar8;
    **(undefined4 **)(param_1 + 0x50) = 0;
  }
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    *(undefined8 *)(puVar7 + -8) = 0x14000e79e;
    FUN_140016a50(param_1 + 0x74,lVar11,*(undefined8 *)(puVar7 + 0x70));
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
  **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) + -1;
  psVar2 = (short *)**(longlong **)(param_1 + 0x40);
  **(longlong **)(param_1 + 0x40) = (longlong)(psVar2 + 1);
  *psVar2 = param_2;
  return param_2;
}

