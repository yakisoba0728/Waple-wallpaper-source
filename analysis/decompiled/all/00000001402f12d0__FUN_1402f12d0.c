// Function: FUN_1402f12d0
// Addr: 1402f12d0
// Size: 2039 bytes


ulonglong FUN_1402f12d0(longlong param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  ushort *puVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  code *pcVar9;
  int *piVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  int *piVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  longlong lVar20;
  ushort uVar21;
  int iVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar22;
  
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x80) == 0)) ||
     (lVar6 = *(longlong *)(param_1 + 0x78), lVar6 == 0)) {
    return 0x23;
  }
  if ((*(longlong *)(lVar6 + 0xf0) == 0) || ((*(byte *)(*(longlong *)(lVar6 + 0xf0) + 8) & 1) == 0))
  {
    *(undefined8 *)(lVar6 + 0x78) = 0;
  }
  else {
    if (*(longlong *)(lVar6 + 0x78) != 0) {
      lVar20 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x98);
      (**(code **)(lVar20 + 0x10))(lVar20);
    }
    *(undefined8 *)(lVar6 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(lVar6 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  uVar22 = 0;
  *(undefined4 *)(lVar6 + 0x18) = 0;
  puVar2 = (ushort *)(lVar6 + 0x98);
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  puVar2[0] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined8 *)(lVar6 + 0xa0) = 0;
  *(undefined8 *)(lVar6 + 0xa8) = 0;
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  *(undefined8 *)(lVar6 + 0xb8) = 0;
  *(undefined8 *)(lVar6 + 0x68) = 0;
  *(undefined4 *)(lVar6 + 0x70) = 0;
  *(undefined1 *)(lVar6 + 0x82) = 0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  *(undefined4 *)(lVar6 + 0xc0) = 0;
  *(undefined8 *)(lVar6 + 200) = 0;
  *(undefined8 *)(lVar6 + 0xd0) = 0;
  *(undefined4 *)(lVar6 + 0xd8) = 0;
  if ((*(uint *)(*(longlong *)(lVar6 + 8) + 8) & 0x10000) == 0) {
    *(undefined8 *)(lVar6 + 0xe8) = 0;
  }
  else if ((*(byte *)(*(longlong *)(lVar6 + 0xf0) + 8) & 2) != 0) {
    plVar8 = *(longlong **)(lVar6 + 0xe8);
    if (*plVar8 != 0) {
      lVar20 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x98);
      (**(code **)(lVar20 + 0x10))(lVar20);
    }
    *plVar8 = 0;
    puVar1 = (uint *)(*(longlong *)(lVar6 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffd;
  }
  *(undefined8 *)(lVar6 + 0x5c) = 0;
  *(undefined8 *)(lVar6 + 0x50) = 0;
  *(undefined4 *)(lVar6 + 0x58) = 0;
  *(undefined8 *)(lVar6 + 0xdc) = 0;
  puVar7 = *(undefined8 **)(param_1 + 0x90);
  plVar8 = *(longlong **)(puVar7[1] + 0x130);
  if ((*(short *)(*(longlong *)(param_1 + 0x80) + 0x18) == 0) ||
     (*(short *)(*(longlong *)(param_1 + 0x80) + 0x1a) == 0)) {
    param_3 = param_3 | 1;
  }
  uVar13 = param_3 | 0x801;
  if ((param_3 >> 10 & 1) == 0) {
    uVar13 = param_3;
  }
  if ((uVar13 & 1) != 0) {
    uVar13 = uVar13 & 0xfffffffb | 10;
  }
  uVar11 = uVar13 & 0xfffffffb;
  if ((uVar13 >> 0x16 & 1) == 0) {
    uVar11 = uVar13;
  }
  if (((plVar8 == (longlong *)0x0) || ((uVar11 & 0x8002) != 0)) ||
     ((*(uint *)(param_1 + 8) & 0x2001) != 1)) goto LAB_1402f14c1;
  if ((uVar11 >> 0xb & 1) == 0) {
    iVar14 = **(int **)(param_1 + 0xd0);
    if ((*(int **)(param_1 + 0xd0))[2] == 0) {
      if (iVar14 != 0) goto LAB_1402f15d1;
    }
    else if (iVar14 == 0) goto LAB_1402f15d1;
LAB_1402f14c1:
    uVar13 = (**(code **)(puVar7[3] + 0x78))(lVar6,*(undefined8 *)(param_1 + 0x80),param_2,uVar11);
    if (uVar13 != 0) {
      return (ulonglong)uVar13;
    }
    uVar31 = 0;
    if (*(int *)(lVar6 + 0x60) == 0x6f75746c) {
      if (puVar2 == (ushort *)0x0) {
        return 0x14;
      }
      uVar21 = *(ushort *)(lVar6 + 0x9a);
      uVar4 = *puVar2;
      if (uVar21 == 0) {
        if (uVar4 != 0) {
          return 0x14;
        }
      }
      else {
        if (uVar4 == 0) {
          return 0x14;
        }
        uVar13 = 0xffffffff;
        uVar31 = uVar22;
        do {
          uVar5 = *(ushort *)(*(longlong *)(lVar6 + 0xb0) + uVar31 * 2);
          if ((int)(uint)uVar5 <= (int)uVar13) {
            return 0x14;
          }
          uVar13 = (uint)uVar5;
          if (uVar21 <= uVar13) {
            return 0x14;
          }
          uVar17 = (int)uVar31 + 1;
          uVar31 = (ulonglong)uVar17;
        } while ((int)uVar17 < (int)(uint)uVar4);
        if (uVar13 != uVar21 - 1) {
          return 0x14;
        }
      }
      uVar31 = uVar22;
      if ((uVar11 & 2) == 0) {
        uVar13 = *(uint *)(lVar6 + 0x44);
        uVar17 = *(uint *)(lVar6 + 0x38);
        uVar26 = uVar13 & 0xffffffc0;
        uVar19 = uVar17 & 0xffffffc0;
        *(uint *)(lVar6 + 0x44) = uVar26;
        *(uint *)(lVar6 + 0x38) = uVar19;
        if ((uVar11 & 0x10) == 0) {
          *(uint *)(lVar6 + 0x48) = *(uint *)(lVar6 + 0x48) & 0xffffffc0;
          uVar13 = *(int *)(lVar6 + 0x3c) + 0x3fU & 0xffffffc0;
          iVar23 = uVar13 - (*(int *)(lVar6 + 0x3c) - *(int *)(lVar6 + 0x34) & 0xffffffc0U);
          iVar14 = (uVar17 + 0x3f + *(int *)(lVar6 + 0x30) & 0xffffffc0) - uVar19;
        }
        else {
          uVar17 = *(uint *)(lVar6 + 0x48);
          uVar19 = uVar17 & 0xffffffc0;
          iVar14 = (uVar13 + 0x3f + *(int *)(lVar6 + 0x30) & 0xffffffc0) - uVar26;
          *(uint *)(lVar6 + 0x48) = uVar19;
          iVar23 = (uVar17 + 0x3f + *(int *)(lVar6 + 0x34) & 0xffffffc0) - uVar19;
          uVar13 = *(int *)(lVar6 + 0x3c) + 0x3fU & 0xffffffc0;
        }
        *(int *)(lVar6 + 0x30) = iVar14;
        *(uint *)(lVar6 + 0x3c) = uVar13;
        *(int *)(lVar6 + 0x34) = iVar23;
        *(uint *)(lVar6 + 0x40) = *(int *)(lVar6 + 0x40) + 0x20U & 0xffffffc0;
        *(uint *)(lVar6 + 0x4c) = *(int *)(lVar6 + 0x4c) + 0x20U & 0xffffffc0;
        uVar31 = 0;
      }
    }
  }
  else {
LAB_1402f15d1:
    if (((uVar11 & 0x20) == 0) && ((*(uint *)*puVar7 & 0x400) != 0)) {
      pcVar9 = *(code **)((uint *)*puVar7 + 0xc);
      uVar31 = uVar22;
      if (pcVar9 != (code *)0x0) {
        uVar31 = (*pcVar9)(puVar7,"font-format");
      }
      lVar20 = FUN_1402bbb40(uVar31,"Type 1");
      if ((lVar20 == 0) || (*(int *)(puVar7 + 7) != 1)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (((((uVar11 & 0xf0000) != 0x10000) || ((*(uint *)*puVar7 & 0x800) != 0)) || (bVar12)) &&
         ((((*(byte *)(param_1 + 8) & 8) == 0 || (*(int *)(param_1 + 0x438) == 0)) ||
          ((*(int *)(param_1 + 0x3b0) != 0 || (7 < *(uint *)(param_1 + 0x3c0)))))))
      goto LAB_1402f14c1;
    }
    if (((((uVar11 >> 0x18 & 1) != 0) || ((*(uint *)(param_1 + 8) & 0x10000) == 0)) ||
        ((iVar14 = (**(code **)(puVar7[3] + 0x78))
                             (lVar6,*(undefined8 *)(param_1 + 0x80),param_2,uVar11 | 0x800000),
         iVar14 != 0 || (uVar31 = 0, *(int *)(lVar6 + 0x60) != 0x53564720)))) &&
       (((((*(byte *)(param_1 + 8) & 2) == 0 || ((uVar11 & 8) != 0)) ||
         (iVar14 = (**(code **)(puVar7[3] + 0x78))
                             (lVar6,*(undefined8 *)(param_1 + 0x80),param_2,uVar11 | 0x4000),
         iVar14 != 0)) || (uVar31 = 0, *(int *)(lVar6 + 0x60) != 0x62697473)))) {
      lVar20 = *(longlong *)(param_1 + 0xd0);
      uVar18 = *(undefined4 *)(lVar20 + 0x18);
      *(undefined4 *)(lVar20 + 0x18) = 0;
      uVar13 = (**(code **)(*(longlong *)(*plVar8 + 0x18) + 0x18))
                         (plVar8,lVar6,*(undefined8 *)(param_1 + 0x80),param_2,uVar11);
      uVar31 = (ulonglong)uVar13;
      *(undefined4 *)(lVar20 + 0x18) = uVar18;
    }
  }
  if ((uVar11 & 0x10) == 0) {
    uVar18 = *(undefined4 *)(lVar6 + 0x40);
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined4 *)(lVar6 + 0x4c);
    uVar18 = 0;
  }
  *(undefined4 *)(lVar6 + 0x58) = uVar18;
  *(undefined4 *)(lVar6 + 0x5c) = uVar15;
  if (((uVar11 >> 0xd & 1) == 0) && ((*(byte *)(param_1 + 8) & 1) != 0)) {
    iVar14 = *(int *)(lVar6 + 0x50);
    lVar20 = *(longlong *)(param_1 + 0x80);
    iVar24 = (iVar14 >> 0x1f & 0xfffffffeU) + 1;
    iVar23 = *(int *)(lVar20 + 0x1c);
    lVar25 = -(longlong)iVar23;
    if (-1 < iVar23) {
      lVar25 = (longlong)iVar23;
    }
    lVar28 = -(longlong)iVar14;
    if (-1 < iVar14) {
      lVar28 = (longlong)iVar14;
    }
    iVar27 = (int)(lVar25 * lVar28 + 0x20U >> 6);
    iVar14 = -iVar24;
    if (-1 < iVar23) {
      iVar14 = iVar24;
    }
    iVar23 = *(int *)(lVar6 + 0x54);
    iVar24 = -iVar27;
    if (-1 < iVar14) {
      iVar24 = iVar27;
    }
    *(int *)(lVar6 + 0x50) = iVar24;
    iVar14 = *(int *)(lVar20 + 0x20);
    iVar24 = (iVar23 >> 0x1f & 0xfffffffeU) + 1;
    lVar20 = -(longlong)iVar14;
    if (-1 < iVar14) {
      lVar20 = (longlong)iVar14;
    }
    lVar25 = -(longlong)iVar23;
    if (-1 < iVar23) {
      lVar25 = (longlong)iVar23;
    }
    iVar27 = (int)(lVar20 * lVar25 + 0x20U >> 6);
    iVar23 = -iVar24;
    if (-1 < iVar14) {
      iVar23 = iVar24;
    }
    iVar14 = -iVar27;
    if (-1 < iVar23) {
      iVar14 = iVar27;
    }
    *(int *)(lVar6 + 0x54) = iVar14;
  }
  if ((uVar11 >> 0xb & 1) != 0) goto LAB_1402f1a0f;
  piVar10 = *(int **)(param_1 + 0xd0);
  if (piVar10[6] == 0) goto LAB_1402f1a0f;
  lVar20 = *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 8) + 0x90) + 8);
  uVar29 = *(ulonglong *)(lVar20 + 0x128);
  if ((uVar29 == 0) || (*(int *)(uVar29 + 0x20) != *(int *)(lVar6 + 0x60))) {
    lVar20 = *(longlong *)(lVar20 + 0x118);
    while ((uVar29 = uVar22, lVar20 != 0 &&
           (uVar29 = *(ulonglong *)(lVar20 + 0x10),
           *(int *)(uVar29 + 0x20) != *(int *)(lVar6 + 0x60)))) {
      lVar20 = *(longlong *)(lVar20 + 8);
    }
    if (uVar29 != 0) goto LAB_1402f18cf;
    if (*(int *)(lVar6 + 0x60) == 0x6f75746c) {
      if ((((piVar10[6] & 1U) != 0) && (puVar2 != (ushort *)0x0)) &&
         (piVar16 = *(int **)(lVar6 + 0xa0), piVar16 != (int *)0x0)) {
        piVar3 = piVar16 + (ulonglong)*(ushort *)(lVar6 + 0x9a) * 2;
        for (; piVar16 < piVar3; piVar16 = piVar16 + 2) {
          if (piVar16 != (int *)0x0) {
            lVar20 = (longlong)*piVar10 * (longlong)*piVar16;
            lVar30 = (longlong)piVar10[2] * (longlong)*piVar16;
            lVar25 = (longlong)piVar10[1] * (longlong)piVar16[1];
            lVar28 = (longlong)piVar10[3] * (longlong)piVar16[1];
            *piVar16 = (int)((ulonglong)(lVar20 + (lVar20 >> 0x3f) + 0x8000) >> 0x10) +
                       (int)((ulonglong)((lVar25 >> 0x3f) + 0x8000 + lVar25) >> 0x10);
            piVar16[1] = (int)((ulonglong)((lVar28 >> 0x3f) + 0x8000 + lVar28) >> 0x10) +
                         (int)((ulonglong)(lVar30 + 0x8000 + (lVar30 >> 0x3f)) >> 0x10);
          }
        }
      }
      if (((*(byte *)(piVar10 + 6) & 2) != 0) && (puVar2 != (ushort *)0x0)) {
        iVar14 = piVar10[5];
        iVar23 = piVar10[4];
        piVar16 = *(int **)(lVar6 + 0xa0);
        if (*(short *)(lVar6 + 0x9a) != 0) {
          do {
            *piVar16 = *piVar16 + iVar23;
            uVar21 = (short)uVar22 + 1;
            uVar22 = (ulonglong)uVar21;
            piVar16[1] = piVar16[1] + iVar14;
            piVar16 = piVar16 + 2;
          } while (uVar21 < *(ushort *)(lVar6 + 0x9a));
        }
      }
    }
  }
  else {
LAB_1402f18cf:
    uVar13 = (**(code **)(*(longlong *)(uVar29 + 0x18) + 0x48))(uVar29,lVar6,piVar10,piVar10 + 4);
    uVar31 = (ulonglong)uVar13;
  }
  FUN_1402f6030(lVar6 + 0x58,piVar10);
LAB_1402f1a0f:
  *(undefined4 *)(lVar6 + 0x18) = param_2;
  *(uint *)(*(longlong *)(lVar6 + 0xf0) + 0x30) = uVar11;
  if ((((int)uVar31 == 0) && ((uVar11 & 1) == 0)) &&
     ((*(int *)(lVar6 + 0x60) != 0x62697473 && (*(int *)(lVar6 + 0x60) != 0x636f6d70)))) {
    uVar13 = (int)uVar11 >> 0x10 & 0xf;
    if ((uVar13 == 0) && (uVar13 = 0, (uVar11 >> 0xc & 1) != 0)) {
      uVar13 = 2;
    }
    if ((uVar11 & 4) == 0) {
      FUN_1402f7200(lVar6,uVar13,0);
    }
    else if (*(longlong *)(lVar6 + 8) == 0) {
      uVar31 = 6;
    }
    else {
      uVar13 = FUN_1402f4330(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar6 + 8) + 0x90) + 8),
                             lVar6,uVar13);
      uVar31 = (ulonglong)uVar13;
    }
  }
  return uVar31;
}

