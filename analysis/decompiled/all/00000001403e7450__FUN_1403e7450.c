// Function: FUN_1403e7450
// Addr: 1403e7450
// Size: 1384 bytes


void FUN_1403e7450(longlong *param_1,longlong param_2,longlong param_3,uint param_4,char param_5)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  ulonglong uVar10;
  byte *pbVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  short sVar18;
  byte *pbVar19;
  uint uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  undefined8 local_210;
  longlong local_208;
  longlong local_200;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [8];
  uint local_1c0;
  longlong local_1b8;
  uint local_1b0;
  uint local_1ac;
  char local_1a8;
  char local_1a7;
  char local_1a6;
  char local_1a5;
  char local_1a4;
  code *local_1a0;
  undefined8 local_198;
  byte *local_190;
  int local_188;
  longlong lStack_128;
  undefined1 auStack_120 [48];
  longlong lStack_f0;
  uint local_ac;
  undefined4 local_a4;
  undefined4 local_90;
  undefined4 local_8c;
  ulonglong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_238;
  local_208 = param_3;
  local_1f0 = param_4;
  local_1e8 = param_1;
  local_1d8 = param_2;
  cVar9 = FUN_1403ec600(param_3,param_2,"start kern");
  if (cVar9 != '\0') {
    uVar21 = 0;
    if ((*(byte *)(param_3 + 0x18) & 0x40) != 0) {
      uVar20 = *(uint *)(param_3 + 0x60);
      if (*(uint *)(param_3 + 0x60) == 0xffffffff) {
        uVar20 = 0xffffffff;
      }
      uVar16 = uVar21;
      if (uVar20 != 0) {
        do {
          puVar2 = (uint *)(*(longlong *)(param_3 + 0x70) + 4 + uVar16 * 0x14);
          *puVar2 = *puVar2 | 2;
          uVar15 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar15;
        } while (uVar15 < uVar20);
      }
    }
    local_210 = 0;
    local_218 = &DAT_14045dde0;
    FUN_140394e80(local_1c8,1,param_2,param_3);
    local_90 = 0xffffffff;
    local_8c = 0;
    local_ac = param_4;
    FUN_1403e3c50(local_1c8);
    local_a4 = 8;
    FUN_1403e3c50(local_1c8);
    local_1f8 = *(uint *)(param_3 + 0x38) & 0xfffffffe;
    local_1f4 = *(uint *)(param_3 + 0x60);
    local_1d0 = *(longlong *)(param_3 + 0x70);
    local_200 = *(longlong *)(param_3 + 0x80);
    if (local_1f4 != 0) {
      do {
        uVar20 = (uint)uVar21;
        local_1e0 = uVar21 * 0x14;
        if ((*(uint *)(local_1d0 + 4 + local_1e0) & param_4) != 0) {
          lVar7 = *(longlong *)(*(longlong *)(local_1b8 + 0xa0) + 0x70);
          iVar17 = local_188 + -1;
          local_1c0 = uVar20;
          uVar16 = uVar21;
          uVar15 = uVar20;
          while (param_3 = local_208, (int)uVar15 < iVar17) {
            local_1c0 = (int)uVar16 + 1;
            uVar16 = (ulonglong)local_1c0;
            uVar6 = *(ushort *)(uVar16 * 0x14 + 0xc + lVar7);
            if ((local_1b0 & uVar6 & 0xe) == 0) {
              puVar2 = (uint *)(uVar16 * 0x14 + lVar7);
              if ((uVar6 & 8) != 0) {
                if ((local_1b0 & 0x10) == 0) {
                  if ((local_1b0 & 0xff00) == 0) {
                    bVar22 = true;
                  }
                  else {
                    bVar22 = (local_1b0 & 0xff00) == (uVar6 & 0xff00);
                  }
                }
                else {
                  uVar10 = 0;
                  do {
                    if ((*(ulonglong *)
                          ((*(undefined8 **)(local_1b8 + 0xf8))[2] +
                           (ulonglong)(local_1b0 >> 0x10) * 0x18 + uVar10 * 8) >>
                         (*puVar2 >> ((byte)(&DAT_14045c498)[uVar10] & 0x1f) & 0x3f) & 1) == 0)
                    goto LAB_1403e76b0;
                    uVar15 = (int)uVar10 + 1;
                    uVar10 = (ulonglong)uVar15;
                  } while (uVar15 < 3);
                  puVar14 = (undefined8 *)**(undefined8 **)(local_1b8 + 0xf8);
                  puVar13 = &DAT_14045dde0;
                  if (puVar14 != (undefined8 *)0x0) {
                    puVar13 = puVar14;
                  }
                  if (*(uint *)(puVar13 + 3) < 4) {
                    puVar14 = &DAT_14045dde0;
                  }
                  else {
                    puVar14 = (undefined8 *)puVar13[2];
                  }
                  cVar9 = FUN_1403ebff0(puVar14,local_1b0 >> 0x10,*puVar2);
                  uVar16 = (ulonglong)local_1c0;
                  if (cVar9 == '\0') {
LAB_1403e76b0:
                    bVar22 = false;
                  }
                  else {
                    bVar22 = true;
                  }
                }
                if (!bVar22) goto LAB_1403e7785;
              }
              uVar15 = (uint)uVar16;
              uVar6 = (ushort)puVar2[4];
              if ((((((uVar6 & 0x20) == 0) || ((puVar2[3] & 0x10) != 0)) ||
                   ((local_1a8 == '\0' && ((((byte)uVar6 & 0x1f) == 1 && ((uVar6 & 0x200) != 0))))))
                  || ((local_1a7 == '\0' && ((((byte)uVar6 & 0x1f) == 1 && ((uVar6 & 0x100) != 0))))
                     )) || ((local_1a6 == '\0' && ((uVar6 & 0x40) != 0)))) {
                bVar22 = false;
              }
              else {
                bVar22 = true;
              }
              uVar10 = 0;
              if (local_190 != (byte *)0x0) {
                uVar10 = (ulonglong)((uint)local_190[1] + (uint)*local_190 * 0x100);
              }
              if (((local_1ac & puVar2[1]) != 0) &&
                 (((local_1a5 == '\0' || (local_1a4 == '\0')) ||
                  (local_1a4 == *(char *)((longlong)puVar2 + 0xf))))) {
                if (local_1a0 == (code *)0x0) {
                  if (bVar22) goto LAB_1403e7785;
                }
                else {
                  cVar9 = (*local_1a0)(puVar2,uVar10,local_198);
                  uVar16 = (ulonglong)local_1c0;
                  uVar15 = local_1c0;
                  if (cVar9 == '\0') goto LAB_1403e777d;
                }
                param_3 = local_208;
                if (local_190 != (byte *)0x0) {
                  local_190 = local_190 + 2;
                }
                lVar7 = (ulonglong)uVar15 * 0x14;
                lVar8 = *local_1e8;
                bVar4 = *(byte *)(lVar8 + 8);
                uVar20 = (uint)*(byte *)(lVar8 + 7) + (uint)*(byte *)(lVar8 + 6) * 0x100;
                uVar16 = (ulonglong)((uint)bVar4 + (uint)bVar4);
                if (*(uint *)(local_1e0 + local_1d0) < uVar20) {
                  pbVar11 = (byte *)((ulonglong)*(uint *)(local_1e0 + local_1d0) + 0xc + uVar16 +
                                    lVar8);
                }
                else {
                  pbVar11 = (byte *)&DAT_14045dde0;
                }
                if (*(uint *)(lVar7 + local_1d0) < uVar20) {
                  pbVar19 = (byte *)(uVar16 + 0xc + (ulonglong)*(uint *)(lVar7 + local_1d0) +
                                     (ulonglong)uVar20 + lVar8);
                }
                else {
                  pbVar19 = (byte *)&DAT_14045dde0;
                }
                if ((uint)*pbVar11 < (uint)*(byte *)(lVar8 + 9)) {
                  bVar5 = *(byte *)(lVar8 + 10);
                  if ((uint)*pbVar19 < (uint)bVar5) {
                    uVar1 = (uint)*pbVar11 * (uint)bVar5 + (uint)*pbVar19;
                    if (uVar1 < (uint)bVar5 * (uint)*(byte *)(lVar8 + 9)) {
                      pbVar11 = (byte *)(uVar1 + uVar16 + ((ulonglong)uVar20 + 6) * 2 + lVar8);
                    }
                    else {
                      pbVar11 = (byte *)&DAT_14045dde0;
                    }
                    if (*pbVar11 < bVar4) {
                      pbVar11 = (byte *)(lVar8 + 0xc + (ulonglong)*pbVar11 * 2);
                    }
                    else {
                      pbVar11 = (byte *)&DAT_14045dde0;
                    }
                    sVar18 = (ushort)pbVar11[1] + (ushort)*pbVar11 * 0x100;
                    iVar17 = (int)sVar18;
                    if (sVar18 != 0) {
                      if (local_1f8 == 4) {
                        if (param_5 != '\0') {
                          iVar17 = (int)((ulonglong)
                                         ((longlong)sVar18 * *(longlong *)(local_1d8 + 0x58) +
                                         0x8000) >> 0x10);
                        }
                        if ((char)local_1e8[1] == '\0') {
                          iVar12 = iVar17 - (iVar17 >> 1);
                          *(int *)(local_1e0 + local_200) =
                               *(int *)(local_1e0 + local_200) + (iVar17 >> 1);
                          *(int *)(local_200 + lVar7) = *(int *)(local_200 + lVar7) + iVar12;
                          piVar3 = (int *)(local_200 + 8 + lVar7);
                          *piVar3 = *piVar3 + iVar12;
                        }
                        else {
                          *(int *)(local_200 + 0xc + lVar7) = iVar17;
                          *(uint *)(local_208 + 0xd8) = *(uint *)(local_208 + 0xd8) | 8;
                        }
                      }
                      else {
                        if (param_5 != '\0') {
                          iVar17 = (int)((ulonglong)
                                         ((longlong)sVar18 * *(longlong *)(local_1d8 + 0x60) +
                                         0x8000) >> 0x10);
                        }
                        if ((char)local_1e8[1] == '\0') {
                          iVar12 = iVar17 - (iVar17 >> 1);
                          piVar3 = (int *)(local_1e0 + 4 + local_200);
                          *piVar3 = *piVar3 + (iVar17 >> 1);
                          piVar3 = (int *)(local_200 + 4 + lVar7);
                          *piVar3 = *piVar3 + iVar12;
                          piVar3 = (int *)(local_200 + 0xc + lVar7);
                          *piVar3 = *piVar3 + iVar12;
                        }
                        else {
                          *(int *)(local_200 + 8 + lVar7) = iVar17;
                          *(uint *)(local_208 + 0xd8) = *(uint *)(local_208 + 0xd8) | 8;
                        }
                      }
                      func_0x00014040efc0(local_208,uVar21,uVar15 + 1);
                      uVar21 = (ulonglong)local_1c0;
                      goto LAB_1403e79a9;
                    }
                  }
                }
                uVar21 = (ulonglong)uVar15;
                goto LAB_1403e79a9;
              }
LAB_1403e777d:
              param_3 = local_208;
              if (!bVar22) break;
            }
LAB_1403e7785:
            uVar15 = (uint)uVar16;
          }
        }
        uVar21 = (ulonglong)(uVar20 + 1);
LAB_1403e79a9:
        param_2 = local_1d8;
        param_4 = local_1f0;
      } while ((uint)uVar21 < local_1f4);
    }
    FUN_1403ec600(param_3,param_2,"end kern");
    if (*(longlong *)(lStack_128 + 0xe8) != 0) {
      *(undefined8 *)(lStack_128 + 0x100) = uStack_58;
      *(undefined8 *)(lStack_128 + 0x108) = uStack_50;
    }
    if (1 < (uint)uStack_88 + 1) {
      uStack_88 = (ulonglong)(uint)uStack_88;
      func_0x0001402bf8e0(uStack_80);
    }
    uStack_88 = 0;
    uStack_80 = 0;
    if (lStack_f0 != 0) {
      FUN_1403bf0c0(auStack_120);
    }
  }
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_238);
  return;
}

