// Function: FUN_1403d06c0
// Addr: 1403d06c0
// Size: 1107 bytes


void FUN_1403d06c0(longlong param_1,uint param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  
  lVar7 = *(longlong *)(param_1 + 8);
  uVar19 = 0;
  lVar8 = *(longlong *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + 0x5c);
  do {
    uVar18 = (ulonglong)uVar4;
    if ((param_2 - 1 <= uVar4) || (*(char *)(lVar7 + 0x58) == '\0')) {
      if (uVar4 < param_2) {
        lVar9 = *(longlong *)(lVar7 + 0x70);
        lVar16 = lVar9 + 0xc;
        *(undefined4 *)(lVar16 + uVar18 * 0x14) = 0;
        lVar10 = *(longlong *)(*(longlong *)(lVar8 + 0x90) + 0x10);
        if (lVar10 != 0) {
          uVar19 = *(ulonglong *)(lVar10 + 0x10);
        }
        (**(code **)(*(longlong *)(lVar8 + 0x90) + 0x30))
                  (lVar8,*(undefined8 *)(lVar8 + 0x98),*(undefined4 *)(lVar9 + uVar18 * 0x14),
                   lVar16 + uVar18 * 0x14,uVar19);
        FUN_1403ecfd0(lVar7);
      }
      return;
    }
    lVar16 = *(longlong *)(lVar7 + 0x70);
    iVar15 = *(int *)(lVar16 + (ulonglong)(uVar4 + 1) * 0x14);
    if ((iVar15 - 0xfe00U < 0x10) || (iVar15 - 0xe0100U < 0xf0)) {
      plVar20 = (longlong *)(lVar8 + 0x90);
      *(undefined4 *)(lVar16 + 0xc + uVar18 * 0x14) = 0;
      lVar9 = *(longlong *)(*plVar20 + 0x10);
      uVar17 = uVar19;
      if (lVar9 != 0) {
        uVar17 = *(ulonglong *)(lVar9 + 0x20);
      }
      iVar15 = (**(code **)(*plVar20 + 0x40))
                         (lVar8,*(undefined8 *)(lVar8 + 0x98),
                          *(undefined4 *)(lVar16 + uVar18 * 0x14),iVar15,
                          lVar16 + 0xc + uVar18 * 0x14,uVar17);
      uVar6 = *(undefined4 *)
               (*(longlong *)(lVar7 + 0x70) + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14);
      if (iVar15 == 0) {
        puVar21 = (undefined4 *)
                  (*(longlong *)(lVar7 + 0x70) + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14 + 0xc);
        *puVar21 = 0;
        lVar16 = *(longlong *)(*plVar20 + 0x10);
        uVar18 = uVar19;
        if (lVar16 != 0) {
          uVar18 = *(ulonglong *)(lVar16 + 0x10);
        }
        (**(code **)(*plVar20 + 0x30))(lVar8,*(undefined8 *)(lVar8 + 0x98),uVar6,puVar21,uVar18);
        FUN_1403ecfd0(lVar7);
        *(uint *)(lVar7 + 0xd8) = *(uint *)(lVar7 + 0xd8) | 0x40;
        uVar4 = *(uint *)(lVar7 + 0x5c);
        lVar16 = *(longlong *)(lVar7 + 0x70);
        puVar3 = (ushort *)(lVar16 + 0x10 + (ulonglong)uVar4 * 0x14);
        *puVar3 = *puVar3 & 0xe0;
        puVar3 = (ushort *)(lVar16 + 0x10 + (ulonglong)uVar4 * 0x14);
        *puVar3 = *puVar3 | 0x401;
        if (*(int *)(lVar7 + 0x2c) != -1) {
          puVar3 = (ushort *)
                   (*(longlong *)(lVar7 + 0x70) + 0x10 + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14);
          *puVar3 = *puVar3 & 0xffdf;
        }
        uVar17 = (ulonglong)*(uint *)(lVar7 + 0x5c);
        lVar9 = *(longlong *)(lVar7 + 0x70);
        lVar16 = lVar9 + 0xc;
        *(undefined4 *)(lVar16 + uVar17 * 0x14) = 0;
        lVar10 = *(longlong *)(*plVar20 + 0x10);
        uVar18 = uVar19;
        if (lVar10 != 0) {
          uVar18 = *(ulonglong *)(lVar10 + 0x10);
        }
        (**(code **)(*plVar20 + 0x30))
                  (lVar8,*(undefined8 *)(lVar8 + 0x98),*(undefined4 *)(lVar9 + uVar17 * 0x14),
                   lVar16 + uVar17 * 0x14,uVar18);
        FUN_1403ecfd0(lVar7);
      }
      else {
        cVar14 = FUN_1403eaf70(lVar7,2,1);
        if (cVar14 != '\0') {
          if (*(uint *)(lVar7 + 0x1c) < 2) {
            FUN_1403ec280(lVar7,*(int *)(lVar7 + 0x5c),*(int *)(lVar7 + 0x5c) + 2);
          }
          else {
            FUN_14040eef0();
          }
          puVar1 = (uint *)(lVar7 + 100);
          if (*(uint *)(lVar7 + 0x5c) < *(uint *)(lVar7 + 0x60)) {
            lVar16 = *(longlong *)(lVar7 + 0x70);
            uVar18 = (ulonglong)*(uint *)(lVar7 + 0x5c);
          }
          else {
            lVar16 = *(longlong *)(lVar7 + 0x78);
            uVar18 = (ulonglong)(*puVar1 - 1);
            if (*puVar1 == 0) {
              uVar18 = uVar19;
            }
          }
          puVar21 = (undefined4 *)(lVar16 + uVar18 * 0x14);
          uVar11 = puVar21[1];
          uVar12 = puVar21[2];
          uVar13 = puVar21[3];
          uVar4 = *puVar1;
          lVar9 = *(longlong *)(lVar7 + 0x78);
          puVar2 = (undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14);
          *puVar2 = *puVar21;
          puVar2[1] = uVar11;
          puVar2[2] = uVar12;
          puVar2[3] = uVar13;
          puVar21 = (undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14);
          puVar21[4] = *(undefined4 *)(lVar16 + uVar18 * 0x14 + 0x10);
          *puVar21 = uVar6;
          *(int *)(lVar7 + 0x5c) = *(int *)(lVar7 + 0x5c) + 2;
          *puVar1 = *puVar1 + 1;
        }
      }
      uVar4 = *(uint *)(lVar7 + 0x5c);
      while ((uVar4 < param_2 && (*(char *)(lVar7 + 0x58) != '\0'))) {
        iVar15 = *(int *)(*(longlong *)(lVar7 + 0x70) + (ulonglong)uVar4 * 0x14);
        lVar16 = *(longlong *)(lVar7 + 0x70) + (ulonglong)uVar4 * 0x14;
        if ((0xf < iVar15 - 0xfe00U) && (0xef < iVar15 - 0xe0100U)) break;
        *(undefined4 *)(lVar16 + 0xc) = 0;
        lVar9 = *(longlong *)(*plVar20 + 0x10);
        uVar18 = uVar19;
        if (lVar9 != 0) {
          uVar18 = *(ulonglong *)(lVar9 + 0x10);
        }
        (**(code **)(*plVar20 + 0x30))
                  (lVar8,*(undefined8 *)(lVar8 + 0x98),iVar15,lVar16 + 0xc,uVar18);
        if (*(char *)(lVar7 + 0x59) == '\0') {
LAB_1403d0a76:
          *(int *)(lVar7 + 0x5c) = *(int *)(lVar7 + 0x5c) + 1;
        }
        else {
          if ((*(longlong *)(lVar7 + 0x78) == *(longlong *)(lVar7 + 0x70)) &&
             (*(int *)(lVar7 + 100) == *(int *)(lVar7 + 0x5c))) {
LAB_1403d0a73:
            *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
            goto LAB_1403d0a76;
          }
          cVar14 = FUN_1403bf1a0(lVar7,*(int *)(lVar7 + 100) + 1);
          if (cVar14 != '\0') {
            uVar4 = *(uint *)(lVar7 + 0x5c);
            lVar16 = *(longlong *)(lVar7 + 0x70);
            uVar5 = *(uint *)(lVar7 + 100);
            puVar21 = (undefined4 *)(lVar16 + (ulonglong)uVar4 * 0x14);
            uVar6 = puVar21[1];
            uVar11 = puVar21[2];
            uVar12 = puVar21[3];
            lVar9 = *(longlong *)(lVar7 + 0x78);
            puVar2 = (undefined4 *)(lVar9 + (ulonglong)uVar5 * 0x14);
            *puVar2 = *puVar21;
            puVar2[1] = uVar6;
            puVar2[2] = uVar11;
            puVar2[3] = uVar12;
            *(undefined4 *)(lVar9 + (ulonglong)uVar5 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar16 + 0x10 + (ulonglong)uVar4 * 0x14);
            goto LAB_1403d0a73;
          }
        }
        uVar4 = *(uint *)(lVar7 + 0x5c);
      }
    }
    else {
      *(undefined4 *)(lVar16 + 0xc + uVar18 * 0x14) = 0;
      lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x90) + 0x10);
      uVar17 = uVar19;
      if (lVar9 != 0) {
        uVar17 = *(ulonglong *)(lVar9 + 0x10);
      }
      (**(code **)(*(longlong *)(lVar8 + 0x90) + 0x30))
                (lVar8,*(undefined8 *)(lVar8 + 0x98),*(undefined4 *)(lVar16 + uVar18 * 0x14),
                 lVar16 + 0xc + uVar18 * 0x14,uVar17);
      if (*(char *)(lVar7 + 0x59) != '\0') {
        if ((*(longlong *)(lVar7 + 0x78) != *(longlong *)(lVar7 + 0x70)) ||
           (*(int *)(lVar7 + 100) != *(int *)(lVar7 + 0x5c))) {
          cVar14 = FUN_1403bf1a0(lVar7,*(int *)(lVar7 + 100) + 1);
          if (cVar14 == '\0') goto LAB_1403d0a8c;
          uVar4 = *(uint *)(lVar7 + 0x5c);
          lVar16 = *(longlong *)(lVar7 + 0x70);
          uVar5 = *(uint *)(lVar7 + 100);
          puVar21 = (undefined4 *)(lVar16 + (ulonglong)uVar4 * 0x14);
          uVar6 = puVar21[1];
          uVar11 = puVar21[2];
          uVar12 = puVar21[3];
          lVar9 = *(longlong *)(lVar7 + 0x78);
          puVar2 = (undefined4 *)(lVar9 + (ulonglong)uVar5 * 0x14);
          *puVar2 = *puVar21;
          puVar2[1] = uVar6;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          *(undefined4 *)(lVar9 + (ulonglong)uVar5 * 0x14 + 0x10) =
               *(undefined4 *)(lVar16 + 0x10 + (ulonglong)uVar4 * 0x14);
        }
        *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
      }
      *(int *)(lVar7 + 0x5c) = *(int *)(lVar7 + 0x5c) + 1;
    }
LAB_1403d0a8c:
    uVar4 = *(uint *)(lVar7 + 0x5c);
  } while( true );
}

