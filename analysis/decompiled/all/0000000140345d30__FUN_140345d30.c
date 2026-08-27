// Function: FUN_140345d30
// Addr: 140345d30
// Size: 1187 bytes


ulonglong FUN_140345d30(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  byte bVar18;
  byte bVar19;
  longlong lVar20;
  uint local_54;
  uint local_4c;
  ulonglong local_48;
  longlong local_40;
  
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
    uVar6 = FUN_1402f6fb0(param_3);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  else {
    iVar15 = *(int *)(param_3 + 0x90);
    iVar2 = *(int *)(param_3 + 0x94);
    iVar3 = iVar15;
    if (iVar7 <= iVar15) {
      iVar3 = iVar7;
    }
    iVar7 = iVar7 + *(int *)(param_4 + 0x6c);
    iVar14 = *(int *)(param_3 + 0x6c) + iVar15;
    iVar16 = iVar14;
    if (iVar14 <= iVar7) {
      iVar16 = iVar7;
    }
    iVar7 = *(int *)(param_4 + 0x94);
    iVar12 = iVar2 - *(int *)(param_3 + 0x68);
    iVar5 = iVar7 - *(int *)(param_4 + 0x68);
    iVar4 = iVar12;
    if (iVar5 <= iVar12) {
      iVar4 = iVar5;
    }
    iVar5 = iVar2;
    if (iVar2 <= iVar7) {
      iVar5 = iVar7;
    }
    if ((((iVar3 != iVar15) || (iVar16 != iVar14)) || (iVar4 != iVar12)) || (iVar5 != iVar2)) {
      iVar16 = iVar16 - iVar3;
      local_40 = FUN_1402f80b0(*(undefined8 *)(param_1 + 0x98),iVar16 * 4,0,iVar5 - iVar4,0,
                               &local_4c);
      if (local_4c != 0) {
        return (ulonglong)local_4c;
      }
      lVar20 = *(longlong *)(param_3 + 0x78);
      uVar11 = 0;
      lVar10 = (longlong)((*(int *)(param_3 + 0x90) - iVar3) * 4) +
               local_40 + (iVar5 - *(int *)(param_3 + 0x94)) * iVar16 * 4;
      if (*(int *)(param_3 + 0x68) != 0) {
        local_48 = (ulonglong)(uint)(iVar16 * 4);
        do {
          FUN_1404210f0(lVar10,lVar20);
          lVar10 = lVar10 + (ulonglong)(uint)(iVar16 * 4);
          lVar20 = lVar20 + *(int *)(param_3 + 0x70);
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(param_3 + 0x68));
      }
      FUN_1402f75d0(param_3);
      *(int *)(param_3 + 0x90) = iVar3;
      *(int *)(param_3 + 0x68) = iVar5 - iVar4;
      *(int *)(param_3 + 0x70) = iVar16 * 4;
      *(int *)(param_3 + 0x94) = iVar5;
      *(int *)(param_3 + 0x6c) = iVar16;
      puVar1 = (uint *)(*(longlong *)(param_3 + 0xf0) + 8);
      *puVar1 = *puVar1 | 1;
      *(undefined4 *)(param_3 + 0x60) = 0x62697473;
    }
  }
  if (param_2 == 0xffff) {
    if (*(char *)(param_1 + 0x3a8) == '\0') {
      if ((*(longlong *)(param_1 + 0x380) == 0) ||
         ((*(byte *)(*(longlong *)(param_1 + 0x380) + (ulonglong)*(ushort *)(param_1 + 0x398) * 2) &
          2) == 0)) {
        bVar19 = 0;
        bVar18 = 0;
        bVar8 = 0;
        bVar9 = 0xff;
      }
      else {
        bVar19 = 0xff;
        bVar18 = 0xff;
        bVar8 = 0xff;
        bVar9 = 0xff;
      }
    }
    else {
      bVar19 = *(byte *)(param_1 + 0x3a9);
      bVar18 = *(byte *)(param_1 + 0x3aa);
      bVar8 = *(byte *)(param_1 + 0x3ab);
      bVar9 = *(byte *)(param_1 + 0x3ac);
    }
  }
  else {
    lVar20 = *(longlong *)(param_1 + 0x3a0);
    uVar6 = (ulonglong)param_2;
    bVar19 = *(byte *)(lVar20 + uVar6 * 4);
    bVar18 = *(byte *)(lVar20 + 1 + uVar6 * 4);
    bVar8 = *(byte *)(lVar20 + 2 + uVar6 * 4);
    bVar9 = *(byte *)(lVar20 + 3 + uVar6 * 4);
  }
  lVar20 = *(longlong *)(param_4 + 0x78);
  local_54 = 0;
  lVar10 = (longlong)
           ((*(int *)(param_3 + 0x94) - *(int *)(param_4 + 0x94)) * *(int *)(param_3 + 0x70)) +
           (longlong)((*(int *)(param_4 + 0x90) - *(int *)(param_3 + 0x90)) * 4) +
           *(longlong *)(param_3 + 0x78);
  if (*(int *)(param_4 + 0x68) != 0) {
    do {
      uVar6 = 0;
      if (*(int *)(param_4 + 0x6c) != 0) {
        do {
          uVar13 = (int)uVar6 * 4;
          uVar11 = ((uint)*(byte *)(uVar6 + lVar20) * (uint)bVar9) / 0xff;
          iVar15 = 0xff - uVar11;
          iVar7 = (uint)*(byte *)((ulonglong)uVar13 + lVar10) * iVar15;
          *(char *)((ulonglong)uVar13 + lVar10) =
               (((char)(iVar7 / 0xff) + (char)(iVar7 >> 0x1f)) -
               (char)((longlong)iVar7 * 0x80808081 >> 0x3f)) + (char)((uVar11 * bVar19) / 0xff);
          iVar7 = (uint)*(byte *)((ulonglong)(uVar13 + 1) + lVar10) * iVar15;
          *(char *)((ulonglong)(uVar13 + 1) + lVar10) =
               (((char)(iVar7 / 0xff) + (char)(iVar7 >> 0x1f)) -
               (char)((longlong)iVar7 * 0x80808081 >> 0x3f)) + (char)((uVar11 * bVar18) / 0xff);
          iVar7 = (uint)*(byte *)((ulonglong)(uVar13 + 2) + lVar10) * iVar15;
          *(char *)((ulonglong)(uVar13 + 2) + lVar10) =
               (((char)(iVar7 / 0xff) + (char)(iVar7 >> 0x1f)) -
               (char)((longlong)iVar7 * 0x80808081 >> 0x3f)) + (char)((uVar11 * bVar8) / 0xff);
          iVar15 = (uint)*(byte *)((ulonglong)(uVar13 + 3) + lVar10) * iVar15;
          uVar17 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar17;
          *(char *)((ulonglong)(uVar13 + 3) + lVar10) =
               (((char)(iVar15 / 0xff) + (char)(iVar15 >> 0x1f)) -
               (char)((longlong)iVar15 * 0x80808081 >> 0x3f)) + (char)uVar11;
        } while (uVar17 < *(uint *)(param_4 + 0x6c));
      }
      local_54 = local_54 + 1;
      lVar20 = lVar20 + *(int *)(param_4 + 0x70);
      lVar10 = lVar10 + *(int *)(param_3 + 0x70);
    } while (local_54 < *(uint *)(param_4 + 0x68));
  }
  return 0;
}

