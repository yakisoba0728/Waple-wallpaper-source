// Function: FUN_14020db40
// Addr: 14020db40
// Size: 2851 bytes


void FUN_14020db40(longlong *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char cVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  int iVar45;
  float *pfVar46;
  undefined8 *puVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  longlong *plVar50;
  float *pfVar51;
  uint *puVar52;
  undefined8 *puVar53;
  longlong *plVar54;
  longlong *plVar55;
  undefined8 *puVar56;
  uint uVar57;
  longlong *plVar58;
  longlong lVar59;
  longlong lVar60;
  bool bVar61;
  undefined8 *local_148;
  longlong local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  
  pfVar46 = (float *)(**(code **)(*param_1 + 0x80))();
  local_148 = (undefined8 *)0x0;
  local_140 = 0;
  puVar47 = (undefined8 *)FUN_14028af20(0x20);
  *puVar47 = puVar47;
  puVar47[1] = puVar47;
  puVar47[2] = puVar47;
  *(undefined2 *)(puVar47 + 3) = 0x101;
  iVar45 = (int)(*(longlong *)(param_1[0x97] + 0x40) - *(longlong *)(param_1[0x97] + 0x38) >> 4);
  iVar21 = param_2 + iVar45 * 0x11111111;
  local_148 = puVar47;
  uVar57 = param_2;
  do {
    if (SBORROW4(uVar57,iVar45 * -0x11111111) == iVar21 < 0) {
      cVar17 = *(char *)((longlong)puVar47[1] + 0x19);
      plVar50 = (longlong *)puVar47[1];
      while (cVar17 == '\0') {
        FUN_1400f9fb0(&local_148,&local_148,plVar50[2]);
        plVar55 = (longlong *)*plVar50;
        thunk_FUN_14028af80(plVar50,0x20);
        plVar50 = plVar55;
        puVar47 = local_148;
        cVar17 = *(char *)((longlong)plVar55 + 0x19);
      }
      thunk_FUN_14028af80(puVar47,0x20);
      return;
    }
    puVar56 = (undefined8 *)puVar47[1];
    lVar60 = (longlong)(int)uVar57 * 0xf0;
    lVar59 = *(longlong *)(param_1[0x97] + 0x38);
    puVar53 = puVar47;
    if (*(char *)((longlong)puVar56 + 0x19) == '\0') {
      puVar49 = puVar56;
      do {
        if (*(uint *)((longlong)puVar49 + 0x1c) < *(uint *)(lVar59 + 0x60 + lVar60)) {
          puVar48 = (undefined8 *)puVar49[2];
        }
        else {
          puVar48 = (undefined8 *)*puVar49;
          puVar53 = puVar49;
        }
        puVar49 = puVar48;
      } while (*(char *)((longlong)puVar48 + 0x19) == '\0');
    }
    if ((((*(char *)((longlong)puVar53 + 0x19) == '\0') &&
         (*(uint *)((longlong)puVar53 + 0x1c) <= *(uint *)(lVar59 + 0x60 + lVar60))) &&
        (puVar53 != puVar47)) || (uVar57 == param_2)) {
      puVar49 = puVar47;
      puVar53 = puVar56;
      if (*(char *)((longlong)puVar56 + 0x19) == '\0') {
        do {
          puVar56 = puVar53;
          bVar61 = uVar57 <= *(uint *)((longlong)puVar56 + 0x1c);
          if (bVar61) {
            puVar53 = (undefined8 *)*puVar56;
            puVar49 = puVar56;
          }
          else {
            puVar53 = (undefined8 *)puVar56[2];
          }
        } while (*(char *)((longlong)puVar53 + 0x19) == '\0');
      }
      else {
        bVar61 = false;
      }
      if ((*(char *)((longlong)puVar49 + 0x19) != '\0') ||
         (uVar57 < *(uint *)((longlong)puVar49 + 0x1c))) {
        if (local_140 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_14003a750();
        }
        plVar50 = (longlong *)FUN_14028af20(0x20);
        *(uint *)((longlong)plVar50 + 0x1c) = uVar57;
        *plVar50 = (longlong)puVar47;
        plVar50[2] = (longlong)puVar47;
        *(undefined2 *)(plVar50 + 3) = 0;
        local_140 = local_140 + 1;
        plVar50[1] = (longlong)puVar56;
        if (puVar56 == local_148) {
          *local_148 = plVar50;
          local_148[1] = plVar50;
          local_148[2] = plVar50;
        }
        else {
          if (bVar61) {
            *puVar56 = plVar50;
            if (puVar56 == (undefined8 *)*local_148) {
              *local_148 = plVar50;
            }
          }
          else {
            puVar56[2] = plVar50;
            if (puVar56 == (undefined8 *)local_148[2]) {
              local_148[2] = plVar50;
            }
          }
          cVar17 = *(char *)(plVar50[1] + 0x18);
          while (cVar17 == '\0') {
            plVar55 = (longlong *)plVar50[1];
            plVar58 = *(longlong **)plVar55[1];
            if (plVar55 == plVar58) {
              lVar19 = ((undefined8 *)plVar55[1])[2];
              if (*(char *)(lVar19 + 0x18) == '\0') {
                *(undefined1 *)(plVar55 + 3) = 1;
                *(undefined1 *)(lVar19 + 0x18) = 1;
                *(undefined1 *)(*(longlong *)(plVar50[1] + 8) + 0x18) = 0;
                plVar50 = *(longlong **)(plVar50[1] + 8);
              }
              else {
                plVar58 = (longlong *)plVar55[2];
                plVar54 = plVar55;
                if (plVar50 == plVar58) {
                  plVar55[2] = *plVar58;
                  if (*(char *)(*plVar58 + 0x19) == '\0') {
                    *(longlong **)(*plVar58 + 8) = plVar55;
                  }
                  plVar58[1] = plVar55[1];
                  if (plVar55 == (longlong *)local_148[1]) {
                    local_148[1] = plVar58;
                  }
                  else {
                    puVar47 = (undefined8 *)plVar55[1];
                    if (plVar55 == (longlong *)*puVar47) {
                      *puVar47 = plVar58;
                    }
                    else {
                      puVar47[2] = plVar58;
                    }
                  }
                  *plVar58 = (longlong)plVar55;
                  plVar55[1] = (longlong)plVar58;
                  plVar54 = plVar58;
                  plVar50 = plVar55;
                }
                *(undefined1 *)(plVar54 + 3) = 1;
                *(undefined1 *)(*(longlong *)(plVar50[1] + 8) + 0x18) = 0;
                plVar55 = *(longlong **)(plVar50[1] + 8);
                plVar58 = (longlong *)*plVar55;
                *plVar55 = plVar58[2];
                if (*(char *)(plVar58[2] + 0x19) == '\0') {
                  *(longlong **)(plVar58[2] + 8) = plVar55;
                }
                plVar58[1] = plVar55[1];
                if (plVar55 == (longlong *)local_148[1]) {
                  local_148[1] = plVar58;
                  plVar58[2] = (longlong)plVar55;
                }
                else {
                  plVar54 = (longlong *)plVar55[1];
                  if (plVar55 == (longlong *)plVar54[2]) {
                    plVar54[2] = (longlong)plVar58;
                    plVar58[2] = (longlong)plVar55;
                  }
                  else {
                    *plVar54 = (longlong)plVar58;
                    plVar58[2] = (longlong)plVar55;
                  }
                }
LAB_14020df46:
                plVar55[1] = (longlong)plVar58;
              }
            }
            else {
              if ((char)plVar58[3] != '\0') {
                plVar58 = (longlong *)*plVar55;
                if (plVar50 == plVar58) {
                  *plVar55 = plVar58[2];
                  if (*(char *)(plVar58[2] + 0x19) == '\0') {
                    *(longlong **)(plVar58[2] + 8) = plVar55;
                  }
                  plVar58[1] = plVar55[1];
                  if (plVar55 == (longlong *)local_148[1]) {
                    local_148[1] = plVar58;
                    plVar58[2] = (longlong)plVar55;
                    plVar55[1] = (longlong)plVar58;
                    plVar50 = plVar55;
                    plVar55 = plVar58;
                  }
                  else {
                    puVar47 = (undefined8 *)plVar55[1];
                    if (plVar55 == (longlong *)puVar47[2]) {
                      puVar47[2] = plVar58;
                      plVar58[2] = (longlong)plVar55;
                      plVar55[1] = (longlong)plVar58;
                      plVar50 = plVar55;
                      plVar55 = plVar58;
                    }
                    else {
                      *puVar47 = plVar58;
                      plVar58[2] = (longlong)plVar55;
                      plVar55[1] = (longlong)plVar58;
                      plVar50 = plVar55;
                      plVar55 = plVar58;
                    }
                  }
                }
                *(undefined1 *)(plVar55 + 3) = 1;
                *(undefined1 *)(*(longlong *)(plVar50[1] + 8) + 0x18) = 0;
                plVar55 = *(longlong **)(plVar50[1] + 8);
                plVar58 = (longlong *)plVar55[2];
                plVar55[2] = *plVar58;
                if (*(char *)(*plVar58 + 0x19) == '\0') {
                  *(longlong **)(*plVar58 + 8) = plVar55;
                }
                plVar58[1] = plVar55[1];
                if (plVar55 == (longlong *)local_148[1]) {
                  local_148[1] = plVar58;
                }
                else {
                  puVar47 = (undefined8 *)plVar55[1];
                  if (plVar55 == (longlong *)*puVar47) {
                    *puVar47 = plVar58;
                  }
                  else {
                    puVar47[2] = plVar58;
                  }
                }
                *plVar58 = (longlong)plVar55;
                goto LAB_14020df46;
              }
              *(undefined1 *)(plVar55 + 3) = 1;
              *(undefined1 *)(plVar58 + 3) = 1;
              *(undefined1 *)(*(longlong *)(plVar50[1] + 8) + 0x18) = 0;
              plVar50 = *(longlong **)(plVar50[1] + 8);
            }
            cVar17 = *(char *)(plVar50[1] + 0x18);
          }
          plVar50 = (longlong *)local_148[1];
        }
        *(undefined1 *)(plVar50 + 3) = 1;
      }
      lVar19 = param_1[0x97];
      uVar18 = *(uint *)(lVar59 + 0x60 + lVar60);
      lVar59 = (longlong)(int)uVar57 * 0x40;
      puVar47 = (undefined8 *)(*(longlong *)(lVar19 + 0x310) + lVar59);
      if (uVar18 == 0xffffffff) {
        lVar60 = *(longlong *)(lVar19 + 0x2c8);
        uVar38 = puVar47[1];
        uVar39 = puVar47[2];
        uVar40 = puVar47[3];
        uVar41 = puVar47[4];
        uVar42 = puVar47[5];
        uVar43 = puVar47[6];
        uVar44 = puVar47[7];
        *(undefined8 *)(lVar60 + lVar59) = *puVar47;
        ((undefined8 *)(lVar60 + lVar59))[1] = uVar38;
        puVar47 = (undefined8 *)(lVar60 + 0x10 + lVar59);
        *puVar47 = uVar39;
        puVar47[1] = uVar40;
        puVar47 = (undefined8 *)(lVar60 + 0x20 + lVar59);
        *puVar47 = uVar41;
        puVar47[1] = uVar42;
        puVar47 = (undefined8 *)(lVar60 + 0x30 + lVar59);
        *puVar47 = uVar43;
        puVar47[1] = uVar44;
      }
      else {
        lVar60 = (ulonglong)uVar18 * 0x40 + *(longlong *)(lVar19 + 0x2c8);
        pfVar51 = (float *)FUN_14005f5b0(lVar60,0);
        local_108 = *pfVar51;
        fStack_104 = pfVar51[1];
        fStack_100 = pfVar51[2];
        fStack_fc = pfVar51[3];
        pfVar51 = (float *)FUN_14005f5b0(lVar60,1);
        local_118 = *pfVar51;
        fStack_114 = pfVar51[1];
        fStack_110 = pfVar51[2];
        fStack_10c = pfVar51[3];
        pfVar51 = (float *)FUN_14005f5b0(lVar60,2);
        local_128 = *pfVar51;
        fStack_124 = pfVar51[1];
        fStack_120 = pfVar51[2];
        fStack_11c = pfVar51[3];
        pfVar51 = (float *)FUN_14005f5b0(lVar60,3);
        local_138 = *pfVar51;
        fStack_134 = pfVar51[1];
        fStack_130 = pfVar51[2];
        fStack_12c = pfVar51[3];
        pfVar51 = (float *)FUN_14005f5b0(puVar47,0);
        fVar1 = *pfVar51;
        fVar2 = pfVar51[1];
        fVar3 = pfVar51[2];
        fVar4 = pfVar51[3];
        pfVar51 = (float *)FUN_14005f5b0(puVar47,1);
        fVar5 = *pfVar51;
        fVar6 = pfVar51[1];
        fVar7 = pfVar51[2];
        fVar8 = pfVar51[3];
        puVar52 = (uint *)FUN_14005f5b0(puVar47,2);
        fVar9 = (float)puVar52[2];
        fVar10 = (float)puVar52[3];
        local_e8 = ZEXT416(*puVar52);
        local_f8 = ZEXT416(puVar52[1]);
        pfVar51 = (float *)FUN_14005f5b0(puVar47,3);
        fVar11 = *pfVar51;
        fVar12 = pfVar51[1];
        fVar13 = pfVar51[3];
        fVar14 = pfVar51[2];
        lVar60 = *(longlong *)(param_1[0x97] + 0x2c8);
        pfVar51 = (float *)(lVar59 + lVar60);
        *pfVar51 = local_108 * fVar1 + local_118 * fVar2 + local_128 * fVar3 + local_138 * fVar4;
        pfVar51[1] = fStack_104 * fVar1 + fStack_114 * fVar2 + fStack_124 * fVar3 +
                     fStack_134 * fVar4;
        pfVar51[2] = fStack_100 * fVar1 + fStack_110 * fVar2 + fStack_120 * fVar3 +
                     fStack_130 * fVar4;
        pfVar51[3] = fStack_fc * fVar1 + fStack_10c * fVar2 + fStack_11c * fVar3 +
                     fStack_12c * fVar4;
        pfVar51 = (float *)(lVar59 + 0x10 + lVar60);
        *pfVar51 = local_108 * fVar5 + local_118 * fVar6 + local_128 * fVar7 + local_138 * fVar8;
        pfVar51[1] = fStack_104 * fVar5 + fStack_114 * fVar6 + fStack_124 * fVar7 +
                     fStack_134 * fVar8;
        pfVar51[2] = fStack_100 * fVar5 + fStack_110 * fVar6 + fStack_120 * fVar7 +
                     fStack_130 * fVar8;
        pfVar51[3] = fStack_fc * fVar5 + fStack_10c * fVar6 + fStack_11c * fVar7 +
                     fStack_12c * fVar8;
        pfVar51 = (float *)(lVar59 + 0x20 + lVar60);
        *pfVar51 = local_108 * (float)local_e8._0_4_ + local_118 * (float)local_f8._0_4_ +
                   local_128 * fVar9 + local_138 * fVar10;
        pfVar51[1] = fStack_104 * (float)local_e8._0_4_ + fStack_114 * (float)local_f8._0_4_ +
                     fStack_124 * fVar9 + fStack_134 * fVar10;
        pfVar51[2] = fStack_100 * (float)local_e8._0_4_ + fStack_110 * (float)local_f8._0_4_ +
                     fStack_120 * fVar9 + fStack_130 * fVar10;
        pfVar51[3] = fStack_fc * (float)local_e8._0_4_ + fStack_10c * (float)local_f8._0_4_ +
                     fStack_11c * fVar9 + fStack_12c * fVar10;
        pfVar51 = (float *)(lVar59 + 0x30 + lVar60);
        *pfVar51 = local_108 * fVar11 + local_118 * fVar12 + local_128 * fVar14 + local_138 * fVar13
        ;
        pfVar51[1] = fStack_104 * fVar11 + fStack_114 * fVar12 + fStack_124 * fVar14 +
                     fStack_134 * fVar13;
        pfVar51[2] = fStack_100 * fVar11 + fStack_110 * fVar12 + fStack_120 * fVar14 +
                     fStack_130 * fVar13;
        pfVar51[3] = fStack_fc * fVar11 + fStack_10c * fVar12 + fStack_11c * fVar14 +
                     fStack_12c * fVar13;
      }
      lVar60 = param_1[0x97];
      lVar19 = *(longlong *)(lVar60 + 0x2c8);
      lVar20 = *(longlong *)(lVar60 + 0x2f8);
      pfVar51 = (float *)(lVar59 + lVar19);
      fVar22 = *pfVar51;
      fVar23 = pfVar51[1];
      fVar24 = pfVar51[2];
      fVar25 = pfVar51[3];
      pfVar51 = (float *)(lVar59 + 0x10 + lVar19);
      fVar26 = *pfVar51;
      fVar27 = pfVar51[1];
      fVar28 = pfVar51[2];
      fVar29 = pfVar51[3];
      pfVar51 = (float *)(lVar59 + 0x20 + lVar19);
      fVar30 = *pfVar51;
      fVar31 = pfVar51[1];
      fVar32 = pfVar51[2];
      fVar33 = pfVar51[3];
      pfVar51 = (float *)(lVar59 + 0x30 + lVar19);
      fVar34 = *pfVar51;
      fVar35 = pfVar51[1];
      fVar36 = pfVar51[2];
      fVar37 = pfVar51[3];
      lVar60 = *(longlong *)(lVar60 + 0x2b0);
      fVar1 = *(float *)(lVar59 + 0x1c + lVar60);
      fVar2 = *(float *)(lVar59 + 0x18 + lVar60);
      fVar3 = *(float *)(lVar59 + 0x20 + lVar60);
      fVar4 = *(float *)(lVar59 + 0x24 + lVar60);
      fVar5 = *(float *)(lVar59 + 0x28 + lVar60);
      fVar6 = *(float *)(lVar59 + 0x2c + lVar60);
      fVar7 = *(float *)(lVar59 + 0x14 + lVar60);
      fVar8 = *(float *)(lVar59 + 0x3c + lVar60);
      fVar9 = *(float *)(lVar59 + 0x10 + lVar60);
      fVar10 = *(float *)(lVar59 + 0x38 + lVar60);
      fVar11 = *(float *)(lVar59 + 0x30 + lVar60);
      fVar12 = *(float *)(lVar59 + 8 + lVar60);
      fVar13 = *(float *)(lVar59 + 0x34 + lVar60);
      fVar14 = *(float *)(lVar59 + 0xc + lVar60);
      fVar15 = *(float *)(lVar59 + lVar60);
      fVar16 = *(float *)(lVar59 + 4 + lVar60);
      pfVar51 = (float *)(lVar59 + lVar20);
      *pfVar51 = fVar22 * fVar15 + fVar26 * fVar16 + fVar30 * fVar12 + fVar34 * fVar14;
      pfVar51[1] = fVar23 * fVar15 + fVar27 * fVar16 + fVar31 * fVar12 + fVar35 * fVar14;
      pfVar51[2] = fVar24 * fVar15 + fVar28 * fVar16 + fVar32 * fVar12 + fVar36 * fVar14;
      pfVar51[3] = fVar25 * fVar15 + fVar29 * fVar16 + fVar33 * fVar12 + fVar37 * fVar14;
      pfVar51 = (float *)(lVar59 + 0x10 + lVar20);
      *pfVar51 = fVar22 * fVar9 + fVar26 * fVar7 + fVar30 * fVar2 + fVar34 * fVar1;
      pfVar51[1] = fVar23 * fVar9 + fVar27 * fVar7 + fVar31 * fVar2 + fVar35 * fVar1;
      pfVar51[2] = fVar24 * fVar9 + fVar28 * fVar7 + fVar32 * fVar2 + fVar36 * fVar1;
      pfVar51[3] = fVar25 * fVar9 + fVar29 * fVar7 + fVar33 * fVar2 + fVar37 * fVar1;
      *(float *)(lVar59 + 0x20 + lVar20) =
           fVar3 * fVar22 + fVar26 * fVar4 + fVar30 * fVar5 + fVar34 * fVar6;
      *(float *)(lVar59 + 0x24 + lVar20) =
           fVar3 * fVar23 + fVar27 * fVar4 + fVar31 * fVar5 + fVar35 * fVar6;
      *(float *)(lVar59 + 0x28 + lVar20) =
           fVar3 * fVar24 + fVar28 * fVar4 + fVar32 * fVar5 + fVar36 * fVar6;
      *(float *)(lVar59 + 0x2c + lVar20) =
           fVar25 * fVar3 + fVar29 * fVar4 + fVar33 * fVar5 + fVar37 * fVar6;
      pfVar51 = (float *)(lVar59 + 0x30 + lVar20);
      *pfVar51 = fVar22 * fVar11 + fVar26 * fVar13 + fVar30 * fVar10 + fVar34 * fVar8;
      pfVar51[1] = fVar23 * fVar11 + fVar27 * fVar13 + fVar31 * fVar10 + fVar35 * fVar8;
      pfVar51[2] = fVar24 * fVar11 + fVar28 * fVar13 + fVar32 * fVar10 + fVar36 * fVar8;
      pfVar51[3] = fVar25 * fVar11 + fVar29 * fVar13 + fVar33 * fVar10 + fVar37 * fVar8;
      fVar22 = pfVar46[0xc];
      fVar23 = pfVar46[0xd];
      fVar24 = pfVar46[0xe];
      fVar25 = pfVar46[0xf];
      fVar26 = *pfVar46;
      fVar27 = pfVar46[1];
      fVar28 = pfVar46[2];
      fVar29 = pfVar46[3];
      lVar60 = *(longlong *)(param_1[0x97] + 0x2c8);
      fVar30 = pfVar46[4];
      fVar31 = pfVar46[5];
      fVar32 = pfVar46[6];
      fVar33 = pfVar46[7];
      fVar34 = pfVar46[8];
      fVar35 = pfVar46[9];
      fVar36 = pfVar46[10];
      fVar37 = pfVar46[0xb];
      fVar1 = *(float *)(lVar59 + 0x10 + lVar60);
      fVar2 = *(float *)(lVar59 + 0x14 + lVar60);
      fVar3 = *(float *)(lVar59 + 0x18 + lVar60);
      fVar4 = *(float *)(lVar59 + 0x1c + lVar60);
      fVar5 = *(float *)(lVar59 + 0x2c + lVar60);
      fVar6 = *(float *)(lVar59 + 0x28 + lVar60);
      fVar7 = *(float *)(lVar59 + 0x24 + lVar60);
      lVar19 = *(longlong *)(param_1[0x97] + 0x340);
      fVar8 = *(float *)(lVar59 + 0x20 + lVar60);
      fVar9 = *(float *)(lVar59 + 0x3c + lVar60);
      fVar10 = *(float *)(lVar59 + 0x38 + lVar60);
      fVar11 = *(float *)(lVar59 + 0x30 + lVar60);
      fVar12 = *(float *)(lVar59 + 8 + lVar60);
      fVar13 = *(float *)(lVar59 + 0x34 + lVar60);
      fVar14 = *(float *)(lVar59 + 0xc + lVar60);
      fVar15 = *(float *)(lVar59 + 4 + lVar60);
      fVar16 = *(float *)(lVar59 + lVar60);
      pfVar51 = (float *)(lVar19 + lVar59);
      *pfVar51 = fVar26 * fVar16 + fVar30 * fVar15 + fVar34 * fVar12 + fVar22 * fVar14;
      pfVar51[1] = fVar27 * fVar16 + fVar31 * fVar15 + fVar35 * fVar12 + fVar23 * fVar14;
      pfVar51[2] = fVar28 * fVar16 + fVar32 * fVar15 + fVar36 * fVar12 + fVar24 * fVar14;
      pfVar51[3] = fVar29 * fVar16 + fVar33 * fVar15 + fVar37 * fVar12 + fVar25 * fVar14;
      pfVar51 = (float *)(lVar19 + 0x10 + lVar59);
      *pfVar51 = fVar26 * fVar1 + fVar30 * fVar2 + fVar34 * fVar3 + fVar22 * fVar4;
      pfVar51[1] = fVar27 * fVar1 + fVar31 * fVar2 + fVar35 * fVar3 + fVar23 * fVar4;
      pfVar51[2] = fVar28 * fVar1 + fVar32 * fVar2 + fVar36 * fVar3 + fVar24 * fVar4;
      pfVar51[3] = fVar29 * fVar1 + fVar33 * fVar2 + fVar37 * fVar3 + fVar25 * fVar4;
      pfVar51 = (float *)(lVar19 + 0x20 + lVar59);
      *pfVar51 = fVar26 * fVar8 + fVar30 * fVar7 + fVar34 * fVar6 + fVar22 * fVar5;
      pfVar51[1] = fVar27 * fVar8 + fVar31 * fVar7 + fVar35 * fVar6 + fVar23 * fVar5;
      pfVar51[2] = fVar28 * fVar8 + fVar32 * fVar7 + fVar36 * fVar6 + fVar24 * fVar5;
      pfVar51[3] = fVar29 * fVar8 + fVar33 * fVar7 + fVar37 * fVar6 + fVar25 * fVar5;
      pfVar51 = (float *)(lVar19 + 0x30 + lVar59);
      *pfVar51 = fVar26 * fVar11 + fVar30 * fVar13 + fVar34 * fVar10 + fVar22 * fVar9;
      pfVar51[1] = fVar27 * fVar11 + fVar31 * fVar13 + fVar35 * fVar10 + fVar23 * fVar9;
      pfVar51[2] = fVar28 * fVar11 + fVar32 * fVar13 + fVar36 * fVar10 + fVar24 * fVar9;
      pfVar51[3] = fVar29 * fVar11 + fVar33 * fVar13 + fVar37 * fVar10 + fVar25 * fVar9;
      puVar47 = local_148;
    }
    uVar57 = uVar57 + 1;
    iVar21 = uVar57 + iVar45 * 0x11111111;
  } while( true );
}

