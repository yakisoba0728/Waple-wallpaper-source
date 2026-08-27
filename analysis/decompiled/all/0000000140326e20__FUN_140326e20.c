// Function: FUN_140326e20
// Addr: 140326e20
// Size: 1474 bytes


int FUN_140326e20(longlong param_1,longlong param_2,uint param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulonglong local_res8;
  uint local_res18 [2];
  char local_res20;
  undefined8 in_stack_ffffffffffffff78;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  byte *local_48;
  longlong local_40;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(uint *)(lVar2 + 0x1f0) != 0) {
    puVar13 = *(uint **)(lVar2 + 0x1f8);
    uVar18 = 0;
    do {
      if ((*puVar13 == (uint)*(ushort *)(param_2 + 0x18)) &&
         (puVar13[1] == (uint)*(ushort *)(param_2 + 0x1a))) {
        uVar18 = puVar13[2];
        local_res8 = *(ulonglong *)(lVar2 + 0x228);
        local_40 = *(longlong *)(lVar2 + 0xa0);
        iVar6 = (uVar18 & 1) + 5;
        if ((uVar18 & 2) == 0) {
          iVar6 = (uVar18 & 1) + 4;
        }
        iVar8 = iVar6 + 1;
        if ((uVar18 & 4) == 0) {
          iVar8 = iVar6;
        }
        local_res18[0] = param_3;
        local_res20 = param_4;
        iVar6 = FUN_1402f5c50(local_40,*(int *)(lVar2 + 0x248) + puVar13[6]);
        lVar19 = local_40;
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1402f4fe0(local_40,iVar8 * puVar13[7]);
        if (iVar6 != 0) {
          return iVar6;
        }
        puVar12 = (undefined4 *)((ulonglong)local_res18[0] * 0x10 + local_res8);
        FUN_140326660(*(undefined8 *)(lVar19 + 0x38),*(undefined8 *)(lVar19 + 0x40),puVar13[7],
                      puVar13 + 2,CONCAT44(uVar7,*puVar12),&local_48,local_res18);
        FUN_1402f5100(lVar19);
        uVar18 = local_res18[0];
        if (local_res18[0] == 0) {
          return 6;
        }
        local_50 = 0;
        local_54 = 0;
        local_res8 = local_res8 & 0xffffffff00000000;
        local_res18[0] = 0;
        local_58 = 0;
        uVar7 = puVar12[1];
        if (*(int *)(lVar2 + 0x18c) != *(int *)(lVar2 + 0x188)) {
          uVar7 = FUN_1402f20b0(uVar7);
        }
        *(undefined4 *)(param_1 + 0x50) = uVar7;
        iVar6 = FUN_1402f20b0((ulonglong)*(ushort *)(param_2 + 0x18) << 8,puVar12[1],
                              *(undefined4 *)(lVar2 + 0x18c));
        local_4c = iVar6;
        iVar8 = FUN_1402f5c50(lVar19,*(int *)(lVar2 + 0x110) + (int)local_48);
        if (iVar8 != 0) {
          return iVar8;
        }
        iVar8 = FUN_1402f4fe0(lVar19,uVar18);
        if (iVar8 != 0) {
          return iVar8;
        }
        local_48 = *(byte **)(lVar19 + 0x38);
        iVar8 = FUN_1403260d0(&local_48,*(undefined8 *)(lVar19 + 0x40),iVar6,&local_50,&local_54,
                              &local_res8,local_res18,&local_4c,&local_58);
        iVar6 = local_58;
        if (iVar8 != 0) goto LAB_1403273be;
        if (local_58 == 0) {
          if (uVar18 < local_res18[0] * (int)local_res8 + 7 >> 3) {
            iVar8 = 8;
            goto LAB_1403273be;
          }
        }
        else if (local_58 == 1) {
          if (uVar18 * 0xf < local_res18[0] * (int)local_res8) {
            iVar8 = 8;
            goto LAB_1403273be;
          }
        }
        else if ((local_58 != 2) || ((uVar18 + 1 >> 1) * 0xff < local_res18[0] * (int)local_res8)) {
          iVar8 = 8;
          goto LAB_1403273be;
        }
        if ((0x7fffffff < local_res18[0]) || ((int)(0x7fffffff - local_res18[0]) < local_54)) {
          iVar8 = 0x17;
          goto LAB_1403273be;
        }
        *(int *)(param_1 + 0x70) = (int)local_res8 + 7 >> 3;
        *(uint *)(param_1 + 0x34) = local_res18[0] << 6;
        *(int *)(param_1 + 0x38) = local_50 << 6;
        *(int *)(param_1 + 0x3c) = local_54 << 6;
        *(int *)(param_1 + 0x6c) = (int)local_res8;
        *(int *)(param_1 + 0x30) = (int)local_res8 * 0x40;
        *(uint *)(param_1 + 0x40) = (local_4c >> 2) + 0x20U & 0xffffffc0;
        *(undefined4 *)(param_1 + 0x60) = 0x62697473;
        *(uint *)(param_1 + 0x68) = local_res18[0];
        *(undefined1 *)(param_1 + 0x82) = 1;
        *(int *)(param_1 + 0x44) = (int)local_res8 * -0x40 >> 1;
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x2c);
        *(uint *)(param_1 + 0x94) = local_res18[0] + local_54;
        *(int *)(param_1 + 0x90) = local_50;
        if ((local_res20 != '\0') || (iVar8 = FUN_1402f6fb0(param_1), iVar8 != 0))
        goto LAB_1403273be;
        iVar8 = *(int *)(param_1 + 0x68);
        if ((iVar8 == 0) || (iVar1 = *(int *)(param_1 + 0x6c), iVar1 == 0)) goto LAB_1403273b5;
        pbVar10 = *(byte **)(lVar19 + 0x40);
        puVar20 = *(undefined1 **)(param_1 + 0x78);
        local_res18[0] = *(uint *)(param_1 + 0x70);
        uVar18 = iVar1 * iVar8;
        if ((*(byte *)(lVar2 + 0x124) & 2) == 0) {
          puVar20 = puVar20 + (int)((iVar8 + -1) * local_res18[0]);
          local_res18[0] = -local_res18[0];
        }
        lVar19 = local_40;
        if (iVar6 == 0) {
          uVar11 = ((int)pbVar10 - (int)local_48) * 8;
          if (uVar18 < uVar11) {
            uVar11 = uVar18;
          }
          if (uVar11 == 0) goto LAB_1403273b5;
          bVar17 = 0;
          uVar16 = 0;
          uVar14 = uVar11 & 7;
          uVar18 = 0x80;
          pbVar10 = local_48;
          puVar21 = puVar20;
          iVar6 = iVar1;
          goto LAB_140327351;
        }
        if (iVar6 == 1) {
          if (uVar18 == 0) goto LAB_1403273b5;
          uVar16 = 0;
          uVar15 = 0;
          bVar4 = true;
          uVar11 = 0;
          bVar3 = true;
          uVar14 = 0x80;
          pbVar9 = local_48;
          puVar21 = puVar20;
          iVar6 = iVar1;
          goto LAB_1403272a0;
        }
        if ((iVar6 != 2) || (uVar18 == 0)) goto LAB_1403273b5;
        uVar16 = 0;
        uVar11 = 0;
        uVar14 = 0x80;
        bVar4 = true;
        bVar3 = true;
        pbVar9 = local_48;
        puVar21 = puVar20;
        iVar6 = iVar1;
        goto LAB_140327200;
      }
      puVar13 = puVar13 + 10;
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(lVar2 + 0x1f0));
  }
  return 6;
LAB_1403272a0:
  do {
    if (bVar3) {
      do {
        uVar5 = uVar15;
        bVar3 = true;
        if (bVar4) {
          if (pbVar10 <= pbVar9) goto LAB_1403272d2;
          bVar17 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          uVar15 = bVar17 & 0xf;
          uVar5 = (uint)(bVar17 >> 4);
          bVar3 = false;
        }
        bVar4 = bVar3;
        uVar11 = uVar5;
      } while (uVar11 == 0);
    }
    if (bVar4) {
LAB_1403272d2:
      uVar16 = uVar16 | uVar14;
    }
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      puVar22 = puVar21 + (int)local_res18[0];
      *puVar20 = (char)uVar16;
      puVar21 = puVar22;
      iVar6 = iVar1;
LAB_1403272f9:
      uVar16 = 0;
      uVar14 = 0x80;
      puVar20 = puVar22;
    }
    else {
      uVar14 = uVar14 >> 1;
      if (uVar14 == 0) {
        *puVar20 = (char)uVar16;
        puVar22 = puVar20 + 1;
        goto LAB_1403272f9;
      }
    }
    uVar11 = uVar11 - 1;
    bVar3 = (int)uVar11 < 1;
    uVar18 = uVar18 - 1;
  } while (uVar18 != 0);
  if (uVar14 != 0x80) {
    *puVar20 = (char)uVar16;
    iVar8 = 0;
    goto LAB_1403273be;
  }
  goto LAB_1403273b5;
LAB_140327200:
  do {
    if (bVar3) {
      do {
        if (pbVar10 <= pbVar9) break;
        bVar17 = *pbVar9;
        uVar11 = (uint)bVar17;
        bVar4 = (bool)(bVar4 ^ 1);
        pbVar9 = pbVar9 + 1;
      } while (bVar17 == 0);
    }
    if (bVar4) {
      uVar16 = uVar16 | uVar14;
    }
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      *puVar20 = (char)uVar16;
      puVar20 = puVar21 + (int)local_res18[0];
      puVar21 = puVar20;
      iVar6 = iVar1;
LAB_140327246:
      uVar16 = 0;
      uVar14 = 0x80;
    }
    else {
      uVar14 = uVar14 >> 1;
      if (uVar14 == 0) {
        *puVar20 = (char)uVar16;
        puVar20 = puVar20 + 1;
        goto LAB_140327246;
      }
    }
    uVar11 = uVar11 - 1;
    bVar3 = (int)uVar11 < 1;
    uVar18 = uVar18 - 1;
  } while (uVar18 != 0);
  if (uVar14 != 0x80) {
    *puVar20 = (char)uVar16;
    iVar8 = 0;
    goto LAB_1403273be;
  }
  goto LAB_1403273b5;
LAB_140327351:
  do {
    if ((uVar11 & 7) == uVar14) {
      bVar17 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    }
    if ((char)bVar17 < '\0') {
      uVar16 = uVar16 | uVar18;
    }
    bVar17 = bVar17 * '\x02';
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      *puVar20 = (char)uVar16;
      puVar20 = puVar21 + (int)local_res18[0];
      puVar21 = puVar20;
      iVar6 = iVar1;
LAB_140327393:
      uVar16 = 0;
      uVar18 = 0x80;
    }
    else {
      uVar18 = uVar18 >> 1;
      if (uVar18 == 0) {
        *puVar20 = (char)uVar16;
        puVar20 = puVar20 + 1;
        goto LAB_140327393;
      }
    }
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (uVar18 != 0x80) {
    *puVar20 = (char)uVar16;
    iVar8 = 0;
    goto LAB_1403273be;
  }
LAB_1403273b5:
  iVar8 = 0;
LAB_1403273be:
  FUN_1402f5100(lVar19);
  return iVar8;
}

