// Function: FUN_14035f050
// Addr: 14035f050
// Size: 1005 bytes


void FUN_14035f050(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  
  uVar18 = *(uint *)(param_2 + 0x60);
  *(undefined2 *)(param_2 + 0x59) = 1;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  if (uVar18 != 0) {
    uVar17 = 0;
    do {
      iVar15 = (int)uVar17;
      uVar6 = *(uint *)(*(longlong *)(param_2 + 0x70) + uVar17 * 0x14);
      if ((uVar6 & 0xffffff7f) == 0xe33) {
        cVar13 = FUN_1403eaf70(param_2,0,1);
        if (cVar13 != '\0') {
          uVar16 = *(uint *)(param_2 + 0x5c);
          if (uVar16 < *(uint *)(param_2 + 0x60)) {
            lVar14 = *(longlong *)(param_2 + 0x70);
          }
          else {
            uVar16 = *(int *)(param_2 + 100) - 1;
            if (*(int *)(param_2 + 100) == 0) {
              uVar16 = 0;
            }
            lVar14 = *(longlong *)(param_2 + 0x78);
          }
          puVar1 = (undefined4 *)(lVar14 + (ulonglong)uVar16 * 0x14);
          uVar7 = puVar1[1];
          uVar9 = puVar1[2];
          uVar10 = puVar1[3];
          uVar19 = *(uint *)(param_2 + 100);
          lVar8 = *(longlong *)(param_2 + 0x78);
          puVar2 = (undefined4 *)(lVar8 + (ulonglong)uVar19 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
          piVar3 = (int *)(lVar8 + (ulonglong)uVar19 * 0x14);
          piVar3[4] = *(int *)(lVar14 + (ulonglong)uVar16 * 0x14 + 0x10);
          *piVar3 = uVar6 + 0x1a;
          *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
        }
        uVar17 = (ulonglong)(*(int *)(param_2 + 100) - 1);
        if (*(int *)(param_2 + 100) == 0) {
          uVar17 = 0;
        }
        *(uint *)(param_2 + 0xd8) = *(uint *)(param_2 + 0xd8) | 0x80;
        puVar5 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar17 * 0x14);
        *puVar5 = *puVar5 | 0x80;
        cVar13 = FUN_1403eaf70(param_2,1,1);
        if (cVar13 == '\0') break;
        uVar16 = *(uint *)(param_2 + 0x5c);
        if (uVar16 < *(uint *)(param_2 + 0x60)) {
          lVar14 = *(longlong *)(param_2 + 0x70);
        }
        else {
          uVar16 = *(int *)(param_2 + 100) - 1;
          if (*(int *)(param_2 + 100) == 0) {
            uVar16 = 0;
          }
          lVar14 = *(longlong *)(param_2 + 0x78);
        }
        puVar1 = (undefined4 *)(lVar14 + (ulonglong)uVar16 * 0x14);
        uVar7 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        uVar19 = *(uint *)(param_2 + 100);
        lVar8 = *(longlong *)(param_2 + 0x78);
        puVar2 = (undefined4 *)(lVar8 + (ulonglong)uVar19 * 0x14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        piVar3 = (int *)(lVar8 + (ulonglong)uVar19 * 0x14);
        piVar3[4] = *(int *)(lVar14 + (ulonglong)uVar16 * 0x14 + 0x10);
        *piVar3 = uVar6 - 1;
        *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
        uVar6 = *(uint *)(param_2 + 100);
        *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
        lVar8 = *(longlong *)(param_2 + 0x78);
        uVar17 = (ulonglong)(uVar6 - 2);
        lVar14 = uVar17 * 0x14;
        puVar5 = (ushort *)(lVar14 + 0x10 + lVar8);
        *puVar5 = *puVar5 & 0xe0;
        puVar5 = (ushort *)(lVar14 + 0x10 + lVar8);
        *puVar5 = *puVar5 | 0xc;
        if (uVar6 - 2 != 0) {
          do {
            uVar19 = (int)uVar17 - 1;
            uVar20 = (ulonglong)uVar19;
            uVar16 = *(uint *)(*(longlong *)(param_2 + 0x78) + uVar20 * 0x14) & 0xffffff7f;
            if ((((3 < uVar16 - 0xe34) && (7 < uVar16 - 0xe47)) && (uVar16 != 0xe31)) &&
               (uVar16 != 0xe3b)) break;
            uVar17 = uVar20;
          } while (uVar19 != 0);
        }
        iVar15 = (int)uVar17;
        if (iVar15 + 2U < uVar6) {
          if ((1 < uVar6 - iVar15) && (*(uint *)(param_2 + 0x1c) < 2)) {
            FUN_1403ec3f0(param_2,uVar17,uVar6);
          }
          lVar8 = *(longlong *)(param_2 + 0x78);
          uVar11 = *(undefined8 *)(lVar8 + lVar14);
          uVar12 = ((undefined8 *)(lVar8 + lVar14))[1];
          uVar7 = *(undefined4 *)(lVar8 + 0x10 + lVar14);
          lVar14 = uVar17 * 0x14;
          FUN_1404210f0(lVar8 + lVar14 + 0x14,lVar8 + lVar14,
                        (ulonglong)((uVar6 - iVar15) - 2) * 0x14);
          lVar8 = *(longlong *)(param_2 + 0x78);
          puVar4 = (undefined8 *)(lVar14 + lVar8);
          *puVar4 = uVar11;
          puVar4[1] = uVar12;
          *(undefined4 *)(lVar14 + 0x10 + lVar8) = uVar7;
        }
        if (((iVar15 != 0) && (1 < uVar6 - (iVar15 + -1))) &&
           ((1 << ((byte)*(undefined4 *)(param_2 + 0x1c) & 0x1f) & 9U) != 0)) {
          FUN_1403ec3f0(param_2,iVar15 + -1,uVar6);
        }
      }
      else {
        if (*(char *)(param_2 + 0x59) != '\0') {
          if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
             (*(int *)(param_2 + 100) != iVar15)) {
            cVar13 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + 1);
            if (cVar13 == '\0') break;
            lVar14 = *(longlong *)(param_2 + 0x70);
            uVar6 = *(uint *)(param_2 + 0x5c);
            uVar16 = *(uint *)(param_2 + 100);
            puVar1 = (undefined4 *)(lVar14 + (ulonglong)uVar6 * 0x14);
            uVar7 = puVar1[1];
            uVar9 = puVar1[2];
            uVar10 = puVar1[3];
            lVar8 = *(longlong *)(param_2 + 0x78);
            puVar2 = (undefined4 *)(lVar8 + (ulonglong)uVar16 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar7;
            puVar2[2] = uVar9;
            puVar2[3] = uVar10;
            *(undefined4 *)(lVar8 + (ulonglong)uVar16 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar14 + 0x10 + (ulonglong)uVar6 * 0x14);
            iVar15 = *(int *)(param_2 + 0x5c);
          }
          *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
        }
        *(int *)(param_2 + 0x5c) = iVar15 + 1;
      }
      uVar17 = (ulonglong)*(uint *)(param_2 + 0x5c);
    } while (*(uint *)(param_2 + 0x5c) < uVar18);
  }
  if (*(char *)(param_2 + 0x58) != '\0') {
    if (*(char *)(param_2 + 0x59) != '\0') {
      uVar18 = *(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x5c);
      if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
         (*(int *)(param_2 + 100) != *(int *)(param_2 + 0x5c))) {
        cVar13 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + uVar18);
        if (cVar13 == '\0') goto LAB_14035f3f6;
        FUN_1404210f0(*(longlong *)(param_2 + 0x78) + (ulonglong)*(uint *)(param_2 + 100) * 0x14,
                      *(longlong *)(param_2 + 0x70) + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14,
                      (ulonglong)uVar18 * 0x14);
      }
      *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + uVar18;
    }
    if (*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) {
      *(longlong *)(param_2 + 0x80) = *(longlong *)(param_2 + 0x70);
      *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x78);
    }
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 100);
  }
LAB_14035f3f6:
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_2 + 0x59) = 0;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  if ((*(int *)(param_1 + 4) == 0x54686169) && (*(char *)(param_1 + 0x30) == '\0')) {
    FUN_1403be160(param_1,param_2,param_3);
  }
  return;
}

