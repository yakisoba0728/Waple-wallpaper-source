// Function: FUN_14020b720
// Addr: 14020b720
// Size: 4067 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14020b720(longlong param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint *puVar17;
  undefined1 *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  int *piVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  int local_res10 [2];
  undefined8 local_res18;
  ulonglong local_res20;
  undefined1 auStack_1278 [8];
  undefined1 auStack_1270 [24];
  ulonglong local_1258;
  undefined1 *local_1250;
  uint *local_1248;
  uint *puStack_1240;
  uint *local_1238;
  uint *local_1230;
  uint *puStack_1228;
  uint *local_1220;
  longlong local_1218;
  longlong lStack_1210;
  longlong local_1208;
  longlong local_1200;
  longlong local_11f8;
  longlong local_11f0;
  longlong local_11e8;
  undefined1 local_11d8 [8];
  ulonglong local_11d0 [2];
  longlong local_11c0 [3];
  ulonglong local_11a8;
  ulonglong local_1198;
  longlong local_1190;
  longlong local_1188;
  longlong *local_1180;
  uint **local_1178;
  int *local_1170;
  longlong local_1168;
  longlong local_1160;
  longlong *local_1158;
  int *local_1150;
  longlong local_1148;
  undefined1 *local_1140;
  undefined1 *local_1138;
  undefined1 local_1128 [8];
  longlong local_1120 [2];
  longlong local_1110 [3];
  ulonglong local_10f8;
  undefined1 local_10e8 [16];
  undefined1 local_10d8 [8];
  undefined1 local_10d0 [16];
  undefined1 local_10c0 [40];
  undefined1 local_1098 [8];
  undefined1 local_1090 [16];
  undefined1 local_1080 [40];
  undefined1 *local_1058;
  ulonglong local_1050;
  undefined1 local_1048 [4104];
  
  puVar18 = auStack_1278;
  lVar25 = *(longlong *)(param_1 + 0x4b8);
  if (lVar25 == 0) {
    return;
  }
  if (*(longlong *)(lVar25 + 8) == 0) {
    return;
  }
  lVar7 = *(longlong *)(lVar25 + 0x18);
  if (*(longlong *)(lVar7 + 0xb0) == *(longlong *)(lVar7 + 0xb8)) {
    return;
  }
  if (*(longlong *)(lVar25 + 0x430) != *(longlong *)(lVar25 + 0x438)) {
    *(longlong *)(lVar25 + 0x438) = *(longlong *)(lVar25 + 0x430);
  }
  lVar25 = (*(longlong *)(lVar7 + 0xb8) - *(longlong *)(lVar7 + 0xb0) >> 4) * -0x3333333333333333;
  local_1248 = (uint *)0x0;
  puStack_1240 = (uint *)0x0;
  local_1238 = (uint *)0x0;
  local_1200 = lVar25;
  local_11f8 = lVar7;
  FUN_1400493a0(local_1128);
  local_res10[0] = 0;
  local_1208 = 0;
  local_1218 = 0;
  lStack_1210 = 0;
  if ((int)lVar25 == 0) {
    FUN_1400493a0(local_11d8);
  }
  else {
    FUN_140218fd0(&local_1218);
    FUN_1400493a0(local_11d8);
    uVar12 = 0;
    local_res18 = (ulonglong)local_res18._4_4_ << 0x20;
    do {
      uVar20 = 0;
      lVar7 = *(longlong *)(lVar7 + 0xb0);
      lVar9 = (longlong)(int)uVar12;
      puVar16 = (uint *)(local_1218 + lVar9 * 0x40);
      *puVar16 = uVar12;
      lVar13 = *(longlong *)(param_1 + 0x4b8);
      lVar4 = *(longlong *)(lVar13 + 0x2a0);
      lVar22 = *(longlong *)(lVar13 + 0x298);
      if (lVar4 - lVar22 >> 3 != 0) {
        do {
          lVar25 = *(longlong *)(*(longlong *)(lVar13 + 0x298) + (longlong)(int)uVar20 * 8);
          local_1190 = lVar25;
          if (((*(byte *)(lVar25 + 0x18) & 1) != 0) &&
             (lVar4 = thunk_FUN_14028d170(*(undefined8 *)(lVar7 + 8 + lVar9 * 0x50),
                                          *(undefined8 *)(lVar7 + 0x10 + lVar9 * 0x50),
                                          *(undefined4 *)(lVar25 + 0x14)),
             lVar4 != *(longlong *)(lVar7 + 0x10 + lVar9 * 0x50))) {
            puVar17 = *(uint **)(puVar16 + 0xc);
            if (puVar17 == *(uint **)(puVar16 + 0xe)) {
              uVar15 = (longlong)puVar17 - *(longlong *)(puVar16 + 10);
              lVar25 = (longlong)uVar15 >> 2;
              if (lVar25 == 0x3fffffffffffffff) goto LAB_14020c6fb;
              local_1198 = lVar25 + 1;
              uVar14 = (longlong)*(uint **)(puVar16 + 0xe) - *(longlong *)(puVar16 + 10) >> 2;
              if (0x3fffffffffffffff - (uVar14 >> 1) < uVar14) {
                uVar24 = 0x3fffffffffffffff;
              }
              else {
                uVar24 = (uVar14 >> 1) + uVar14;
                if (uVar24 < local_1198) {
                  uVar24 = local_1198;
                }
              }
              local_res20 = uVar24;
              uVar14 = FUN_140034a00(uVar14,&local_res20);
              uVar15 = uVar15 & 0xfffffffffffffffc;
              *(uint *)(uVar15 + uVar14) = uVar20;
              puVar11 = *(uint **)(puVar16 + 10);
              local_res20 = uVar14;
              if (puVar17 == *(uint **)(puVar16 + 0xc)) {
                lVar25 = (longlong)*(uint **)(puVar16 + 0xc) - (longlong)puVar11;
                puVar17 = puVar11;
              }
              else {
                FUN_1404210f0(uVar14,puVar11,(longlong)puVar17 - (longlong)puVar11);
                uVar14 = local_res20 + 4 + uVar15;
                lVar25 = *(longlong *)(puVar16 + 0xc) - (longlong)puVar17;
              }
              FUN_1404210f0(uVar14,puVar17,lVar25);
              FUN_140038af0(puVar16 + 10,local_res20,local_1198,uVar24);
              lVar25 = local_1190;
            }
            else {
              *puVar17 = uVar20;
              *(longlong *)(puVar16 + 0xc) = *(longlong *)(puVar16 + 0xc) + 4;
            }
            local_res20 = CONCAT44(local_res20._4_4_,uVar20);
            uVar12 = uVar20;
            if ((int)puVar16[1] <= (int)uVar20) {
              uVar12 = puVar16[1];
            }
            puVar16[1] = uVar12;
            plVar5 = (longlong *)FUN_140160b20(local_11d8,local_10e8,&local_res20);
            *(int *)(*plVar5 + 0x14) = (int)local_res18;
          }
          lVar25 = thunk_FUN_14028d170(*(undefined8 *)(lVar7 + 0x20 + lVar9 * 0x50),
                                       *(undefined8 *)(lVar7 + 0x28 + lVar9 * 0x50),
                                       *(undefined4 *)(lVar25 + 0x14));
          if (lVar25 != *(longlong *)(lVar7 + 0x28 + lVar9 * 0x50)) {
            if ((int)puVar16[2] < 0) {
              puVar16[2] = uVar20;
            }
            puVar16[3] = uVar20;
            if ((*(byte *)(lVar7 + 0x44 + lVar9 * 0x50) & 4) != 0) {
              local_res20 = CONCAT44(local_res20._4_4_,uVar20);
              FUN_14004b690(local_1128,&local_1230,&local_res20);
            }
          }
          lVar13 = *(longlong *)(param_1 + 0x4b8);
          uVar20 = uVar20 + 1;
          lVar4 = *(longlong *)(lVar13 + 0x2a0);
          lVar22 = *(longlong *)(lVar13 + 0x298);
          lVar25 = local_1200;
        } while ((ulonglong)(longlong)(int)uVar20 < (ulonglong)(lVar4 - lVar22 >> 3));
      }
      if (lVar4 - lVar22 >> 3 != 0) {
        iVar19 = 0;
        do {
          if ((((int)puVar16[2] <= iVar19) && (iVar19 <= (int)puVar16[3])) &&
             (lVar25 = thunk_FUN_14028d170(*(undefined8 *)(puVar16 + 10),
                                           *(undefined8 *)(puVar16 + 0xc),iVar19),
             lVar25 == *(longlong *)(puVar16 + 0xc))) {
            piVar23 = *(int **)(puVar16 + 6);
            if (piVar23 == *(int **)(puVar16 + 8)) {
              uVar15 = (longlong)piVar23 - *(longlong *)(puVar16 + 4);
              lVar25 = (longlong)uVar15 >> 2;
              if (lVar25 == 0x3fffffffffffffff) goto LAB_14020c6fb;
              uVar14 = (longlong)*(int **)(puVar16 + 8) - *(longlong *)(puVar16 + 4) >> 2;
              if (0x3fffffffffffffff - (uVar14 >> 1) < uVar14) {
LAB_14020c6f5:
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              uVar24 = lVar25 + 1;
              uVar14 = (uVar14 >> 1) + uVar14;
              uVar10 = uVar24;
              if (uVar24 <= uVar14) {
                uVar10 = uVar14;
              }
              if (0x3fffffffffffffff < uVar10) goto LAB_14020c6f5;
              uVar14 = uVar10 * 4;
              if (uVar14 == 0) {
                uVar14 = 0;
              }
              else if (uVar14 < 0x1000) {
                uVar14 = FUN_14028af20();
              }
              else {
                if (uVar14 + 0x27 <= uVar14) goto LAB_14020c6f5;
                lVar25 = FUN_14028af20(uVar14 + 0x27);
                if (lVar25 == 0) goto LAB_14020c6a2;
                uVar14 = lVar25 + 0x27U & 0xffffffffffffffe0;
                *(longlong *)(uVar14 - 8) = lVar25;
              }
              uVar15 = uVar15 & 0xfffffffffffffffc;
              *(int *)(uVar15 + uVar14) = iVar19;
              piVar2 = *(int **)(puVar16 + 4);
              if (piVar23 == *(int **)(puVar16 + 6)) {
                lVar25 = (longlong)*(int **)(puVar16 + 6) - (longlong)piVar2;
                uVar15 = uVar14;
                piVar23 = piVar2;
              }
              else {
                FUN_1404210f0(uVar14,piVar2,(longlong)piVar23 - (longlong)piVar2);
                uVar15 = uVar14 + 4 + uVar15;
                lVar25 = *(longlong *)(puVar16 + 6) - (longlong)piVar23;
              }
              FUN_1404210f0(uVar15,piVar23,lVar25);
              FUN_140038af0(puVar16 + 4,uVar14,uVar24,uVar10);
            }
            else {
              *piVar23 = iVar19;
              *(longlong *)(puVar16 + 6) = *(longlong *)(puVar16 + 6) + 4;
            }
          }
          iVar19 = iVar19 + 1;
          lVar25 = local_1200;
        } while ((ulonglong)(longlong)iVar19 <
                 (ulonglong)
                 (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x2a0) -
                  *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x298) >> 3));
      }
      uVar12 = (int)local_res18 + 1;
      local_res18 = CONCAT44(local_res18._4_4_,uVar12);
      lVar7 = local_11f8;
    } while (uVar12 < (uint)lVar25);
    uVar12 = 0;
    do {
      lVar4 = (longlong)(int)uVar12 * 0x40 + local_1218;
      uVar20 = *(uint *)(*(longlong *)(local_11f8 + 0xb0) + 0x48 + (longlong)(int)uVar12 * 0x50);
      if (uVar20 != 0xffffffff) {
        iVar19 = *(int *)(lVar4 + 0xc);
        do {
          lVar22 = *(longlong *)(local_11f8 + 0xb0);
          iVar1 = *(int *)((ulonglong)uVar20 * 0x40 + 0xc + local_1218);
          if (iVar1 <= iVar19) {
            iVar1 = iVar19;
          }
          iVar19 = iVar1;
          *(int *)(lVar4 + 0xc) = iVar19;
          uVar20 = *(uint *)(lVar22 + 0x48 + (ulonglong)uVar20 * 0x50);
        } while (uVar20 != 0xffffffff);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)lVar25);
  }
  lVar4 = lStack_1210;
  lVar25 = local_1218;
  puVar6 = (undefined1 *)0x0;
  lVar22 = lStack_1210 - local_1218 >> 6;
  if (lVar22 < 0x21) {
    FUN_140216ac0(local_1218,lStack_1210,&LAB_1401fac40);
  }
  else {
    uVar14 = lVar22 - (lVar22 - (lStack_1210 - local_1218 >> 0x3f) >> 1);
    uVar15 = 0x7fffffffffffffff;
    if ((longlong)uVar14 < 0x7fffffffffffffff) {
      uVar15 = uVar14;
    }
    if (0x40 < uVar14) {
      if ((uVar15 < 0x400000000000000) && (0 < (longlong)uVar15)) {
        do {
          local_1058 = (undefined1 *)FUN_1402ecff0(uVar15 << 6,&PTR_140426e20);
          if (local_1058 != (undefined1 *)0x0) {
            puVar6 = local_1058;
            if (0x40 < uVar15) goto LAB_14020bd68;
            break;
          }
          uVar15 = uVar15 >> 1;
        } while (uVar15 != 0);
      }
      FUN_14028af80(puVar6);
      uVar14 = 0x40;
    }
    uVar15 = uVar14;
    local_1058 = local_1048;
LAB_14020bd68:
    local_1250 = &LAB_1401fac40;
    local_1258 = uVar15;
    local_1050 = uVar15;
    FUN_140216f40(lVar25,lVar4,lVar22,local_1058);
    if (0x40 < local_1050) {
      FUN_14028af80(local_1058);
    }
  }
  local_1180 = &local_11f0;
  local_1178 = &local_1248;
  local_1170 = local_res10;
  local_11f0 = param_1;
  local_11e8 = lVar7;
  local_1188 = param_1;
  local_1168 = lVar7;
  FUN_1400493a0(local_1098);
  FUN_1400493a0(local_10d8);
  lVar25 = *(longlong *)(param_1 + 0x4b8);
  local_1158 = &local_11f0;
  uVar14 = 0;
  local_1150 = local_res10;
  local_1140 = local_1098;
  local_1138 = local_10d8;
  uVar15 = local_11d0[0];
  local_1160 = param_1;
  local_1148 = lVar7;
  if (*(longlong *)(lVar25 + 0x2a0) - *(longlong *)(lVar25 + 0x298) >> 3 != 0) {
    do {
      puVar16 = puStack_1240;
      uVar20 = (uint)uVar14;
      lVar25 = *(longlong *)(*(longlong *)(lVar25 + 0x298) + (longlong)(int)uVar20 * 8);
      uVar12 = *(uint *)(lVar25 + 0x18);
      if ((uVar12 & 1) == 0) {
        if ((uVar12 >> 2 & 1) == 0) {
          uVar24 = ((((uVar14 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar14 >> 8 & 0xff) *
                     0x100000001b3 ^ uVar14 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar14 >> 0x18) *
                   0x100000001b3 & local_10f8;
          lVar7 = *(longlong *)(local_1110[0] + 8 + uVar24 * 0x10);
          lVar4 = 0;
          if (lVar7 != local_1120[0]) {
            uVar12 = *(uint *)(lVar7 + 0x10);
            while ((lVar4 = lVar7, uVar20 != uVar12 &&
                   (lVar4 = 0, lVar7 != *(longlong *)(local_1110[0] + uVar24 * 0x10)))) {
              lVar7 = *(longlong *)(lVar7 + 8);
              uVar12 = *(uint *)(lVar7 + 0x10);
            }
          }
          if ((lVar4 == 0) || (lVar4 == local_1120[0])) {
            if (puStack_1240 == local_1238) {
              uVar15 = (longlong)puStack_1240 - (longlong)local_1248;
              lVar7 = (longlong)uVar15 >> 2;
              if (lVar7 == 0x3fffffffffffffff) {
LAB_14020c6fb:
                    /* WARNING: Subroutine does not return */
                FUN_140013050();
              }
              uVar24 = lVar7 + 1;
              uVar10 = (longlong)local_1238 - (longlong)local_1248 >> 2;
              if (0x3fffffffffffffff - (uVar10 >> 1) < uVar10) {
                uVar26 = 0x3fffffffffffffff;
              }
              else {
                uVar26 = (uVar10 >> 1) + uVar10;
                if (uVar26 < uVar24) {
                  uVar26 = uVar24;
                }
              }
              local_res18 = uVar26;
              puVar17 = (uint *)FUN_140034a00(uVar10,&local_res18);
              uVar15 = uVar15 & 0xfffffffffffffffc;
              *(uint *)(uVar15 + (longlong)puVar17) = uVar20;
              if (puVar16 == puStack_1240) {
                lVar7 = (longlong)puStack_1240 - (longlong)local_1248;
                puVar11 = puVar17;
                puVar16 = local_1248;
              }
              else {
                FUN_1404210f0(puVar17,local_1248,(longlong)puVar16 - (longlong)local_1248);
                lVar7 = (longlong)puStack_1240 - (longlong)puVar16;
                puVar11 = (uint *)(uVar15 + 4 + (longlong)puVar17);
              }
              uVar27 = FUN_1404210f0(puVar11,puVar16,lVar7);
              if (local_1248 != (uint *)0x0) {
                FUN_140038030(uVar27,local_1248,(longlong)local_1238 - (longlong)local_1248 >> 2);
              }
              puStack_1240 = puVar17 + uVar24;
              local_1238 = puVar17 + uVar26;
              uVar15 = local_11d0[0];
              local_1248 = puVar17;
            }
            else {
              *puStack_1240 = uVar20;
              puStack_1240 = puStack_1240 + 1;
              uVar15 = local_11d0[0];
            }
          }
        }
LAB_14020c051:
        uVar24 = 0;
        uVar12 = *(uint *)(lVar25 + 0x18);
        if ((uVar12 >> 3 & 1) == 0) {
          if ((uVar12 >> 2 & 1) != 0) {
            uVar26 = ((((uVar14 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar14 >> 8 & 0xff) *
                       0x100000001b3 ^ uVar14 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar14 >> 0x18) *
                     0x100000001b3;
            uVar14 = *(ulonglong *)(local_11c0[0] + 8 + (uVar26 & local_11a8) * 0x10);
            uVar10 = uVar24;
            if (uVar14 != uVar15) {
              uVar12 = *(uint *)(uVar14 + 0x10);
              while ((uVar10 = uVar14, uVar20 != uVar12 &&
                     (uVar10 = uVar24,
                     uVar14 != *(ulonglong *)(local_11c0[0] + (uVar26 & local_11a8) * 0x10)))) {
                uVar14 = *(ulonglong *)(uVar14 + 8);
                uVar12 = *(uint *)(uVar14 + 0x10);
              }
            }
            uVar14 = uVar15;
            if (uVar10 != 0) {
              uVar14 = uVar10;
            }
            local_res18 = uVar14;
            local_res20 = uVar26;
            if (uVar14 != uVar15) {
              local_1220 = (uint *)0x0;
              local_1230 = (uint *)0x0;
              puStack_1228 = (uint *)0x0;
              puVar8 = (uint *)FUN_14028af20(4);
              *puVar8 = uVar20;
              puVar16 = puVar8 + 1;
              puVar17 = puVar8;
              puVar11 = local_1230;
              if (puStack_1228 != (uint *)0x0) {
                FUN_1404210f0(puVar8,local_1230,-(longlong)local_1230);
                puVar17 = puVar16;
                puVar11 = (uint *)0x0;
              }
              FUN_1404210f0(puVar17,puVar11);
              if (local_1230 != (uint *)0x0) {
                uVar15 = ((longlong)local_1220 - (longlong)local_1230 >> 2) * 4;
                puVar17 = local_1230;
                if (0xfff < uVar15) {
                  if (0x1f < (ulonglong)
                             ((longlong)local_1230 + (-8 - (longlong)*(uint **)(local_1230 + -2))))
                  goto LAB_14020c6a2;
                  uVar15 = uVar15 + 0x27;
                  puVar17 = *(uint **)(local_1230 + -2);
                }
                thunk_FUN_14028af80(puVar17,uVar15);
              }
              uVar12 = uVar20 + 1;
              local_1230 = puVar8;
              puStack_1228 = puVar16;
              local_1220 = puVar16;
              if ((ulonglong)(longlong)(int)uVar12 <
                  (ulonglong)
                  (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x2a0) -
                   *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x298) >> 3)) {
                do {
                  uVar15 = *(ulonglong *)(local_11c0[0] + 8 + (uVar26 & local_11a8) * 0x10);
                  if (uVar15 == local_11d0[0]) {
LAB_14020c2e1:
                    uVar15 = 0;
                  }
                  else {
                    uVar21 = *(uint *)(uVar15 + 0x10);
                    while (uVar20 != uVar21) {
                      if (uVar15 == *(ulonglong *)(local_11c0[0] + (uVar26 & local_11a8) * 0x10))
                      goto LAB_14020c2e1;
                      uVar15 = *(ulonglong *)(uVar15 + 8);
                      uVar21 = *(uint *)(uVar15 + 0x10);
                    }
                  }
                  uVar24 = local_11d0[0];
                  if (uVar15 != 0) {
                    uVar24 = uVar15;
                  }
                  puStack_1228 = puVar16;
                  if ((uVar24 == local_11d0[0]) ||
                     (*(int *)(uVar24 + 0x14) != *(int *)(uVar14 + 0x14))) break;
                  if (puVar16 == local_1220) {
                    uVar15 = (longlong)puVar16 - (longlong)local_1230;
                    lVar25 = (longlong)uVar15 >> 2;
                    if (lVar25 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      FUN_140013050();
                    }
                    uVar14 = (longlong)local_1220 - (longlong)local_1230 >> 2;
                    if (0x3fffffffffffffff - (uVar14 >> 1) < uVar14) {
LAB_14020c701:
                    /* WARNING: Subroutine does not return */
                      FUN_140017370();
                    }
                    uVar24 = lVar25 + 1;
                    uVar14 = (uVar14 >> 1) + uVar14;
                    uVar10 = uVar24;
                    if (uVar24 <= uVar14) {
                      uVar10 = uVar14;
                    }
                    if (0x3fffffffffffffff < uVar10) goto LAB_14020c701;
                    uVar14 = uVar10 * 4;
                    if (uVar14 == 0) {
                      puVar17 = (uint *)0x0;
                    }
                    else if (uVar14 < 0x1000) {
                      puVar17 = (uint *)FUN_14028af20(uVar14);
                    }
                    else {
                      if (uVar14 + 0x27 <= uVar14) goto LAB_14020c701;
                      lVar25 = FUN_14028af20();
                      if (lVar25 == 0) goto LAB_14020c6a2;
                      puVar17 = (uint *)(lVar25 + 0x27U & 0xffffffffffffffe0);
                      *(longlong *)(puVar17 + -2) = lVar25;
                    }
                    uVar15 = uVar15 & 0xfffffffffffffffc;
                    *(uint *)(uVar15 + (longlong)puVar17) = uVar12;
                    puVar11 = puVar17;
                    puVar8 = local_1230;
                    if (puVar16 != puStack_1228) {
                      FUN_1404210f0(puVar17,local_1230,(longlong)puVar16 - (longlong)local_1230);
                      puVar11 = (uint *)((longlong)puVar17 + uVar15 + 4);
                      puVar8 = puVar16;
                    }
                    FUN_1404210f0(puVar11,puVar8);
                    if (local_1230 != (uint *)0x0) {
                      uVar15 = ((longlong)local_1220 - (longlong)local_1230 >> 2) * 4;
                      puVar16 = local_1230;
                      if (0xfff < uVar15) {
                        if (0x1f < (ulonglong)
                                   ((longlong)local_1230 +
                                   (-8 - (longlong)*(uint **)(local_1230 + -2))))
                        goto LAB_14020c6a2;
                        uVar15 = uVar15 + 0x27;
                        puVar16 = *(uint **)(local_1230 + -2);
                      }
                      thunk_FUN_14028af80(puVar16,uVar15);
                    }
                    local_1220 = puVar17 + uVar10;
                    puVar16 = puVar17 + uVar24;
                    uVar14 = local_res18;
                    uVar26 = local_res20;
                    local_1230 = puVar17;
                  }
                  else {
                    *puVar16 = uVar12;
                    puVar16 = puVar16 + 1;
                  }
                  uVar12 = uVar12 + 1;
                  puStack_1228 = puVar16;
                } while ((ulonglong)(longlong)(int)uVar12 <
                         (ulonglong)
                         (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x2a0) -
                          *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x298) >> 3));
              }
              if ((uint)local_1200 != 0) {
                uVar12 = 0;
                do {
                  piVar23 = (int *)((longlong)(int)uVar12 * 0x40 + local_1218);
                  if (*piVar23 == *(int *)(uVar14 + 0x14)) {
                    if (local_1248 != puStack_1240) {
                      FUN_14020c850(&local_1188);
                    }
                    FUN_14020cab0(&local_1160,*piVar23,piVar23,&local_1230);
                    break;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < (uint)local_1200);
              }
              uVar15 = local_11d0[0];
              if (local_1230 != (uint *)0x0) {
                uVar15 = ((longlong)local_1220 - (longlong)local_1230 >> 2) * 4;
                puVar16 = local_1230;
                if (0xfff < uVar15) {
                  if (0x1f < (ulonglong)
                             ((longlong)local_1230 + (-8 - (longlong)*(uint **)(local_1230 + -2))))
                  goto LAB_14020c6a2;
                  uVar15 = uVar15 + 0x27;
                  puVar16 = *(uint **)(local_1230 + -2);
                }
                thunk_FUN_14028af80(puVar16,uVar15);
                uVar15 = local_11d0[0];
              }
            }
          }
        }
        else {
          uVar12 = (uint)local_1200;
          if (uVar12 != 0) {
            do {
              puVar16 = (uint *)((longlong)(int)uVar24 * 0x40 + local_1218);
              if (((*(uint *)(*(longlong *)(local_11f8 + 0xb0) + 0x44 + (ulonglong)*puVar16 * 0x50)
                    >> 3 & 1) == 0) && (puVar16[3] == uVar20)) {
                if (local_1248 != puStack_1240) {
                  FUN_14020c710(&local_11f0,local_res10[0],&local_1248);
                  local_res10[0] = local_res10[0] + 1;
                  local_res18 = local_res18 & 0xffffffff00000000;
                  FUN_140077840(*(longlong *)(param_1 + 0x4b8) + 0x430,&local_res18);
                  if (local_1248 != puStack_1240) {
                    puStack_1240 = local_1248;
                  }
                }
                FUN_14020cab0(&local_1160,*puVar16,puVar16,puVar16 + 10);
              }
              uVar21 = (int)uVar24 + 1;
              uVar24 = (ulonglong)uVar21;
              uVar15 = local_11d0[0];
            } while (uVar21 < uVar12);
          }
        }
      }
      else if (((uVar12 >> 3 & 1) != 0) || ((uVar12 >> 2 & 1) != 0)) goto LAB_14020c051;
      lVar25 = *(longlong *)(param_1 + 0x4b8);
      uVar14 = (ulonglong)(uVar20 + 1);
    } while ((ulonglong)(longlong)(int)(uVar20 + 1) <
             (ulonglong)(*(longlong *)(lVar25 + 0x2a0) - *(longlong *)(lVar25 + 0x298) >> 3));
  }
  if (local_1248 != puStack_1240) {
    FUN_14020c850(&local_1188);
  }
  FUN_14000d9e0(local_10c0);
  FUN_140049340(local_10d0);
  FUN_14000d9e0(local_1080);
  FUN_140049340(local_1090);
  FUN_14000d9e0(local_11c0);
  FUN_140049340(local_11d0);
  lVar7 = lStack_1210;
  lVar25 = local_1218;
  if (local_1218 == 0) {
LAB_14020c652:
    FUN_14000d9e0(local_1110);
    FUN_140049340(local_1120);
    if (local_1248 == (uint *)0x0) {
      return;
    }
    puVar16 = local_1248;
    if (((ulonglong)(((longlong)local_1238 - (longlong)local_1248 >> 2) * 4) < 0x1000) ||
       (puVar16 = *(uint **)(local_1248 + -2), puVar18 = auStack_1278,
       (undefined1 *)((longlong)local_1248 + (-8 - (longlong)*(uint **)(local_1248 + -2))) <
       (undefined1 *)0x20)) goto LAB_14020c6ac;
  }
  else {
    for (; lVar25 != lVar7; lVar25 = lVar25 + 0x40) {
      FUN_140031b80(lVar25 + 0x28);
      FUN_140031b80(lVar25 + 0x10);
    }
    uVar15 = local_1208 - local_1218 & 0xffffffffffffffc0;
    lVar25 = local_1218;
    if (uVar15 < 0x1000) {
LAB_14020c63f:
      thunk_FUN_14028af80(lVar25,uVar15);
      local_1208 = 0;
      local_1218 = 0;
      lStack_1210 = 0;
      goto LAB_14020c652;
    }
    if ((local_1218 - *(longlong *)(local_1218 + -8)) - 8U < 0x20) {
      uVar15 = uVar15 | 0x27;
      lVar25 = *(longlong *)(local_1218 + -8);
      goto LAB_14020c63f;
    }
  }
LAB_14020c6a2:
  puVar16 = (uint *)&DAT_00000005;
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(5);
  puVar18 = auStack_1270;
LAB_14020c6ac:
  *(undefined8 *)(puVar18 + -8) = 0x14020c6b4;
  thunk_FUN_14028af80(puVar16);
  return;
}

