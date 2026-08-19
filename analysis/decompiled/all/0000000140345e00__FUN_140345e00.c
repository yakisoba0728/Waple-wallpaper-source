// Function: FUN_140345e00
// Addr: 140345e00
// Size: 759 bytes


undefined8 FUN_140345e00(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  byte bVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  byte bVar18;
  byte bVar19;
  longlong lVar20;
  uint local_54;
  undefined1 local_4c [20];
  
  iVar7 = *(int *)(param_4 + 0x90);
  if (*(longlong *)(param_3 + 0x78) == 0) {
    *(int *)(param_3 + 0x90) = iVar7;
    *(undefined4 *)(param_3 + 0x94) = *(undefined4 *)(param_4 + 0x94);
    iVar7 = *(int *)(param_4 + 0x6c);
    *(int *)(param_3 + 0x6c) = iVar7;
    *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_4 + 0x68);
    *(undefined1 *)(param_3 + 0x82) = 7;
    *(int *)(param_3 + 0x70) = iVar7 * 4;
    *(undefined2 *)(param_3 + 0x80) = 0x100;
    uVar6 = FUN_1402f7080(param_3);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  else {
    iVar16 = *(int *)(param_3 + 0x90);
    iVar1 = *(int *)(param_3 + 0x94);
    iVar2 = iVar16;
    if (iVar7 <= iVar16) {
      iVar2 = iVar7;
    }
    iVar7 = iVar7 + *(int *)(param_4 + 0x6c);
    iVar15 = *(int *)(param_3 + 0x6c) + iVar16;
    iVar3 = iVar15;
    if (iVar15 <= iVar7) {
      iVar3 = iVar7;
    }
    iVar7 = *(int *)(param_4 + 0x94);
    iVar13 = iVar1 - *(int *)(param_3 + 0x68);
    iVar5 = iVar7 - *(int *)(param_4 + 0x68);
    iVar4 = iVar13;
    if (iVar5 <= iVar13) {
      iVar4 = iVar5;
    }
    iVar5 = iVar1;
    if (iVar1 <= iVar7) {
      iVar5 = iVar7;
    }
    if ((((iVar2 != iVar16) || (iVar3 != iVar15)) || (iVar4 != iVar13)) || (iVar5 != iVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402f8180(*(undefined8 *)(param_1 + 0x98),(iVar3 - iVar2) * 4,0,iVar5 - iVar4,0,local_4c);
    }
  }
  if (param_2 == 0xffff) {
    if (*(char *)(param_1 + 0x3a8) == '\0') {
      if ((*(longlong *)(param_1 + 0x380) == 0) ||
         ((*(byte *)(*(longlong *)(param_1 + 0x380) + (ulonglong)*(ushort *)(param_1 + 0x398) * 2) &
          2) == 0)) {
        bVar19 = 0;
        bVar18 = 0;
        bVar9 = 0;
        bVar10 = 0xff;
      }
      else {
        bVar19 = 0xff;
        bVar18 = 0xff;
        bVar9 = 0xff;
        bVar10 = 0xff;
      }
    }
    else {
      bVar19 = *(byte *)(param_1 + 0x3a9);
      bVar18 = *(byte *)(param_1 + 0x3aa);
      bVar9 = *(byte *)(param_1 + 0x3ab);
      bVar10 = *(byte *)(param_1 + 0x3ac);
    }
  }
  else {
    lVar20 = *(longlong *)(param_1 + 0x3a0);
    uVar8 = (ulonglong)param_2;
    bVar19 = *(byte *)(lVar20 + uVar8 * 4);
    bVar18 = *(byte *)(lVar20 + 1 + uVar8 * 4);
    bVar9 = *(byte *)(lVar20 + 2 + uVar8 * 4);
    bVar10 = *(byte *)(lVar20 + 3 + uVar8 * 4);
  }
  lVar20 = *(longlong *)(param_4 + 0x78);
  local_54 = 0;
  lVar11 = (longlong)
           ((*(int *)(param_3 + 0x94) - *(int *)(param_4 + 0x94)) * *(int *)(param_3 + 0x70)) +
           (longlong)((*(int *)(param_4 + 0x90) - *(int *)(param_3 + 0x90)) * 4) +
           *(longlong *)(param_3 + 0x78);
  if (*(int *)(param_4 + 0x68) != 0) {
    do {
      uVar8 = 0;
      if (*(int *)(param_4 + 0x6c) != 0) {
        do {
          uVar14 = (int)uVar8 * 4;
          uVar12 = ((uint)*(byte *)(uVar8 + lVar20) * (uint)bVar10) / 0xff;
          iVar16 = 0xff - uVar12;
          iVar7 = (uint)*(byte *)((ulonglong)uVar14 + lVar11) * iVar16;
          *(char *)((ulonglong)uVar14 + lVar11) =
               (((char)(iVar7 / 0xff) + (char)(iVar7 >> 0x1f)) -
               (char)((longlong)iVar7 * 0x80808081 >> 0x3f)) + (char)((uVar12 * bVar19) / 0xff);
          iVar7 = (uint)*(byte *)((ulonglong)(uVar14 + 1) + lVar11) * iVar16;
          *(char *)((ulonglong)(uVar14 + 1) + lVar11) =
               (((char)(iVar7 / 0xff) + (char)(iVar7 >> 0x1f)) -
               (char)((longlong)iVar7 * 0x80808081 >> 0x3f)) + (char)((uVar12 * bVar18) / 0xff);
          iVar7 = (uint)*(byte *)((ulonglong)(uVar14 + 2) + lVar11) * iVar16;
          *(char *)((ulonglong)(uVar14 + 2) + lVar11) =
               (((char)(iVar7 / 0xff) + (char)(iVar7 >> 0x1f)) -
               (char)((longlong)iVar7 * 0x80808081 >> 0x3f)) + (char)((uVar12 * bVar9) / 0xff);
          iVar16 = (uint)*(byte *)((ulonglong)(uVar14 + 3) + lVar11) * iVar16;
          uVar17 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar17;
          *(char *)((ulonglong)(uVar14 + 3) + lVar11) =
               (((char)(iVar16 / 0xff) + (char)(iVar16 >> 0x1f)) -
               (char)((longlong)iVar16 * 0x80808081 >> 0x3f)) + (char)uVar12;
        } while (uVar17 < *(uint *)(param_4 + 0x6c));
      }
      local_54 = local_54 + 1;
      lVar20 = lVar20 + *(int *)(param_4 + 0x70);
      lVar11 = lVar11 + *(int *)(param_3 + 0x70);
    } while (local_54 < *(uint *)(param_4 + 0x68));
  }
  return 0;
}

