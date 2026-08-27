// Function: FUN_1403b54d0
// Addr: 1403b54d0
// Size: 2839 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b54d0(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  ushort *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  byte bVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  byte bVar21;
  undefined4 *puVar22;
  int *piVar23;
  ulonglong uVar24;
  int *piVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  longlong *local_res8;
  undefined4 *local_res10;
  longlong local_res18;
  uint local_res20 [2];
  uint local_108;
  longlong local_100;
  undefined8 local_f8;
  int local_f0;
  uint local_e8 [4];
  uint *local_d8;
  int local_d0 [2];
  undefined1 local_c8 [40];
  longlong local_a0;
  undefined1 local_98 [40];
  longlong local_70;
  
  param_2[3] = 0x80000000;
  uVar19 = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  *param_2 = *(undefined4 *)((longlong)param_1 + 0x2c);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)((longlong)param_1 + 0x34);
  lVar11 = param_1[8];
  lVar18 = param_1[7];
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  puVar8 = (undefined8 *)FUN_1403c4f70(*param_1 + 0x140);
  puVar17 = &DAT_14045dd10;
  puVar9 = &DAT_14045dd10;
  if ((undefined8 *)*puVar8 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*puVar8;
  }
  puVar8 = &DAT_14045dd10;
  if (3 < *(uint *)(puVar9 + 3)) {
    puVar8 = (undefined8 *)puVar9[2];
  }
  uVar10 = FUN_1403ce450(puVar8,(int)lVar18);
  lVar11 = FUN_1403cbdc0(uVar10,(int)lVar11);
  local_d0[0] = (uint)*(byte *)(lVar11 + 3) + (uint)*(byte *)(lVar11 + 2) * 0x100;
  if (local_d0[0] == 0xffff) {
    local_d0[0] = 0xffff;
  }
  local_e8[2] = FUN_1403c8fd0(puVar8);
  param_2[1] = (int)param_1[6];
  *(undefined1 *)((longlong)param_2 + 9) = *(undefined1 *)((longlong)param_1 + 0x35);
  uVar30 = *(undefined4 *)((longlong)param_1 + 0x44);
  uVar31 = *(undefined4 *)((longlong)param_1 + 0x3c);
  puVar8 = (undefined8 *)FUN_1403c4ed0(*param_1 + 0x148);
  puVar9 = &DAT_14045dd10;
  if ((undefined8 *)*puVar8 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*puVar8;
  }
  if (3 < *(uint *)(puVar9 + 3)) {
    puVar17 = (undefined8 *)puVar9[2];
  }
  uVar10 = FUN_1403ce450(puVar17,uVar31);
  lVar11 = FUN_1403cbdc0(uVar10,uVar30);
  local_d0[1] = (uint)*(byte *)(lVar11 + 3) + (uint)*(byte *)(lVar11 + 2) * 0x100;
  if (local_d0[1] == 0xffff) {
    local_d0[1] = 0xffff;
  }
  local_f0 = FUN_1403c8fd0(puVar17);
  if (*(uint *)((longlong)param_1 + 0x54) != 0) {
    if ((char)param_1[5] == '\0') {
      local_res20[0] = local_res20[0] & 0xffffff00;
      lVar11 = param_1[0xb];
      uVar24 = (ulonglong)*(uint *)((longlong)param_1 + 0x54) * 0x1c;
      FUN_1403693d0(lVar11,uVar24 + lVar11,uVar24 / 0x1c,local_res20);
    }
    lVar11 = param_1[0xb];
    iVar26 = 0;
    uVar28 = *(uint *)((longlong)param_1 + 0x54);
    uVar27 = 1;
    if (1 < uVar28) {
      lVar18 = 1;
      uVar24 = uVar19;
      do {
        piVar23 = (int *)(uVar24 * 0x1c + lVar11);
        piVar25 = (int *)(lVar18 * 0x1c + lVar11);
        if (*piVar25 == *piVar23) {
          uVar13 = piVar23[3];
          if ((*(byte *)(piVar25 + 3) & 1) == 0) {
            if ((uVar13 & 1) != 0) {
              uVar13 = uVar13 ^ 1;
              piVar23[3] = uVar13;
            }
            uVar16 = piVar25[2];
            if ((uint)piVar25[2] <= (uint)piVar23[2]) {
              uVar16 = piVar23[2];
            }
            piVar23[2] = uVar16;
          }
          else {
            uVar13 = uVar13 | 1;
            piVar23[3] = uVar13;
            piVar23[2] = piVar25[2];
            piVar23[4] = piVar25[4];
          }
          piVar23[3] = piVar25[3] & 2U | uVar13;
          uVar13 = piVar25[5];
          if ((uint)piVar23[5] <= (uint)piVar25[5]) {
            uVar13 = piVar23[5];
          }
          piVar23[5] = uVar13;
          uVar13 = piVar25[6];
          if ((uint)piVar23[6] <= (uint)piVar25[6]) {
            uVar13 = piVar23[6];
          }
          piVar23[6] = uVar13;
        }
        else {
          uVar24 = (ulonglong)((int)uVar24 + 1);
          iVar26 = piVar25[1];
          iVar29 = piVar25[2];
          iVar3 = piVar25[3];
          piVar23 = (int *)(uVar24 * 0x1c + lVar11);
          *piVar23 = *piVar25;
          piVar23[1] = iVar26;
          piVar23[2] = iVar29;
          piVar23[3] = iVar3;
          uVar10 = *(undefined8 *)(piVar25 + 5);
          puVar17 = (undefined8 *)(uVar24 * 0x1c + 0xc + lVar11);
          *puVar17 = *(undefined8 *)(piVar25 + 3);
          puVar17[1] = uVar10;
        }
        iVar26 = (int)uVar24;
        uVar27 = uVar27 + 1;
        lVar18 = lVar18 + 1;
      } while (uVar27 < uVar28);
    }
    uVar24 = (ulonglong)(iVar26 + 1U);
    if ((int)(iVar26 + 1U) < 0) {
      uVar24 = uVar19;
    }
    if (((uint)uVar24 < *(uint *)((longlong)param_1 + 0x54)) &&
       (*(uint *)((longlong)param_1 + 0x54) = (uint)uVar24, 1 < (int)param_1[10] + 1U)) {
      FUN_1403a4db0(param_1 + 10,uVar24,1);
    }
  }
  FUN_14041bd80(local_c8,0x30,2,&LAB_140394d70,FUN_140397240);
  do {
    FUN_140417090(*param_1,(&DAT_1404621a0)[uVar19],
                  *(undefined4 *)((longlong)param_1 + uVar19 * 4 + 0x38),
                  *(undefined4 *)((longlong)param_1 + uVar19 * 4 + 0x40),local_c8 + uVar19 * 0x30);
    uVar19 = uVar19 + 1;
  } while (uVar19 != 2);
  uVar27 = 4;
  local_res20[0] = 4;
  uVar28 = *(uint *)((longlong)param_1 + 0x54);
  local_108 = 0;
  uVar30 = DAT_14045dd18._4_4_;
  uVar31 = (undefined4)DAT_14045dd20;
  uVar32 = DAT_14045dd20._4_4_;
  uVar33 = DAT_14045dd28;
  uVar34 = (undefined4)DAT_14045dd10;
  uVar35 = DAT_14045dd10._4_4_;
  uVar36 = (undefined4)DAT_14045dd18;
  iVar26 = local_f0;
  if (uVar28 != 0) {
    do {
      if (local_108 < *(uint *)((longlong)param_1 + 0x54)) {
        piVar23 = (int *)((ulonglong)local_108 * 0x1c + param_1[0xb]);
      }
      else {
        DAT_1404e4f20 = CONCAT44(uVar35,uVar34);
        _DAT_1404e4f28 = CONCAT44(uVar30,uVar36);
        _DAT_1404e4f30 = CONCAT44(uVar32,uVar31);
        _DAT_1404e4f38 = CONCAT44(DAT_1404e4f3c,uVar33);
        piVar23 = (int *)&DAT_1404e4f20;
      }
      uVar13 = piVar23[3];
      if (((uVar13 & 1) == 0) || (piVar23[2] != 1)) {
        uVar16 = piVar23[2];
        if (uVar16 != 0) {
          iVar29 = 0x1f;
          if (uVar16 != 0) {
            for (; uVar16 >> iVar29 == 0; iVar29 = iVar29 + -1) {
            }
          }
          uVar16 = iVar29 + 1;
          if (7 < uVar16) {
            uVar16 = 8;
          }
          goto LAB_1403b5856;
        }
      }
      else {
        uVar16 = 0;
LAB_1403b5856:
        local_d8 = (uint *)CONCAT44(local_d8._4_4_,uVar16 + uVar27);
        if (uVar16 + uVar27 < 0x1f) {
          iVar29 = *piVar23;
          if (local_e8[2] == iVar29) {
            local_e8[0] = piVar23[5];
          }
          if ((local_a0 == 0) || (lVar11 = FUN_1403bf740(local_c8,piVar23), lVar11 == 0)) {
            bVar21 = 0;
            local_f8 = (int *)CONCAT44(local_f8._4_4_,0xffff);
          }
          else {
            local_f8 = (int *)CONCAT44(local_f8._4_4_,*(undefined4 *)(lVar11 + 8));
            bVar21 = 1;
          }
          if (iVar26 == iVar29) {
            local_e8[1] = piVar23[6];
          }
          if ((local_70 == 0) || (lVar11 = FUN_1403bf740(local_98,piVar23), lVar11 == 0)) {
            plVar4 = local_res8;
            local_f8 = (int *)CONCAT44(0xffff,(int)local_f8);
            iVar29 = 0xffff;
            if (bVar21 == 0) {
              if ((uVar13 & 0x10) != 0) {
                lVar11 = 0;
                bVar21 = 0;
                do {
                  bVar6 = FUN_1403d7260(*plVar4,(&DAT_1404621a0)[lVar11],*piVar23,
                                        (longlong)&local_f8 + lVar11 * 4);
                  bVar21 = bVar21 | bVar6;
                  lVar11 = lVar11 + 1;
                } while (lVar11 != 2);
                uVar30 = DAT_14045dd18._4_4_;
                uVar31 = (undefined4)DAT_14045dd20;
                uVar32 = DAT_14045dd20._4_4_;
                uVar33 = DAT_14045dd28;
                uVar34 = (undefined4)DAT_14045dd10;
                uVar35 = DAT_14045dd10._4_4_;
                uVar36 = (undefined4)DAT_14045dd18;
                iVar29 = local_f8._4_4_;
                if (bVar21 != 0) goto LAB_1403b595c;
              }
              iVar26 = local_f0;
              uVar27 = local_res20[0];
              if ((*(byte *)(piVar23 + 3) & 2) == 0) goto LAB_1403b5b07;
            }
          }
          else {
            bVar21 = 1;
            iVar29 = *(int *)(lVar11 + 8);
          }
LAB_1403b595c:
          puVar22 = local_res10;
          uVar27 = local_res10[5] + 1;
          if ((int)uVar27 < 0) {
            uVar27 = 0;
          }
          cVar7 = FUN_1403a4ed0(local_res10 + 4,uVar27);
          if (cVar7 == '\0') {
            DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
            _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
            _DAT_1404e4f30 = CONCAT44(DAT_14045dd20._4_4_,(undefined4)DAT_14045dd20);
            _DAT_1404e4f38 = CONCAT44(_DAT_14045dd2c,DAT_14045dd28);
            DAT_1404e4f40 = (undefined4)DAT_14045dd30;
            piVar25 = (int *)&DAT_1404e4f20;
          }
          else {
            uVar13 = puVar22[5];
            if ((uVar13 < uVar27) && (((uVar27 - uVar13) * 9 & 0x3fffffff) != 0)) {
              FUN_1404217a0(*(longlong *)(puVar22 + 6) + (ulonglong)uVar13 * 0x24,0);
            }
            puVar22[5] = uVar27;
            piVar25 = (int *)(*(longlong *)(puVar22 + 6) + (ulonglong)(uVar27 - 1) * 0x24);
          }
          *piVar25 = *piVar23;
          piVar25[1] = (int)local_f8;
          piVar25[2] = iVar29;
          piVar25[3] = piVar23[5];
          piVar25[4] = piVar23[6];
          uVar27 = (~((uint)piVar23[3] >> 1) ^ piVar25[8]) & 2 ^ piVar25[8];
          piVar25[8] = uVar27;
          uVar27 = (~((uint)piVar23[3] >> 1) ^ uVar27) & 4 ^ uVar27;
          piVar25[8] = uVar27;
          uVar27 = ((uint)piVar23[3] >> 2 ^ uVar27) & 8 ^ uVar27;
          piVar25[8] = uVar27;
          piVar25[8] = ((uint)piVar23[3] >> 2 ^ uVar27) & 0x10 ^ uVar27;
          if (((*(byte *)(piVar23 + 3) & 1) == 0) || (piVar23[2] != 1)) {
            piVar25[5] = local_res20[0];
            bVar6 = (byte)local_res20[0];
            uVar27 = (1 << ((byte)local_d8 & 0x1f)) - (1 << (bVar6 & 0x1f));
            piVar25[6] = uVar27;
            local_res20[0] = (uint)local_d8;
            puVar22[3] = puVar22[3] | piVar23[4] << (bVar6 & 0x1f) & uVar27;
          }
          else {
            piVar25[5] = 0x1f;
            piVar25[6] = -0x80000000;
          }
          piVar25[7] = 1 << ((byte)piVar25[5] & 0x1f) & piVar25[6];
          piVar25[8] = piVar25[8] & 0xfffffffe;
          piVar25[8] = piVar25[8] | (uint)(bVar21 == 0);
          uVar30 = DAT_14045dd18._4_4_;
          uVar31 = (undefined4)DAT_14045dd20;
          uVar32 = DAT_14045dd20._4_4_;
          uVar33 = DAT_14045dd28;
          uVar34 = (undefined4)DAT_14045dd10;
          uVar35 = DAT_14045dd10._4_4_;
          uVar36 = (undefined4)DAT_14045dd18;
          iVar26 = local_f0;
          uVar27 = local_res20[0];
        }
      }
LAB_1403b5b07:
      local_108 = local_108 + 1;
      param_1 = local_res8;
    } while (local_108 < uVar28);
  }
  puVar22 = local_res10;
  if ((char)param_1[5] != '\0') {
    local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffffffffff00);
    if (local_res10[5] != 0) {
      uVar19 = (ulonglong)(uint)local_res10[5] * 0x24;
      FUN_140369770(*(longlong *)(local_res10 + 6),*(longlong *)(local_res10 + 6) + uVar19,
                    (longlong)(uVar19 / 0x12) >> 1,&local_res8);
    }
  }
  FUN_1403a31f0(param_1,0);
  FUN_1403a31f0(param_1);
  local_res20[0] = 0;
  local_100 = 0;
  uVar30 = (undefined4)DAT_14045dd10;
  uVar31 = DAT_14045dd10._4_4_;
  uVar32 = (undefined4)DAT_14045dd18;
  uVar33 = DAT_14045dd18._4_4_;
  do {
    if (*(int *)((longlong)param_1 + local_100 * 4 + 0x48) != 0) {
      uVar27 = 0;
      piVar23 = puVar22 + (local_100 + 2) * 4;
      uVar28 = 0;
      local_108 = 0;
      uVar19 = 0;
      local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
      iVar26 = local_d0[local_100];
      local_d8 = (uint *)(local_100 * 0x10 + 100 + (longlong)param_1);
      local_f8 = piVar23;
      do {
        if ((iVar26 != 0xffff) && (local_e8[local_100] == uVar27)) {
          FUN_1403a2dc0(param_1,puVar22,local_res20[0],iVar26,
                        *(undefined4 *)(local_res18 + local_100 * 4),0x80000000,1,1,0,0,0x20202020);
          uVar30 = (undefined4)DAT_14045dd10;
          uVar31 = DAT_14045dd10._4_4_;
          uVar32 = (undefined4)DAT_14045dd18;
          uVar33 = DAT_14045dd18._4_4_;
        }
        uVar13 = local_res20[0];
        puVar5 = local_res10;
        puVar20 = *(undefined4 **)(puVar22 + 6);
        puVar22 = puVar20 + (ulonglong)(uint)puVar22[5] * 9;
        if (puVar20 != puVar22) {
          do {
            if (puVar20[local_100 + 3] == uVar27) {
              uVar28 = puVar20[8];
              FUN_1403a2dc0(param_1,puVar5,uVar13,puVar20[local_100 + 1],
                            *(undefined4 *)(local_res18 + local_100 * 4),puVar20[6],
                            (byte)(uVar28 >> 1) & 1,(byte)(uVar28 >> 2) & 1,(byte)(uVar28 >> 3) & 1,
                            (byte)(uVar28 >> 4) & 1,*puVar20);
            }
            puVar20 = puVar20 + 9;
          } while (puVar20 != puVar22);
          uVar19 = (ulonglong)local_res8 & 0xffffffff;
          piVar23 = local_f8;
          uVar30 = (undefined4)DAT_14045dd10;
          uVar31 = DAT_14045dd10._4_4_;
          uVar32 = (undefined4)DAT_14045dd18;
          uVar33 = DAT_14045dd18._4_4_;
          uVar28 = local_108;
        }
        uVar13 = piVar23[1];
        uVar16 = (uint)uVar19;
        uVar15 = uVar16 + 1;
        if (uVar15 < uVar13) {
          if ((uVar16 == 0) || (uVar16 <= uVar13)) {
            uVar13 = uVar13 - uVar16;
            uVar24 = (ulonglong)uVar13;
          }
          else {
            uVar24 = 0;
            uVar13 = uVar13 - uVar16;
          }
          uVar14 = (ulonglong)uVar13;
          if ((uint)uVar24 <= uVar13) {
            uVar14 = uVar24;
          }
          local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffffffffff00);
          if ((int)uVar14 != 0) {
            lVar11 = *(longlong *)(piVar23 + 2) + uVar19 * 0xc;
            FUN_14036a520(lVar11,lVar11 + uVar14 * 0xc,(longlong)((uVar14 * 0xc) / 6) >> 1,
                          &local_res8);
            uVar30 = (undefined4)DAT_14045dd10;
            uVar31 = DAT_14045dd10._4_4_;
            uVar32 = (undefined4)DAT_14045dd18;
            uVar33 = DAT_14045dd18._4_4_;
          }
          uVar13 = piVar23[1];
          if (uVar15 < uVar13) {
            do {
              lVar11 = (ulonglong)uVar15 * 0xc;
              lVar2 = *(longlong *)(piVar23 + 2);
              lVar18 = uVar19 * 0xc;
              if (*(short *)(lVar2 + lVar11) == *(short *)(lVar18 + lVar2)) {
                puVar12 = (uint *)(lVar18 + 4 + lVar2);
                *puVar12 = *puVar12 | *(uint *)(lVar2 + 4 + lVar11);
                puVar1 = (ushort *)(lVar18 + 2 + *(longlong *)(piVar23 + 2));
                *puVar1 = *puVar1 & (*(ushort *)(*(longlong *)(piVar23 + 2) + 2 + lVar11) | 0xfffe);
                puVar1 = (ushort *)(lVar18 + 2 + *(longlong *)(piVar23 + 2));
                *puVar1 = *puVar1 & (*(ushort *)(*(longlong *)(piVar23 + 2) + 2 + lVar11) | 0xfffd);
              }
              else {
                uVar19 = (ulonglong)((int)uVar19 + 1);
                puVar17 = (undefined8 *)(lVar2 + uVar19 * 0xc);
                *puVar17 = *(undefined8 *)(lVar2 + lVar11);
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(lVar2 + 8 + lVar11);
              }
              uVar16 = (uint)uVar19;
              uVar15 = uVar15 + 1;
              uVar13 = piVar23[1];
              uVar30 = (undefined4)DAT_14045dd10;
              uVar31 = DAT_14045dd10._4_4_;
              uVar32 = (undefined4)DAT_14045dd18;
              uVar33 = DAT_14045dd18._4_4_;
            } while (uVar15 < uVar13);
          }
          uVar15 = uVar16 + 1;
          if ((int)(uVar16 + 1) < 0) {
            uVar15 = 0;
          }
          if ((uVar15 < uVar13) &&
             (piVar23[1] = uVar15, uVar30 = (undefined4)DAT_14045dd10, uVar31 = DAT_14045dd10._4_4_,
             uVar32 = (undefined4)DAT_14045dd18, uVar33 = DAT_14045dd18._4_4_, 1 < *piVar23 + 1U)) {
            FUN_1403a4c80(piVar23,uVar15,1);
            uVar30 = (undefined4)DAT_14045dd10;
            uVar31 = DAT_14045dd10._4_4_;
            uVar32 = (undefined4)DAT_14045dd18;
            uVar33 = DAT_14045dd18._4_4_;
          }
        }
        uVar13 = piVar23[1];
        uVar19 = (ulonglong)uVar13;
        local_res8 = (longlong *)CONCAT44(local_res8._4_4_,uVar13);
        if (uVar28 < *local_d8) {
          if (uVar28 < *(uint *)((local_100 + 6) * 0x10 + 4 + (longlong)param_1)) {
            puVar12 = (uint *)((ulonglong)uVar28 * 0x10 + param_1[(local_100 + 6) * 2 + 1]);
          }
          else {
            DAT_1404e4f20 = CONCAT44(uVar31,uVar30);
            _DAT_1404e4f28 = CONCAT44(uVar33,uVar32);
            puVar12 = (uint *)&DAT_1404e4f20;
          }
          if (*puVar12 == uVar27) {
            puVar22 = local_res10 + (local_100 + 4) * 4;
            uVar16 = puVar22[1] + 1;
            if ((int)uVar16 < 0) {
              uVar16 = 0;
            }
            cVar7 = FUN_1403a4b60(puVar22,uVar16,0);
            if (cVar7 == '\0') {
              DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
              _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
              puVar12 = (uint *)&DAT_1404e4f20;
            }
            else {
              uVar15 = puVar22[1];
              if ((uVar15 < uVar16) && ((uVar16 - uVar15 & 0xfffffff) != 0)) {
                FUN_1404217a0((ulonglong)uVar15 * 0x10 + *(longlong *)(puVar22 + 2),0,
                              (uVar16 - uVar15) * 0x10);
              }
              puVar22[1] = uVar16;
              puVar12 = (uint *)((ulonglong)(uVar16 - 1) * 0x10 + *(longlong *)(puVar22 + 2));
            }
            *puVar12 = uVar13;
            if (uVar28 < *(uint *)((local_100 + 6) * 0x10 + 4 + (longlong)param_1)) {
              puVar17 = (undefined8 *)((ulonglong)uVar28 * 0x10 + param_1[(local_100 + 6) * 2 + 1]);
            }
            else {
              DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
              _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
              puVar17 = &DAT_1404e4f20;
            }
            *(undefined8 *)(puVar12 + 2) = puVar17[1];
            uVar28 = uVar28 + 1;
            uVar30 = (undefined4)DAT_14045dd10;
            uVar31 = DAT_14045dd10._4_4_;
            uVar32 = (undefined4)DAT_14045dd18;
            uVar33 = DAT_14045dd18._4_4_;
            local_108 = uVar28;
          }
        }
        uVar27 = uVar27 + 1;
        iVar26 = local_d0[local_100];
        puVar22 = local_res10;
      } while (uVar27 < *(uint *)((longlong)param_1 + local_100 * 4 + 0x48));
    }
    local_res20[0] = local_res20[0] + 1;
    local_100 = local_100 + 1;
    puVar22 = local_res10;
  } while (local_res20[0] < 2);
  FUN_14041be00(local_c8,0x30,2,FUN_140397240);
  return;
}

