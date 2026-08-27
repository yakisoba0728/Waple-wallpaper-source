// Function: FUN_1403af6a0
// Addr: 1403af6a0
// Size: 944 bytes


undefined1 FUN_1403af6a0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined1 uVar21;
  bool bVar22;
  
  if ((*(uint *)(param_2 + 0x1c) == 0xffffffff) ||
     (cVar12 = (**(code **)((ulonglong)*(uint *)(param_2 + 0x1c) * 0x40 + 0x38 + param_2))
                         (param_1,0), cVar12 == '\0')) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  lVar6 = *(longlong *)(param_1 + 0xa0);
  uVar21 = 0;
  cVar12 = *(char *)(lVar6 + 0x58);
joined_r0x0001403af6e7:
  if (cVar12 != '\0') {
    uVar18 = *(uint *)(lVar6 + 0x5c);
    lVar7 = *(longlong *)(lVar6 + 0x70);
    if (uVar18 < *(uint *)(lVar6 + 0x60)) {
      do {
        uVar14 = 0;
        uVar15 = *(uint *)(lVar7 + (ulonglong)uVar18 * 0x14);
        lVar2 = lVar7 + (ulonglong)uVar18 * 0x14;
        do {
          if ((*(ulonglong *)(param_2 + uVar14 * 8) >>
               (uVar15 >> ((byte)(&DAT_14045c3c8)[uVar14] & 0x1f) & 0x3f) & 1) == 0)
          goto LAB_1403af837;
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
        } while (uVar13 < 3);
        if ((*(uint *)(param_1 + 0x11c) & *(uint *)(lVar2 + 4)) != 0) {
          uVar5 = *(ushort *)(lVar2 + 0xc);
          uVar13 = *(uint *)(param_1 + 0x124);
          if ((uVar5 & uVar13 & 0xe) == 0) {
            if ((uVar5 & 8) == 0) break;
            if ((uVar13 & 0x10) == 0) {
              if ((uVar13 & 0xff00) == 0) break;
              bVar22 = (uVar13 & 0xff00) == (uVar5 & 0xff00);
            }
            else {
              uVar14 = 0;
              do {
                if ((*(ulonglong *)
                      ((*(undefined8 **)(param_1 + 0xf8))[2] + (ulonglong)(uVar13 >> 0x10) * 0x18 +
                      uVar14 * 8) >> (uVar15 >> ((byte)(&DAT_14045c3c8)[uVar14] & 0x1f) & 0x3f) & 1)
                    == 0) goto LAB_1403af815;
                uVar20 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar20;
              } while (uVar20 < 3);
              puVar17 = (undefined8 *)**(undefined8 **)(param_1 + 0xf8);
              puVar16 = &DAT_14045dd10;
              if (puVar17 != (undefined8 *)0x0) {
                puVar16 = puVar17;
              }
              if (*(uint *)(puVar16 + 3) < 4) {
                puVar17 = &DAT_14045dd10;
              }
              else {
                puVar17 = (undefined8 *)puVar16[2];
              }
              cVar12 = FUN_1403ebf20(puVar17,uVar13 >> 0x10);
              if (cVar12 == '\0') {
LAB_1403af815:
                bVar22 = false;
              }
              else {
                bVar22 = true;
              }
            }
            if (bVar22) break;
          }
        }
LAB_1403af837:
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(uint *)(lVar6 + 0x60));
    }
    uVar15 = *(uint *)(lVar6 + 0x5c);
    if (uVar15 < uVar18) {
      iVar19 = uVar18 - uVar15;
      if (*(char *)(lVar6 + 0x59) != '\0') {
        if ((*(longlong *)(lVar6 + 0x78) != *(longlong *)(lVar6 + 0x70)) ||
           (*(uint *)(lVar6 + 100) != uVar15)) {
          cVar12 = FUN_1403bf1a0(lVar6,*(int *)(lVar6 + 100) + iVar19);
          if (cVar12 == '\0') goto LAB_1403afa1d;
          FUN_1404210f0(*(longlong *)(lVar6 + 0x78) + (ulonglong)*(uint *)(lVar6 + 100) * 0x14,
                        *(longlong *)(lVar6 + 0x70) + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14);
          uVar15 = *(uint *)(lVar6 + 0x5c);
        }
        *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + iVar19;
      }
      uVar15 = uVar15 + iVar19;
      *(uint *)(lVar6 + 0x5c) = uVar15;
    }
    if (uVar15 < *(uint *)(lVar6 + 0x60)) {
      *(longlong *)(param_1 + 0x100) = param_2;
      puVar17 = (undefined8 *)(param_2 + 0x20);
      iVar19 = *(int *)(param_2 + 0x18);
      if (bVar11) {
        for (; iVar19 != 0; iVar19 = iVar19 + -1) {
          uVar14 = 0;
          do {
            if (((ulonglong)puVar17[uVar14 + 5] >>
                 (*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x70) +
                           (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa0) + 0x5c) * 0x14) >>
                  ((byte)(&DAT_14045c3c8)[uVar14] & 0x1f) & 0x3f) & 1) == 0) goto LAB_1403af92b;
            uVar18 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar18;
          } while (uVar18 < 3);
          cVar12 = (*(code *)puVar17[2])(*puVar17,param_1);
          if (cVar12 != '\0') goto LAB_1403af993;
LAB_1403af92b:
          puVar17 = puVar17 + 8;
        }
      }
      else {
        for (; iVar19 != 0; iVar19 = iVar19 + -1) {
          uVar14 = 0;
          do {
            if (((ulonglong)puVar17[uVar14 + 5] >>
                 (*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x70) +
                           (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa0) + 0x5c) * 0x14) >>
                  ((byte)(&DAT_14045c3c8)[uVar14] & 0x1f) & 0x3f) & 1) == 0) goto LAB_1403af98b;
            uVar18 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar18;
          } while (uVar18 < 3);
          cVar12 = (*(code *)puVar17[1])(*puVar17,param_1);
          if (cVar12 != '\0') goto LAB_1403af993;
LAB_1403af98b:
          puVar17 = puVar17 + 8;
        }
      }
      bVar22 = false;
      goto LAB_1403af999;
    }
  }
LAB_1403afa1d:
  if (bVar11) {
    (**(code **)((ulonglong)*(uint *)(param_2 + 0x1c) * 0x40 + 0x38 + param_2))(param_1,1);
  }
  return uVar21;
LAB_1403af993:
  bVar22 = true;
LAB_1403af999:
  if (bVar22) {
    uVar21 = 1;
  }
  else {
    if (*(char *)(lVar6 + 0x59) != '\0') {
      puVar1 = (uint *)(lVar6 + 100);
      if ((*(longlong *)(lVar6 + 0x78) != *(longlong *)(lVar6 + 0x70)) ||
         (*puVar1 != *(uint *)(lVar6 + 0x5c))) {
        cVar12 = FUN_1403bf1a0(lVar6,*puVar1 + 1);
        if (cVar12 == '\0') goto LAB_1403af9fd;
        uVar18 = *(uint *)(lVar6 + 0x5c);
        lVar7 = *(longlong *)(lVar6 + 0x70);
        uVar15 = *puVar1;
        puVar3 = (undefined4 *)(lVar7 + (ulonglong)uVar18 * 0x14);
        uVar8 = puVar3[1];
        uVar9 = puVar3[2];
        uVar10 = puVar3[3];
        lVar2 = *(longlong *)(lVar6 + 0x78);
        puVar4 = (undefined4 *)(lVar2 + (ulonglong)uVar15 * 0x14);
        *puVar4 = *puVar3;
        puVar4[1] = uVar8;
        puVar4[2] = uVar9;
        puVar4[3] = uVar10;
        *(undefined4 *)(lVar2 + (ulonglong)uVar15 * 0x14 + 0x10) =
             *(undefined4 *)(lVar7 + 0x10 + (ulonglong)uVar18 * 0x14);
      }
      *puVar1 = *puVar1 + 1;
    }
    *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
  }
LAB_1403af9fd:
  cVar12 = *(char *)(lVar6 + 0x58);
  goto joined_r0x0001403af6e7;
}

