// Function: FUN_1401f5980
// Addr: 1401f5980
// Size: 5142 bytes


/* WARNING: Removing unreachable block (ram,0x0001401f5aac) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1401f5980(longlong param_1)

{
  float fVar1;
  undefined8 *puVar2;
  size_t _Size;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  size_t sVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 *******pppppppuVar21;
  ulonglong uVar22;
  longlong *unaff_RBX;
  longlong *plVar23;
  undefined1 *puVar24;
  longlong *plVar25;
  uint uVar26;
  longlong *plVar27;
  char *pcVar28;
  char *pcVar29;
  longlong **pplVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  float fVar35;
  int local_res8;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [24];
  undefined8 local_158;
  longlong *local_148;
  longlong *plStack_140;
  longlong local_138;
  longlong *local_130;
  longlong *plStack_128;
  longlong *local_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  ulonglong uStack_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  longlong local_e0 [2];
  ulonglong local_d0;
  ulonglong uStack_c8;
  undefined8 *******local_c0 [3];
  ulonglong local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong local_88;
  char local_66;
  undefined2 local_65;
  char local_63 [35];
  
  puVar24 = auStack_178;
  if ((*(float *)(param_1 + 0x2f0) * *(float *)(param_1 + 0x2f0) *
       *(float *)(*(longlong *)(param_1 + 200) + 0x2d8) <= 0.0) ||
     ((*(uint *)(param_1 + 0x310) & 0x20000000) != 0)) {
    *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0x3ffffffd;
    return;
  }
  plVar23 = (longlong *)0x0;
  puVar15 = auStack_178;
  if (*(longlong *)(param_1 + 0x2c0) != *(longlong *)(param_1 + 0x2c8)) goto LAB_1401f68f4;
  local_138 = 0;
  local_148 = (longlong *)0x0;
  plStack_140 = (longlong *)0x0;
  puVar11 = (undefined8 *)FUN_140086de0(param_1 + 0x1b0,"sound","");
  if ((*(uint *)(puVar11 + 1) & 0xff) == 4) {
    uVar12 = FUN_140085cc0(puVar11,&local_118);
    FUN_140030470(&local_148,uVar12);
    if (uStack_100 < 0x10) goto LAB_1401f5bcd;
    uVar22 = uStack_100 + 1;
    lVar20 = local_118;
    if (uVar22 < 0x1000) {
LAB_1401f5a95:
      thunk_FUN_14028af80(lVar20,uVar22);
      goto LAB_1401f5bcd;
    }
    lVar20 = *(longlong *)(local_118 + -8);
    plVar23 = unaff_RBX;
    if ((local_118 - lVar20) - 8U < 0x20) {
      uVar22 = uStack_100 + 0x28;
      goto LAB_1401f5a95;
    }
LAB_1401f68d2:
    plVar27 = plVar23;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar24 = auStack_170;
  }
  else {
    if ((*(uint *)(puVar11 + 1) & 0xff) == 6) {
      puVar2 = (undefined8 *)*puVar11;
      if (puVar2 != (undefined8 *)0x0) {
        plVar23 = *(longlong **)*puVar2;
      }
      if ((undefined8 *)*puVar11 == (undefined8 *)0x0) {
        bVar6 = true;
        plVar27 = (longlong *)0x0;
      }
      else {
        plVar27 = *(longlong **)*puVar11;
        bVar6 = false;
      }
      while( true ) {
        bVar5 = bVar6;
        if (puVar2 != (undefined8 *)0x0) {
          bVar5 = plVar23 == plVar27;
        }
        if (bVar5) break;
        FUN_140085090(&local_a0,plVar23 + 6);
        if ((char)uStack_98 == '\x04') {
          uVar12 = FUN_140085cc0(&local_a0,&local_118);
          FUN_140030470(&local_148,uVar12);
          if (0xf < uStack_100) {
            uVar22 = uStack_100 + 1;
            lVar20 = local_118;
            if (0xfff < uVar22) {
              lVar20 = *(longlong *)(local_118 + -8);
              if (0x1f < (local_118 - lVar20) - 8U) goto LAB_1401f68d2;
              uVar22 = uStack_100 + 0x28;
            }
            thunk_FUN_14028af80(lVar20,uVar22);
          }
        }
        FUN_140085440(&local_a0);
        plVar16 = (longlong *)plVar23[2];
        if (*(char *)((longlong)plVar16 + 0x19) == '\0') {
          cVar7 = *(char *)(*plVar16 + 0x19);
          plVar23 = plVar16;
          while (cVar7 == '\0') {
            plVar23 = (longlong *)*plVar23;
            cVar7 = *(char *)(*plVar23 + 0x19);
          }
        }
        else {
          cVar7 = *(char *)(plVar23[1] + 0x19);
          plVar19 = (longlong *)plVar23[1];
          plVar16 = plVar23;
          while ((plVar23 = plVar19, cVar7 == '\0' && (plVar16 == (longlong *)plVar23[2]))) {
            cVar7 = *(char *)(plVar23[1] + 0x19);
            plVar19 = (longlong *)plVar23[1];
            plVar16 = plVar23;
          }
        }
      }
    }
LAB_1401f5bcd:
    iVar31 = 0;
    local_120 = (longlong *)0x0;
    local_130 = (longlong *)0x0;
    plStack_128 = (longlong *)0x0;
    if ((longlong)plStack_140 - (longlong)local_148 >> 5 != 0) {
      do {
        plVar23 = plStack_128;
        plVar27 = (longlong *)0x0;
        local_108 = 0;
        uStack_100 = 0xf;
        local_f0 = 0;
        local_f8 = 0;
        lStack_110 = 0;
        local_118 = 0;
        if (plStack_128 == local_120) {
          lVar20 = ((longlong)plStack_128 - (longlong)local_130) / 0x38;
          if (lVar20 == 0x492492492492492) goto LAB_1401f6d92;
          uVar22 = ((longlong)local_120 - (longlong)local_130 >> 3) * 0x6db6db6db6db6db7;
          uVar33 = 0x492492492492492 - (uVar22 >> 1);
          if (uVar33 <= uVar22 && uVar22 - uVar33 != 0) goto LAB_1401f6d8c;
          uVar22 = (uVar22 >> 1) + uVar22;
          uVar33 = lVar20 + 1;
          uVar32 = uVar33;
          if (uVar33 <= uVar22) {
            uVar32 = uVar22;
          }
          if (0x492492492492492 < uVar32) goto LAB_1401f6d8c;
          uVar22 = uVar32 * 0x38;
          if (uVar22 != 0) {
            if (uVar22 < 0x1000) {
              plVar27 = (longlong *)FUN_14028af20(uVar22);
            }
            else {
              if (uVar22 + 0x27 <= uVar22) goto LAB_1401f6d8c;
              lVar34 = FUN_14028af20();
              if (lVar34 == 0) goto LAB_1401f68d2;
              plVar27 = (longlong *)(lVar34 + 0x27U & 0xffffffffffffffe0);
              plVar27[-1] = lVar34;
            }
          }
          plVar25 = plVar27 + lVar20 * 7;
          FUN_140016fc0(plVar25,&local_118);
          plVar25[4] = local_f8;
          plVar25[5] = local_f0;
          *(undefined4 *)(plVar25 + 6) = local_e8;
          plVar19 = local_130;
          plVar16 = plVar27;
          if (plVar23 != plStack_128) {
            FUN_1401f8930(local_130,plVar23,plVar27);
            plVar16 = plVar25 + 7;
            plVar19 = plVar23;
          }
          FUN_1401f8930(plVar19,plStack_128,plVar16);
          plVar16 = plStack_128;
          plVar23 = local_130;
          if (local_130 != (longlong *)0x0) {
            for (; plVar23 != plVar16; plVar23 = plVar23 + 7) {
              FUN_140017240(plVar23);
            }
            uVar22 = ((longlong)local_120 - (longlong)local_130 >> 3) * 8;
            plVar23 = local_130;
            if (0xfff < uVar22) {
              plVar23 = (longlong *)((longlong)local_130 + (-8 - local_130[-1]));
              if ((longlong *)0x1f < plVar23) goto LAB_1401f68d2;
              uVar22 = uVar22 + 0x27;
              plVar23 = (longlong *)local_130[-1];
            }
            thunk_FUN_14028af80(plVar23,uVar22);
          }
          plStack_128 = plVar27 + uVar33 * 7;
          local_120 = plVar27 + uVar32 * 7;
          local_130 = plVar27;
        }
        else {
          FUN_140016fc0(plStack_128,&local_118);
          plVar23[4] = local_f8;
          plVar23[5] = local_f0;
          *(undefined4 *)(plVar23 + 6) = local_e8;
          plStack_128 = plStack_128 + 7;
        }
        FUN_140017240(&local_118);
        iVar31 = iVar31 + 1;
      } while ((ulonglong)(longlong)iVar31 <
               (ulonglong)((longlong)plStack_140 - (longlong)local_148 >> 5));
    }
    local_res8 = 0;
    if ((longlong)plStack_140 - (longlong)local_148 >> 5 != 0) {
      do {
        plVar23 = *(longlong **)(param_1 + 0x2c0);
        plVar27 = *(longlong **)(param_1 + 0x2c8);
        if (plVar23 != plVar27) {
          do {
            uVar22 = plVar23[3];
            plVar19 = local_148 + (longlong)local_res8 * 4;
            sVar14 = plVar23[2];
            plVar16 = plVar23;
            if (0xf < uVar22) {
              plVar16 = (longlong *)*plVar23;
            }
            _Size = plVar19[2];
            if (0xf < (ulonglong)plVar19[3]) {
              plVar19 = (longlong *)*plVar19;
            }
            if ((_Size == sVar14) &&
               ((_Size == 0 || (iVar31 = memcmp(plVar19,plVar16,_Size), iVar31 == 0)))) {
              plVar27 = local_130 + (longlong)local_res8 * 7;
              if (plVar27 != plVar23) {
                plVar16 = plVar23;
                if (0xf < uVar22) {
                  plVar16 = (longlong *)*plVar23;
                }
                FUN_14000f880(plVar27,plVar16,sVar14);
              }
              plVar27[4] = plVar23[4];
              plVar27[5] = plVar23[5];
              *(int *)(plVar27 + 6) = (int)plVar23[6];
              plVar27 = *(longlong **)(param_1 + 0x2c8);
              plVar16 = plVar23;
              plVar19 = plVar23;
              while (plVar25 = plVar19 + 7, plVar25 != plVar27) {
                FUN_14000de40(plVar16,plVar25);
                plVar16[4] = plVar19[0xb];
                plVar16[5] = plVar19[0xc];
                *(int *)(plVar16 + 6) = (int)plVar19[0xd];
                plVar16 = plVar16 + 7;
                plVar19 = plVar25;
              }
              FUN_140017240(*(longlong *)(param_1 + 0x2c8) + -0x38);
              *(longlong *)(param_1 + 0x2c8) = *(longlong *)(param_1 + 0x2c8) + -0x38;
              plVar27 = *(longlong **)(param_1 + 0x2c8);
            }
            else {
              plVar23 = plVar23 + 7;
            }
          } while (plVar23 != plVar27);
        }
        local_res8 = local_res8 + 1;
      } while ((ulonglong)(longlong)local_res8 <
               (ulonglong)((longlong)plStack_140 - (longlong)local_148 >> 5));
    }
    pplVar30 = (longlong **)(param_1 + 0x2c0);
    plVar27 = *(longlong **)(param_1 + 0x2c8);
    plVar23 = local_130;
    for (plVar16 = *pplVar30; local_130 = plVar23, plVar16 != plVar27; plVar16 = plVar16 + 7) {
      plVar23 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
      (**(code **)(*plVar23 + 0x90))(plVar23,plVar16[5]);
      plVar23 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
      (**(code **)(*plVar23 + 0x80))(plVar23,plVar16[4]);
      plVar23 = local_130;
    }
    if (pplVar30 != &local_130) {
      plVar27 = *pplVar30;
      uVar32 = (longlong)plStack_128 - (longlong)plVar23;
      lVar20 = *(longlong *)(param_1 + 0x2d0) - (longlong)plVar27 >> 3;
      uVar33 = ((longlong)uVar32 >> 3) * 0x6db6db6db6db6db7;
      uVar22 = lVar20 * 0x6db6db6db6db6db7;
      if (uVar33 < uVar22 || uVar33 + lVar20 * -0x6db6db6db6db6db7 == 0) {
        plVar16 = *(longlong **)(param_1 + 0x2c8);
        lVar20 = (longlong)plVar16 - (longlong)plVar27 >> 3;
        if (uVar33 < (ulonglong)(lVar20 * 0x6db6db6db6db6db7) ||
            uVar33 + lVar20 * -0x6db6db6db6db6db7 == 0) {
          plVar16 = plVar27 + ((longlong)uVar32 >> 3);
          while (uVar32 != 0) {
            if (plVar27 != plVar23) {
              plVar19 = plVar23;
              if (0xf < (ulonglong)plVar23[3]) {
                plVar19 = (longlong *)*plVar23;
              }
              FUN_14000f880(plVar27,plVar19,plVar23[2]);
            }
            plVar27[4] = plVar23[4];
            plVar27[5] = plVar23[5];
            plVar19 = plVar23 + 6;
            plVar23 = plVar23 + 7;
            *(int *)(plVar27 + 6) = (int)*plVar19;
            plVar27 = plVar27 + 7;
            uVar33 = uVar33 - 1;
            uVar32 = uVar33;
          }
          plVar23 = *(longlong **)(param_1 + 0x2c8);
          for (plVar27 = plVar16; plVar27 != plVar23; plVar27 = plVar27 + 7) {
            FUN_140017240(plVar27);
          }
        }
        else {
          if (plVar27 != plVar16) {
            do {
              if (plVar27 != plVar23) {
                plVar16 = plVar23;
                if (0xf < (ulonglong)plVar23[3]) {
                  plVar16 = (longlong *)*plVar23;
                }
                FUN_14000f880(plVar27,plVar16,plVar23[2]);
              }
              plVar27[4] = plVar23[4];
              plVar27[5] = plVar23[5];
              plVar16 = plVar23 + 6;
              plVar23 = plVar23 + 7;
              *(int *)(plVar27 + 6) = (int)*plVar16;
              plVar27 = plVar27 + 7;
              plVar16 = *(longlong **)(param_1 + 0x2c8);
            } while (plVar27 != plVar16);
          }
          for (lVar20 = uVar33 + lVar20 * -0x6db6db6db6db6db7; lVar20 != 0; lVar20 = lVar20 + -1) {
            FUN_140016fc0(plVar16,plVar23);
            plVar16[4] = plVar23[4];
            plVar16[5] = plVar23[5];
            plVar27 = plVar23 + 6;
            plVar23 = plVar23 + 7;
            *(int *)(plVar16 + 6) = (int)*plVar27;
            plVar16 = plVar16 + 7;
          }
        }
        *(longlong **)(param_1 + 0x2c8) = plVar16;
      }
      else {
        if (0x492492492492492 < uVar33) {
LAB_1401f6d92:
                    /* WARNING: Subroutine does not return */
          FUN_140013050();
        }
        uVar13 = 0x492492492492492 - (uVar22 >> 1);
        if (uVar22 < uVar13 || uVar22 - uVar13 == 0) {
          uVar22 = (uVar22 >> 1) + uVar22;
          if (uVar22 < uVar33) {
            uVar22 = uVar33;
          }
        }
        else {
          uVar22 = 0x492492492492492;
        }
        if (plVar27 != (longlong *)0x0) {
          plVar16 = *(longlong **)(param_1 + 0x2c8);
          for (; plVar27 != plVar16; plVar27 = plVar27 + 7) {
            FUN_140017240(plVar27);
          }
          lVar20 = *(longlong *)(param_1 + 0x2c0);
          uVar13 = (*(longlong *)(param_1 + 0x2d0) - lVar20 >> 3) * 8;
          if (0xfff < uVar13) {
            if (0x1f < (lVar20 - *(longlong *)(lVar20 + -8)) - 8U) goto LAB_1401f68d2;
            uVar13 = uVar13 + 0x27;
            lVar20 = *(longlong *)(lVar20 + -8);
          }
          thunk_FUN_14028af80(lVar20,uVar13);
          *(undefined8 *)(param_1 + 0x2c0) = 0;
          *(undefined8 *)(param_1 + 0x2c8) = 0;
          *(undefined8 *)(param_1 + 0x2d0) = 0;
        }
        uVar13 = 0;
        if (0x492492492492492 < uVar22) {
LAB_1401f6d8c:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        uVar22 = uVar22 * 0x38;
        if (uVar22 != 0) {
          if (uVar22 < 0x1000) {
            uVar13 = FUN_14028af20(uVar22);
          }
          else {
            if (uVar22 + 0x27 <= uVar22) goto LAB_1401f6d8c;
            lVar20 = FUN_14028af20();
            if (lVar20 == 0) goto LAB_1401f68d2;
            uVar13 = lVar20 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(uVar13 - 8) = lVar20;
          }
        }
        *(ulonglong *)(param_1 + 0x2c0) = uVar13;
        *(ulonglong *)(param_1 + 0x2c8) = uVar13;
        *(ulonglong *)(param_1 + 0x2d0) = uVar13 + uVar22;
        lVar20 = *(longlong *)(param_1 + 0x2c0);
        while (uVar32 != 0) {
          FUN_140016fc0(lVar20,plVar23);
          *(longlong *)(lVar20 + 0x20) = plVar23[4];
          *(longlong *)(lVar20 + 0x28) = plVar23[5];
          plVar27 = plVar23 + 6;
          plVar23 = plVar23 + 7;
          *(int *)(lVar20 + 0x30) = (int)*plVar27;
          lVar20 = lVar20 + 0x38;
          uVar33 = uVar33 - 1;
          uVar32 = uVar33;
        }
        *(longlong *)(param_1 + 0x2c8) = lVar20;
      }
    }
    if ((longlong)plStack_140 - (longlong)local_148 >> 5 != 0) {
      local_res8 = 0;
      plVar23 = (longlong *)0x0;
LAB_1401f6330:
      lVar20 = (longlong)local_res8;
      lVar34 = *(longlong *)(param_1 + 0x2c0) + lVar20 * 0x38;
      if (*(longlong *)(lVar34 + 0x20) == 0) {
        plVar27 = local_148 + lVar20 * 4;
        if (0xf < (ulonglong)plVar27[3]) {
          plVar27 = (longlong *)*plVar27;
        }
        local_90 = 0;
        local_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        sVar14 = strlen((char *)plVar27);
        FUN_140017480(&local_a0,plVar27,sVar14);
        uVar26 = *(uint *)(*(longlong *)(param_1 + 200) + 0x2dc);
        if (uVar26 < 10) {
          local_65._1_1_ = (char)uVar26 + '0';
          pcVar29 = (char *)((longlong)&local_65 + 1);
        }
        else {
          pcVar29 = local_63;
          do {
            pcVar28 = pcVar29;
            pcVar29 = pcVar28 + -2;
            uVar10 = uVar26 / 100;
            *(undefined2 *)pcVar29 = *(undefined2 *)(&DAT_140474390 + (ulonglong)(uVar26 % 100) * 2)
            ;
            uVar26 = uVar10;
          } while (9 < uVar10);
          if (uVar10 != 0) {
            pcVar29 = pcVar28 + -3;
            *pcVar29 = (char)uVar10 + '0';
          }
        }
        FUN_140053d10(local_e0,pcVar29,local_63);
        uVar22 = local_d0;
        if (uStack_c8 == local_d0) {
          local_158 = 1;
          plVar16 = (longlong *)FUN_140053110(local_e0,1,0,&DAT_140490aa0);
        }
        else {
          local_d0 = local_d0 + 1;
          puVar15 = (undefined1 *)local_e0;
          if (0xf < uStack_c8) {
            puVar15 = (undefined1 *)CONCAT71(local_e0[0]._1_7_,(undefined1)local_e0[0]);
          }
          *(undefined2 *)(puVar15 + uVar22) = 0x2f;
          plVar16 = local_e0;
        }
        local_118 = *plVar16;
        lStack_110 = plVar16[1];
        local_108 = plVar16[2];
        uStack_100 = plVar16[3];
        plVar16[2] = 0;
        plVar16[3] = 0xf;
        *(undefined1 *)plVar16 = 0;
        FUN_1400ea380(local_c0,&local_118,&local_a0);
        if (0xf < uStack_100) {
          uVar22 = uStack_100 + 1;
          lVar17 = local_118;
          if (0xfff < uVar22) {
            lVar17 = *(longlong *)(local_118 + -8);
            if (0x1f < (local_118 - lVar17) - 8U) goto LAB_1401f68d2;
            uVar22 = uStack_100 + 0x28;
          }
          thunk_FUN_14028af80(lVar17,uVar22);
        }
        if (0xf < uStack_c8) {
          lVar18 = CONCAT71(local_e0[0]._1_7_,(undefined1)local_e0[0]);
          uVar22 = uStack_c8 + 1;
          lVar17 = lVar18;
          if (0xfff < uVar22) {
            lVar17 = *(longlong *)(lVar18 + -8);
            if (0x1f < (lVar18 - lVar17) - 8U) goto LAB_1401f68d2;
            uVar22 = uStack_c8 + 0x28;
          }
          thunk_FUN_14028af80(lVar17,uVar22);
        }
        local_d0 = 0;
        uStack_c8 = 0xf;
        local_e0[0]._0_1_ = 0;
        if (0xf < local_88) {
          uVar22 = local_88 + 1;
          lVar17 = local_a0;
          if (0xfff < uVar22) {
            lVar17 = *(longlong *)(local_a0 + -8);
            if (0x1f < (local_a0 - lVar17) - 8U) goto LAB_1401f68d2;
            uVar22 = local_88 + 0x28;
          }
          thunk_FUN_14028af80(lVar17,uVar22);
        }
        pppppppuVar21 = local_c0;
        if (0xf < local_a8) {
          pppppppuVar21 = local_c0[0];
        }
        plVar16 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
        lVar17 = (**(code **)(*plVar16 + 0x78))(plVar16,pppppppuVar21,0,0);
        if (lVar17 == 0) {
          plVar16 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1898);
          lVar17 = (**(code **)(*plVar16 + 8))(plVar16,plVar27,1,0);
          if (lVar17 != 0) {
            uVar8 = (**(code **)(*plVar16 + 0x18))(plVar16,lVar17);
            lVar18 = thunk_FUN_14028af20(uVar8);
            (**(code **)(*plVar16 + 0x10))(plVar16,lVar17,lVar18,uVar8);
            (**(code **)(*plVar16 + 0x20))(plVar16,lVar17);
            if (lVar18 != 0) {
              pppppppuVar21 = local_c0;
              if (0xf < local_a8) {
                pppppppuVar21 = local_c0[0];
              }
              plVar16 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
              lVar17 = (**(code **)(*plVar16 + 0x78))(plVar16,pppppppuVar21,lVar18,uVar8);
              thunk_FUN_14028af80(lVar18);
              if (lVar17 != 0) goto LAB_1401f6640;
            }
          }
        }
        else {
LAB_1401f6640:
          sVar14 = strlen((char *)plVar27);
          FUN_14000f880(lVar34,plVar27,sVar14);
          *(longlong *)(lVar34 + 0x20) = lVar17;
          plVar27 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
          lVar18 = (**(code **)(*plVar27 + 0x88))(plVar27,lVar17);
          *(longlong *)(lVar34 + 0x28) = lVar18;
          plVar27 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
          if (lVar18 != 0) {
            uVar8 = (**(code **)(*plVar27 + 0x98))(plVar27,lVar18);
            *(undefined4 *)(lVar34 + 0x30) = uVar8;
            if (0xf < local_a8) {
              uVar22 = local_a8 + 1;
              pppppppuVar21 = local_c0[0];
              if (0xfff < uVar22) {
                pppppppuVar21 = (undefined8 *******)local_c0[0][-1];
                if (0x1f < (ulonglong)((longlong)local_c0[0] + (-8 - (longlong)pppppppuVar21)))
                goto LAB_1401f68d2;
                uVar22 = local_a8 + 0x28;
              }
              thunk_FUN_14028af80(pppppppuVar21,uVar22);
            }
            goto LAB_1401f6847;
          }
          (**(code **)(*plVar27 + 0x80))(plVar27,lVar17);
        }
        if (0xf < local_a8) {
          uVar22 = local_a8 + 1;
          pppppppuVar21 = local_c0[0];
          if (0xfff < uVar22) {
            pppppppuVar21 = (undefined8 *******)local_c0[0][-1];
            if (0x1f < (ulonglong)((longlong)local_c0[0] + (-8 - (longlong)pppppppuVar21)))
            goto LAB_1401f68d2;
            uVar22 = local_a8 + 0x28;
          }
          thunk_FUN_14028af80(pppppppuVar21,uVar22);
        }
        plVar19 = plStack_140;
        plVar27 = local_148 + lVar20 * 4;
        plVar16 = plVar27;
        while (plVar16 = plVar16 + 4, plVar16 != plVar19) {
          if (plVar27 != plVar16) {
            uVar22 = plVar27[3];
            if (0xf < uVar22) {
              lVar34 = *plVar27;
              uVar33 = uVar22 + 1;
              if (0xfff < uVar33) {
                if (0x1f < (lVar34 - *(longlong *)(lVar34 + -8)) - 8U) goto LAB_1401f68d2;
                uVar33 = uVar22 + 0x28;
                lVar34 = *(longlong *)(lVar34 + -8);
              }
              thunk_FUN_14028af80(lVar34,uVar33);
            }
            plVar27[3] = 0xf;
            plVar27[2] = 0;
            *(undefined1 *)plVar27 = 0;
            lVar34 = plVar16[1];
            *plVar27 = *plVar16;
            plVar27[1] = lVar34;
            lVar34 = plVar16[3];
            plVar27[2] = plVar16[2];
            plVar27[3] = lVar34;
            plVar16[2] = 0;
            plVar16[3] = 0xf;
            *(undefined1 *)plVar16 = 0;
          }
          plVar27 = plVar27 + 4;
        }
        FUN_140017240(plStack_140 + -4);
        lVar34 = lVar20 * 0x38 + *(longlong *)(param_1 + 0x2c0);
        plStack_140 = plStack_140 + -4;
        lVar20 = *(longlong *)(param_1 + 0x2c8);
        lVar17 = lVar34;
        while (lVar18 = lVar17 + 0x38, lVar18 != lVar20) {
          FUN_14000de40(lVar34,lVar18);
          *(undefined8 *)(lVar34 + 0x20) = *(undefined8 *)(lVar17 + 0x58);
          *(undefined8 *)(lVar34 + 0x28) = *(undefined8 *)(lVar17 + 0x60);
          *(undefined4 *)(lVar34 + 0x30) = *(undefined4 *)(lVar17 + 0x68);
          lVar34 = lVar34 + 0x38;
          lVar17 = lVar18;
        }
        FUN_140017240(*(longlong *)(param_1 + 0x2c8) + -0x38);
        *(longlong *)(param_1 + 0x2c8) = *(longlong *)(param_1 + 0x2c8) + -0x38;
        local_res8 = local_res8 + -1;
      }
LAB_1401f6847:
      local_res8 = local_res8 + 1;
      if ((ulonglong)((longlong)plStack_140 - (longlong)local_148 >> 5) <=
          (ulonglong)(longlong)local_res8) goto LAB_1401f6872;
      goto LAB_1401f6330;
    }
LAB_1401f6872:
    FUN_1401f8880(&local_130);
    plVar27 = plStack_140;
    puVar15 = auStack_178;
    plVar23 = local_148;
    if (local_148 == (longlong *)0x0) goto LAB_1401f68f4;
    for (; plVar23 != plVar27; plVar23 = plVar23 + 4) {
      FUN_140017240(plVar23);
    }
    plVar27 = local_148;
    if (0xfff < (local_138 - (longlong)local_148 & 0xffffffffffffffe0U)) {
      plVar23 = (longlong *)((longlong)local_148 + (-8 - local_148[-1]));
      plVar27 = (longlong *)local_148[-1];
      puVar24 = auStack_178;
      if ((longlong *)0x1f < plVar23) goto LAB_1401f68d2;
    }
  }
  *(undefined8 *)(puVar24 + -8) = 0x1401f68e1;
  thunk_FUN_14028af80(plVar27);
  puVar15 = puVar24;
LAB_1401f68f4:
  plVar23 = (longlong *)(param_1 + 0x2c0);
  uVar26 = *(uint *)(param_1 + 0x310);
  if ((uVar26 & 4) != 0) {
    *(undefined8 *)(puVar15 + -8) = 0x1401f690a;
    FUN_1401f5460(param_1,1);
    uVar26 = *(uint *)(param_1 + 0x310);
  }
  lVar20 = *(longlong *)(param_1 + 0x2c8);
  lVar34 = *plVar23;
  uVar22 = (lVar20 - lVar34 >> 3) * 0x6db6db6db6db6db7;
  if ((uVar22 < 2) && (*(char *)(param_1 + 0x30c) == '\0')) {
    uVar12 = 1;
  }
  else {
    uVar12 = 0;
  }
  if ((uVar26 >> 0x1e & 1) == 0) {
    cVar7 = *(char *)(param_1 + 0x30c);
    if (cVar7 == '\0') {
      if (lVar34 != lVar20) {
        *(undefined8 *)(puVar15 + -8) = 0x1401f6c6b;
        FUN_1401f58e0(param_1);
        iVar31 = (int)(*(longlong *)(param_1 + 0x2c8) - *plVar23 >> 3) * -0x49249249;
        uVar26 = iVar31 - 1;
        *(undefined8 *)(puVar15 + -8) = 0x1401f6c90;
        iVar9 = FUN_1402c97a0();
        fVar35 = *(float *)(param_1 + 0x2f0);
        plVar27 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
        fVar1 = *(float *)(*(longlong *)(param_1 + 200) + 0x2d8);
        uVar10 = (uint)(((float)iVar9 / DAT_140492960) * (float)iVar31 + 0.0);
        if ((int)uVar10 < (int)uVar26) {
          uVar26 = uVar10;
        }
        if ((int)uVar26 < 0) {
          uVar26 = 0;
        }
        lVar20 = *plVar23;
        lVar34 = (ulonglong)uVar26 * 0x38;
        uVar4 = *(undefined8 *)(lVar34 + 0x28 + lVar20);
        pcVar3 = *(code **)(*plVar27 + 0xd0);
        *(undefined8 *)(puVar15 + -8) = 0x1401f6cf9;
        (*pcVar3)(plVar27,uVar4,fVar35 * fVar35 * fVar1);
        uVar4 = *(undefined8 *)(lVar34 + 0x28 + lVar20);
        plVar23 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
        pcVar3 = *(code **)(*plVar23 + 0xb8);
        *(undefined8 *)(puVar15 + -8) = 0x1401f6d19;
        (*pcVar3)(plVar23,uVar4,uVar12);
        if (1 < uVar22) {
          uVar12 = *(undefined8 *)(lVar34 + 0x28 + lVar20);
          plVar23 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
          pcVar3 = *(code **)(*plVar23 + 0x98);
          *(undefined8 *)(puVar15 + -8) = 0x1401f6d3b;
          uVar8 = (*pcVar3)(plVar23,uVar12);
          *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0x7ffffffd;
          *(undefined4 *)(param_1 + 0x2fc) = uVar8;
          return;
        }
        *(undefined4 *)(param_1 + 0x2fc) = 0;
      }
    }
    else if (cVar7 == '\x01') {
      if ((*(float *)(param_1 + 0x2fc) == 0.0) && (lVar34 != lVar20)) {
        *(undefined8 *)(puVar15 + -8) = 0x1401f6b3c;
        FUN_1401f58e0(param_1);
        iVar31 = (int)(*(longlong *)(param_1 + 0x2c8) - *plVar23 >> 3) * -0x49249249;
        uVar26 = iVar31 - 1;
        *(undefined8 *)(puVar15 + -8) = 0x1401f6b61;
        iVar9 = FUN_1402c97a0();
        fVar35 = *(float *)(param_1 + 0x2f0);
        lVar20 = *plVar23;
        plVar23 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
        fVar1 = *(float *)(*(longlong *)(param_1 + 200) + 0x2d8);
        uVar10 = (uint)(((float)iVar9 / DAT_140492960) * (float)iVar31 + 0.0);
        if ((int)uVar10 < (int)uVar26) {
          uVar26 = uVar10;
        }
        if ((int)uVar26 < 0) {
          uVar26 = 0;
        }
        lVar34 = (ulonglong)uVar26 * 0x38;
        uVar12 = *(undefined8 *)(lVar34 + 0x28 + lVar20);
        pcVar3 = *(code **)(*plVar23 + 0xd0);
        *(undefined8 *)(puVar15 + -8) = 0x1401f6bca;
        (*pcVar3)(plVar23,uVar12,fVar35 * fVar35 * fVar1);
        uVar12 = *(undefined8 *)(lVar34 + 0x28 + lVar20);
        plVar23 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
        pcVar3 = *(code **)(*plVar23 + 0xb8);
        *(undefined8 *)(puVar15 + -8) = 0x1401f6be9;
        (*pcVar3)(plVar23,uVar12,0);
        uVar12 = *(undefined8 *)(lVar34 + 0x28 + lVar20);
        plVar23 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
        pcVar3 = *(code **)(*plVar23 + 0x98);
        *(undefined8 *)(puVar15 + -8) = 0x1401f6c05;
        uVar8 = (*pcVar3)(plVar23,uVar12);
        uVar12 = *(undefined8 *)(param_1 + 200);
        *(undefined4 *)(param_1 + 0x300) = uVar8;
        *(undefined8 *)(puVar15 + -8) = 0x1401f6c1a;
        fVar35 = (float)FUN_1401f4bc0(uVar12);
        *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0x7ffffffd;
        *(float *)(param_1 + 0x2fc) =
             fVar35 * (*(float *)(param_1 + 0x2f8) - *(float *)(param_1 + 0x2f4)) +
             *(float *)(param_1 + 0x2f4) + *(float *)(param_1 + 0x300);
        return;
      }
    }
    else if ((cVar7 == '\x02') && (lVar34 != lVar20)) {
      *(undefined8 *)(puVar15 + -8) = 0x1401f6a2a;
      FUN_1401f58e0(param_1);
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      iVar31 = (int)(*(longlong *)(param_1 + 0x2c8) - *plVar23 >> 3) * -0x49249249;
      uVar26 = iVar31 - 1;
      *(undefined8 *)(puVar15 + -8) = 0x1401f6a56;
      iVar9 = FUN_1402c97a0();
      fVar35 = *(float *)(param_1 + 0x2f0);
      lVar20 = *plVar23;
      plVar23 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
      fVar1 = *(float *)(*(longlong *)(param_1 + 200) + 0x2d8);
      uVar10 = (uint)(((float)iVar9 / DAT_140492960) * (float)iVar31 + 0.0);
      if ((int)uVar10 < (int)uVar26) {
        uVar26 = uVar10;
      }
      if ((int)uVar26 < 0) {
        uVar26 = 0;
      }
      lVar34 = (ulonglong)uVar26 * 0x38;
      uVar12 = *(undefined8 *)(lVar34 + 0x28 + lVar20);
      pcVar3 = *(code **)(*plVar23 + 0xd0);
      *(undefined8 *)(puVar15 + -8) = 0x1401f6abf;
      (*pcVar3)(plVar23,uVar12,fVar35 * fVar35 * fVar1);
      uVar12 = *(undefined8 *)(lVar34 + 0x28 + lVar20);
      plVar23 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
      pcVar3 = *(code **)(*plVar23 + 0xb8);
      *(undefined8 *)(puVar15 + -8) = 0x1401f6ade;
      (*pcVar3)(plVar23,uVar12,0);
      uVar12 = *(undefined8 *)(lVar34 + 0x28 + lVar20);
      plVar23 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
      pcVar3 = *(code **)(*plVar23 + 0x98);
      *(undefined8 *)(puVar15 + -8) = 0x1401f6afa;
      uVar8 = (*pcVar3)(plVar23,uVar12);
      *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0x7ffffffd;
      *(undefined4 *)(param_1 + 0x300) = uVar8;
      return;
    }
    *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0x7ffffffd;
    return;
  }
  *(uint *)(param_1 + 0x310) = uVar26 & 0xbfffffff;
  lVar20 = *(longlong *)(param_1 + 0x2c8);
  do {
    if (lVar34 == lVar20) {
      return;
    }
    if (*(longlong *)(lVar34 + 0x28) != 0) {
      pcVar3 = *(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 0x158) + 0xa8);
      *(undefined8 *)(puVar15 + -8) = 0x1401f6986;
      cVar7 = (*pcVar3)();
      if (cVar7 != '\0') {
        uVar4 = *(undefined8 *)(lVar34 + 0x28);
        plVar23 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
        pcVar3 = *(code **)(*plVar23 + 0xb8);
        *(undefined8 *)(puVar15 + -8) = 0x1401f69f5;
        (*pcVar3)(plVar23,uVar4,uVar12);
        return;
      }
    }
    lVar34 = lVar34 + 0x38;
  } while( true );
}

