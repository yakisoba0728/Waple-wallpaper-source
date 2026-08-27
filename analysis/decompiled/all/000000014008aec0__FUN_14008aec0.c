// Function: FUN_14008aec0
// Addr: 14008aec0
// Size: 2620 bytes


void FUN_14008aec0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 **ppuVar10;
  size_t sVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  char *******pppppppcVar19;
  char *pcVar20;
  char *******pppppppcVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  undefined *puVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 *puVar29;
  bool bVar30;
  byte bVar31;
  undefined4 uVar32;
  ulonglong local_res20;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined4 local_a8;
  undefined8 *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  ulonglong local_80;
  char ******local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  char *local_48;
  ulonglong local_40;
  byte *pbVar15;
  
  switch(*(uint *)(param_2 + 1) & 0xff) {
  case 0:
    FUN_14008b920(param_1,param_1 + 0x98);
    return;
  case 1:
    uVar13 = FUN_1400860c0(param_2);
    ppuVar10 = (undefined8 **)FUN_140089a40(&local_58,uVar13);
    break;
  case 2:
    uVar13 = FUN_140086000(param_2);
    ppuVar10 = (undefined8 **)FUN_140089ba0(&local_58,uVar13);
    break;
  case 3:
    bVar31 = *(byte *)(param_1 + 0xd8);
    uVar6 = *(undefined4 *)(param_1 + 0xe0);
    uVar1 = *(undefined4 *)(param_1 + 0xdc);
    uVar32 = FUN_140086150(param_2);
    local_a8 = uVar6;
    ppuVar10 = (undefined8 **)FUN_140089c60(&local_58,uVar32,bVar31 >> 2 & 1,uVar1);
    break;
  case 4:
    pcVar20 = (char *)*param_2;
    if (pcVar20 == (char *)0x0) {
      uStack_50 = 0;
      local_58 = (undefined8 *)0x0;
      local_40 = 0xf;
      local_48 = pcVar20;
      FUN_14008b920(param_1,&local_58);
      FUN_140017240(&local_58);
      return;
    }
    if ((*(uint *)(param_2 + 1) >> 8 & 1) == 0) {
      sVar11 = strlen(pcVar20);
      uVar6 = (undefined4)sVar11;
    }
    else {
      uVar6 = *(undefined4 *)pcVar20;
      pcVar20 = pcVar20 + 4;
    }
    ppuVar10 = (undefined8 **)
               FUN_14008a220(&local_58,pcVar20,uVar6,*(byte *)(param_1 + 0xd8) >> 3 & 1);
    break;
  case 5:
    cVar5 = FUN_140086300(param_2);
    pcVar20 = "false";
    if (cVar5 != '\0') {
      pcVar20 = "true";
    }
    local_48 = (char *)0x0;
    local_40 = 0;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    sVar11 = strlen(pcVar20);
    FUN_140017480(&local_58,pcVar20,sVar11);
    ppuVar10 = &local_58;
    break;
  case 6:
    uVar9 = FUN_1400863a0(param_2);
    if (uVar9 == 0) {
      local_88 = 2;
      puStack_90 = (undefined8 *)0x0;
      local_98 = (undefined8 *)(ulonglong)DAT_1404789cc;
      local_80 = 0xf;
      FUN_14008b920(param_1,&local_98);
    }
    else {
      local_res20 = 0;
      if (*(int *)(param_1 + 0x70) != 2) {
        uVar7 = FUN_1400863a0(param_2);
        lVar12 = *(longlong *)(param_1 + 0x10);
        lVar2 = *(longlong *)(param_1 + 0x18);
        bVar30 = *(uint *)(param_1 + 0x48) <= uVar7 * 3;
        if (lVar12 != lVar2) {
          do {
            FUN_140017240(lVar12);
            lVar12 = lVar12 + 0x20;
          } while (lVar12 != lVar2);
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
        }
        uVar27 = 0;
        if (uVar7 != 0) {
          do {
            if (bVar30) goto LAB_14008b1ec;
            lVar12 = FUN_140086b80(param_2,uVar27);
            if ((*(byte *)(lVar12 + 8) - 6 < 2) && (iVar8 = FUN_1400863a0(lVar12), iVar8 != 0)) {
              bVar30 = true;
            }
            else {
              bVar30 = false;
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 < uVar7);
        }
        if (!bVar30) {
          FUN_140088f20(param_1 + 0x10,uVar7);
          *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) | 1;
          uVar27 = uVar7 * 2 + 2;
          uVar26 = 0;
          if (uVar7 == 0) {
            *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfe;
            uVar27 = 2;
          }
          else {
            do {
              lVar12 = FUN_140086b80(param_2,uVar26);
              lVar12 = *(longlong *)(lVar12 + 0x10);
              if ((lVar12 != 0) &&
                 (((*(longlong *)(lVar12 + 0x10) != 0 || (*(longlong *)(lVar12 + 0x30) != 0)) ||
                  (*(longlong *)(lVar12 + 0x50) != 0)))) {
                bVar30 = true;
              }
              uVar13 = FUN_140086b80(param_2,uVar26);
              FUN_14008aec0(param_1,uVar13);
              uVar28 = (int)uVar26 + 1;
              uVar27 = uVar27 + *(int *)(uVar26 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x10));
              uVar26 = (ulonglong)uVar28;
            } while (uVar28 < uVar7);
            *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfe;
            if (bVar30) goto LAB_14008b1ec;
          }
          if (uVar27 < *(uint *)(param_1 + 0x48)) {
            if (*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 5 !=
                (ulonglong)uVar9) {
              FID_conflict__assert
                        (L"childValues_.size() == size",
                         L"D:\\dev\\we\\windows\\src\\json\\src\\json_writer.cpp",0x3d4);
            }
            FUN_14000c990(*(undefined8 *)(param_1 + 8),&DAT_1404789c8);
            if (*(longlong *)(param_1 + 0x60) != 0) {
              FUN_14000c990(*(undefined8 *)(param_1 + 8),&DAT_1404738a8);
            }
            if (uVar9 != 0) {
              uVar7 = 0;
              do {
                if (uVar7 != 0) {
                  puVar25 = &DAT_140478a0c;
                  if (*(longlong *)(param_1 + 0x60) != 0) {
                    puVar25 = &DAT_140474e90;
                  }
                  FUN_14000c990(*(undefined8 *)(param_1 + 8),puVar25);
                }
                FUN_14000cbc0(*(undefined8 *)(param_1 + 8),
                              (ulonglong)uVar7 * 0x20 + *(longlong *)(param_1 + 0x10));
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar9);
            }
            if (*(longlong *)(param_1 + 0x60) != 0) {
              FUN_14000c990(*(undefined8 *)(param_1 + 8),&DAT_1404738a8);
            }
            FUN_14000c990(*(undefined8 *)(param_1 + 8),&DAT_140478a08);
            return;
          }
        }
      }
LAB_14008b1ec:
      puStack_90 = (undefined8 *)0x0;
      local_98 = (undefined8 *)((ulonglong)DAT_1404789c8 & 0xffffffffffff00ff);
      local_88 = 1;
      local_80 = 0xf;
      if (((*(byte *)(param_1 + 0xd8) & 2) == 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
        uVar13 = FUN_14008cd90(*(undefined8 *)(param_1 + 8),10);
        FUN_14000cbc0(uVar13,param_1 + 0x28);
      }
      FUN_14000cbc0(*(undefined8 *)(param_1 + 8),&local_98);
      *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfd;
      if (0xf < local_80) {
        uVar26 = local_80 + 1;
        puVar16 = local_98;
        if (0xfff < uVar26) {
          puVar16 = (undefined8 *)local_98[-1];
          uVar23 = (longlong)local_98 + (-8 - (longlong)puVar16);
          bVar31 = uVar23 < 0x1f;
          if (0x1f < uVar23) goto LAB_14008b8f3;
          uVar26 = local_80 + 0x28;
        }
        thunk_FUN_14028af80(puVar16,uVar26);
      }
      plVar24 = (longlong *)(param_1 + 0x50);
      if (0xf < *(ulonglong *)(param_1 + 0x68)) {
        plVar24 = (longlong *)*plVar24;
      }
      FUN_1400532a0(param_1 + 0x28,plVar24,*(undefined8 *)(param_1 + 0x60));
      lVar12 = *(longlong *)(param_1 + 0x10);
      lVar2 = *(longlong *)(param_1 + 0x18);
      while( true ) {
        uVar13 = FUN_140086b80(param_2,local_res20);
        FUN_14008bcf0(param_1,uVar13);
        if (lVar12 == lVar2) {
          if (((*(byte *)(param_1 + 0xd8) & 2) == 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
            uVar14 = FUN_14008cd90(*(undefined8 *)(param_1 + 8),10);
            FUN_14000cbc0(uVar14,param_1 + 0x28);
          }
          *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) | 2;
          FUN_14008aec0(param_1,uVar13);
        }
        else {
          lVar3 = *(longlong *)(param_1 + 0x10);
          if (((*(byte *)(param_1 + 0xd8) & 2) == 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
            uVar14 = FUN_14008cd90(*(undefined8 *)(param_1 + 8),10);
            FUN_14000cbc0(uVar14,param_1 + 0x28);
          }
          FUN_14000cbc0(*(undefined8 *)(param_1 + 8),local_res20 * 0x20 + lVar3);
        }
        *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfd;
        uVar7 = (int)local_res20 + 1;
        local_res20 = (ulonglong)uVar7;
        if (uVar7 == uVar9) break;
        FUN_14000c990(*(undefined8 *)(param_1 + 8),&DAT_140478a0c);
        FUN_14008be40(param_1,uVar13);
      }
      FUN_14008be40(param_1,uVar13);
      FUN_14008bc30(param_1);
      puStack_90 = (undefined8 *)0x0;
      local_98 = (undefined8 *)((ulonglong)DAT_140478a08 & 0xffffffffffff00ff);
      local_88 = 1;
      local_80 = 0xf;
      if (((*(byte *)(param_1 + 0xd8) & 2) == 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
        uVar13 = FUN_14008cd90(*(undefined8 *)(param_1 + 8),10);
        FUN_14000cbc0(uVar13,param_1 + 0x28);
      }
      FUN_14000cbc0(*(undefined8 *)(param_1 + 8),&local_98);
      *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfd;
    }
    puVar16 = local_98;
    uVar23 = local_80;
    if (local_80 < 0x10) {
      return;
    }
    goto LAB_14008b4e8;
  case 7:
    FUN_140088360(param_2,&local_98);
    puVar18 = puStack_90;
    puVar16 = local_98;
    local_40 = 0xf;
    uStack_50 = 0;
    if (local_98 == puStack_90) {
      local_48 = (char *)0x2;
      local_58 = (undefined8 *)(ulonglong)DAT_1404776f4;
      FUN_14008b920();
    }
    else {
      local_48 = (char *)0x1;
      local_58 = (undefined8 *)((ulonglong)DAT_1404789b8 & 0xffffffffffff00ff);
      FUN_14008bbd0(param_1,&local_58);
      if (0xf < local_40) {
        uVar26 = local_40 + 1;
        puVar22 = local_58;
        if (0xfff < uVar26) {
          puVar22 = (undefined8 *)local_58[-1];
          uVar23 = (longlong)local_58 + (-8 - (longlong)puVar22);
          bVar31 = uVar23 < 0x1f;
          if (0x1f < uVar23) goto LAB_14008b8f3;
          uVar26 = local_40 + 0x28;
        }
        thunk_FUN_14028af80(puVar22,uVar26);
      }
      plVar24 = (longlong *)(param_1 + 0x50);
      if (0xf < *(ulonglong *)(param_1 + 0x68)) {
        plVar24 = (longlong *)*plVar24;
      }
      FUN_1400532a0(param_1 + 0x28,plVar24,*(undefined8 *)(param_1 + 0x60));
      while( true ) {
        puVar22 = puVar16;
        if (0xf < (ulonglong)puVar16[3]) {
          puVar22 = (undefined8 *)*puVar16;
        }
        lVar12 = FUN_140087490(param_2,puVar22,puVar16[2] + (longlong)puVar22);
        if (lVar12 == 0) {
          lVar12 = FUN_140084ac0();
        }
        if (((*(int *)(param_1 + 0x70) != 0) && (*(longlong *)(lVar12 + 0x10) != 0)) &&
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x10) != 0)) {
          if ((*(byte *)(param_1 + 0xd8) & 2) == 0) {
            FUN_14008bb90(param_1);
          }
          if (*(longlong *)(lVar12 + 0x10) == 0) {
            local_68 = 0;
            uStack_70 = 0;
            local_78 = (char ******)0x0;
            local_60 = 0xf;
            pppppppcVar21 = &local_78;
          }
          else {
            FUN_140016fc0(&local_78);
            pppppppcVar21 = &local_78;
            if (0xf < local_60) {
              pppppppcVar21 = (char *******)local_78;
            }
          }
          while( true ) {
            pppppppcVar19 = &local_78;
            if (0xf < local_60) {
              pppppppcVar19 = (char *******)local_78;
            }
            if (pppppppcVar21 == (char *******)((longlong)pppppppcVar19 + local_68)) break;
            FUN_14008cd90(*(undefined8 *)(param_1 + 8),*(char *)pppppppcVar21);
            if (*(char *)pppppppcVar21 == '\n') {
              pppppppcVar19 = &local_78;
              if (0xf < local_60) {
                pppppppcVar19 = (char *******)local_78;
              }
              if (((char *)((longlong)pppppppcVar21 + 1) !=
                   (char *)((longlong)pppppppcVar19 + local_68)) &&
                 (*(char *)((longlong)pppppppcVar21 + 1) == '/')) {
                FUN_14000cbc0(*(undefined8 *)(param_1 + 8),param_1 + 0x28);
              }
            }
            pppppppcVar21 = (char *******)((longlong)pppppppcVar21 + 1);
          }
          *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfd;
          if (0xf < local_60) {
            uVar26 = local_60 + 1;
            pppppppcVar21 = (char *******)local_78;
            if (0xfff < uVar26) {
              pppppppcVar21 = (char *******)local_78[-1];
              pcVar20 = (char *)((longlong)local_78 + (-8 - (longlong)pppppppcVar21));
              bVar31 = pcVar20 < (char *)0x1f;
              if ((char *)0x1f < pcVar20) goto LAB_14008b8f3;
              uVar26 = local_60 + 0x28;
            }
            thunk_FUN_14028af80(pppppppcVar21,uVar26);
          }
        }
        puVar22 = puVar16;
        if (0xf < (ulonglong)puVar16[3]) {
          puVar22 = (undefined8 *)*puVar16;
        }
        uVar13 = FUN_14008a220(&local_58,puVar22,puVar16[2],*(byte *)(param_1 + 0xd8) >> 3 & 1);
        if (((*(byte *)(param_1 + 0xd8) & 2) == 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
          uVar14 = FUN_14008cd90(*(undefined8 *)(param_1 + 8),10);
          FUN_14000cbc0(uVar14,param_1 + 0x28);
        }
        FUN_14000cbc0(*(undefined8 *)(param_1 + 8),uVar13);
        *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfd;
        if (0xf < local_40) {
          uVar26 = local_40 + 1;
          puVar22 = local_58;
          if (0xfff < uVar26) {
            puVar22 = (undefined8 *)local_58[-1];
            uVar23 = (longlong)local_58 + (-8 - (longlong)puVar22);
            bVar31 = uVar23 < 0x1f;
            if (0x1f < uVar23) goto LAB_14008b8f3;
            uVar26 = local_40 + 0x28;
          }
          thunk_FUN_14028af80(puVar22,uVar26);
        }
        FUN_14000cbc0(*(undefined8 *)(param_1 + 8),param_1 + 0x78);
        FUN_14008aec0(param_1,lVar12);
        puVar16 = puVar16 + 4;
        if (puVar16 == puVar18) break;
        FUN_14000c990(*(undefined8 *)(param_1 + 8),&DAT_140478a0c);
        FUN_14008be40(param_1,lVar12);
      }
      FUN_14008be40(param_1,lVar12);
      FUN_14008bc30(param_1);
      uStack_50 = 0;
      local_58 = (undefined8 *)((ulonglong)DAT_1404789c0 & 0xffffffffffff00ff);
      local_48 = (char *)0x1;
      local_40 = 0xf;
      if (((*(byte *)(param_1 + 0xd8) & 2) == 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
        uVar13 = FUN_14008cd90(*(undefined8 *)(param_1 + 8),10);
        FUN_14000cbc0(uVar13,param_1 + 0x28);
      }
      FUN_14000cbc0(*(undefined8 *)(param_1 + 8),&local_58);
      *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfd;
    }
    puVar29 = auStack_c8;
    if (local_40 < 0x10) goto code_r0x00014008b8b9;
    uVar26 = local_40 + 1;
    puVar16 = local_58;
    if (uVar26 < 0x1000) {
LAB_14008b8b0:
      thunk_FUN_14028af80(puVar16,uVar26);
      puVar29 = auStack_c8;
      goto code_r0x00014008b8b9;
    }
    puVar16 = (undefined8 *)local_58[-1];
    uVar23 = (longlong)local_58 + (-8 - (longlong)puVar16);
    bVar31 = uVar23 < 0x1f;
    if (uVar23 < 0x20) {
      uVar26 = local_40 + 0x28;
      goto LAB_14008b8b0;
    }
    goto LAB_14008b8f3;
  default:
    goto switchD_14008af12_default;
  }
  FUN_14008b920(param_1,ppuVar10);
  puVar16 = local_58;
  uVar23 = local_40;
  if (0xf < local_40) {
LAB_14008b4e8:
    uVar26 = uVar23 + 1;
    puVar18 = puVar16;
    if (0xfff < uVar26) {
      puVar18 = (undefined8 *)puVar16[-1];
      uVar17 = (longlong)puVar16 + (-8 - (longlong)puVar18);
      bVar31 = uVar17 < 0x1f;
      if (0x1f < uVar17) {
LAB_14008b8f3:
        cVar5 = (char)(uVar26 >> 8);
        pcVar4 = (code *)swi(0x29);
        iVar8 = (*pcVar4)(5);
        uVar9 = iVar8 + 0x290008af + (uint)bVar31;
        pbVar15 = (byte *)(ulonglong)uVar9;
        bVar31 = (byte)uVar9;
        *pbVar15 = *pbVar15 | bVar31;
        *pbVar15 = *pbVar15 | bVar31;
        puVar29 = auStack_b8;
        if (*pbVar15 == 0) {
          *pbVar15 = *pbVar15 | bVar31;
          pbVar15 = (byte *)(ulonglong)CONCAT22((short)(uVar9 >> 0x10),CONCAT11(0xaf,bVar31));
          *pbVar15 = *pbVar15 | bVar31;
          pbVar15[-0x4f8afff8] = pbVar15[-0x4f8afff8] - cVar5;
          *pbVar15 = *pbVar15 | bVar31;
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
code_r0x00014008b8b9:
        *(undefined8 *)(puVar29 + -8) = 0x14008b8be;
        FUN_14000dcc0();
        return;
      }
      uVar26 = uVar23 + 0x28;
    }
    thunk_FUN_14028af80(puVar18,uVar26);
  }
switchD_14008af12_default:
  return;
}

