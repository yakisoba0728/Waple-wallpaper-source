// Function: FUN_14035dc50
// Addr: 14035dc50
// Size: 980 bytes


undefined8 FUN_14035dc50(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  undefined4 local_res10 [2];
  int local_res18;
  int local_58;
  int local_54;
  longlong local_50;
  longlong local_48;
  
  local_res10[0] = 0;
  lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
  uVar10 = 0;
  if (lVar12 != 0) {
    uVar10 = *(undefined8 *)(lVar12 + 0x10);
  }
  local_res18 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                          (param_2,*(undefined8 *)(param_2 + 0x98),0x20,local_res10,uVar10);
  *(undefined8 *)(param_3 + 0x78) = *(undefined8 *)(param_3 + 0x70);
  *(undefined2 *)(param_3 + 0x59) = 0x100;
  *(undefined4 *)(param_3 + 100) = 0;
  if ((*(int *)(param_3 + 0x60) * 5 & 0x3fffffffU) != 0) {
    FUN_1404217a0(*(undefined8 *)(param_3 + 0x80),0,*(int *)(param_3 + 0x60) * 0x14);
  }
  uVar16 = 0;
  uVar13 = *(uint *)(param_3 + 0x60);
  lVar12 = *(longlong *)(param_3 + 0x70);
  lVar14 = *(longlong *)(param_3 + 0x80);
  uVar5 = *(uint *)(param_3 + 0x38);
  uVar15 = uVar16;
  local_50 = lVar14;
  local_48 = lVar12;
  iVar11 = local_res18;
  if (uVar13 != 0) {
    do {
      uVar10 = 0;
      lVar2 = uVar16 * 0x14;
      bVar18 = false;
      if (iVar11 == 0) goto LAB_14035de0d;
      uVar17 = *(uint *)(lVar12 + lVar2);
      if (uVar17 >> 0x10 == 0) {
        uVar7 = uVar17 >> 8;
        if (uVar7 < 0x19) {
          if (uVar7 == 0x18) {
            bVar18 = uVar17 - 0x180b < 3;
            bVar19 = uVar17 - 0x180b == 3;
            goto LAB_14035de7b;
          }
          if (uVar17 >> 8 == 0) {
            bVar18 = uVar17 == 0xad;
          }
          else if (uVar7 == 3) {
            bVar18 = uVar17 == 0x34f;
          }
          else {
            if (uVar7 != 6) {
              if (uVar7 != 0x17) goto LAB_14035de0d;
              bVar18 = uVar17 == 0x17b4;
              bVar19 = uVar17 == 0x17b5;
              goto LAB_14035de7b;
            }
            bVar18 = uVar17 == 0x61c;
          }
          goto LAB_14035de81;
        }
        if (uVar7 == 0x20) {
          if (((uVar17 - 0x200b < 5) || (uVar17 - 0x202a < 5)) || (uVar17 - 0x2060 < 0x10)) {
            bVar18 = true;
          }
          goto LAB_14035de81;
        }
        if (uVar7 != 0xfe) {
          if (uVar7 == 0xff) {
            bVar18 = uVar17 - 0xfff0 < 8;
            bVar19 = uVar17 - 0xfff0 == 8;
            goto LAB_14035de7b;
          }
          goto LAB_14035de0d;
        }
        if ((0xf < uVar17 - 0xfe00) && (uVar17 != 0xfeff)) goto LAB_14035de0d;
LAB_14035de85:
        *(undefined4 *)(lVar12 + lVar2) = local_res10[0];
        *(undefined8 *)(lVar2 + lVar14) = 0;
      }
      else {
        if (uVar17 >> 0x10 == 1) {
          bVar18 = uVar17 - 0x1d173 < 7;
          bVar19 = uVar17 - 0x1d173 == 7;
        }
        else {
          if (uVar17 >> 0x10 != 0xe) goto LAB_14035de0d;
          bVar18 = uVar17 - 0xe0000 < 0xfff;
          bVar19 = uVar17 - 0xe0000 == 0xfff;
        }
LAB_14035de7b:
        bVar18 = bVar18 || bVar19;
LAB_14035de81:
        if (bVar18) goto LAB_14035de85;
LAB_14035de0d:
        uVar6 = *(undefined4 *)(lVar2 + lVar12);
        puVar1 = (undefined4 *)(lVar2 + lVar12);
        *puVar1 = 0;
        lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
        if (lVar12 != 0) {
          uVar10 = *(undefined8 *)(lVar12 + 0x10);
        }
        (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                  (param_2,*(undefined8 *)(param_2 + 0x98),uVar6,puVar1,uVar10);
        uVar10 = 0;
        uVar6 = *puVar1;
        *(undefined8 *)(lVar2 + local_50) = 0;
        lVar12 = *(longlong *)(param_2 + 0x90);
        lVar14 = *(longlong *)(lVar12 + 0x10);
        if ((uVar5 & 0xfffffffe) == 4) {
          if (lVar14 != 0) {
            uVar10 = *(undefined8 *)(lVar14 + 0x28);
          }
          iVar8 = (**(code **)(lVar12 + 0x48))(param_2,*(undefined8 *)(param_2 + 0x98),uVar6,uVar10)
          ;
          iVar11 = *(int *)(param_2 + 0x40);
          if ((iVar11 != 0) && (*(char *)(param_2 + 0x3c) == '\0')) {
            if (*(int *)(param_2 + 0x28) < 0) {
              iVar11 = -iVar11;
            }
            iVar9 = 0;
            if (iVar8 != 0) {
              iVar9 = iVar11;
            }
            iVar8 = iVar8 + iVar9;
          }
          *(int *)(lVar2 + local_50) = iVar8;
        }
        else {
          if (lVar14 != 0) {
            uVar10 = *(undefined8 *)(lVar14 + 0x30);
          }
          iVar8 = (**(code **)(lVar12 + 0x50))(param_2,*(undefined8 *)(param_2 + 0x98),uVar6,uVar10)
          ;
          iVar11 = *(int *)(param_2 + 0x44);
          if ((iVar11 != 0) && (*(char *)(param_2 + 0x3c) == '\0')) {
            if (*(int *)(param_2 + 0x2c) < 0) {
              iVar11 = -iVar11;
            }
            iVar9 = 0;
            if (iVar8 != 0) {
              iVar9 = iVar11;
            }
            iVar8 = iVar8 + iVar9;
          }
          *(int *)(lVar2 + 4 + local_50) = iVar8;
        }
        FUN_1403ca820(param_2,*puVar1,uVar5,&local_58,&local_54);
        piVar3 = (int *)(lVar2 + 8 + local_50);
        *piVar3 = *piVar3 - local_58;
        piVar3 = (int *)(lVar2 + 0xc + local_50);
        *piVar3 = *piVar3 - local_54;
        lVar12 = local_48;
        lVar14 = local_50;
        iVar11 = local_res18;
      }
      uVar17 = (int)uVar15 + 1;
      uVar16 = uVar16 + 1;
      uVar15 = (ulonglong)uVar17;
    } while (uVar17 < uVar13);
  }
  if ((uVar5 & 0xfffffffd) == 5) {
    FUN_1403f8e70(param_3,0);
  }
  uVar15 = 0;
  if (*(int *)(param_3 + 0x60) != 0) {
    do {
      uVar13 = (int)uVar15 + 1;
      puVar4 = (uint *)(*(longlong *)(param_3 + 0x70) + 4 + uVar15 * 0x14);
      *puVar4 = *puVar4 & 0xfffffff8;
      uVar15 = (ulonglong)uVar13;
    } while (uVar13 < *(uint *)(param_3 + 0x60));
  }
  return 1;
}

