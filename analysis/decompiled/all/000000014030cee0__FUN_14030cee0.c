// Function: FUN_14030cee0
// Addr: 14030cee0
// Size: 8886 bytes


undefined4 FUN_14030cee0(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  uint *puVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  int local_res8 [2];
  int local_res10;
  int local_res14;
  int local_res18;
  int local_res1c;
  
  uVar22 = 0;
  do {
    puVar14 = (undefined4 *)0x0;
    uVar22 = uVar22 + 1;
    if (1000000 < uVar22) {
      *(undefined4 *)(param_1 + 4) = 0x8b;
      goto LAB_14030f191;
    }
    uVar18 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    bVar8 = *(byte *)((longlong)(int)param_1[0x3d] + param_1[0x3c]);
    uVar11 = (ulonglong)bVar8;
    *(byte *)(param_1 + 0x3e) = bVar8;
    *(undefined4 *)((longlong)param_1 + 500) = 1;
    bVar8 = (&DAT_14043b4e0)[uVar11];
    uVar19 = *(int *)((longlong)param_1 + 0x24) - (uint)(bVar8 >> 4);
    *(uint *)(param_1 + 7) = uVar19;
    puVar13 = (undefined4 *)(ulonglong)uVar19;
    if ((int)uVar19 < 0) {
      if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
        *(undefined4 *)(param_1 + 4) = 0x81;
        goto LAB_14030f191;
      }
      puVar13 = puVar14;
      if ((bVar8 & 0xf0) != 0) {
        do {
          uVar17 = (short)puVar13 + 1;
          *(undefined4 *)(param_1[6] + (longlong)puVar13 * 4) = 0;
          uVar11 = (ulonglong)*(byte *)(param_1 + 0x3e);
          puVar13 = (undefined4 *)(ulonglong)uVar17;
        } while (uVar17 < (byte)(&DAT_14043b4e0)[uVar11] >> 4);
      }
      *(undefined4 *)(param_1 + 7) = 0;
      puVar13 = puVar14;
    }
    iVar10 = (int)param_1[5];
    bVar8 = (byte)uVar11;
    iVar20 = (int)puVar13;
    iVar21 = ((byte)(&DAT_14043b4e0)[uVar11] & 0xf) + iVar20;
    *(int *)((longlong)param_1 + 0x3c) = iVar21;
    if (iVar10 < iVar21) {
      *(undefined4 *)(param_1 + 4) = 0x82;
      goto LAB_14030f191;
    }
    puVar16 = (uint *)(param_1[6] + (longlong)puVar13 * 4);
    uVar19 = (uint)uVar11;
    switch(uVar11) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      uVar6 = (ushort)(bVar8 & 1) << 0xe;
      uVar17 = uVar6 ^ 0x4000;
      if (bVar8 < 4) {
        *(ushort *)((longlong)param_1 + 0x19c) = uVar6;
        *(ushort *)((longlong)param_1 + 0x19e) = uVar17;
        *(ushort *)(param_1 + 0x33) = uVar6;
        *(ushort *)((longlong)param_1 + 0x19a) = uVar17;
      }
      if ((uVar11 & 2) != 0) goto LAB_14030d166;
      *(ushort *)(param_1 + 0x34) = uVar6;
      *(ushort *)((longlong)param_1 + 0x1a2) = uVar17;
      FUN_1403092f0(param_1);
      break;
    case 6:
    case 7:
      cVar4 = FUN_14030b1d0(param_1,(short)puVar16[1],(short)*puVar16,(longlong)param_1 + 0x19c);
      if (cVar4 == '\0') {
        *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)((longlong)param_1 + 0x19c);
        FUN_1403092f0(param_1);
      }
      break;
    case 8:
    case 9:
      cVar4 = FUN_14030b1d0(param_1,(short)puVar16[1],(short)*puVar16,param_1 + 0x34);
      if (cVar4 == '\0') goto LAB_14030d166;
      break;
    case 10:
      if (((short)*puVar16 != 0) || ((short)puVar16[1] != 0)) {
        local_res10 = (int)(short)*puVar16;
        local_res14 = (int)(short)puVar16[1];
        FUN_1402f5f40(&local_res10);
        *(short *)((longlong)param_1 + 0x19c) =
             (short)((int)(local_res10 + (local_res10 >> 0x1f & 3U)) >> 2);
        *(short *)((longlong)param_1 + 0x19e) =
             (short)((int)(local_res14 + (local_res14 >> 0x1f & 3U)) >> 2);
      }
      *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)((longlong)param_1 + 0x19c);
      FUN_1403092f0(param_1);
      break;
    case 0xb:
      if (((short)*puVar16 != 0) || ((short)puVar16[1] != 0)) {
        local_res18 = (int)(short)*puVar16;
        local_res1c = (int)(short)puVar16[1];
        FUN_1402f5f40(&local_res18);
        *(short *)(param_1 + 0x34) = (short)((int)(local_res18 + (local_res18 >> 0x1f & 3U)) >> 2);
        *(short *)((longlong)param_1 + 0x1a2) =
             (short)((int)(local_res1c + (local_res1c >> 0x1f & 3U)) >> 2);
      }
LAB_14030d166:
      FUN_1403092f0(param_1);
      break;
    case 0xc:
      *puVar16 = (int)*(short *)((longlong)param_1 + 0x19c);
      puVar16[1] = (int)*(short *)((longlong)param_1 + 0x19e);
      break;
    case 0xd:
      *puVar16 = (int)(short)param_1[0x34];
      puVar16[1] = (int)*(short *)((longlong)param_1 + 0x1a2);
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x19c);
      FUN_1403092f0(param_1);
      break;
    case 0xf:
      FUN_140309d80(param_1,puVar16);
      break;
    case 0x10:
      *(short *)((longlong)param_1 + 0x18c) = (short)*puVar16;
      break;
    case 0x11:
      *(short *)((longlong)param_1 + 0x18e) = (short)*puVar16;
      break;
    case 0x12:
      *(short *)(param_1 + 0x32) = (short)*puVar16;
      break;
    case 0x13:
      if (*puVar16 == 0) {
        param_1[8] = param_1[0x24];
        param_1[9] = param_1[0x25];
        uVar24 = (undefined4)param_1[0x28];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x144);
        uVar26 = (undefined4)param_1[0x29];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x14c);
        param_1[10] = param_1[0x26];
        param_1[0xb] = param_1[0x27];
        uVar28 = (undefined4)param_1[0x2a];
        uVar29 = (undefined4)((ulonglong)param_1[0x2a] >> 0x20);
      }
      else {
        if (*puVar16 != 1) {
          cVar4 = *(char *)((longlong)param_1 + 0x2c6);
          goto joined_r0x00014030e094;
        }
        param_1[8] = param_1[0x1d];
        param_1[9] = param_1[0x1e];
        uVar24 = (undefined4)param_1[0x21];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x10c);
        uVar26 = (undefined4)param_1[0x22];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x114);
        param_1[10] = param_1[0x1f];
        param_1[0xb] = param_1[0x20];
        uVar28 = (undefined4)param_1[0x23];
        uVar29 = (undefined4)((ulonglong)param_1[0x23] >> 0x20);
      }
      *(undefined4 *)(param_1 + 0xc) = uVar24;
      *(undefined4 *)((longlong)param_1 + 100) = uVar25;
      *(undefined4 *)(param_1 + 0xd) = uVar26;
      *(undefined4 *)((longlong)param_1 + 0x6c) = uVar27;
      param_1[0xe] = CONCAT44(uVar29,uVar28);
      *(short *)((longlong)param_1 + 0x192) = (short)*puVar16;
      break;
    case 0x14:
      if (*puVar16 == 0) {
        param_1[0xf] = param_1[0x24];
        param_1[0x10] = param_1[0x25];
        uVar24 = (undefined4)param_1[0x28];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x144);
        uVar26 = (undefined4)param_1[0x29];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x14c);
        param_1[0x11] = param_1[0x26];
        param_1[0x12] = param_1[0x27];
        uVar28 = (undefined4)param_1[0x2a];
        uVar29 = (undefined4)((ulonglong)param_1[0x2a] >> 0x20);
      }
      else {
        if (*puVar16 != 1) {
          cVar4 = *(char *)((longlong)param_1 + 0x2c6);
          goto joined_r0x00014030e094;
        }
        param_1[0xf] = param_1[0x1d];
        param_1[0x10] = param_1[0x1e];
        uVar24 = (undefined4)param_1[0x21];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x10c);
        uVar26 = (undefined4)param_1[0x22];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x114);
        param_1[0x11] = param_1[0x1f];
        param_1[0x12] = param_1[0x20];
        uVar28 = (undefined4)param_1[0x23];
        uVar29 = (undefined4)((ulonglong)param_1[0x23] >> 0x20);
      }
      *(undefined4 *)(param_1 + 0x13) = uVar24;
      *(undefined4 *)((longlong)param_1 + 0x9c) = uVar25;
      *(undefined4 *)(param_1 + 0x14) = uVar26;
      *(undefined4 *)((longlong)param_1 + 0xa4) = uVar27;
      param_1[0x15] = CONCAT44(uVar29,uVar28);
      *(short *)((longlong)param_1 + 0x194) = (short)*puVar16;
      break;
    case 0x15:
      if (*puVar16 == 0) {
        param_1[0x16] = param_1[0x24];
        param_1[0x17] = param_1[0x25];
        uVar24 = (undefined4)param_1[0x28];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x144);
        uVar26 = (undefined4)param_1[0x29];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x14c);
        param_1[0x18] = param_1[0x26];
        param_1[0x19] = param_1[0x27];
        uVar28 = (undefined4)param_1[0x2a];
        uVar29 = (undefined4)((ulonglong)param_1[0x2a] >> 0x20);
      }
      else {
        if (*puVar16 != 1) {
          cVar4 = *(char *)((longlong)param_1 + 0x2c6);
          goto joined_r0x00014030e094;
        }
        param_1[0x16] = param_1[0x1d];
        param_1[0x17] = param_1[0x1e];
        uVar24 = (undefined4)param_1[0x21];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x10c);
        uVar26 = (undefined4)param_1[0x22];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x114);
        param_1[0x18] = param_1[0x1f];
        param_1[0x19] = param_1[0x20];
        uVar28 = (undefined4)param_1[0x23];
        uVar29 = (undefined4)((ulonglong)param_1[0x23] >> 0x20);
      }
      *(undefined4 *)(param_1 + 0x1a) = uVar24;
      *(undefined4 *)((longlong)param_1 + 0xd4) = uVar25;
      *(undefined4 *)(param_1 + 0x1b) = uVar26;
      *(undefined4 *)((longlong)param_1 + 0xdc) = uVar27;
      param_1[0x1c] = CONCAT44(uVar29,uVar28);
      *(short *)((longlong)param_1 + 0x196) = (short)*puVar16;
      break;
    case 0x16:
      if (*puVar16 == 0) {
        param_1[8] = param_1[0x24];
        param_1[9] = param_1[0x25];
        uVar24 = (undefined4)param_1[0x28];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x144);
        uVar26 = (undefined4)param_1[0x29];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x14c);
        param_1[10] = param_1[0x26];
        param_1[0xb] = param_1[0x27];
        uVar28 = (undefined4)param_1[0x2a];
        uVar29 = (undefined4)((ulonglong)param_1[0x2a] >> 0x20);
      }
      else {
        if (*puVar16 != 1) {
          cVar4 = *(char *)((longlong)param_1 + 0x2c6);
          goto joined_r0x00014030e094;
        }
        param_1[8] = param_1[0x1d];
        param_1[9] = param_1[0x1e];
        uVar24 = (undefined4)param_1[0x21];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x10c);
        uVar26 = (undefined4)param_1[0x22];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x114);
        param_1[10] = param_1[0x1f];
        param_1[0xb] = param_1[0x20];
        uVar28 = (undefined4)param_1[0x23];
        uVar29 = (undefined4)((ulonglong)param_1[0x23] >> 0x20);
      }
      *(undefined4 *)(param_1 + 0xc) = uVar24;
      *(undefined4 *)((longlong)param_1 + 100) = uVar25;
      *(undefined4 *)(param_1 + 0xd) = uVar26;
      *(undefined4 *)((longlong)param_1 + 0x6c) = uVar27;
      param_1[0xe] = CONCAT44(uVar29,uVar28);
      param_1[0xf] = param_1[8];
      param_1[0x10] = param_1[9];
      param_1[0x11] = param_1[10];
      param_1[0x12] = param_1[0xb];
      param_1[0x13] = param_1[0xc];
      param_1[0x14] = param_1[0xd];
      param_1[0x15] = param_1[0xe];
      param_1[0x16] = param_1[8];
      param_1[0x17] = param_1[9];
      param_1[0x18] = param_1[10];
      param_1[0x19] = param_1[0xb];
      *(int *)(param_1 + 0x1a) = (int)param_1[0xc];
      *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_1 + 100);
      *(int *)(param_1 + 0x1b) = (int)param_1[0xd];
      *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_1 + 0x6c);
      param_1[0x1c] = param_1[0xe];
      *(short *)((longlong)param_1 + 0x192) = (short)*puVar16;
      *(short *)((longlong)param_1 + 0x194) = (short)*puVar16;
      *(short *)((longlong)param_1 + 0x196) = (short)*puVar16;
      break;
    case 0x17:
      uVar18 = *puVar16;
      if ((int)uVar18 < 0) goto LAB_14030e98b;
      if (0xffff < (int)uVar18) {
        uVar18 = 0xffff;
      }
      *(uint *)((longlong)param_1 + 0x1a4) = uVar18;
      break;
    case 0x18:
      *(undefined4 *)(param_1 + 0x35) = 1;
      param_1[0x59] = (longlong)&LAB_14030b6a0;
      break;
    case 0x19:
      *(undefined4 *)(param_1 + 0x35) = 0;
      param_1[0x59] = 0x14030b6e0;
      break;
    case 0x1a:
      *(uint *)((longlong)param_1 + 0x1bc) = *puVar16;
      break;
    case 0x1b:
      iVar10 = 1;
      do {
        iVar20 = *(int *)((longlong)param_1 + 500) + (int)param_1[0x3d];
        *(int *)(param_1 + 0x3d) = iVar20;
        if (*(int *)((longlong)param_1 + 0x1ec) <= iVar20) goto LAB_14030f025;
        bVar8 = *(byte *)((longlong)iVar20 + param_1[0x3c]);
        *(byte *)(param_1 + 0x3e) = bVar8;
        cVar4 = (&DAT_14043b5e0)[bVar8];
        *(int *)((longlong)param_1 + 500) = (int)cVar4;
        if (cVar4 < '\0') {
          if (*(int *)((longlong)param_1 + 0x1ec) <= iVar20 + 1) goto LAB_14030f025;
          *(uint *)((longlong)param_1 + 500) =
               2 - (uint)((byte *)((longlong)iVar20 + param_1[0x3c]))[1] * (int)cVar4;
        }
        if (bVar8 == 0x58) {
          iVar10 = iVar10 + 1;
        }
        else if (bVar8 == 0x59) {
          iVar10 = iVar10 + -1;
        }
      } while (iVar10 != 0);
      break;
    case 0x1c:
switchD_14030cff6_caseD_1c:
      if ((*puVar16 != 0) || (iVar20 != 0)) {
        plVar2 = param_1 + 0x3d;
        *(uint *)plVar2 = (int)*plVar2 + *puVar16;
        if ((-1 < (int)*plVar2) &&
           (((int)param_1[0x4a] < 1 ||
            ((int)param_1[0x3d] <=
             *(int *)(*(longlong *)(param_1[0x4b] + -8 + (longlong)(int)param_1[0x4a] * 0x18) + 8)))
           )) {
          *(undefined4 *)((longlong)param_1 + 500) = 0;
          if (((int)*puVar16 < 0) &&
             (*(int *)((longlong)param_1 + 0x334) = *(int *)((longlong)param_1 + 0x334) + 1,
             *(uint *)(param_1 + 0x67) < *(uint *)((longlong)param_1 + 0x334))) goto LAB_14030e97f;
          break;
        }
      }
LAB_14030e98b:
      *(undefined4 *)(param_1 + 4) = 0x84;
      break;
    case 0x1d:
      *(uint *)(param_1 + 0x38) = *puVar16;
      break;
    case 0x1e:
      *(uint *)((longlong)param_1 + 0x1c4) = *puVar16;
      break;
    case 0x1f:
      lVar15 = (longlong)*(int *)((longlong)param_1 + 0x184) * (longlong)(int)*puVar16;
      *(int *)(param_1 + 0x39) = (int)((ulonglong)(lVar15 + (lVar15 >> 0x3f) + 0x8000) >> 0x10);
      break;
    case 0x20:
      puVar16[1] = *puVar16;
      break;
    case 0x21:
    case 0x59:
    case 0x7e:
    case 0x7f:
      break;
    case 0x22:
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
      break;
    case 0x23:
      uVar18 = *puVar16;
      *puVar16 = puVar16[1];
      puVar16[1] = uVar18;
      break;
    case 0x24:
      *puVar16 = *(uint *)((longlong)param_1 + 0x24);
      break;
    case 0x25:
      uVar18 = *puVar16;
      if (((int)uVar18 < 1) || (iVar20 < (int)uVar18)) {
        if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
          *(undefined4 *)(param_1 + 4) = 0x86;
        }
        *puVar16 = 0;
      }
      else {
        *puVar16 = puVar16[-(longlong)(int)uVar18];
      }
      break;
    case 0x26:
      uVar18 = *puVar16;
      if ((0 < (int)uVar18) && ((int)uVar18 <= iVar20)) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(puVar16 + -(longlong)(int)uVar18,puVar16 + -(longlong)(int)uVar18 + 1,
                      (longlong)(int)(uVar18 - 1) << 2);
      }
      goto LAB_14030eec1;
    case 0x27:
      uVar17 = (ushort)*puVar16;
      if (uVar17 < *(ushort *)(param_1 + 0xf)) {
        uVar6 = (ushort)puVar16[1];
        if (uVar6 < *(ushort *)(param_1 + 8)) {
          piVar3 = (int *)(param_1[0x11] + (ulonglong)uVar17 * 8);
          iVar10 = (*(code *)param_1[0x5b])
                             (param_1,*(int *)(param_1[10] + (ulonglong)uVar6 * 8) - *piVar3,
                              *(int *)(param_1[10] + 4 + (ulonglong)uVar6 * 8) - piVar3[1]);
          (*(code *)param_1[0x5e])(param_1,param_1 + 0xf,uVar17,iVar10 / 2);
          (*(code *)param_1[0x5e])(param_1,param_1 + 8,uVar6,-(iVar10 / 2));
          break;
        }
      }
LAB_14030eec1:
      cVar4 = *(char *)((longlong)param_1 + 0x2c6);
joined_r0x00014030e094:
      if (cVar4 != '\0') goto LAB_14030eb39;
      break;
    case 0x28:
    case 0x7b:
    case 0x83:
    case 0x84:
    case 0x8f:
    case 0x90:
switchD_14030cff6_caseD_28:
      FUN_14030b2b0(param_1);
      break;
    case 0x29:
      if ((ushort)*puVar16 < *(ushort *)(param_1 + 8)) {
        bVar8 = 0xf7;
        if ((short)param_1[0x34] == 0) {
          bVar8 = 0xff;
        }
        pbVar12 = (byte *)(param_1[0xc] + (ulonglong)(ushort)*puVar16);
        bVar5 = bVar8 & 0xef;
        if (*(short *)((longlong)param_1 + 0x1a2) == 0) {
          bVar5 = bVar8;
        }
        *pbVar12 = *pbVar12 & bVar5;
        break;
      }
      cVar4 = *(char *)((longlong)param_1 + 0x2c6);
      goto joined_r0x00014030e094;
    case 0x2a:
      uVar18 = puVar16[1];
      uVar19 = (int)param_1[0x49] + 1;
      if (uVar18 < uVar19) {
        puVar13 = (undefined4 *)param_1[0x46];
        if (puVar13 != (undefined4 *)0x0) {
          puVar14 = puVar13 + (ulonglong)uVar18 * 5;
        }
        if ((uVar19 == *(uint *)(param_1 + 0x45)) && (puVar14[3] == uVar18)) {
LAB_14030d7b5:
          if (*(char *)(puVar14 + 4) != '\0') {
            if (*(int *)((longlong)param_1 + 0x254) <= (int)param_1[0x4a]) goto LAB_14030df4f;
            if (0 < (int)*puVar16) {
              puVar13 = (undefined4 *)(param_1[0x4b] + (longlong)(int)param_1[0x4a] * 0x18);
              *puVar13 = *(undefined4 *)((longlong)param_1 + 0x1dc);
              puVar13[1] = (int)param_1[0x3d] + 1;
              puVar13[2] = *puVar16;
              *(undefined4 **)(puVar13 + 4) = puVar14;
              *(int *)(param_1 + 0x4a) = (int)param_1[0x4a] + 1;
              FUN_1403099e0(param_1,*puVar14);
              *(int *)((longlong)param_1 + 0x32c) = *(int *)((longlong)param_1 + 0x32c) + *puVar16;
              if (*(uint *)(param_1 + 0x66) < *(uint *)((longlong)param_1 + 0x32c)) {
                *(undefined4 *)(param_1 + 4) = 0x8b;
              }
            }
            break;
          }
        }
        else if (puVar13 != (undefined4 *)0x0) {
          for (puVar14 = puVar13; puVar14 < puVar13 + (ulonglong)*(uint *)(param_1 + 0x45) * 5;
              puVar14 = puVar14 + 5) {
            if (puVar14[3] == uVar18) goto LAB_14030d7b5;
          }
          if (puVar14 != puVar13 + (ulonglong)*(uint *)(param_1 + 0x45) * 5) goto LAB_14030d7b5;
        }
      }
      goto LAB_14030eb39;
    case 0x2b:
      uVar18 = *puVar16;
      uVar19 = (int)param_1[0x49] + 1;
      if ((uVar18 < uVar19) && (puVar14 = (undefined4 *)param_1[0x46], puVar14 != (undefined4 *)0x0)
         ) {
        if ((uVar19 != *(uint *)(param_1 + 0x45)) ||
           (puVar13 = puVar14 + (ulonglong)uVar18 * 5, puVar14[(ulonglong)uVar18 * 5 + 3] != uVar18)
           ) {
          for (puVar13 = puVar14; puVar13 < puVar14 + (ulonglong)*(uint *)(param_1 + 0x45) * 5;
              puVar13 = puVar13 + 5) {
            if (puVar13[3] == uVar18) goto LAB_14030d8aa;
          }
          if (puVar13 == puVar14 + (ulonglong)*(uint *)(param_1 + 0x45) * 5) goto LAB_14030eb39;
        }
LAB_14030d8aa:
        if (*(char *)(puVar13 + 4) != '\0') {
          if (*(int *)((longlong)param_1 + 0x254) <= (int)param_1[0x4a]) goto LAB_14030df4f;
          puVar14 = (undefined4 *)(param_1[0x4b] + (longlong)(int)param_1[0x4a] * 0x18);
          *puVar14 = *(undefined4 *)((longlong)param_1 + 0x1dc);
          lVar15 = param_1[0x3d];
          puVar14[2] = 1;
          puVar14[1] = (int)lVar15 + 1;
          *(undefined4 **)(puVar14 + 4) = puVar13;
          *(int *)(param_1 + 0x4a) = (int)param_1[0x4a] + 1;
          FUN_1403099e0(param_1,*puVar13);
          break;
        }
      }
LAB_14030eb39:
      *(undefined4 *)(param_1 + 4) = 0x86;
      break;
    case 0x2c:
      if ((int)param_1[0x3b] == 3) {
        *(undefined4 *)(param_1 + 4) = 0x9c;
      }
      else {
        puVar14 = (undefined4 *)param_1[0x46];
        if (puVar14 == (undefined4 *)0x0) {
          uVar18 = *puVar16;
LAB_14030d95b:
          if (*(uint *)(param_1 + 0x45) < *(uint *)((longlong)param_1 + 0x22c)) {
            *(uint *)(param_1 + 0x45) = *(uint *)(param_1 + 0x45) + 1;
            goto LAB_14030d975;
          }
        }
        else {
          puVar13 = puVar14 + (ulonglong)*(uint *)(param_1 + 0x45) * 5;
          uVar18 = *puVar16;
          for (; puVar14 < puVar13; puVar14 = puVar14 + 5) {
            if (puVar14[3] == uVar18) goto LAB_14030d975;
          }
          if (puVar14 == puVar13) goto LAB_14030d95b;
LAB_14030d975:
          if (uVar18 < 0x10000) {
            *puVar14 = *(undefined4 *)((longlong)param_1 + 0x1dc);
            puVar14[3] = uVar18 & 0xffff;
            lVar15 = param_1[0x3d];
            *(undefined1 *)(puVar14 + 4) = 1;
            puVar14[1] = (int)lVar15 + 1;
            if (*(uint *)(param_1 + 0x49) < uVar18) {
              *(uint *)(param_1 + 0x49) = uVar18 & 0xffff;
            }
            do {
              iVar10 = *(int *)((longlong)param_1 + 500) + (int)param_1[0x3d];
              *(int *)(param_1 + 0x3d) = iVar10;
              if (*(int *)((longlong)param_1 + 0x1ec) <= iVar10) goto LAB_14030f025;
              bVar8 = *(byte *)((longlong)iVar10 + param_1[0x3c]);
              *(byte *)(param_1 + 0x3e) = bVar8;
              cVar4 = (&DAT_14043b5e0)[bVar8];
              *(int *)((longlong)param_1 + 500) = (int)cVar4;
              if (cVar4 < '\0') {
                if (*(int *)((longlong)param_1 + 0x1ec) <= iVar10 + 1) goto LAB_14030f025;
                *(uint *)((longlong)param_1 + 500) =
                     2 - (uint)((byte *)((longlong)iVar10 + param_1[0x3c]))[1] * (int)cVar4;
              }
              if (bVar8 == 0x2c) break;
              if (bVar8 == 0x2d) {
                puVar14[2] = iVar10;
                goto switchD_14030cff6_caseD_21;
              }
            } while (bVar8 != 0x89);
LAB_14030da37:
            *(undefined4 *)(param_1 + 4) = 0x89;
            break;
          }
        }
        *(undefined4 *)(param_1 + 4) = 0x8c;
      }
      break;
    case 0x2d:
      iVar10 = (int)param_1[0x4a];
      if (iVar10 < 1) {
        *(undefined4 *)(param_1 + 4) = 0x88;
      }
      else {
        *(int *)(param_1 + 0x4a) = iVar10 + -1;
        lVar15 = param_1[0x4b];
        piVar3 = (int *)(lVar15 + -0x10 + (longlong)iVar10 * 0x18);
        *piVar3 = *piVar3 + -1;
        lVar15 = lVar15 + (longlong)iVar10 * 0x18;
        if (*(int *)(lVar15 + -0x10) < 1) {
          FUN_1403099e0(param_1,*(undefined4 *)(lVar15 + -0x18));
        }
        else {
          *(int *)(param_1 + 0x4a) = (int)param_1[0x4a] + 1;
          *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(*(longlong *)(lVar15 + -8) + 4);
          *(undefined4 *)((longlong)param_1 + 500) = 0;
        }
      }
      break;
    case 0x2e:
    case 0x2f:
      uVar17 = (ushort)*puVar16;
      if (*(ushort *)(param_1 + 8) <= uVar17) {
        cVar4 = *(char *)((longlong)param_1 + 0x2c6);
        goto joined_r0x00014030e094;
      }
      if ((uVar11 & 1) != 0) {
        iVar10 = (*(code *)param_1[0x5b])
                           (param_1,*(undefined4 *)(param_1[10] + (ulonglong)uVar17 * 8),
                            *(undefined4 *)(param_1[10] + 4 + (ulonglong)uVar17 * 8));
        iVar20 = (*(code *)param_1[0x59])(param_1,iVar10,0);
        uVar18 = iVar20 - iVar10;
      }
      (*(code *)param_1[0x5e])(param_1,param_1 + 8,uVar17,uVar18);
      *(ushort *)((longlong)param_1 + 0x18c) = uVar17;
      *(ushort *)((longlong)param_1 + 0x18e) = uVar17;
      break;
    case 0x30:
    case 0x31:
      FUN_14030a040(param_1);
      break;
    case 0x32:
    case 0x33:
      FUN_14030acd0(param_1,puVar16);
      break;
    case 0x34:
    case 0x35:
      FUN_14030aae0(param_1,puVar16);
      break;
    case 0x36:
    case 0x37:
      func_0x00014030b020(param_1,puVar16);
      break;
    case 0x38:
      FUN_14030ae70(param_1,puVar16);
      break;
    case 0x39:
      FUN_140309a60(param_1,puVar16);
      break;
    case 0x3a:
    case 0x3b:
      uVar17 = (ushort)*puVar16;
      uVar11 = (ulonglong)uVar17;
      if ((*(ushort *)(param_1 + 0xf) <= uVar17) ||
         (*(ushort *)(param_1 + 8) <= *(ushort *)((longlong)param_1 + 0x18c))) goto LAB_14030eec1;
      if (*(short *)((longlong)param_1 + 0x194) == 0) {
        lVar15 = uVar11 * 8;
        *(undefined8 *)(lVar15 + param_1[0x10]) =
             *(undefined8 *)(param_1[9] + (ulonglong)*(ushort *)((longlong)param_1 + 0x18c) * 8);
        (*(code *)param_1[0x5f])(param_1,param_1 + 0xf,uVar17,puVar16[1]);
        *(undefined8 *)(lVar15 + param_1[0x11]) = *(undefined8 *)(lVar15 + param_1[0x10]);
      }
      iVar10 = (*(code *)param_1[0x5b])
                         (param_1,*(int *)(param_1[0x11] + uVar11 * 8) -
                                  *(int *)(param_1[10] +
                                          (ulonglong)*(ushort *)((longlong)param_1 + 0x18c) * 8),
                          *(int *)(param_1[0x11] + 4 + uVar11 * 8) -
                          *(int *)(param_1[10] + 4 +
                                  (ulonglong)*(ushort *)((longlong)param_1 + 0x18c) * 8));
      (*(code *)param_1[0x5e])(param_1,param_1 + 0xf,uVar17,puVar16[1] - iVar10);
      *(undefined2 *)((longlong)param_1 + 0x18e) = *(undefined2 *)((longlong)param_1 + 0x18c);
      *(ushort *)(param_1 + 0x32) = uVar17;
      if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
        *(ushort *)((longlong)param_1 + 0x18c) = uVar17;
      }
      break;
    case 0x3c:
      iVar10 = *(int *)((longlong)param_1 + 0x1a4);
      if (iVar21 < iVar10) {
        if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
          *(undefined4 *)(param_1 + 4) = 0x81;
          *(undefined4 *)((longlong)param_1 + 0x1a4) = 1;
          break;
        }
      }
      else {
        *(int *)((longlong)param_1 + 0x3c) = iVar21 - iVar10;
        if (*(ushort *)((longlong)param_1 + 0x18c) < *(ushort *)(param_1 + 8)) {
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            uVar17 = (ushort)puVar16[-1];
            puVar16 = puVar16 + -1;
            if (uVar17 < *(ushort *)(param_1 + 0xf)) {
              iVar20 = (*(code *)param_1[0x5b])
                                 (param_1,*(int *)(param_1[0x11] + (ulonglong)uVar17 * 8) -
                                          *(int *)(param_1[10] +
                                                  (ulonglong)*(ushort *)((longlong)param_1 + 0x18c)
                                                  * 8),
                                  *(int *)(param_1[0x11] + 4 + (ulonglong)uVar17 * 8) -
                                  *(int *)(param_1[10] + 4 +
                                          (ulonglong)*(ushort *)((longlong)param_1 + 0x18c) * 8));
              (*(code *)param_1[0x5e])(param_1,param_1 + 0xf,uVar17,-iVar20);
            }
            else if (*(char *)((longlong)param_1 + 0x2c6) != '\0') goto LAB_14030eb39;
          }
        }
        else if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
          *(undefined4 *)(param_1 + 4) = 0x86;
          *(undefined4 *)((longlong)param_1 + 0x1a4) = 1;
          break;
        }
      }
LAB_14030dd46:
      *(undefined4 *)((longlong)param_1 + 0x1a4) = 1;
      break;
    case 0x3d:
      *(undefined4 *)(param_1 + 0x35) = 2;
      param_1[0x59] = (longlong)&LAB_14030b660;
      break;
    case 0x3e:
    case 0x3f:
      uVar17 = (ushort)*puVar16;
      uVar11 = (ulonglong)uVar17;
      if ((uVar17 < *(ushort *)(param_1 + 8)) && (puVar16[1] < *(uint *)(param_1 + 0x3f))) {
        iVar10 = (*(code *)param_1[0x61])(param_1);
        if (*(short *)((longlong)param_1 + 0x192) == 0) {
          lVar15 = uVar11 * 8;
          lVar7 = (longlong)(short)param_1[0x34] * (longlong)iVar10;
          *(int *)(lVar15 + param_1[9]) = (int)(lVar7 + (lVar7 >> 0x3f) + 0x2000 >> 0xe);
          lVar7 = (longlong)*(short *)((longlong)param_1 + 0x1a2) * (longlong)iVar10;
          *(int *)(param_1[9] + 4 + lVar15) = (int)(lVar7 + (lVar7 >> 0x3f) + 0x2000 >> 0xe);
          *(undefined8 *)(lVar15 + param_1[10]) = *(undefined8 *)(lVar15 + param_1[9]);
        }
        iVar20 = (*(code *)param_1[0x5b])
                           (param_1,*(undefined4 *)(param_1[10] + uVar11 * 8),
                            *(undefined4 *)(param_1[10] + 4 + uVar11 * 8));
        if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
          iVar21 = iVar10 - iVar20;
          if (iVar21 < 0) {
            iVar21 = iVar20 - iVar10;
          }
          if ((int)param_1[0x38] < iVar21) {
            iVar10 = iVar20;
          }
          iVar10 = (*(code *)param_1[0x59])(param_1,iVar10,0);
        }
        (*(code *)param_1[0x5e])(param_1,param_1 + 8,uVar17,iVar10 - iVar20);
        *(ushort *)((longlong)param_1 + 0x18c) = uVar17;
        *(ushort *)((longlong)param_1 + 0x18e) = uVar17;
      }
      else {
        if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
          *(undefined4 *)(param_1 + 4) = 0x86;
        }
        *(ushort *)((longlong)param_1 + 0x18c) = uVar17;
        *(ushort *)((longlong)param_1 + 0x18e) = uVar17;
      }
      break;
    case 0x40:
      iVar20 = (int)param_1[0x3d] + 1;
      if (iVar20 < *(int *)((longlong)param_1 + 0x1ec)) {
        uVar18 = (uint)*(byte *)((longlong)iVar20 + param_1[0x3c]);
        if ((int)(uVar18 + iVar20) < *(int *)((longlong)param_1 + 0x1ec)) {
          if (uVar18 < (iVar10 - *(int *)((longlong)param_1 + 0x24)) + 1U) {
            if (*(byte *)((longlong)iVar20 + param_1[0x3c]) != 0) {
              do {
                iVar20 = iVar20 + 1;
                uVar19 = (int)puVar14 + 1;
                puVar16[(longlong)puVar14] = (uint)*(byte *)((longlong)iVar20 + param_1[0x3c]);
                puVar14 = (undefined4 *)(ulonglong)uVar19;
              } while ((int)uVar19 < (int)uVar18);
            }
LAB_14030deff:
            *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + uVar18;
            *(int *)(param_1 + 0x3d) = iVar20;
            break;
          }
LAB_14030df4f:
          *(undefined4 *)(param_1 + 4) = 0x82;
          break;
        }
      }
      goto LAB_14030f025;
    case 0x41:
      iVar20 = (int)param_1[0x3d] + 1;
      if (iVar20 < *(int *)((longlong)param_1 + 0x1ec)) {
        uVar18 = (uint)*(byte *)((longlong)iVar20 + param_1[0x3c]);
        if ((int)(iVar20 + uVar18 * 2) < *(int *)((longlong)param_1 + 0x1ec)) {
          if ((iVar10 - *(int *)((longlong)param_1 + 0x24)) + 1U <= uVar18) goto LAB_14030df4f;
          if (*(byte *)((longlong)iVar20 + param_1[0x3c]) == 0) goto LAB_14030deff;
          do {
            lVar15 = (longlong)iVar20;
            iVar20 = iVar20 + 2;
            uVar19 = (int)puVar14 + 1;
            puVar16[(longlong)puVar14] =
                 (int)(short)((ushort)*(byte *)(lVar15 + param_1[0x3c] + 1) << 8) |
                 (uint)*(byte *)(lVar15 + param_1[0x3c] + 2);
            puVar14 = (undefined4 *)(ulonglong)uVar19;
          } while ((int)uVar19 < (int)uVar18);
          *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + uVar18;
          *(int *)(param_1 + 0x3d) = iVar20;
          break;
        }
      }
LAB_14030f025:
      *(undefined4 *)(param_1 + 4) = 0x83;
      break;
    case 0x42:
      if ((uint)*(ushort *)(param_1 + 0x53) <= *puVar16) {
        cVar4 = *(char *)((longlong)param_1 + 0x2c6);
        goto joined_r0x00014030e094;
      }
      if (((int)param_1[0x3b] == 3) && (param_1[0x54] != param_1[0x56])) {
        lVar15 = FUN_1402f80c0(param_1[2],4,(short)param_1[0x55],*(ushort *)(param_1 + 0x53),
                               param_1[0x56],local_res8);
        param_1[0x56] = lVar15;
        *(int *)(param_1 + 4) = local_res8[0];
        if (local_res8[0] == 0) {
          *(ushort *)(param_1 + 0x55) = *(ushort *)(param_1 + 0x53);
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(lVar15,param_1[0x54],(ulonglong)*(ushort *)(param_1 + 0x53) << 2);
        }
      }
      else {
        *(uint *)(param_1[0x54] + (ulonglong)*puVar16 * 4) = puVar16[1];
      }
      break;
    case 0x43:
      if (*puVar16 < (uint)*(ushort *)(param_1 + 0x53)) {
        *puVar16 = *(uint *)(param_1[0x54] + (ulonglong)*puVar16 * 4);
      }
      else {
LAB_14030e0bb:
        if (*(char *)((longlong)param_1 + 0x2c6) != '\0') goto LAB_14030eb39;
        *puVar16 = 0;
      }
      break;
    case 0x44:
      if (*(uint *)(param_1 + 0x3f) <= *puVar16) {
        cVar4 = *(char *)((longlong)param_1 + 0x2c6);
        goto joined_r0x00014030e094;
      }
      (*(code *)param_1[0x62])(param_1);
      break;
    case 0x45:
      if (*(uint *)(param_1 + 0x3f) <= *puVar16) goto LAB_14030e0bb;
      uVar18 = (*(code *)param_1[0x61])(param_1);
      *puVar16 = uVar18;
      break;
    case 0x46:
    case 0x47:
      if (*puVar16 < (uint)*(ushort *)(param_1 + 0x16)) {
        lVar15 = (ulonglong)*puVar16 * 8;
        if ((uVar11 & 1) == 0) {
          uVar18 = (*(code *)param_1[0x5b])(param_1,*(undefined4 *)(param_1[0x18] + lVar15));
          *puVar16 = uVar18;
        }
        else {
          uVar18 = (*(code *)param_1[0x5c])(param_1,*(undefined4 *)(param_1[0x17] + lVar15));
          *puVar16 = uVar18;
        }
      }
      else {
        if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
          *(undefined4 *)(param_1 + 4) = 0x86;
        }
        *puVar16 = 0;
      }
      break;
    case 0x48:
      uVar17 = (ushort)*puVar16;
      if (*(ushort *)(param_1 + 0x16) <= uVar17) {
        cVar4 = *(char *)((longlong)param_1 + 0x2c6);
        goto joined_r0x00014030e094;
      }
      lVar15 = (ulonglong)uVar17 * 8;
      iVar10 = (*(code *)param_1[0x5b])
                         (param_1,*(undefined4 *)(param_1[0x18] + lVar15),
                          *(undefined4 *)(param_1[0x18] + 4 + lVar15));
      (*(code *)param_1[0x5e])(param_1,param_1 + 0x16,uVar17,puVar16[1] - iVar10);
      if (*(short *)((longlong)param_1 + 0x196) == 0) {
        *(undefined8 *)(lVar15 + param_1[0x17]) = *(undefined8 *)(lVar15 + param_1[0x18]);
      }
      break;
    case 0x49:
    case 0x4a:
      func_0x00014030a280(param_1,puVar16);
      break;
    case 0x4b:
      uVar18 = (*(code *)param_1[0x60])(param_1);
      *puVar16 = uVar18;
      break;
    case 0x4c:
      if (*(int *)(*(longlong *)(*param_1 + 0x90) + 0x70) == 0x23) {
        uVar18 = (*(code *)param_1[0x60])(param_1);
        *puVar16 = uVar18;
      }
      else {
        *puVar16 = *(uint *)(param_1 + 0x2b);
      }
      break;
    case 0x4d:
      *(undefined1 *)(param_1 + 0x3a) = 1;
      break;
    case 0x4e:
      *(undefined1 *)(param_1 + 0x3a) = 0;
      break;
    case 0x4f:
      *(undefined4 *)(param_1 + 4) = 0x87;
      break;
    case 0x50:
      *puVar16 = (uint)((int)*puVar16 < (int)puVar16[1]);
      break;
    case 0x51:
      *puVar16 = (uint)((int)*puVar16 <= (int)puVar16[1]);
      break;
    case 0x52:
      *puVar16 = (uint)((int)puVar16[1] < (int)*puVar16);
      break;
    case 0x53:
      *puVar16 = (uint)((int)puVar16[1] <= (int)*puVar16);
      break;
    case 0x54:
      *puVar16 = (uint)(*puVar16 == puVar16[1]);
      break;
    case 0x55:
      *puVar16 = (uint)(*puVar16 != puVar16[1]);
      break;
    case 0x56:
      uVar19 = *puVar16;
      if ((code *)param_1[0x59] == (code *)&LAB_14030b660) {
        if ((int)uVar19 < 0) {
          uVar19 = -(0x10 - uVar19 & 0xffffffe0);
          if ((int)uVar19 < 1) {
            uVar18 = uVar19;
          }
          *puVar16 = uVar18 >> 6 & 1;
        }
        else {
          uVar19 = uVar19 + 0x10 & 0xffffffe0;
          if (-1 < (int)uVar19) {
            uVar18 = uVar19;
          }
          *puVar16 = uVar18 >> 6 & 1;
        }
      }
      else {
        uVar18 = (*(code *)param_1[0x59])(param_1);
        *puVar16 = uVar18 >> 6 & 1;
      }
      break;
    case 0x57:
      uVar19 = *puVar16;
      if ((code *)param_1[0x59] == (code *)&LAB_14030b660) {
        if ((int)uVar19 < 0) {
          uVar19 = -(0x10 - uVar19 & 0xffffffe0);
          if ((int)uVar19 < 1) {
            uVar18 = uVar19;
          }
          *puVar16 = ~(uVar18 >> 6) & 1;
        }
        else {
          uVar19 = uVar19 + 0x10 & 0xffffffe0;
          if (-1 < (int)uVar19) {
            uVar18 = uVar19;
          }
          *puVar16 = ~(uVar18 >> 6) & 1;
        }
      }
      else {
        uVar18 = (*(code *)param_1[0x59])(param_1);
        *puVar16 = ~(uVar18 >> 6) & 1;
      }
      break;
    case 0x58:
      if (*puVar16 == 0) {
        bVar23 = false;
        iVar10 = 1;
        do {
          iVar20 = (int)param_1[0x3d] + *(int *)((longlong)param_1 + 500);
          *(int *)(param_1 + 0x3d) = iVar20;
          if (*(int *)((longlong)param_1 + 0x1ec) <= iVar20) goto LAB_14030f025;
          bVar8 = *(byte *)((longlong)iVar20 + param_1[0x3c]);
          *(byte *)(param_1 + 0x3e) = bVar8;
          cVar4 = (&DAT_14043b5e0)[bVar8];
          *(int *)((longlong)param_1 + 500) = (int)cVar4;
          if (cVar4 < '\0') {
            if (*(int *)((longlong)param_1 + 0x1ec) <= iVar20 + 1) goto LAB_14030f025;
            *(uint *)((longlong)param_1 + 500) =
                 2 - (uint)((byte *)((longlong)iVar20 + param_1[0x3c]))[1] * (int)cVar4;
          }
          iVar20 = iVar10;
          if (bVar8 == 0x1b) {
LAB_14030e41a:
            bVar23 = iVar10 == 1;
            iVar10 = iVar20;
          }
          else if (bVar8 == 0x58) {
            iVar10 = iVar10 + 1;
          }
          else if (bVar8 == 0x59) {
            iVar20 = iVar10 + -1;
            goto LAB_14030e41a;
          }
        } while (!bVar23);
      }
      break;
    case 0x5a:
      if ((*puVar16 == 0) || (uVar19 = 1, puVar16[1] == 0)) {
        uVar19 = uVar18;
      }
      *puVar16 = uVar19;
      break;
    case 0x5b:
      if ((*puVar16 != 0) || (puVar16[1] != 0)) {
        uVar18 = 1;
      }
      *puVar16 = uVar18;
      break;
    case 0x5c:
      *puVar16 = (uint)(*puVar16 == 0);
      break;
    case 0x5d:
    case 0x71:
    case 0x72:
      FUN_140309730(param_1,puVar16);
      break;
    case 0x5e:
      *(short *)((longlong)param_1 + 0x1cc) = (short)*puVar16;
      break;
    case 0x5f:
      if (6 < *puVar16) goto LAB_14030e98b;
      *(short *)((longlong)param_1 + 0x1ce) = (short)*puVar16;
      break;
    case 0x60:
      *puVar16 = *puVar16 + puVar16[1];
      break;
    case 0x61:
      *puVar16 = *puVar16 - puVar16[1];
      break;
    case 0x62:
      if (puVar16[1] == 0) {
        *(undefined4 *)(param_1 + 4) = 0x85;
      }
      else {
        uVar18 = FUN_1402f2210(*puVar16,0x40);
        *puVar16 = uVar18;
      }
      break;
    case 99:
      uVar18 = FUN_1402f2180(*puVar16,puVar16[1]);
      *puVar16 = uVar18;
      break;
    case 100:
      if ((int)*puVar16 < 0) {
        *puVar16 = -*puVar16;
      }
      break;
    case 0x65:
      *puVar16 = -*puVar16;
      break;
    case 0x66:
      *puVar16 = *puVar16 & 0xffffffc0;
      break;
    case 0x67:
      *puVar16 = *puVar16 + 0x3f & 0xffffffc0;
      break;
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
      uVar18 = (*(code *)param_1[0x59])(param_1,*puVar16);
      *puVar16 = uVar18;
      break;
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
      uVar9 = *puVar16;
      iVar10 = *(int *)((longlong)param_1 + (ulonglong)(uVar19 & 3) * 4 + 0x1ac);
      if ((int)uVar9 < 0) {
        uVar9 = uVar9 - iVar10;
        if ((int)uVar9 < 1) {
          uVar18 = uVar9;
        }
        *puVar16 = uVar18;
      }
      else {
        uVar9 = uVar9 + iVar10;
        if (-1 < (int)uVar9) {
          uVar18 = uVar9;
        }
        *puVar16 = uVar18;
      }
      break;
    case 0x70:
      if (*(uint *)(param_1 + 0x3f) <= *puVar16) {
        cVar4 = *(char *)((longlong)param_1 + 0x2c6);
        goto joined_r0x00014030e094;
      }
      lVar15 = (longlong)*(int *)((longlong)param_1 + 0x184) * (longlong)(int)puVar16[1];
      *(int *)(param_1[0x40] + (ulonglong)*puVar16 * 4) =
           (int)((ulonglong)((lVar15 >> 0x3f) + 0x8000 + lVar15) >> 0x10);
      break;
    case 0x73:
    case 0x74:
    case 0x75:
      uVar18 = *puVar16;
      if (((int)uVar18 < 0) || (iVar21 / 2 < (int)uVar18)) {
        if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
          *(undefined4 *)(param_1 + 4) = 0x81;
        }
        uVar18 = iVar21 / 2;
      }
      *(uint *)((longlong)param_1 + 0x3c) = iVar21 + uVar18 * -2;
      iVar10 = (*(code *)param_1[0x60])(param_1);
      uVar19 = iVar10 - (uint)*(ushort *)((longlong)param_1 + 0x1cc);
      if ((char)param_1[0x3e] == 't') {
        uVar19 = uVar19 - 0x10;
      }
      else if ((char)param_1[0x3e] == 'u') {
        uVar19 = uVar19 - 0x20;
      }
      if ((uVar19 & 0xfffffff0) == 0) {
        for (; uVar18 != 0; uVar18 = uVar18 - 1) {
          puVar1 = puVar16 + -1;
          puVar16 = puVar16 + -2;
          if (*puVar1 < *(uint *)(param_1 + 0x3f)) {
            if ((*puVar16 & 0xf0) == uVar19 << 4) {
              (*(code *)param_1[99])(param_1);
            }
          }
          else if (*(char *)((longlong)param_1 + 0x2c6) != '\0') goto LAB_14030eb39;
        }
      }
      break;
    case 0x76:
      uVar18 = *puVar16;
      uVar19 = uVar18 & 0xc0;
      if (uVar19 == 0) {
        *(undefined4 *)(param_1 + 0x57) = 0x2000;
      }
      else if (uVar19 == 0x40) {
LAB_14030e6d0:
        *(undefined4 *)(param_1 + 0x57) = 0x4000;
      }
      else if (uVar19 == 0x80) {
        *(undefined4 *)(param_1 + 0x57) = 0x8000;
      }
      else if (uVar19 == 0xc0) goto LAB_14030e6d0;
      uVar19 = uVar18 & 0x30;
      if (uVar19 == 0) {
        *(undefined4 *)((longlong)param_1 + 700) = 0;
      }
      else if (uVar19 == 0x10) {
        *(int *)((longlong)param_1 + 700) =
             (int)((int)param_1[0x57] + ((int)param_1[0x57] >> 0x1f & 3U)) >> 2;
      }
      else if (uVar19 == 0x20) {
        *(int *)((longlong)param_1 + 700) = (int)param_1[0x57] / 2;
      }
      else if (uVar19 == 0x30) {
        iVar10 = (int)param_1[0x57] * 3;
        *(int *)((longlong)param_1 + 700) = (int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2;
      }
      iVar10 = (int)param_1[0x57];
      if ((uVar18 & 0xf) == 0) {
        iVar20 = iVar10 + -1;
      }
      else {
        iVar20 = ((uVar18 & 0xf) - 4) * iVar10;
        iVar20 = (int)(iVar20 + (iVar20 >> 0x1f & 7U)) >> 3;
      }
      *(int *)((longlong)param_1 + 700) = *(int *)((longlong)param_1 + 700) >> 8;
      *(int *)(param_1 + 0x58) = iVar20 >> 8;
      param_1[0x59] = (longlong)&LAB_14030b5b0;
      *(int *)(param_1 + 0x57) = iVar10 >> 8;
      *(undefined4 *)(param_1 + 0x35) = 6;
      break;
    case 0x77:
      uVar18 = *puVar16;
      uVar19 = uVar18 & 0xc0;
      if (uVar19 == 0) {
        *(undefined4 *)(param_1 + 0x57) = 0x16a0;
      }
      else if (uVar19 == 0x40) {
LAB_14030e7c4:
        *(undefined4 *)(param_1 + 0x57) = 0x2d41;
      }
      else if (uVar19 == 0x80) {
        *(undefined4 *)(param_1 + 0x57) = 0x5a82;
      }
      else if (uVar19 == 0xc0) goto LAB_14030e7c4;
      uVar19 = uVar18 & 0x30;
      if (uVar19 == 0) {
        *(undefined4 *)((longlong)param_1 + 700) = 0;
      }
      else if (uVar19 == 0x10) {
        *(int *)((longlong)param_1 + 700) =
             (int)((int)param_1[0x57] + ((int)param_1[0x57] >> 0x1f & 3U)) >> 2;
      }
      else if (uVar19 == 0x20) {
        *(int *)((longlong)param_1 + 700) = (int)param_1[0x57] / 2;
      }
      else if (uVar19 == 0x30) {
        iVar10 = (int)param_1[0x57] * 3;
        *(int *)((longlong)param_1 + 700) = (int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2;
      }
      iVar10 = (int)param_1[0x57];
      if ((uVar18 & 0xf) == 0) {
        iVar20 = iVar10 + -1;
      }
      else {
        iVar20 = ((uVar18 & 0xf) - 4) * iVar10;
        iVar20 = (int)(iVar20 + (iVar20 >> 0x1f & 7U)) >> 3;
      }
      *(int *)((longlong)param_1 + 700) = *(int *)((longlong)param_1 + 700) >> 8;
      *(int *)(param_1 + 0x58) = iVar20 >> 8;
      param_1[0x59] = (longlong)&LAB_14030b600;
      *(int *)(param_1 + 0x57) = iVar10 >> 8;
      *(undefined4 *)(param_1 + 0x35) = 7;
      break;
    case 0x78:
      if (puVar16[1] != 0) goto switchD_14030cff6_caseD_1c;
      break;
    case 0x79:
      if (puVar16[1] == 0) {
        if ((*puVar16 == 0) && (iVar20 == 0)) goto LAB_14030e98b;
        plVar2 = param_1 + 0x3d;
        *(uint *)plVar2 = (int)*plVar2 + *puVar16;
        if (((int)*plVar2 < 0) ||
           ((0 < (int)param_1[0x4a] &&
            (*(int *)(*(longlong *)(param_1[0x4b] + -8 + (longlong)(int)param_1[0x4a] * 0x18) + 8) <
             (int)param_1[0x3d])))) goto LAB_14030e98b;
        *(undefined4 *)((longlong)param_1 + 500) = 0;
        if ((-1 < (int)*puVar16) ||
           (*(int *)((longlong)param_1 + 0x334) = *(int *)((longlong)param_1 + 0x334) + 1,
           *(uint *)((longlong)param_1 + 0x334) <= *(uint *)(param_1 + 0x67))) break;
LAB_14030e97f:
        *(undefined4 *)(param_1 + 4) = 0x8b;
      }
      break;
    case 0x7a:
      *(undefined4 *)(param_1 + 0x35) = 5;
      param_1[0x59] = (longlong)&LAB_14030b590;
      break;
    case 0x7c:
      *(undefined4 *)(param_1 + 0x35) = 4;
      param_1[0x59] = (longlong)&LAB_14030b710;
      break;
    case 0x7d:
      *(undefined4 *)(param_1 + 0x35) = 3;
      param_1[0x59] = (longlong)&LAB_14030b560;
      break;
    case 0x80:
      iVar10 = *(int *)((longlong)param_1 + 0x1a4);
      if (iVar21 < iVar10) {
        if (*(char *)((longlong)param_1 + 0x2c6) == '\0') goto LAB_14030dd46;
        *(undefined4 *)(param_1 + 4) = 0x81;
        *(undefined4 *)((longlong)param_1 + 0x1a4) = 1;
      }
      else {
        *(int *)((longlong)param_1 + 0x3c) = iVar21 - iVar10;
        if ((*(int *)((longlong)param_1 + 0x324) == 7) || (iVar10 == 0)) goto LAB_14030dd46;
        do {
          puVar1 = puVar16 + -1;
          puVar16 = puVar16 + -1;
          if ((ushort)*puVar1 < *(ushort *)(param_1 + 0x1d)) {
            pbVar12 = (byte *)(param_1[0x21] + (ulonglong)(ushort)*puVar1);
            *pbVar12 = *pbVar12 ^ 1;
          }
          else if (*(char *)((longlong)param_1 + 0x2c6) != '\0') goto LAB_14030eb39;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        *(undefined4 *)((longlong)param_1 + 0x1a4) = 1;
      }
      break;
    case 0x81:
      if (*(int *)((longlong)param_1 + 0x324) != 7) {
        uVar18 = puVar16[1];
        if ((*(ushort *)(param_1 + 0x1d) <= (ushort)uVar18) ||
           (uVar17 = (ushort)*puVar16, *(ushort *)(param_1 + 0x1d) <= uVar17)) goto LAB_14030eec1;
        for (; uVar17 <= (ushort)uVar18; uVar17 = uVar17 + 1) {
          *(byte *)((ulonglong)uVar17 + param_1[0x21]) =
               *(byte *)((ulonglong)uVar17 + param_1[0x21]) | 1;
        }
      }
      break;
    case 0x82:
      if (*(int *)((longlong)param_1 + 0x324) != 7) {
        uVar18 = puVar16[1];
        if ((*(ushort *)(param_1 + 0x1d) <= (ushort)uVar18) ||
           (uVar17 = (ushort)*puVar16, *(ushort *)(param_1 + 0x1d) <= uVar17)) goto LAB_14030eb2c;
        for (; uVar17 <= (ushort)uVar18; uVar17 = uVar17 + 1) {
          *(byte *)((ulonglong)uVar17 + param_1[0x21]) =
               *(byte *)((ulonglong)uVar17 + param_1[0x21]) & 0xfe;
        }
      }
      break;
    case 0x85:
      uVar18 = *puVar16;
      uVar19 = uVar18 & 0xff;
      if (uVar19 == 0xff) {
        *(undefined1 *)((longlong)param_1 + 0x1d2) = 1;
      }
      else {
        if ((char)uVar18 != '\0') {
          if (((uVar18 >> 8 & 1) != 0) && (*(ushort *)(param_1 + 0x31) <= uVar19)) {
            *(undefined1 *)((longlong)param_1 + 0x1d2) = 1;
          }
          if (((*puVar16 & 0x200) != 0) && (*(char *)((longlong)param_1 + 0x18a) != '\0')) {
            *(undefined1 *)((longlong)param_1 + 0x1d2) = 1;
          }
          if (((*puVar16 & 0x400) != 0) && (*(char *)((longlong)param_1 + 0x18b) != '\0')) {
            *(undefined1 *)((longlong)param_1 + 0x1d2) = 1;
          }
          if (((*puVar16 & 0x800) != 0) && (uVar19 < *(ushort *)(param_1 + 0x31))) {
            *(undefined1 *)((longlong)param_1 + 0x1d2) = 0;
          }
          if (((*puVar16 & 0x1000) != 0) && (*(char *)((longlong)param_1 + 0x18a) != '\0')) {
            *(undefined1 *)((longlong)param_1 + 0x1d2) = 0;
          }
          if (((*puVar16 & 0x2000) == 0) || (*(char *)((longlong)param_1 + 0x18b) == '\0')) break;
        }
        *(undefined1 *)((longlong)param_1 + 0x1d2) = 0;
      }
      break;
    case 0x86:
    case 0x87:
      FUN_14030a930(param_1,puVar16);
      break;
    case 0x88:
      uVar18 = *puVar16;
      if ((uVar18 & 1) != 0) {
        puVar14 = (undefined4 *)(ulonglong)*(uint *)(*(longlong *)(*param_1 + 0x90) + 0x70);
      }
      uVar9 = (uint)puVar14;
      uVar19 = uVar9;
      if (((uVar18 & 2) != 0) &&
         (uVar19 = uVar9 | 0x100, *(char *)((longlong)param_1 + 0x18a) == '\0')) {
        uVar19 = uVar9;
      }
      uVar9 = uVar19;
      if (((uVar18 & 4) != 0) &&
         (uVar9 = uVar19 | 0x200, *(char *)((longlong)param_1 + 0x18b) == '\0')) {
        uVar9 = uVar19;
      }
      uVar19 = uVar9;
      if (((uVar18 & 8) != 0) && (uVar19 = uVar9 | 0x400, *(longlong *)(*param_1 + 0x408) == 0)) {
        uVar19 = uVar9;
      }
      uVar9 = uVar19;
      if (((uVar18 & 0x20) != 0) && (uVar9 = uVar19 | 0x1000, (char)param_1[100] == '\0')) {
        uVar9 = uVar19;
      }
      if ((*(int *)(*(longlong *)(*param_1 + 0x90) + 0x70) == 0x28) &&
         (iVar10 = (int)param_1[0x65], iVar10 != 2)) {
        if ((uVar18 & 0x40) != 0) {
          uVar9 = uVar9 | 0x2000;
        }
        uVar19 = uVar9;
        if (((uVar18 >> 8 & 1) != 0) && (uVar19 = uVar9 | 0x8000, iVar10 != 4)) {
          uVar19 = uVar9;
        }
        uVar18 = *puVar16;
        uVar9 = uVar19 | 0x20000;
        if ((uVar18 >> 10 & 1) == 0) {
          uVar9 = uVar19;
        }
        if ((uVar18 >> 0xb & 1) != 0) {
          uVar9 = uVar9 | 0x40000;
        }
        if (((uVar18 >> 0xc & 1) != 0) && (1 < iVar10 - 3U)) {
          uVar9 = uVar9 | 0x80000;
        }
      }
      *puVar16 = uVar9;
      break;
    case 0x89:
      if ((int)param_1[0x3b] == 3) {
        *(undefined4 *)(param_1 + 4) = 0x9c;
      }
      else {
        puVar14 = (undefined4 *)param_1[0x48];
        if (puVar14 == (undefined4 *)0x0) {
LAB_14030ed51:
          if (*(uint *)(param_1 + 0x47) < *(uint *)((longlong)param_1 + 0x23c)) {
            *(uint *)(param_1 + 0x47) = *(uint *)(param_1 + 0x47) + 1;
            goto LAB_14030ed6b;
          }
        }
        else {
          puVar13 = puVar14 + (ulonglong)*(uint *)(param_1 + 0x47) * 5;
          if (puVar14 < puVar13) {
            do {
              if (puVar14[3] == *puVar16) goto LAB_14030ed6b;
              puVar14 = puVar14 + 5;
            } while (puVar14 < puVar13);
          }
          if (puVar14 == puVar13) goto LAB_14030ed51;
LAB_14030ed6b:
          if (*puVar16 < 0x100) {
            puVar14[3] = *puVar16 & 0xff;
            puVar14[1] = (int)param_1[0x3d] + 1;
            *puVar14 = *(undefined4 *)((longlong)param_1 + 0x1dc);
            *(undefined1 *)(puVar14 + 4) = 1;
            if (*(uint *)((longlong)param_1 + 0x24c) < *puVar16) {
              *(uint *)((longlong)param_1 + 0x24c) = *puVar16 & 0xff;
            }
            do {
              iVar10 = (int)param_1[0x3d] + *(int *)((longlong)param_1 + 500);
              *(int *)(param_1 + 0x3d) = iVar10;
              if (*(int *)((longlong)param_1 + 0x1ec) <= iVar10) goto LAB_14030f025;
              bVar8 = *(byte *)((longlong)iVar10 + param_1[0x3c]);
              *(byte *)(param_1 + 0x3e) = bVar8;
              cVar4 = (&DAT_14043b5e0)[bVar8];
              *(int *)((longlong)param_1 + 500) = (int)cVar4;
              if (cVar4 < '\0') {
                if (*(int *)((longlong)param_1 + 0x1ec) <= iVar10 + 1) goto LAB_14030f025;
                *(uint *)((longlong)param_1 + 500) =
                     2 - (uint)((byte *)((longlong)iVar10 + param_1[0x3c]))[1] * (int)cVar4;
              }
              if (bVar8 == 0x2c) goto LAB_14030da37;
              if (bVar8 == 0x2d) {
                puVar14[2] = iVar10;
                goto switchD_14030cff6_caseD_21;
              }
            } while (bVar8 != 0x89);
            *(undefined4 *)(param_1 + 4) = 0x89;
            break;
          }
        }
        *(undefined4 *)(param_1 + 4) = 0x8d;
      }
      break;
    case 0x8a:
      uVar18 = puVar16[2];
      uVar19 = puVar16[1];
      puVar16[2] = *puVar16;
      puVar16[1] = uVar18;
      *puVar16 = uVar19;
      break;
    case 0x8b:
      if ((int)*puVar16 < (int)puVar16[1]) {
        *puVar16 = puVar16[1];
      }
      break;
    case 0x8c:
      if ((int)puVar16[1] < (int)*puVar16) {
        *puVar16 = puVar16[1];
      }
      break;
    case 0x8d:
      if (-1 < (int)*puVar16) {
        *(uint *)((longlong)param_1 + 0x1d4) = *puVar16 & 0xffff;
      }
      break;
    case 0x8e:
      uVar18 = puVar16[1] - 1;
      if (2 < uVar18) {
LAB_14030eb2c:
        cVar4 = *(char *)((longlong)param_1 + 0x2c6);
        goto joined_r0x00014030e094;
      }
      uVar19 = *puVar16;
      uVar18 = 1 << ((byte)uVar18 & 0x1f);
      if ((uVar19 != 0) && (uVar19 != uVar18)) goto LAB_14030eec1;
      if ((int)param_1[0x3b] == 2) {
        *(byte *)((longlong)param_1 + 0x1d1) =
             ~(byte)uVar18 & *(byte *)((longlong)param_1 + 0x1d1) | (byte)uVar19;
      }
      else {
        if (((int)param_1[0x3b] != 3) || (puVar16[1] != 3)) goto LAB_14030eb2c;
        if (*(int *)(*(longlong *)(*param_1 + 0x90) + 0x70) == 0x28) {
          *(uint *)((longlong)param_1 + 0x324) = ~uVar19 & 4;
        }
      }
      break;
    case 0x91:
      if (*(longlong *)(*param_1 + 0x408) == 0) goto switchD_14030cff6_caseD_28;
      FUN_140309880(param_1,puVar16);
      break;
    case 0x92:
      if (*(longlong *)(*param_1 + 0x408) == 0) goto switchD_14030cff6_caseD_28;
      *puVar16 = 0x11;
      break;
    default:
      if (bVar8 < 0xe0) {
        if (bVar8 < 0xc0) {
          if (bVar8 < 0xb8) {
            if (bVar8 < 0xb0) goto switchD_14030cff6_caseD_28;
            iVar20 = (int)param_1[0x3d];
            uVar19 = uVar19 - 0xaf;
            if (*(int *)((longlong)param_1 + 0x1ec) <= (int)(uVar19 + iVar20)) goto LAB_14030f025;
            if (uVar19 < (iVar10 - *(int *)((longlong)param_1 + 0x24)) + 1U) {
              if (0 < (int)uVar19) {
                do {
                  iVar20 = iVar20 + 1;
                  uVar18 = (int)puVar14 + 1;
                  puVar16[(longlong)puVar14] = (uint)*(byte *)((longlong)iVar20 + param_1[0x3c]);
                  puVar14 = (undefined4 *)(ulonglong)uVar18;
                } while ((int)uVar18 < (int)uVar19);
              }
              goto LAB_14030f06f;
            }
            *(undefined4 *)(param_1 + 4) = 0x82;
          }
          else {
            iVar20 = (int)param_1[0x3d];
            uVar19 = uVar19 - 0xb7;
            if (*(int *)((longlong)param_1 + 0x1ec) <= (int)(iVar20 + uVar19 * 2))
            goto LAB_14030f025;
            if ((iVar10 - *(int *)((longlong)param_1 + 0x24)) + 1U <= uVar19) goto LAB_14030df4f;
            if ((int)uVar19 < 1) {
LAB_14030f06f:
              *(int *)(param_1 + 0x3d) = iVar20;
            }
            else {
              do {
                lVar15 = (longlong)iVar20;
                iVar20 = iVar20 + 2;
                uVar18 = (int)puVar14 + 1;
                puVar16[(longlong)puVar14] =
                     (int)(short)((ushort)*(byte *)(lVar15 + param_1[0x3c] + 1) << 8) |
                     (uint)*(byte *)(lVar15 + param_1[0x3c] + 2);
                puVar14 = (undefined4 *)(ulonglong)uVar18;
              } while ((int)uVar18 < (int)uVar19);
              *(int *)(param_1 + 0x3d) = iVar20;
            }
          }
        }
        else {
          func_0x00014030a430(param_1,puVar16);
        }
      }
      else {
        FUN_14030a690(param_1,puVar16);
      }
    }
switchD_14030cff6_caseD_21:
    if ((int)param_1[4] == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + 0x3c);
      *(int *)(param_1 + 0x3d) = (int)param_1[0x3d] + *(int *)((longlong)param_1 + 500);
    }
    else {
      if ((int)param_1[4] != 0x80) goto LAB_14030f191;
      puVar14 = (undefined4 *)param_1[0x48];
      if (puVar14 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        puVar13 = puVar14 + (ulonglong)*(uint *)(param_1 + 0x47) * 5;
      }
      while( true ) {
        if (puVar13 <= puVar14) goto LAB_14030f191;
        if ((*(char *)(puVar14 + 4) != '\0') && ((char)param_1[0x3e] == *(char *)(puVar14 + 3)))
        break;
        puVar14 = puVar14 + 5;
      }
      if (*(int *)((longlong)param_1 + 0x254) <= (int)param_1[0x4a]) {
        *(undefined4 *)(param_1 + 4) = 0x86;
        goto LAB_14030f191;
      }
      puVar13 = (undefined4 *)(param_1[0x4b] + (longlong)(int)param_1[0x4a] * 0x18);
      *puVar13 = *(undefined4 *)((longlong)param_1 + 0x1dc);
      lVar15 = param_1[0x3d];
      puVar13[2] = 1;
      puVar13[1] = (int)lVar15 + 1;
      *(undefined4 **)(puVar13 + 4) = puVar14;
      cVar4 = FUN_1403099e0(param_1,*puVar14,puVar14[1]);
      if (cVar4 == '\x01') goto LAB_14030f191;
    }
    if (*(int *)((longlong)param_1 + 0x1ec) <= (int)param_1[0x3d]) {
      if ((int)param_1[0x4a] < 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 4) = 0x83;
LAB_14030f191:
      return (int)param_1[4];
    }
    if (*(char *)((longlong)param_1 + 0x2c4) != '\0') {
      return 0;
    }
  } while( true );
}

