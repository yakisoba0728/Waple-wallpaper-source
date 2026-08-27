// Function: FUN_1400f00e0
// Addr: 1400f00e0
// Size: 2768 bytes


void FUN_1400f00e0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  float fVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  char cVar14;
  byte bVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  float fVar27;
  ulonglong local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  byte bStack_2cf;
  byte bStack_2ce;
  byte bStack_2cd;
  longlong local_2c8 [7];
  longlong *local_290;
  longlong local_288 [7];
  longlong *local_250;
  undefined4 local_248;
  undefined4 local_244;
  int local_240;
  int local_23c;
  longlong local_238 [7];
  longlong *local_200;
  longlong local_1f8 [7];
  longlong *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong local_1a8 [7];
  longlong *local_170;
  longlong local_168 [7];
  longlong *local_130;
  longlong local_128 [7];
  longlong *local_f0;
  longlong local_e8 [7];
  longlong *local_b0;
  undefined1 local_a8 [104];
  
  local_290 = (longlong *)0x0;
  local_250 = (longlong *)0x0;
  iVar10 = FUN_140290d80(param_1 + 200);
  fVar9 = DAT_140492974;
  do {
    if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    lVar17 = param_1 + 0x30;
    if (*(int *)(param_1 + 0x114) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x114) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    while (*(char *)(param_1 + 0x1a8) == '\0') {
      if ((*(longlong *)(param_1 + 0x18) != *(longlong *)(param_1 + 0x20)) &&
         (((*(char *)(param_1 + 0x70) == '\0' || (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 4)))
          || (plVar11 = (longlong *)FUN_1400ca6c0(param_1 + 0x30,local_res18),
             *plVar11 == *(longlong *)(param_1 + 0x38))))) goto LAB_1400f01bb;
      FUN_140290f10(param_1 + 0x118,param_1 + 200);
    }
    if (*(longlong *)(param_1 + 0x18) == *(longlong *)(param_1 + 0x20)) {
      FUN_140290ea0(param_1 + 200);
      if (local_250 != (longlong *)0x0) {
        (**(code **)(*local_250 + 0x20))(local_250,local_250 != local_288);
        local_250 = (longlong *)0x0;
      }
      if (local_290 != (longlong *)0x0) {
        (**(code **)(*local_290 + 0x20))(local_290,local_290 != local_2c8);
      }
      return;
    }
LAB_1400f01bb:
    uVar3 = *(uint *)(param_1 + 0x160);
    if (uVar3 < 0xb2d05e01) {
      if ((1999999999 < uVar3) || (*(char *)(param_1 + 0x1a9) != '\0')) goto LAB_1400f0245;
      *(undefined1 *)(param_1 + 0x1a9) = 1;
      *(undefined1 *)(param_1 + 0x70) = 0;
      uVar12 = FUN_14009c1a0(local_a8,lVar17);
      FUN_1400c93d0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),uVar12);
LAB_1400f03d1:
      if ((*(longlong *)(param_1 + 0x18) == *(longlong *)(param_1 + 0x20)) ||
         (((*(char *)(param_1 + 0x70) != '\0' && (*(int *)(*(longlong *)(param_1 + 0x18) + 4) < 1))
          && (plVar11 = (longlong *)FUN_1400ca6c0(param_1 + 0x30,&local_res20),
             *plVar11 != *(longlong *)(param_1 + 0x38))))) {
        FUN_140290ea0(param_1 + 200);
      }
      else {
        LOCK();
        *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
        UNLOCK();
        lVar17 = *(longlong *)(param_1 + 0x18);
        local_f0 = (longlong *)0x0;
        uVar3 = *(uint *)(lVar17 + 8);
        iVar10 = *(int *)(lVar17 + 0xc);
        puVar13 = *(undefined8 **)(lVar17 + 0x48);
        if (puVar13 != (undefined8 *)0x0) {
          local_f0 = (longlong *)(**(code **)*puVar13)(puVar13,local_128);
        }
        FUN_140033a00(local_128,local_2c8);
        if (local_f0 != (longlong *)0x0) {
          (**(code **)(*local_f0 + 0x20))
                    (local_f0,CONCAT71((int7)((ulonglong)local_128 >> 8),local_f0 != local_128));
        }
        puVar13 = *(undefined8 **)(lVar17 + 0x88);
        local_b0 = (longlong *)0x0;
        if (puVar13 != (undefined8 *)0x0) {
          local_b0 = (longlong *)(**(code **)*puVar13)(puVar13,local_e8);
        }
        FUN_140033a00(local_e8,local_288);
        if (local_b0 != (longlong *)0x0) {
          (**(code **)(*local_b0 + 0x20))
                    (local_b0,CONCAT71((int7)((ulonglong)local_e8 >> 8),local_b0 != local_e8));
        }
        lVar17 = *(longlong *)(param_1 + 0x20);
        lVar20 = *(longlong *)(param_1 + 0x18);
        if (1 < (lVar17 - lVar20 >> 4) * -0x71c71c71c71c71c7) {
          puVar4 = (undefined4 *)(lVar17 + -0x90);
          local_170 = (longlong *)0x0;
          local_1b8 = *puVar4;
          local_1b4 = *(undefined4 *)(lVar17 + -0x8c);
          local_1b0 = *(undefined4 *)(lVar17 + -0x88);
          local_1ac = *(undefined4 *)(lVar17 + -0x84);
          FUN_140037830(local_1a8,lVar17 + -0x80);
          local_130 = (longlong *)0x0;
          FUN_140037830(local_168,lVar17 + -0x40);
          FUN_1400c9320(puVar4,lVar20);
          FUN_1400cb630(lVar20,0,((longlong)puVar4 - lVar20 >> 4) * -0x71c71c71c71c71c7,&local_1b8,
                        param_1 + 0x30);
          if (local_130 != (longlong *)0x0) {
            (**(code **)(*local_130 + 0x20))
                      (local_130,CONCAT71((int7)((ulonglong)local_168 >> 8),local_130 != local_168))
            ;
            local_130 = (longlong *)0x0;
          }
          if (local_170 != (longlong *)0x0) {
            (**(code **)(*local_170 + 0x20))
                      (local_170,CONCAT71((int7)((ulonglong)local_1a8 >> 8),local_170 != local_1a8))
            ;
          }
        }
        lVar17 = *(longlong *)(param_1 + 0x20);
        plVar11 = *(longlong **)(lVar17 + -8);
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x20))(plVar11,plVar11 != (longlong *)(lVar17 + -0x40));
          *(undefined8 *)(lVar17 + -8) = 0;
        }
        plVar11 = *(longlong **)(lVar17 + -0x48);
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x20))(plVar11,plVar11 != (longlong *)(lVar17 + -0x80));
          *(undefined8 *)(lVar17 + -0x48) = 0;
        }
        *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -0x90;
        *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + iVar10;
        bStack_2cf = (byte)(uVar3 >> 8);
        lVar17 = *(longlong *)(param_1 + 0x180);
        puVar25 = *(undefined8 **)(param_1 + 0x170);
        bStack_2ce = (byte)(uVar3 >> 0x10);
        bStack_2cd = (byte)(uVar3 >> 0x18);
        uVar26 = (((((ulonglong)uVar3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)bStack_2cf) * 0x100000001b3 ^ (ulonglong)bStack_2ce) * 0x100000001b3 ^
                 (ulonglong)bStack_2cd) * 0x100000001b3;
        uVar19 = *(ulonglong *)(param_1 + 0x198) & uVar26;
        lVar20 = uVar19 * 0x10;
        puVar13 = *(undefined8 **)(lVar17 + 8 + uVar19 * 0x10);
        if (puVar13 == puVar25) {
          puVar16 = (undefined8 *)0x0;
          lVar21 = lVar20;
          lVar20 = lVar17;
        }
        else {
          uVar1 = *(uint *)(puVar13 + 2);
          puVar16 = puVar13;
          while (lVar21 = lVar17, uVar3 != uVar1) {
            if (puVar16 == *(undefined8 **)(lVar17 + uVar19 * 0x10)) {
              puVar16 = (undefined8 *)0x0;
              break;
            }
            puVar16 = (undefined8 *)puVar16[1];
            uVar1 = *(uint *)(puVar16 + 2);
          }
        }
        if ((puVar16 == (undefined8 *)0x0) || (puVar16 == puVar25)) {
          if (puVar13 == puVar25) {
LAB_1400f070a:
            if (*(longlong *)(param_1 + 0x178) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
              FUN_14028c2e0("unordered_map/set too long");
            }
            puVar13 = (undefined8 *)FUN_14028af20(0x18);
            *(uint *)(puVar13 + 2) = uVar3;
            *(undefined4 *)((longlong)puVar13 + 0x14) = 0;
            fVar27 = (float)(*(longlong *)(param_1 + 0x178) + 1);
            uVar19 = *(ulonglong *)(param_1 + 0x1a0);
            if (*(float *)(param_1 + 0x168) < fVar27 / (float)uVar19) {
              fVar27 = (float)FUN_140419fa0(fVar27 / *(float *)(param_1 + 0x168));
              lVar17 = 0;
              if ((fVar9 <= fVar27) && (fVar27 = fVar27 - fVar9, fVar27 < fVar9)) {
                lVar17 = -0x8000000000000000;
              }
              uVar18 = 8;
              if (8 < (ulonglong)((longlong)fVar27 + lVar17)) {
                uVar18 = (longlong)fVar27 + lVar17;
              }
              uVar23 = uVar19;
              if ((uVar19 < uVar18) &&
                 ((0x1ff < uVar19 || (uVar23 = uVar19 * 8, uVar19 * 8 < uVar18)))) {
                uVar23 = uVar18;
              }
              for (lVar17 = 0x3f; 0xfffffffffffffffU >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
              if ((ulonglong)(1L << ((byte)lVar17 & 0x3f)) < uVar23) {
                    /* WARNING: Subroutine does not return */
                FUN_14028c2e0("invalid hash bucket count");
              }
              plVar11 = *(longlong **)(param_1 + 0x170);
              uVar19 = uVar23 - 1 | 1;
              lVar17 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              bVar15 = (char)lVar17 + 1;
              lVar17 = 1L << (bVar15 & 0x3f);
              FUN_14003e510(param_1 + 0x180,2L << (bVar15 & 0x3f),plVar11);
              *(longlong *)(param_1 + 0x1a0) = lVar17;
              *(longlong *)(param_1 + 0x198) = lVar17 + -1;
              plVar22 = (longlong *)**(undefined8 **)(param_1 + 0x170);
joined_r0x0001400f0878:
              if (plVar22 != plVar11) {
                lVar17 = *(longlong *)(param_1 + 0x180);
                plVar5 = (longlong *)*plVar22;
                uVar19 = (((((ulonglong)*(byte *)(plVar22 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3
                           ^ (ulonglong)*(byte *)((longlong)plVar22 + 0x11)) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar22 + 0x12)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar22 + 0x13)) * 0x100000001b3 &
                         *(ulonglong *)(param_1 + 0x198);
                plVar6 = *(longlong **)(lVar17 + uVar19 * 0x10);
                if (plVar6 == plVar11) {
                  *(longlong **)(lVar17 + uVar19 * 0x10) = plVar22;
                  *(longlong **)(lVar17 + 8 + uVar19 * 0x10) = plVar22;
                  plVar22 = plVar5;
                }
                else {
                  plVar7 = *(longlong **)(lVar17 + 8 + uVar19 * 0x10);
                  if ((int)plVar22[2] == (int)plVar7[2]) {
                    plVar7 = (longlong *)*plVar7;
                    if (plVar7 != plVar22) {
                      plVar6 = (longlong *)plVar22[1];
                      *plVar6 = (longlong)plVar5;
                      puVar25 = (undefined8 *)plVar5[1];
                      *puVar25 = plVar7;
                      puVar16 = (undefined8 *)plVar7[1];
                      *puVar16 = plVar22;
                      plVar7[1] = (longlong)puVar25;
                      plVar5[1] = (longlong)plVar6;
                      plVar22[1] = (longlong)puVar16;
                    }
                    *(longlong **)(lVar17 + 8 + uVar19 * 0x10) = plVar22;
                    plVar22 = plVar5;
                  }
                  else {
                    do {
                      if (plVar6 == plVar7) {
                        plVar6 = (longlong *)plVar22[1];
                        *plVar6 = (longlong)plVar5;
                        puVar25 = (undefined8 *)plVar5[1];
                        *puVar25 = plVar7;
                        puVar16 = (undefined8 *)plVar7[1];
                        *puVar16 = plVar22;
                        plVar7[1] = (longlong)puVar25;
                        plVar5[1] = (longlong)plVar6;
                        plVar22[1] = (longlong)puVar16;
                        *(longlong **)(lVar17 + uVar19 * 0x10) = plVar22;
                        plVar22 = plVar5;
                        goto joined_r0x0001400f0878;
                      }
                      plVar7 = (longlong *)plVar7[1];
                    } while ((int)plVar22[2] != (int)plVar7[2]);
                    lVar17 = *plVar7;
                    plVar6 = (longlong *)plVar22[1];
                    *plVar6 = (longlong)plVar5;
                    plVar7 = (longlong *)plVar5[1];
                    *plVar7 = lVar17;
                    puVar25 = *(undefined8 **)(lVar17 + 8);
                    *puVar25 = plVar22;
                    *(longlong **)(lVar17 + 8) = plVar7;
                    plVar5[1] = (longlong)plVar6;
                    plVar22[1] = (longlong)puVar25;
                    plVar22 = plVar5;
                  }
                }
                goto joined_r0x0001400f0878;
              }
              local_res8 = 0;
              FUN_140050350(&local_res8);
              uVar19 = uVar26 & *(ulonglong *)(param_1 + 0x198);
              puVar25 = *(undefined8 **)(param_1 + 0x170);
              puVar16 = *(undefined8 **)(*(longlong *)(param_1 + 0x180) + 8 + uVar19 * 0x10);
              if (puVar16 != puVar25) {
                iVar2 = *(int *)(puVar16 + 2);
                puVar25 = puVar16;
                while (*(int *)(puVar13 + 2) != iVar2) {
                  if (puVar25 == *(undefined8 **)(*(longlong *)(param_1 + 0x180) + uVar19 * 0x10))
                  goto LAB_1400f09f4;
                  puVar25 = (undefined8 *)puVar25[1];
                  iVar2 = *(int *)(puVar25 + 2);
                }
                puVar25 = (undefined8 *)*puVar25;
              }
            }
LAB_1400f09f4:
            puVar16 = (undefined8 *)puVar25[1];
            *(longlong *)(param_1 + 0x178) = *(longlong *)(param_1 + 0x178) + 1;
            *puVar13 = puVar25;
            puVar13[1] = puVar16;
            *puVar16 = puVar13;
            puVar25[1] = puVar13;
            uVar26 = uVar26 & *(ulonglong *)(param_1 + 0x198);
            lVar17 = *(longlong *)(param_1 + 0x180);
            puVar8 = *(undefined8 **)(lVar17 + uVar26 * 0x10);
            if (puVar8 == *(undefined8 **)(param_1 + 0x170)) {
              *(undefined8 **)(lVar17 + uVar26 * 0x10) = puVar13;
LAB_1400f0a7a:
              *(undefined8 **)(lVar17 + 8 + uVar26 * 0x10) = puVar13;
            }
            else if (puVar8 == puVar25) {
              *(undefined8 **)(lVar17 + uVar26 * 0x10) = puVar13;
            }
            else if (*(undefined8 **)(lVar17 + 8 + uVar26 * 0x10) == puVar16) goto LAB_1400f0a7a;
          }
          else {
            uVar1 = *(uint *)(puVar13 + 2);
            while (uVar3 != uVar1) {
              puVar25 = puVar13;
              if (puVar13 == *(undefined8 **)(lVar21 + lVar20)) goto LAB_1400f070a;
              puVar13 = (undefined8 *)puVar13[1];
              uVar1 = *(uint *)(puVar13 + 2);
            }
          }
          *(int *)((longlong)puVar13 + 0x14) = iVar10;
        }
        else {
          *(int *)((longlong)puVar16 + 0x14) = *(int *)((longlong)puVar16 + 0x14) + iVar10;
        }
        FUN_140290ea0(param_1 + 200);
        if (local_290 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2c0();
        }
        (**(code **)(*local_290 + 0x10))();
        LOCK();
        *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + -1;
        UNLOCK();
      }
    }
    else {
      if (*(char *)(param_1 + 0x1a9) == '\0') {
LAB_1400f0245:
        uVar12 = FUN_14009c1a0(local_a8,lVar17);
        FUN_1400c93d0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),uVar12);
        if (uVar3 < 0xb2d05e01) goto LAB_1400f03d1;
      }
      else {
        *(undefined1 *)(param_1 + 0x1a9) = 0;
        *(undefined1 *)(param_1 + 0x70) = 1;
        uVar12 = FUN_14009c1a0(local_a8,lVar17);
        FUN_1400c93d0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),uVar12);
      }
      plVar11 = *(longlong **)(param_1 + 0x170);
      local_res8 = local_res8 & 0xffffffffffffff00;
      plVar22 = (longlong *)*plVar11;
      if (plVar22 == plVar11) goto LAB_1400f03d1;
      do {
        puVar4 = *(undefined4 **)(param_1 + 0x20);
        iVar10 = 0;
        puVar24 = *(undefined4 **)(param_1 + 0x18);
        local_res10 = plVar22[2];
        if (puVar24 == puVar4) {
LAB_1400f037b:
          cVar14 = '\x01';
          local_res8 = CONCAT71(local_res8._1_7_,1);
        }
        else {
          local_res10._4_4_ = (int)((ulonglong)local_res10 >> 0x20);
          iVar2 = local_res10._4_4_;
          do {
            local_248 = *puVar24;
            puVar13 = *(undefined8 **)(puVar24 + 0x12);
            local_244 = puVar24[1];
            local_240 = puVar24[2];
            local_23c = puVar24[3];
            local_200 = (longlong *)0x0;
            if (puVar13 != (undefined8 *)0x0) {
              local_200 = (longlong *)(**(code **)*puVar13)(puVar13,local_238);
            }
            puVar13 = *(undefined8 **)(puVar24 + 0x22);
            local_1c0 = (longlong *)0x0;
            if (puVar13 != (undefined8 *)0x0) {
              local_1c0 = (longlong *)(**(code **)*puVar13)(puVar13,local_1f8);
            }
            if (local_240 == iVar2) {
              iVar10 = iVar10 + local_23c;
            }
            if (local_1c0 != (longlong *)0x0) {
              (**(code **)(*local_1c0 + 0x20))(local_1c0,local_1c0 != local_1f8);
              local_1c0 = (longlong *)0x0;
            }
            if (local_200 != (longlong *)0x0) {
              (**(code **)(*local_200 + 0x20))
                        (local_200,
                         CONCAT71((int7)((ulonglong)local_238 >> 8),local_200 != local_238));
            }
            puVar24 = puVar24 + 0x24;
          } while (puVar24 != puVar4);
          if (iVar10 == 0) goto LAB_1400f037b;
          cVar14 = (char)local_res8;
        }
        plVar22 = (longlong *)*plVar22;
      } while (plVar22 != plVar11);
      if ((cVar14 == '\0') || (*(int *)(param_1 + 0x1ac) < 1)) goto LAB_1400f03d1;
      FUN_140290ea0(param_1 + 200);
      Sleep(1);
    }
    if (local_250 != (longlong *)0x0) {
      (**(code **)(*local_250 + 0x20))(local_250,local_250 != local_288);
      local_250 = (longlong *)0x0;
    }
    if (local_290 != (longlong *)0x0) {
      (**(code **)(*local_290 + 0x20))(local_290,local_290 != local_2c8);
    }
    local_290 = (longlong *)0x0;
    local_250 = (longlong *)0x0;
    iVar10 = FUN_140290d80(param_1 + 200);
  } while( true );
}

