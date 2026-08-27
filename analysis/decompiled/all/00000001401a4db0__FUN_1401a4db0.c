// Function: FUN_1401a4db0
// Addr: 1401a4db0
// Size: 3295 bytes


void FUN_1401a4db0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  char *pcVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  char *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar11 = FUN_140087490(param_3,&DAT_1404737fc,&DAT_140473800);
  if (lVar11 == 0) {
    lVar11 = FUN_140084ac0();
  }
  uVar9 = *(uint *)(lVar11 + 8) & 0xff;
  if (uVar9 == 4) {
    puVar12 = (undefined8 *)FUN_14028af20(0x60);
    puVar12[3] = 0;
    *puVar12 = &PTR_FUN_14048b700;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0xf;
    *(undefined1 *)(puVar12 + 4) = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0xf;
    *(undefined1 *)(puVar12 + 8) = 0;
    puVar12[1] = param_2[1];
    puVar12[2] = param_1;
    uVar13 = FUN_140085cc0(lVar11,&local_98);
    FUN_14000de40(puVar12 + 4,uVar13);
    if (0xf < uStack_80) {
      uVar21 = uStack_80 + 1;
      pcVar23 = local_98;
      if (0xfff < uVar21) {
        pcVar23 = *(char **)(local_98 + -8);
        if ((char *)0x1f < local_98 + (-8 - (longlong)pcVar23)) goto LAB_1401a5a87;
        uVar21 = uStack_80 + 0x28;
      }
      thunk_FUN_14028af80(pcVar23,uVar21);
    }
    FUN_140175880(*param_2,puVar12);
  }
  else if (uVar9 == 7) {
    lVar14 = FUN_140087490(lVar11,&DAT_1404748b8,&DAT_1404748bc);
    if (lVar14 == 0) {
      lVar14 = FUN_140084ac0();
    }
    lVar15 = FUN_140087490(lVar11,"condition","");
    if (lVar15 == 0) {
      lVar15 = FUN_140084ac0();
    }
    plVar16 = (longlong *)FUN_140087490(lVar11,&DAT_140474874,&DAT_140474878);
    if (plVar16 == (longlong *)0x0) {
      plVar16 = (longlong *)FUN_140084ac0();
    }
    if (*(char *)(lVar14 + 8) == '\x04') {
      puVar12 = (undefined8 *)FUN_14028af20(0x60);
      puVar12[3] = 0;
      *puVar12 = &PTR_FUN_14048b700;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0xf;
      *(undefined1 *)(puVar12 + 4) = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[10] = 0;
      puVar12[0xb] = 0xf;
      *(undefined1 *)(puVar12 + 8) = 0;
      puVar12[1] = param_2[1];
      puVar12[2] = param_1;
      uVar13 = FUN_140085cc0(lVar14,&local_98);
      FUN_14000de40(puVar12 + 4,uVar13);
      if (0xf < uStack_80) {
        uVar21 = uStack_80 + 1;
        pcVar23 = local_98;
        if (0xfff < uVar21) {
          pcVar23 = *(char **)(local_98 + -8);
          if ((char *)0x1f < local_98 + (-8 - (longlong)pcVar23)) goto LAB_1401a5a87;
          uVar21 = uStack_80 + 0x28;
        }
        thunk_FUN_14028af80(pcVar23,uVar21);
      }
      if (*(char *)(lVar15 + 8) == '\x04') {
        uVar13 = FUN_140085cc0(lVar15,&local_98);
        FUN_14000de40(puVar12 + 8,uVar13);
        if (0xf < uStack_80) {
          uVar21 = uStack_80 + 1;
          pcVar23 = local_98;
          if (0xfff < uVar21) {
            pcVar23 = *(char **)(local_98 + -8);
            if ((char *)0x1f < local_98 + (-8 - (longlong)pcVar23)) goto LAB_1401a5a87;
            uVar21 = uStack_80 + 0x28;
          }
          thunk_FUN_14028af80(pcVar23,uVar21);
        }
      }
      if ((char)*(uint *)(plVar16 + 1) == '\x04') {
        lVar11 = *plVar16;
        if ((lVar11 != 0) && ((*(uint *)(plVar16 + 1) >> 8 & 1) != 0)) {
          lVar11 = lVar11 + 4;
        }
        uVar10 = FUN_140153700(lVar11);
        *(undefined4 *)(puVar12 + 3) = uVar10;
      }
      FUN_140175880(*param_2,puVar12);
    }
  }
  lVar11 = FUN_140087490(param_3,"animation","");
  if (lVar11 == 0) {
    lVar11 = FUN_140084ac0();
  }
  if (*(char *)(lVar11 + 8) == '\a') {
    puVar12 = (undefined8 *)FUN_14028af20(0x110);
    *(undefined4 *)((longlong)puVar12 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar12 + 0x1d) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x1f) = 0;
    puVar12[9] = 0;
    puVar12[0x11] = 0;
    puVar12[0x17] = 0;
    puVar12[0x1a] = 0;
    puVar12[0x1b] = 0;
    puVar12[0x1c] = 0;
    puVar12[0x1d] = 0;
    puVar12[0x1e] = 0;
    puVar12[0x1f] = 0;
    puVar12[0x20] = 0;
    puVar12[0x21] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_FUN_14048df78;
    *(undefined1 *)(puVar12 + 3) = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    puVar12[0x10] = 0xf;
    *(undefined1 *)(puVar12 + 0xd) = 0;
    puVar12[0x12] = 0;
    puVar12[0x13] = 0;
    puVar12[0x14] = 0;
    puVar12[0x15] = 0xf;
    *(undefined1 *)(puVar12 + 0x12) = 0;
    puVar12[0x16] = 0;
    puVar12[0x18] = 0;
    puVar12[0x19] = 0;
    lVar14 = FUN_14028af20(0x18);
    *(longlong *)lVar14 = lVar14;
    *(longlong *)(lVar14 + 8) = lVar14;
    puVar12[0x18] = lVar14;
    puVar12[0x1a] = 0;
    puVar12[0x1b] = 0;
    puVar12[0x1c] = 0;
    puVar12[0x1d] = 7;
    puVar12[0x1e] = 8;
    *(undefined4 *)(puVar12 + 0x17) = 0x3f800000;
    FUN_14004f190(puVar12 + 0x1a,0x10,puVar12[0x18]);
    puVar12[0x1f] = 0;
    *(undefined4 *)(puVar12 + 0x20) = 0;
    puVar12[0x21] = 0;
    puVar12[1] = param_2[1];
    puVar12[2] = param_1;
    lVar14 = FUN_140087490(lVar11,"options","");
    if (lVar14 == 0) {
      lVar14 = FUN_140084ac0();
    }
    lVar15 = FUN_140087490(lVar14,"parent","");
    if (lVar15 != 0) {
      lVar15 = FUN_140087490(lVar14,"parent","");
      if (lVar15 == 0) {
        lVar15 = FUN_140084ac0();
      }
      if (*(char *)(lVar15 + 8) == '\a') {
        plVar16 = (longlong *)FUN_140087490(lVar15,&DAT_1404776e4,&DAT_1404776e7);
        if (plVar16 == (longlong *)0x0) {
          plVar16 = (longlong *)FUN_140084ac0();
        }
        if ((char)*(uint *)(plVar16 + 1) == '\x04') {
          lVar15 = *plVar16;
          if ((lVar15 != 0) && ((*(uint *)(plVar16 + 1) >> 8 & 1) != 0)) {
            lVar15 = lVar15 + 4;
          }
          FUN_14000ddd0(puVar12 + 0x12,lVar15);
        }
      }
    }
    lVar15 = FUN_140087490(lVar14,&DAT_1404748b8,&DAT_1404748bc);
    if (lVar15 != 0) {
      lVar14 = FUN_140087490(lVar14,&DAT_1404748b8,&DAT_1404748bc);
      if (lVar14 == 0) {
        lVar14 = FUN_140084ac0();
      }
      if (*(char *)(lVar14 + 8) == '\x04') {
        uVar13 = FUN_140085cc0(lVar14,&local_98);
        FUN_14000de40(puVar12 + 0xd,uVar13);
        if (0xf < uStack_80) {
          uVar21 = uStack_80 + 1;
          pcVar23 = local_98;
          if (0xfff < uVar21) {
            pcVar23 = *(char **)(local_98 + -8);
            if ((char *)0x1f < local_98 + (-8 - (longlong)pcVar23)) goto LAB_1401a5a87;
            uVar21 = uStack_80 + 0x28;
          }
          thunk_FUN_14028af80(pcVar23,uVar21);
        }
      }
    }
    lVar14 = FUN_140087490(lVar11,"relative","");
    if (lVar14 != 0) {
      lVar14 = FUN_140087490(param_3,"value","");
      if (lVar14 == 0) {
        lVar14 = FUN_140084ac0();
      }
      if (*(char *)(lVar14 + 8) == '\x04') {
        puVar17 = (undefined8 *)FUN_140087490(param_3,"value","");
        if (puVar17 == (undefined8 *)0x0) {
          puVar17 = (undefined8 *)FUN_140084ac0();
        }
        pcVar23 = (char *)*puVar17;
        if (pcVar23 == (char *)0x0) {
          fVar24 = 0.0;
          fVar25 = 0.0;
          fVar26 = 0.0;
        }
        else {
          if ((*(uint *)(puVar17 + 1) >> 8 & 1) != 0) {
            pcVar23 = pcVar23 + 4;
          }
          fVar24 = 0.0;
          fVar25 = 0.0;
          fVar26 = 0.0;
          if ((pcVar23 != (char *)0x0) && (*pcVar23 != '\0')) {
            dVar3 = (double)FUN_1402d06ac();
            cVar8 = *pcVar23;
            for (; (cVar7 = '\0', cVar8 != '\0' && (cVar7 = *pcVar23, cVar7 != ' '));
                pcVar23 = pcVar23 + 1) {
              cVar8 = pcVar23[1];
            }
            bVar6 = false;
            if (cVar7 != '\0') {
              do {
                bVar5 = bVar6;
                if (*pcVar23 != ' ') break;
                pcVar23 = pcVar23 + 1;
                bVar5 = true;
                bVar6 = true;
              } while (*pcVar23 != '\0');
              if (bVar5) {
                dVar2 = (double)FUN_1402d06ac();
                cVar8 = *pcVar23;
                for (; (cVar7 = '\0', cVar8 != '\0' && (cVar7 = *pcVar23, cVar7 != ' '));
                    pcVar23 = pcVar23 + 1) {
                  cVar8 = pcVar23[1];
                }
                bVar6 = false;
                if (cVar7 != '\0') {
                  do {
                    if (*pcVar23 != ' ') {
                      if (!bVar6) goto LAB_1401a55de;
                      break;
                    }
                    pcVar23 = pcVar23 + 1;
                    bVar6 = true;
                  } while (*pcVar23 != '\0');
                  fVar25 = (float)dVar2;
                  fVar24 = (float)dVar3;
                  dVar3 = (double)FUN_1402d06ac(pcVar23);
                  fVar26 = (float)dVar3;
                  goto LAB_1401a54f7;
                }
              }
            }
            goto LAB_1401a55de;
          }
        }
LAB_1401a54f7:
        if (*(char *)(lVar11 + 8) == '\a') {
          lVar14 = FUN_140087490(lVar11,&DAT_14048eef4,&DAT_14048eef6);
          if (lVar14 != 0) {
            uVar13 = FUN_140086de0(lVar11,&DAT_14048eef4,&DAT_14048eef6);
            FUN_1401a89a0(fVar24,uVar13);
          }
          lVar14 = FUN_140087490(lVar11,&DAT_14048eef8,&DAT_14048eefa);
          if (lVar14 != 0) {
            uVar13 = FUN_140086de0(lVar11,&DAT_14048eef8,&DAT_14048eefa);
            FUN_1401a89a0(fVar25,uVar13);
          }
          lVar14 = FUN_140087490(lVar11,&DAT_14048eefc,&DAT_14048eefe);
          if (lVar14 != 0) {
            uVar13 = FUN_140086de0(lVar11,&DAT_14048eefc,&DAT_14048eefe);
            FUN_1401a89a0(fVar26,uVar13);
          }
          local_98 = "relative";
          uStack_90 = 8;
          FUN_1400878f0(lVar11,&local_98);
        }
      }
    }
LAB_1401a55de:
    if (*(char *)(lVar11 + 8) == '\a') {
      lVar14 = FUN_140087490(lVar11,"options","");
      if (lVar14 == 0) {
        lVar14 = FUN_140084ac0();
      }
      lVar15 = FUN_140087490(lVar11,&DAT_14048eef4,&DAT_14048eef6);
      if (lVar15 == 0) {
        lVar15 = FUN_140084ac0();
      }
      lVar18 = FUN_140087490(lVar11,&DAT_14048eef8,&DAT_14048eefa);
      if (lVar18 == 0) {
        lVar18 = FUN_140084ac0();
      }
      lVar19 = FUN_140087490(lVar11,&DAT_14048eefc,&DAT_14048eefe);
      if (lVar19 == 0) {
        lVar19 = FUN_140084ac0();
      }
      lVar11 = FUN_140087490(lVar11,&DAT_14048ef00,&DAT_14048ef02);
      if (lVar11 == 0) {
        lVar11 = FUN_140084ac0();
      }
      if ((*(char *)(lVar14 + 8) == '\a') &&
         (cVar8 = FUN_1401a96b0(lVar14,puVar12 + 7), cVar8 != '\0')) {
        local_98 = (char *)0x0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        if (*(char *)(lVar15 + 8) == '\x06') {
          FUN_1401a8ce0(lVar15,&local_98);
          puVar17 = puVar12 + 4;
          FUN_1401aa430(puVar17,&local_98);
          if (*(char *)(lVar18 + 8) == '\x06') {
            FUN_1401a8ce0(lVar18,&local_98);
            FUN_1401aa430(puVar17,&local_98);
            if (*(char *)(lVar19 + 8) == '\x06') {
              FUN_1401a8ce0(lVar19,&local_98);
              FUN_1401aa430(puVar17,&local_98);
              if (*(char *)(lVar11 + 8) == '\x06') {
                FUN_1401a8ce0(lVar11,&local_98);
                FUN_1401aa430(puVar17,&local_98);
              }
            }
          }
        }
        if ((*(byte *)((longlong)puVar12 + 0x44) & 0x10) != 0) {
          lVar11 = puVar12[5];
          for (lVar15 = puVar12[4]; lVar15 != lVar11; lVar15 = lVar15 + 0x30) {
            FUN_1401a98b0(*(undefined4 *)(puVar12 + 9),lVar15);
          }
        }
        lVar11 = FUN_140087490(lVar14,"events","");
        if (lVar11 == 0) {
          lVar11 = FUN_140084ac0();
        }
        if (*(char *)(lVar11 + 8) == '\x06') {
          FUN_1401a9410(lVar11,*(undefined4 *)(puVar12 + 7),puVar12 + 10);
        }
        FUN_140031b80(&uStack_80);
        FUN_14017c3c0(&local_98);
      }
    }
    FUN_140175880(*param_2,puVar12);
  }
  lVar11 = FUN_140087490(param_3,"script","");
  if (lVar11 == 0) {
    lVar11 = FUN_140084ac0();
  }
  lVar14 = FUN_140087490(param_3,"scriptproperties","");
  if (lVar14 == 0) {
    lVar14 = FUN_140084ac0();
  }
  if (*(char *)(lVar11 + 8) == '\x04') {
    puVar12 = (undefined8 *)FUN_14028af20(0xe0);
    plVar16 = puVar12 + 3;
    puVar12[10] = 0;
    *(undefined4 *)((longlong)puVar12 + 0x59) = 0;
    *(undefined2 *)((longlong)puVar12 + 0x5d) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x5f) = 0;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    puVar12[0x10] = 0;
    puVar12[0x11] = 0;
    puVar12[0x12] = 0;
    puVar12[0x13] = 0;
    puVar12[0x14] = 0;
    puVar12[0x15] = 0;
    puVar12[0x16] = 0;
    puVar12[0x17] = 0;
    puVar12[0x18] = 0;
    puVar12[0x19] = 0;
    puVar12[0x1a] = 0;
    puVar12[0x1b] = 0;
    *puVar12 = &PTR_FUN_14048edf8;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *plVar16 = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0xf;
    *(undefined1 *)plVar16 = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[0xc] = 0;
    *(undefined1 *)(puVar12 + 0xb) = 0;
    *(uint *)(puVar12 + 0xb) = *(uint *)(puVar12 + 0xb) & 0xfffffeff;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    puVar12[0x11] = 0;
    *(undefined1 *)(puVar12 + 0x10) = 0;
    *(uint *)(puVar12 + 0x10) = *(uint *)(puVar12 + 0x10) & 0xfffffeff;
    puVar12[0x12] = 0;
    puVar12[0x13] = 0;
    *(undefined4 *)(puVar12 + 0x14) = 0;
    puVar12[0x15] = 0;
    puVar12[0x16] = 0;
    lVar15 = FUN_14028af20(0x48);
    *(longlong *)lVar15 = lVar15;
    *(longlong *)(lVar15 + 8) = lVar15;
    puVar12[0x15] = lVar15;
    puVar12[0x17] = 0;
    puVar12[0x18] = 0;
    puVar12[0x19] = 0;
    puVar12[0x1a] = 7;
    puVar12[0x1b] = 8;
    *(undefined4 *)(puVar12 + 0x14) = 0x3f800000;
    FUN_14004f190(puVar12 + 0x17,0x10,puVar12[0x15]);
    puVar12[1] = param_2[1];
    puVar12[2] = param_1;
    plVar20 = (longlong *)FUN_140085cc0(lVar11,&local_98);
    if (plVar16 != plVar20) {
      uVar21 = puVar12[6];
      if (0xf < uVar21) {
        lVar11 = *plVar16;
        uVar22 = uVar21 + 1;
        if (0xfff < uVar22) {
          if (0x1f < (lVar11 - *(longlong *)(lVar11 + -8)) - 8U) goto LAB_1401a5a87;
          uVar22 = uVar21 + 0x28;
          lVar11 = *(longlong *)(lVar11 + -8);
        }
        thunk_FUN_14028af80(lVar11,uVar22);
      }
      puVar12[5] = 0;
      puVar12[6] = 0xf;
      *(undefined1 *)plVar16 = 0;
      uVar10 = *(undefined4 *)((longlong)plVar20 + 4);
      lVar11 = plVar20[1];
      uVar4 = *(undefined4 *)((longlong)plVar20 + 0xc);
      *(int *)plVar16 = (int)*plVar20;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar10;
      *(int *)(puVar12 + 4) = (int)lVar11;
      *(undefined4 *)((longlong)puVar12 + 0x24) = uVar4;
      lVar11 = plVar20[3];
      puVar12[5] = plVar20[2];
      puVar12[6] = lVar11;
      plVar20[2] = 0;
      plVar20[3] = 0xf;
      *(undefined1 *)plVar20 = 0;
    }
    if (0xf < uStack_80) {
      uVar21 = uStack_80 + 1;
      pcVar23 = local_98;
      if (0xfff < uVar21) {
        pcVar23 = *(char **)(local_98 + -8);
        if ((char *)0x1f < local_98 + (-8 - (longlong)pcVar23)) {
LAB_1401a5a87:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar21 = uStack_80 + 0x28;
      }
      thunk_FUN_14028af80(pcVar23,uVar21);
    }
    FUN_140085520(puVar12 + 0xf,lVar14);
    FUN_140175880(*param_2,puVar12);
  }
  return;
}

