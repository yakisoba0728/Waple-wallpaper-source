// Function: FUN_1403b2890
// Addr: 1403b2890
// Size: 964 bytes


undefined8
FUN_1403b2890(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint local_88 [4];
  uint local_78 [2];
  longlong local_70;
  longlong local_68 [5];
  
  if (*(uint *)(param_1 + 0x1c) < 2) {
    local_68[0] = FUN_140414570();
    local_68[1] = FUN_140414570(param_1);
    if (*(char *)(local_68[0] + 4) != '\0') {
      *(uint *)(local_68[0] + 0x18) = *(uint *)(local_68[0] + 0x18) & 0xffffffdf;
    }
    if (*(char *)(local_68[1] + 4) != '\0') {
      *(uint *)(local_68[1] + 0x18) = *(uint *)(local_68[1] + 0x18) & 0xffffffdf;
    }
    lVar16 = FUN_140414570(param_1);
    if (*(char *)(lVar16 + 4) != '\0') {
      *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) & 0xffffffdf;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x38);
    uVar6 = *(undefined4 *)(param_1 + 0x3c);
    uVar7 = *(undefined4 *)(param_1 + 0x40);
    uVar8 = *(undefined4 *)(param_1 + 0x44);
    uVar9 = *(undefined4 *)(param_1 + 0x48);
    uVar10 = *(undefined4 *)(param_1 + 0x4c);
    uVar11 = *(undefined4 *)(param_1 + 0x50);
    uVar12 = *(undefined4 *)(param_1 + 0x54);
    if (*(char *)(local_68[0] + 4) != '\0') {
      *(undefined4 *)(local_68[0] + 0x38) = uVar5;
      *(undefined4 *)(local_68[0] + 0x3c) = uVar6;
      *(undefined4 *)(local_68[0] + 0x40) = uVar7;
      *(undefined4 *)(local_68[0] + 0x44) = uVar8;
      *(undefined4 *)(local_68[0] + 0x48) = uVar9;
      *(undefined4 *)(local_68[0] + 0x4c) = uVar10;
      *(undefined4 *)(local_68[0] + 0x50) = uVar11;
      *(undefined4 *)(local_68[0] + 0x54) = uVar12;
    }
    if (*(char *)(local_68[1] + 4) != '\0') {
      *(undefined4 *)(local_68[1] + 0x38) = uVar5;
      *(undefined4 *)(local_68[1] + 0x3c) = uVar6;
      *(undefined4 *)(local_68[1] + 0x40) = uVar7;
      *(undefined4 *)(local_68[1] + 0x44) = uVar8;
      *(undefined4 *)(local_68[1] + 0x48) = uVar9;
      *(undefined4 *)(local_68[1] + 0x4c) = uVar10;
      *(undefined4 *)(local_68[1] + 0x50) = uVar11;
      *(undefined4 *)(local_68[1] + 0x54) = uVar12;
    }
    if (*(char *)(lVar16 + 4) != '\0') {
      *(undefined4 *)(lVar16 + 0x38) = uVar5;
      *(undefined4 *)(lVar16 + 0x3c) = uVar6;
      *(undefined4 *)(lVar16 + 0x40) = uVar7;
      *(undefined4 *)(lVar16 + 0x44) = uVar8;
      *(undefined4 *)(lVar16 + 0x48) = uVar9;
      *(undefined4 *)(lVar16 + 0x4c) = uVar10;
      *(undefined4 *)(lVar16 + 0x50) = uVar11;
      *(undefined4 *)(lVar16 + 0x54) = uVar12;
    }
    uVar1 = *(uint *)(param_1 + 0x60);
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar2 = *(uint *)(param_2 + 0x60);
    lVar4 = *(longlong *)(param_2 + 0x70);
    local_88[2] = *(uint *)(param_1 + 0x38) & 0xfffffffd;
    local_70 = lVar16;
    if (local_88[2] != 4) {
      FUN_1403f8e70(param_1,0);
    }
    uVar13 = 0;
    local_88[0] = 0;
    uVar19 = 0;
    uVar18 = 1;
    if (1 < uVar1 + 1) {
      uVar22 = 0;
      do {
        uVar17 = (uint)uVar18;
        lVar16 = uVar18 * 0x14;
        if (uVar17 < uVar1) {
          uVar20 = uVar22;
          if ((*(int *)(lVar3 + 8 + lVar16) != *(int *)(lVar3 + 8 + (ulonglong)(uVar17 - 1) * 0x14))
             && ((*(byte *)(lVar3 + 4 + lVar16) & 2) == 0)) {
LAB_1403b29f2:
            while ((uVar20 = uVar19, uVar19 < uVar2 &&
                   (*(uint *)(lVar4 + 8 + (ulonglong)uVar19 * 0x14) < *(uint *)(lVar16 + 8 + lVar3))
                   )) {
              uVar19 = uVar19 + 1;
            }
            goto LAB_1403b2a14;
          }
        }
        else {
          uVar20 = uVar2;
          if (uVar17 != uVar1) goto LAB_1403b29f2;
LAB_1403b2a14:
          FUN_140414200(local_68[uVar13],param_2,uVar22,uVar20);
          uVar13 = 1 - local_88[0];
          local_88[0] = uVar13;
          uVar19 = uVar20;
        }
        uVar18 = (ulonglong)(uVar17 + 1);
        lVar16 = local_70;
        uVar22 = uVar20;
      } while (uVar17 + 1 < uVar1 + 1);
    }
    iVar14 = FUN_140419030(param_3,local_68[0],param_4,param_5,param_6);
    if ((((iVar14 == 0) || (*(char *)(local_68[0] + 0x58) == '\0')) ||
        (iVar14 = FUN_140419030(param_3,local_68[1],param_4,param_5,param_6), iVar14 == 0)) ||
       (*(char *)(local_68[1] + 0x58) == '\0')) {
      uVar15 = 1;
    }
    else {
      uVar15 = 1;
      if (local_88[2] != 4) {
        FUN_1403f8e70(local_68[0],0,*(undefined4 *)(local_68[0] + 0x60));
        FUN_1403f8e70(local_68[1],0,*(undefined4 *)(local_68[1] + 0x60));
      }
      uVar18 = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      uVar1 = *(uint *)(local_68[0] + 0x60);
      local_78[0] = uVar1;
      local_68[2] = *(undefined8 *)(local_68[0] + 0x70);
      uVar2 = *(uint *)(local_68[1] + 0x60);
      local_78[1] = uVar2;
      local_68[3] = *(undefined8 *)(local_68[1] + 0x70);
      while ((local_88[0] < uVar1 || (local_88[1] < uVar2))) {
        uVar19 = local_88[uVar18] + 1;
        uVar21 = (ulonglong)uVar19;
        if (uVar19 < local_78[uVar18]) {
          do {
            lVar3 = local_68[uVar18 + 2] + uVar21 * 0x14;
            if ((*(int *)(lVar3 + 8) !=
                 *(int *)(local_68[uVar18 + 2] + 8 + (ulonglong)((int)uVar21 - 1) * 0x14)) &&
               ((*(byte *)(lVar3 + 4) & 2) == 0)) break;
            uVar19 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar19;
          } while (uVar19 < local_78[uVar18]);
        }
        FUN_140414200(lVar16,local_68[uVar18]);
        local_88[uVar18] = (uint)uVar21;
        uVar18 = (ulonglong)(1 - (int)uVar18);
      }
      if (local_88[2] != 4) {
        FUN_1403f8e70(param_1,0,*(undefined4 *)(param_1 + 0x60));
        FUN_1403f8e70(lVar16,0,*(undefined4 *)(lVar16 + 0x60));
      }
      if ((*(char *)(lVar16 + 0x58) != '\0') &&
         (uVar18 = FUN_140414680(lVar16,param_1,0xffffffff,0), (uVar18 & 0xffffffbf) != 0)) {
        FUN_1403b2470(param_1,param_3,"buffer verify error: unsafe-to-concat test failed.");
        uVar15 = 0;
        FUN_140414d20(param_1,0);
        FUN_140414200(param_1,lVar16,0,0xffffffff);
      }
    }
    FUN_1404145e0(lVar16);
    FUN_14041be00(local_68,8,2,FUN_140396280);
  }
  else {
    uVar15 = 1;
  }
  return uVar15;
}

