// Function: FUN_1403abbf0
// Addr: 1403abbf0
// Size: 2686 bytes


ulonglong FUN_1403abbf0(longlong param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint3 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  short sVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulonglong uVar29;
  undefined1 auVar30 [16];
  ulonglong uVar31;
  undefined1 auVar32 [16];
  uint local_res8 [2];
  uint local_res10 [2];
  byte *local_res18;
  undefined8 in_stack_ffffffffffffff68;
  uint *puVar33;
  undefined4 uVar34;
  
  lVar4 = *(longlong *)(param_2 + 0xa0);
  uVar15 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  if (uVar15 == 0) {
    pbVar12 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar12 = (byte *)((ulonglong)uVar15 + param_1);
  }
  uVar34 = *(undefined4 *)(*(longlong *)(lVar4 + 0x70) + (ulonglong)*(uint *)(lVar4 + 0x5c) * 0x14);
  iVar16 = (uint)pbVar12[1] + (uint)*pbVar12 * 0x100;
  if (iVar16 == 1) {
    uVar15 = FUN_1403c70f0(pbVar12,uVar34);
  }
  else if (iVar16 == 2) {
    uVar15 = FUN_1403c7170(pbVar12,uVar34);
  }
  else {
    uVar15 = 0xffffffff;
  }
  if (uVar15 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
    pbVar12 = (byte *)(param_1 + 6 + (ulonglong)uVar15 * 4);
  }
  else {
    pbVar12 = (byte *)&DAT_14045dd10;
  }
  uVar10 = 0;
  if (((uint)*pbVar12 * 0x100 + (uint)pbVar12[1] != 0) &&
     (local_res18 = pbVar12, uVar10 = FUN_1404093d0(pbVar12,param_2 + 0xa8,param_1),
     (char)uVar10 != '\0')) {
    uVar10 = 0;
    uVar15 = (uint)*pbVar12 * 0x100 + (uint)pbVar12[1];
    if ((uVar15 == 0) ||
       (uVar10 = FUN_140400fb0((ulonglong)uVar15 + param_1,param_2 + 0xa8), (char)uVar10 != '\0')) {
      iVar16 = *(int *)(lVar4 + 0x5c);
      *(int *)(param_2 + 8) = iVar16;
      if (iVar16 != 0) {
        lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0xa0) + 0x78);
        do {
          uVar15 = iVar16 - 1;
          *(uint *)(param_2 + 8) = uVar15;
          uVar2 = *(ushort *)(lVar5 + 0xc + (ulonglong)uVar15 * 0x14);
          uVar17 = *(uint *)(param_2 + 0x18);
          uVar8 = uVar2 & uVar17;
          uVar10 = (ulonglong)uVar8;
          if ((uVar8 & 0xe) == 0) {
            puVar33 = (uint *)(lVar5 + (ulonglong)uVar15 * 0x14);
            if ((uVar2 & 8) != 0) {
              if ((uVar17 & 0x10) == 0) {
                uVar6 = (uint3)(uVar8 >> 8);
                if ((uVar17 & 0xff00) == 0) {
                  uVar10 = CONCAT71((uint7)uVar6,1);
                }
                else {
                  uVar10 = (ulonglong)CONCAT31(uVar6,(uVar17 & 0xff00) == (uVar2 & 0xff00));
                }
              }
              else {
                uVar11 = 0;
                puVar14 = *(undefined8 **)(*(longlong *)(param_2 + 0x10) + 0xf8);
                do {
                  uVar10 = *(ulonglong *)
                            (puVar14[2] + (ulonglong)(uVar17 >> 0x10) * 0x18 + uVar11 * 8);
                  if ((uVar10 >> (*puVar33 >> ((byte)(&DAT_14045c3c8)[uVar11] & 0x1f) & 0x3f) & 1)
                      == 0) goto LAB_1403abdf3;
                  uVar15 = (int)uVar11 + 1;
                  uVar11 = (ulonglong)uVar15;
                } while (uVar15 < 3);
                puVar14 = (undefined8 *)*puVar14;
                puVar13 = &DAT_14045dd10;
                if (puVar14 != (undefined8 *)0x0) {
                  puVar13 = puVar14;
                }
                if (*(uint *)(puVar13 + 3) < 4) {
                  puVar14 = &DAT_14045dd10;
                }
                else {
                  puVar14 = (undefined8 *)puVar13[2];
                }
                uVar10 = FUN_1403ebf20(puVar14,uVar17 >> 0x10,*puVar33);
                if ((char)uVar10 == '\0') {
LAB_1403abdf3:
                  uVar10 = uVar10 & 0xffffffffffffff00;
                }
                else {
                  uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
                }
              }
              if ((char)uVar10 == '\0') goto LAB_1403abec9;
            }
            uVar34 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
            uVar2 = (ushort)puVar33[4];
            if ((((((uVar2 & 0x20) == 0) || ((puVar33[3] & 0x10) != 0)) ||
                 ((*(char *)(param_2 + 0x20) == '\0' &&
                  ((((byte)uVar2 & 0x1f) == 1 && ((uVar2 & 0x200) != 0)))))) ||
                ((*(char *)(param_2 + 0x21) == '\0' &&
                 ((((byte)uVar2 & 0x1f) == 1 && ((uVar2 & 0x100) != 0)))))) ||
               ((*(char *)(param_2 + 0x22) == '\0' && ((uVar2 & 0x40) != 0)))) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            pbVar12 = *(byte **)(param_2 + 0x38);
            if (pbVar12 == (byte *)0x0) {
              iVar16 = 0;
            }
            else {
              iVar16 = (uint)*pbVar12 * 0x100 + (uint)pbVar12[1];
            }
            uVar10 = (ulonglong)puVar33[1];
            if ((*(uint *)(param_2 + 0x1c) & puVar33[1]) != 0) {
              if (*(char *)(param_2 + 0x23) != '\0') {
                uVar10 = 0;
                if ((*(char *)(param_2 + 0x24) != '\0') &&
                   (*(char *)(param_2 + 0x24) != *(char *)((longlong)puVar33 + 0xf)))
                goto LAB_1403abec1;
              }
              if (*(code **)(param_2 + 0x28) == (code *)0x0) {
                uVar10 = 0;
                if (bVar7) goto LAB_1403abec9;
              }
              else {
                uVar10 = (**(code **)(param_2 + 0x28))
                                   (puVar33,iVar16,*(undefined8 *)(param_2 + 0x30));
                uVar34 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
                if ((char)uVar10 == '\0') goto LAB_1403abec1;
              }
              if (*(longlong *)(param_2 + 0x38) != 0) {
                *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 2;
              }
              uVar15 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
              if (uVar15 == 0) {
                pbVar12 = (byte *)&DAT_14045dd10;
              }
              else {
                pbVar12 = (byte *)((ulonglong)uVar15 + param_1);
              }
              iVar16 = (uint)*pbVar12 * 0x100 + (uint)pbVar12[1];
              if (iVar16 == 1) {
                uVar15 = FUN_1403c70f0(pbVar12,*(undefined4 *)
                                                (*(longlong *)(lVar4 + 0x70) +
                                                (ulonglong)*(uint *)(param_2 + 8) * 0x14));
              }
              else if (iVar16 == 2) {
                uVar15 = FUN_1403c7170(pbVar12);
              }
              else {
                uVar15 = 0xffffffff;
              }
              if (uVar15 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
                pbVar12 = (byte *)(param_1 + ((ulonglong)uVar15 + 2) * 4);
              }
              else {
                pbVar12 = (byte *)((longlong)&DAT_14045dd10 + 2);
              }
              uVar10 = 0;
              if ((((uint)*pbVar12 * 0x100 + (uint)pbVar12[1] != 0) &&
                  (uVar10 = FUN_1404093d0(pbVar12,param_2 + 0xa8,param_1), (char)uVar10 != '\0')) &&
                 ((uVar15 = (uint)*pbVar12 * 0x100 + (uint)pbVar12[1], uVar15 == 0 ||
                  (uVar10 = FUN_140400fb0((ulonglong)uVar15 + param_1,param_2 + 0xa8),
                  (char)uVar10 != '\0')))) {
                uVar15 = *(uint *)(lVar4 + 0x5c);
                uVar11 = (ulonglong)uVar15;
                uVar17 = *(uint *)(param_2 + 8);
                uVar10 = (ulonglong)uVar17;
                FUN_14040eef0(lVar4,uVar10,uVar15 + 1);
                uVar8 = (uint)*pbVar12 * 0x100 + (uint)pbVar12[1];
                if (uVar8 == 0) {
                  pbVar12 = (byte *)&DAT_14045dd10;
                }
                else {
                  pbVar12 = (byte *)((ulonglong)uVar8 + param_1);
                }
                uVar29 = 0;
                uVar31 = 0;
                local_res8[0] = 0;
                local_res10[0] = 0;
                auVar27 = ZEXT816(0);
                uVar3 = *(undefined4 *)(*(longlong *)(lVar4 + 0x70) + uVar10 * 0x14);
                iVar16 = (uint)pbVar12[1] + (uint)*pbVar12 * 0x100;
                if (iVar16 == 1) {
                  auVar32 = ZEXT416((uint)((float)(int)(short)((ushort)pbVar12[2] * 0x100 +
                                                              (ushort)pbVar12[3]) *
                                          *(float *)(*(longlong *)(param_2 + 0x90) + 0x50)));
                  auVar30 = ZEXT416((uint)((float)(int)(short)((ushort)pbVar12[4] * 0x100 +
                                                              (ushort)pbVar12[5]) *
                                          *(float *)(*(longlong *)(param_2 + 0x90) + 0x54)));
                  goto LAB_1403ac120;
                }
                if (iVar16 == 2) {
                  puVar33 = local_res8;
                  FUN_1403c6050(pbVar12,param_2,uVar3,local_res10,puVar33);
                  uVar34 = (undefined4)((ulonglong)puVar33 >> 0x20);
LAB_1403ac106:
                  uVar29 = (ulonglong)local_res8[0];
                  uVar31 = (ulonglong)local_res10[0];
                }
                else if (iVar16 == 3) {
                  puVar33 = local_res8;
                  FUN_1403c6320(pbVar12,param_2,uVar3,local_res10,puVar33);
                  uVar34 = (undefined4)((ulonglong)puVar33 >> 0x20);
                  goto LAB_1403ac106;
                }
                auVar32._8_8_ = 0;
                auVar32._0_8_ = uVar31;
                auVar30._8_8_ = 0;
                auVar30._0_8_ = uVar29;
LAB_1403ac120:
                uVar8 = (uint)*local_res18 * 0x100 + (uint)local_res18[1];
                if (uVar8 == 0) {
                  pbVar12 = (byte *)&DAT_14045dd10;
                }
                else {
                  pbVar12 = (byte *)((ulonglong)uVar8 + param_1);
                }
                auVar26 = ZEXT816(0);
                local_res8[0] = 0;
                local_res10[0] = 0;
                uVar3 = *(undefined4 *)(*(longlong *)(lVar4 + 0x70) + uVar11 * 0x14);
                iVar16 = (uint)*pbVar12 * 0x100 + (uint)pbVar12[1];
                if (iVar16 == 1) {
                  auVar26 = ZEXT416((uint)((float)(int)(short)((ushort)pbVar12[2] * 0x100 +
                                                              (ushort)pbVar12[3]) *
                                          *(float *)(*(longlong *)(param_2 + 0x90) + 0x50)));
                  auVar27 = ZEXT416((uint)((float)(int)(short)((ushort)pbVar12[4] * 0x100 +
                                                              (ushort)pbVar12[5]) *
                                          *(float *)(*(longlong *)(param_2 + 0x90) + 0x54)));
                }
                else if (iVar16 == 2) {
                  puVar33 = local_res8;
                  FUN_1403c6050(pbVar12,param_2,uVar3,local_res10,puVar33);
                  uVar34 = (undefined4)((ulonglong)puVar33 >> 0x20);
                  auVar27 = ZEXT416(local_res8[0]);
                  auVar26 = ZEXT416(local_res10[0]);
                }
                else if (iVar16 == 3) {
                  puVar33 = local_res8;
                  FUN_1403c6320(pbVar12,param_2,uVar3,local_res10,puVar33);
                  uVar34 = (undefined4)((ulonglong)puVar33 >> 0x20);
                  auVar27 = ZEXT416(local_res8[0]);
                  auVar26 = ZEXT416(local_res10[0]);
                }
                fVar20 = DAT_1404926c0;
                iVar16 = *(int *)(param_2 + 0x118);
                lVar5 = *(longlong *)(lVar4 + 0x80);
                auVar25._4_12_ = auVar32._4_12_;
                if (iVar16 == 4) {
                  auVar27._0_4_ = auVar32._0_4_ + DAT_1404926c0;
                  auVar27._4_12_ = auVar25._4_12_;
                  fVar19 = (float)FUN_14041a5c0(auVar27._0_8_);
                  auVar28._0_4_ = auVar26._0_4_ + fVar20;
                  auVar28._4_12_ = auVar26._4_12_;
                  *(int *)(lVar5 + uVar10 * 0x14) =
                       (int)(fVar19 + (float)*(int *)(lVar5 + 8 + uVar10 * 0x14));
                  iVar16 = *(int *)(lVar5 + 8 + uVar11 * 0x14);
                  fVar20 = (float)FUN_14041a5c0(auVar28._0_8_);
                  iVar9 = (int)(fVar20 + (float)iVar16);
                  piVar1 = (int *)(lVar5 + uVar11 * 0x14);
                  *piVar1 = *piVar1 - iVar9;
                  *(int *)(lVar5 + 8 + uVar11 * 0x14) = iVar16 - iVar9;
                }
                else if (iVar16 == 5) {
                  iVar16 = *(int *)(lVar5 + 8 + uVar10 * 0x14);
                  auVar25._0_4_ = auVar32._0_4_ + DAT_1404926c0;
                  fVar19 = (float)FUN_14041a5c0(auVar25._0_8_);
                  auVar26._0_4_ = auVar26._0_4_ + fVar20;
                  iVar9 = (int)(fVar19 + (float)iVar16);
                  piVar1 = (int *)(lVar5 + uVar10 * 0x14);
                  *piVar1 = *piVar1 - iVar9;
                  *(int *)(lVar5 + 8 + uVar10 * 0x14) = iVar16 - iVar9;
                  fVar20 = (float)FUN_14041a5c0(auVar26._0_8_);
                  *(int *)(lVar5 + uVar11 * 0x14) =
                       (int)(fVar20 + (float)*(int *)(lVar5 + 8 + uVar11 * 0x14));
                }
                else {
                  auVar21._4_12_ = auVar30._4_12_;
                  auVar22._4_12_ = auVar27._4_12_;
                  if (iVar16 == 6) {
                    auVar23._0_4_ = auVar30._0_4_ + DAT_1404926c0;
                    auVar23._4_12_ = auVar21._4_12_;
                    fVar19 = (float)FUN_14041a5c0(auVar23._0_8_);
                    auVar24._0_4_ = auVar27._0_4_ + fVar20;
                    auVar24._4_12_ = auVar22._4_12_;
                    *(int *)(lVar5 + 4 + uVar10 * 0x14) =
                         (int)(fVar19 + (float)*(int *)(lVar5 + 0xc + uVar10 * 0x14));
                    iVar16 = *(int *)(lVar5 + 0xc + uVar11 * 0x14);
                    fVar20 = (float)FUN_14041a5c0(auVar24._0_8_);
                    iVar9 = (int)(fVar20 + (float)iVar16);
                    piVar1 = (int *)(lVar5 + 4 + uVar11 * 0x14);
                    *piVar1 = *piVar1 - iVar9;
                    *(int *)(lVar5 + 0xc + uVar11 * 0x14) = iVar16 - iVar9;
                  }
                  else if (iVar16 == 7) {
                    iVar16 = *(int *)(lVar5 + 0xc + uVar10 * 0x14);
                    auVar21._0_4_ = auVar30._0_4_ + DAT_1404926c0;
                    fVar19 = (float)FUN_14041a5c0(auVar21._0_8_);
                    auVar22._0_4_ = auVar27._0_4_ + fVar20;
                    iVar9 = (int)(fVar19 + (float)iVar16);
                    piVar1 = (int *)(lVar5 + 4 + uVar10 * 0x14);
                    *piVar1 = *piVar1 - iVar9;
                    *(int *)(lVar5 + 0xc + uVar10 * 0x14) = iVar16 - iVar9;
                    fVar20 = (float)FUN_14041a5c0(auVar22._0_8_);
                    *(int *)(lVar5 + 4 + uVar11 * 0x14) = (int)fVar20;
                  }
                }
                fVar20 = (float)FUN_14041a5c0();
                iVar16 = (int)fVar20;
                fVar20 = (float)FUN_14041a5c0();
                iVar9 = (int)fVar20;
                if ((*(byte *)(param_2 + 0x124) & 1) == 0) {
                  iVar16 = -iVar16;
                  iVar9 = -iVar9;
                  uVar15 = uVar17;
                }
                else {
                  uVar11 = (ulonglong)uVar17;
                }
                FUN_1403f8da0(lVar5,*(undefined4 *)(lVar4 + 0x60),uVar11,
                              *(undefined4 *)(param_2 + 0x118),CONCAT44(uVar34,uVar15));
                sVar18 = (short)uVar15 - (short)uVar11;
                *(short *)(lVar5 + 0x10 + uVar11 * 0x14) = sVar18;
                if ((int)sVar18 == uVar15 - (int)uVar11) {
                  *(undefined1 *)(lVar5 + 0x12 + uVar11 * 0x14) = 2;
                  *(uint *)(lVar4 + 0xd8) = *(uint *)(lVar4 + 0xd8) | 8;
                  if ((*(uint *)(param_2 + 0x118) & 0xfffffffe) == 4) {
                    *(int *)(lVar5 + 0xc + uVar11 * 0x14) = iVar9;
                  }
                  else {
                    *(int *)(lVar5 + 8 + uVar11 * 0x14) = iVar16;
                  }
                  uVar10 = (ulonglong)uVar15;
                  uVar15 = (uint)*(short *)(lVar5 + 0x10 + uVar10 * 0x14);
                  if (uVar15 == -(int)*(short *)(lVar5 + 0x10 + uVar11 * 0x14)) {
                    *(undefined2 *)(lVar5 + 0x10 + uVar10 * 0x14) = 0;
                    uVar15 = *(uint *)(param_2 + 0x118) & 0xfffffffe;
                    if (uVar15 == 4) {
                      *(undefined4 *)(lVar5 + 0xc + uVar10 * 0x14) = 0;
                      *(int *)(lVar4 + 0x5c) = *(int *)(lVar4 + 0x5c) + 1;
                      return 1;
                    }
                    *(undefined4 *)(lVar5 + 8 + uVar10 * 0x14) = 0;
                  }
                  *(int *)(lVar4 + 0x5c) = *(int *)(lVar4 + 0x5c) + 1;
                  return CONCAT71((uint7)(uint3)(uVar15 >> 8),1);
                }
                *(undefined2 *)(lVar5 + 0x10 + uVar11 * 0x14) = 0;
                *(int *)(lVar4 + 0x5c) = *(int *)(lVar4 + 0x5c) + 1;
                return 1;
              }
              if ((*(byte *)(lVar4 + 0x18) & 0x40) != 0) {
                uVar15 = *(uint *)(param_2 + 8);
                uVar17 = *(int *)(lVar4 + 0x5c) + 1;
                if ((uVar17 == 0xffffffff) ||
                   (uVar10 = (ulonglong)(uVar17 - uVar15), uVar17 - uVar15 < 0x100)) {
                  uVar8 = *(uint *)(lVar4 + 0x60);
                  if (uVar17 <= *(uint *)(lVar4 + 0x60)) {
                    uVar8 = uVar17;
                  }
                  if (*(char *)(lVar4 + 0x59) == '\0') {
                    for (; uVar15 < uVar8; uVar15 = uVar15 + 1) {
                      uVar10 = *(ulonglong *)(lVar4 + 0x70);
                      puVar33 = (uint *)(uVar10 + 4 + (ulonglong)uVar15 * 0x14);
                      *puVar33 = *puVar33 | 2;
                    }
                  }
                  else {
                    if (uVar15 < *(uint *)(lVar4 + 100)) {
                      do {
                        uVar11 = (ulonglong)uVar15;
                        uVar15 = uVar15 + 1;
                        uVar10 = *(ulonglong *)(lVar4 + 0x78);
                        puVar33 = (uint *)(uVar10 + 4 + uVar11 * 0x14);
                        *puVar33 = *puVar33 | 2;
                      } while (uVar15 < *(uint *)(lVar4 + 100));
                    }
                    for (uVar15 = *(uint *)(lVar4 + 0x5c); uVar15 < uVar8; uVar15 = uVar15 + 1) {
                      uVar10 = *(ulonglong *)(lVar4 + 0x70);
                      puVar33 = (uint *)(uVar10 + 4 + (ulonglong)uVar15 * 0x14);
                      *puVar33 = *puVar33 | 2;
                    }
                  }
                }
              }
              goto LAB_1403ac645;
            }
LAB_1403abec1:
            if (!bVar7) {
              uVar15 = *(uint *)(param_2 + 8);
              uVar10 = 0;
              if (uVar15 < 2) {
                uVar15 = 1;
              }
              uVar11 = (ulonglong)(uVar15 - 1);
              goto LAB_1403abed6;
            }
          }
LAB_1403abec9:
          iVar16 = *(int *)(param_2 + 8);
        } while (iVar16 != 0);
      }
      uVar11 = 0;
LAB_1403abed6:
      if ((*(byte *)(lVar4 + 0x18) & 0x40) != 0) {
        uVar15 = *(int *)(lVar4 + 0x5c) + 1;
        uVar17 = (uint)uVar11;
        if ((uVar15 == 0xffffffff) ||
           (uVar10 = (ulonglong)(uVar15 - uVar17), uVar15 - uVar17 < 0x100)) {
          uVar8 = *(uint *)(lVar4 + 0x60);
          if (uVar15 <= *(uint *)(lVar4 + 0x60)) {
            uVar8 = uVar15;
          }
          if (*(char *)(lVar4 + 0x59) == '\0') {
            while (uVar17 < uVar8) {
              uVar10 = *(ulonglong *)(lVar4 + 0x70);
              uVar17 = (int)uVar11 + 1;
              puVar33 = (uint *)(uVar10 + 4 + uVar11 * 0x14);
              *puVar33 = *puVar33 | 2;
              uVar11 = (ulonglong)uVar17;
            }
          }
          else {
            if (uVar17 < *(uint *)(lVar4 + 100)) {
              do {
                uVar10 = *(ulonglong *)(lVar4 + 0x78);
                uVar15 = (int)uVar11 + 1;
                puVar33 = (uint *)(uVar10 + 4 + uVar11 * 0x14);
                *puVar33 = *puVar33 | 2;
                uVar11 = (ulonglong)uVar15;
              } while (uVar15 < *(uint *)(lVar4 + 100));
            }
            for (uVar15 = *(uint *)(lVar4 + 0x5c); uVar15 < uVar8; uVar15 = uVar15 + 1) {
              uVar10 = *(ulonglong *)(lVar4 + 0x70);
              puVar33 = (uint *)(uVar10 + 4 + (ulonglong)uVar15 * 0x14);
              *puVar33 = *puVar33 | 2;
            }
          }
        }
      }
    }
  }
LAB_1403ac645:
  return uVar10 & 0xffffffffffffff00;
}

