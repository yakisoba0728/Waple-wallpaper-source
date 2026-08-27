// Function: FUN_140388810
// Addr: 140388810
// Size: 5059 bytes


undefined8
FUN_140388810(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4,
             undefined4 *param_5,longlong param_6,undefined8 param_7)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined7 uVar6;
  undefined3 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  char cVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  byte bVar22;
  uint uVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  longlong lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined8 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  uint local_194;
  undefined1 local_178;
  undefined2 uStack_177;
  undefined1 uStack_175;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined2 local_158;
  undefined2 local_156;
  ulonglong local_150;
  longlong local_148;
  uint local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  ulonglong local_110;
  undefined1 local_108 [208];
  
  if ((uint)param_3 < *(uint *)(param_1 + 0x1c)) {
    uVar21 = 0;
    uVar5 = *param_5;
    uStack_174 = param_5[1];
    uStack_170 = param_5[2];
    uStack_16c = param_5[3];
    *(undefined4 *)(param_6 + 4) = 0;
    local_168 = *(undefined8 *)(param_5 + 4);
    local_178 = (undefined1)uVar5;
    uStack_177 = (undefined2)((uint)uVar5 >> 8);
    uStack_175 = (undefined1)((uint)uVar5 >> 0x18);
    uVar17 = FUN_1403d0210(uVar5,local_108,param_3,0);
    uVar40 = 0;
    uVar37 = 0;
    uVar36 = 0;
    lVar35 = param_6;
    cVar15 = FUN_140387630(uVar17,param_2,param_1,param_6,param_6,0,0,0,1,1,0,&local_178,param_7,0,0
                          );
    uVar5 = uStack_170;
    uVar13 = uStack_175;
    uVar11 = uStack_177;
    fVar10 = DAT_1404926c0;
    if (cVar15 != '\0') {
      uVar16 = *(int *)(param_6 + 4) - 4;
      if (*(int *)(param_6 + 4) != 4) {
        lVar24 = *(longlong *)(param_6 + 8);
        local_13c = uStack_170;
        uVar6 = CONCAT43(uStack_174,CONCAT12(uStack_175,uStack_177));
        uVar33 = (undefined4)uVar6;
        uVar34 = (undefined4)(CONCAT17((undefined1)uStack_170,uVar6) >> 0x20);
        local_194 = 0;
        local_178 = (undefined1)uStack_177;
        uStack_177 = (undefined2)(CONCAT12(uStack_175,uStack_177) >> 8);
        uVar12 = uStack_177;
        uStack_175 = (undefined1)uStack_174;
        uVar14 = uStack_175;
        uVar7 = (undefined3)((uint7)uVar6 >> 8);
        local_120 = CONCAT17((undefined1)uStack_170,CONCAT43(uVar34,uVar7));
        local_128 = CONCAT17((undefined1)uStack_170,CONCAT43(uVar34,uVar7));
        uVar27 = (undefined4)CONCAT43(uVar34,uVar7);
        uVar30 = (undefined4)((ulonglong)local_128 >> 0x20);
        uVar17 = CONCAT17((undefined1)uStack_170,CONCAT43(uVar34,uVar7));
        uVar8 = CONCAT17((undefined1)uStack_170,CONCAT43(uVar34,uVar7));
        local_158 = uStack_177;
        local_138 = uStack_170;
        local_134 = uStack_170;
        local_156 = uStack_177;
        local_118 = CONCAT17((undefined1)uStack_170,CONCAT43(uVar34,uVar7));
        local_130 = uStack_170;
        local_12c = uStack_170;
        uStack_174 = uVar34;
        local_148 = lVar24;
        do {
          uVar39 = (undefined4)((ulonglong)lVar35 >> 0x20);
          uVar42 = (undefined4)((ulonglong)uVar36 >> 0x20);
          uVar38 = (undefined4)((ulonglong)uVar37 >> 0x20);
          uVar41 = (undefined4)((ulonglong)uVar40 >> 0x20);
          uVar23 = (uint)uVar21;
          if ((*(byte *)(lVar24 + 8 + uVar21 * 0xc) & 1) == 0) {
            local_150 = CONCAT44(local_150._4_4_,uVar23);
            local_140 = uVar23;
            uVar18 = uVar21;
            while ((local_140 < uVar16 &&
                   (local_140 = (uint)uVar18, *(char *)(lVar24 + 9 + uVar18 * 0xc) == '\0'))) {
              local_140 = local_140 + 1;
              uVar18 = (ulonglong)local_140;
            }
            if (local_140 < uVar16) {
              uVar18 = (ulonglong)local_140;
              bVar22 = *(byte *)(lVar24 + 8 + uVar18 * 0xc) & 1;
              fVar32 = *(float *)(*param_4 + 0x50) * *(float *)(lVar24 + uVar18 * 0xc);
              fVar31 = *(float *)(*param_4 + 0x54) * *(float *)(lVar24 + 4 + uVar18 * 0xc);
              if ((char)param_4[2] == '\0') {
                if (bVar22 == 0) {
                  if (*(char *)((longlong)param_4 + 0x1c) == '\0') {
                    *(undefined2 *)((longlong)param_4 + 0x1d) = uVar12;
                    *(undefined1 *)((longlong)param_4 + 0x1f) = uVar14;
                    *(float *)(param_4 + 4) = fVar32;
                    *(float *)((longlong)param_4 + 0x24) = fVar31;
                    *(undefined1 *)((longlong)param_4 + 0x1c) = 1;
                  }
                  else {
                    plVar2 = (longlong *)param_4[1];
                    *(undefined2 *)((longlong)param_4 + 0x11) = local_158;
                    lVar9 = plVar2[2];
                    fVar25 = (fVar32 + *(float *)(param_4 + 4)) * fVar10;
                    *(undefined2 *)((longlong)param_4 + 0x35) = uVar12;
                    fVar28 = (fVar31 + *(float *)((longlong)param_4 + 0x24)) * fVar10;
                    *(undefined1 *)(param_4 + 2) = 1;
                    *(float *)((longlong)param_4 + 0x14) = fVar25;
                    *(float *)(param_4 + 7) = fVar32;
                    *(float *)(param_4 + 3) = fVar28;
                    *(float *)((longlong)param_4 + 0x3c) = fVar31;
                    *(undefined1 *)((longlong)param_4 + 0x13) = uVar14;
                    *(undefined1 *)((longlong)param_4 + 0x34) = 1;
                    *(undefined1 *)((longlong)param_4 + 0x37) = uVar14;
                    if ((int)lVar9 != 0) {
                      lVar9 = plVar2[1];
                      lVar3 = *plVar2;
                      if ((*(float *)((longlong)plVar2 + 0x14) !=
                           *(float *)((longlong)plVar2 + 0x1c)) ||
                         (*(float *)(plVar2 + 3) != *(float *)(plVar2 + 4))) {
                        uVar36 = 0;
                        if (*(longlong *)(lVar3 + 0x38) != 0) {
                          uVar36 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8);
                        }
                        lVar35 = CONCAT44(uVar39,(int)plVar2[3]);
                        (**(code **)(lVar3 + 0x18))
                                  (lVar3,lVar9,plVar2 + 2,*(float *)((longlong)plVar2 + 0x14),lVar35
                                   ,uVar36);
                      }
                      if (*(longlong *)(lVar3 + 0x38) == 0) {
                        uVar19 = 0;
                      }
                      else {
                        uVar19 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x20);
                      }
                      (**(code **)(lVar3 + 0x30))(lVar3,lVar9,plVar2 + 2,uVar19);
                      plVar2[2] = 0;
                      *(undefined4 *)(plVar2 + 4) = 0;
                      *(undefined4 *)(plVar2 + 3) = 0;
                    }
                    *(float *)((longlong)plVar2 + 0x1c) = fVar25;
                    *(float *)(plVar2 + 4) = fVar28;
                  }
                }
                else {
                  plVar2 = (longlong *)param_4[1];
                  *(undefined2 *)((longlong)param_4 + 0x11) = uVar12;
                  *(float *)((longlong)param_4 + 0x14) = fVar32;
                  *(float *)(param_4 + 3) = fVar31;
                  lVar9 = plVar2[2];
                  *(undefined1 *)(param_4 + 2) = 1;
                  *(undefined1 *)((longlong)param_4 + 0x13) = uVar14;
                  if ((int)lVar9 != 0) {
                    lVar9 = plVar2[1];
                    lVar3 = *plVar2;
                    if ((*(float *)((longlong)plVar2 + 0x14) != *(float *)((longlong)plVar2 + 0x1c))
                       || (*(float *)(plVar2 + 3) != *(float *)(plVar2 + 4))) {
                      uVar36 = 0;
                      if (*(longlong *)(lVar3 + 0x38) != 0) {
                        uVar36 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8);
                      }
                      lVar35 = CONCAT44(uVar39,(int)plVar2[3]);
                      (**(code **)(lVar3 + 0x18))
                                (lVar3,lVar9,plVar2 + 2,*(float *)((longlong)plVar2 + 0x14),lVar35,
                                 uVar36);
                    }
                    if (*(longlong *)(lVar3 + 0x38) == 0) {
                      uVar19 = 0;
                    }
                    else {
                      uVar19 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x20);
                    }
                    (**(code **)(lVar3 + 0x30))(lVar3,lVar9,plVar2 + 2,uVar19);
                    plVar2[2] = 0;
                    *(undefined4 *)(plVar2 + 4) = 0;
                    *(undefined4 *)(plVar2 + 3) = 0;
                  }
                  *(float *)((longlong)plVar2 + 0x1c) = fVar32;
                  *(float *)(plVar2 + 4) = fVar31;
                }
              }
              else if (*(char *)((longlong)param_4 + 0x34) == '\0') {
                if (bVar22 == 0) {
                  *(undefined2 *)((longlong)param_4 + 0x35) = uVar12;
                  *(undefined1 *)((longlong)param_4 + 0x37) = uVar14;
                  *(float *)(param_4 + 7) = fVar32;
                  *(float *)((longlong)param_4 + 0x3c) = fVar31;
                  *(undefined1 *)((longlong)param_4 + 0x34) = 1;
                }
                else {
                  plVar4 = (longlong *)param_4[1];
                  plVar2 = plVar4 + 2;
                  lVar24 = plVar4[1];
                  lVar9 = *plVar4;
                  if ((int)plVar4[2] == 0) {
                    uVar36 = 0;
                    if (*(undefined8 **)(lVar9 + 0x38) != (undefined8 *)0x0) {
                      uVar36 = **(undefined8 **)(lVar9 + 0x38);
                    }
                    uVar19 = CONCAT44(uVar39,(int)plVar4[4]);
                    (**(code **)(lVar9 + 0x10))
                              (lVar9,lVar24,plVar2,*(undefined4 *)((longlong)plVar4 + 0x1c),uVar19,
                               uVar36);
                    uVar39 = (undefined4)((ulonglong)uVar19 >> 0x20);
                    *(undefined4 *)((longlong)plVar4 + 0x14) =
                         *(undefined4 *)((longlong)plVar4 + 0x1c);
                    *(int *)(plVar4 + 3) = (int)plVar4[4];
                    *(undefined4 *)plVar2 = 1;
                  }
                  uVar36 = 0;
                  if (*(longlong *)(lVar9 + 0x38) != 0) {
                    uVar36 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 8);
                  }
                  lVar35 = CONCAT44(uVar39,fVar31);
                  (**(code **)(lVar9 + 0x18))(lVar9,lVar24,plVar2,fVar32,lVar35,uVar36);
                  *(float *)((longlong)plVar4 + 0x1c) = fVar32;
                  *(float *)(plVar4 + 4) = fVar31;
                  lVar24 = local_148;
                }
              }
              else {
                plVar4 = (longlong *)param_4[1];
                iVar1 = (int)plVar4[2];
                plVar2 = plVar4 + 2;
                fVar25 = *(float *)((longlong)param_4 + 0x3c);
                fVar28 = *(float *)(param_4 + 7);
                lVar24 = plVar4[1];
                lVar9 = *plVar4;
                if (bVar22 == 0) {
                  fVar26 = (fVar25 + fVar31) * fVar10;
                  fVar29 = (fVar28 + fVar32) * fVar10;
                  if (iVar1 == 0) {
                    uVar36 = 0;
                    if (*(undefined8 **)(lVar9 + 0x38) != (undefined8 *)0x0) {
                      uVar36 = **(undefined8 **)(lVar9 + 0x38);
                    }
                    uVar40 = CONCAT44(uVar39,(int)plVar4[4]);
                    (**(code **)(lVar9 + 0x10))
                              (lVar9,lVar24,plVar2,*(undefined4 *)((longlong)plVar4 + 0x1c),uVar40,
                               uVar36);
                    uVar39 = (undefined4)((ulonglong)uVar40 >> 0x20);
                    uVar42 = (undefined4)((ulonglong)uVar36 >> 0x20);
                    *(undefined4 *)((longlong)plVar4 + 0x14) =
                         *(undefined4 *)((longlong)plVar4 + 0x1c);
                    *(int *)(plVar4 + 3) = (int)plVar4[4];
                    *(undefined4 *)plVar2 = 1;
                  }
                  uVar40 = 0;
                  if (*(longlong *)(lVar9 + 0x38) != 0) {
                    uVar40 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 0x10);
                  }
                  uVar37 = CONCAT44(uVar38,fVar26);
                  uVar36 = CONCAT44(uVar42,fVar29);
                  lVar35 = CONCAT44(uVar39,fVar25);
                  (**(code **)(lVar9 + 0x20))
                            (lVar9,lVar24,plVar2,fVar28,lVar35,uVar36,uVar37,uVar40);
                  *(undefined2 *)((longlong)param_4 + 0x35) = uVar12;
                  *(undefined1 *)((longlong)param_4 + 0x37) = uVar14;
                  *(float *)((longlong)plVar4 + 0x1c) = fVar29;
                  *(float *)(plVar4 + 4) = fVar26;
                  *(float *)(param_4 + 7) = fVar32;
                  *(float *)((longlong)param_4 + 0x3c) = fVar31;
                  *(undefined1 *)((longlong)param_4 + 0x34) = 1;
                  lVar24 = local_148;
                }
                else {
                  if ((char)param_4[8] == '\0') {
                    if (iVar1 == 0) {
                      uVar36 = 0;
                      if (*(undefined8 **)(lVar9 + 0x38) != (undefined8 *)0x0) {
                        uVar36 = **(undefined8 **)(lVar9 + 0x38);
                      }
                      uVar40 = CONCAT44(uVar39,(int)plVar4[4]);
                      (**(code **)(lVar9 + 0x10))
                                (lVar9,lVar24,plVar2,*(undefined4 *)((longlong)plVar4 + 0x1c),uVar40
                                 ,uVar36);
                      uVar39 = (undefined4)((ulonglong)uVar40 >> 0x20);
                      uVar42 = (undefined4)((ulonglong)uVar36 >> 0x20);
                      *(undefined4 *)((longlong)plVar4 + 0x14) =
                           *(undefined4 *)((longlong)plVar4 + 0x1c);
                      *(int *)(plVar4 + 3) = (int)plVar4[4];
                      *(undefined4 *)plVar2 = 1;
                    }
                    uVar40 = 0;
                    if (*(longlong *)(lVar9 + 0x38) != 0) {
                      uVar40 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 0x10);
                    }
                    uVar37 = CONCAT44(uVar38,fVar31);
                    uVar36 = CONCAT44(uVar42,fVar32);
                    lVar35 = CONCAT44(uVar39,fVar25);
                    (**(code **)(lVar9 + 0x20))
                              (lVar9,lVar24,plVar2,fVar28,lVar35,uVar36,uVar37,uVar40);
                  }
                  else {
                    uVar18 = param_4[9];
                    if (iVar1 == 0) {
                      uVar36 = 0;
                      if (*(undefined8 **)(lVar9 + 0x38) != (undefined8 *)0x0) {
                        uVar36 = **(undefined8 **)(lVar9 + 0x38);
                      }
                      uVar40 = CONCAT44(uVar39,(int)plVar4[4]);
                      (**(code **)(lVar9 + 0x10))
                                (lVar9,lVar24,plVar2,*(undefined4 *)((longlong)plVar4 + 0x1c),uVar40
                                 ,uVar36);
                      uVar39 = (undefined4)((ulonglong)uVar40 >> 0x20);
                      uVar42 = (undefined4)((ulonglong)uVar36 >> 0x20);
                      *(undefined4 *)((longlong)plVar4 + 0x14) =
                           *(undefined4 *)((longlong)plVar4 + 0x1c);
                      *(int *)(plVar4 + 3) = (int)plVar4[4];
                      *(undefined4 *)plVar2 = 1;
                    }
                    uVar19 = 0;
                    if (*(longlong *)(lVar9 + 0x38) != 0) {
                      uVar19 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 0x18);
                    }
                    uVar40 = CONCAT44(uVar41,fVar32);
                    uVar37 = CONCAT44(uVar38,fVar25);
                    uVar36 = CONCAT44(uVar42,fVar28);
                    lVar35 = CONCAT44(uVar39,(int)uVar18);
                    (**(code **)(lVar9 + 0x28))
                              (lVar9,lVar24,plVar2,*(undefined4 *)((longlong)param_4 + 0x44),lVar35,
                               uVar36,uVar37,uVar40,fVar31,uVar19);
                    *(undefined8 *)((longlong)param_4 + 0x41) = local_120;
                    *(undefined4 *)(param_4 + 9) = local_138;
                    *(undefined1 *)(param_4 + 8) = 0;
                  }
                  *(float *)((longlong)plVar4 + 0x1c) = fVar32;
                  *(float *)(plVar4 + 4) = fVar31;
                  *(ulonglong *)((longlong)param_4 + 0x35) = CONCAT44(uVar30,uVar27);
                  *(undefined4 *)((longlong)param_4 + 0x3c) = local_134;
                  *(undefined1 *)((longlong)param_4 + 0x34) = 0;
                  lVar24 = local_148;
                }
              }
            }
            uVar19 = local_118;
            uVar23 = (uint)local_150;
            uVar18 = local_150;
            if ((uint)local_150 < local_140) {
              local_110 = *param_4;
              do {
                uVar34 = (undefined4)((ulonglong)uVar36 >> 0x20);
                uVar27 = (undefined4)((ulonglong)uVar37 >> 0x20);
                uVar30 = (undefined4)((ulonglong)uVar40 >> 0x20);
                bVar22 = *(byte *)(lVar24 + 8 + uVar21 * 0xc) & 1;
                fVar32 = *(float *)(lVar24 + uVar21 * 0xc) * *(float *)(local_110 + 0x50);
                fVar31 = *(float *)(lVar24 + 4 + uVar21 * 0xc) * *(float *)(local_110 + 0x54);
                uVar33 = (undefined4)((ulonglong)lVar35 >> 0x20);
                local_150 = uVar21;
                if ((char)param_4[2] == '\0') {
                  if (bVar22 == 0) {
                    if (*(char *)((longlong)param_4 + 0x1c) == '\0') {
                      *(undefined2 *)((longlong)param_4 + 0x1d) = uVar12;
                      *(undefined1 *)((longlong)param_4 + 0x1f) = uVar14;
                      *(float *)(param_4 + 4) = fVar32;
                      *(float *)((longlong)param_4 + 0x24) = fVar31;
                      *(undefined1 *)((longlong)param_4 + 0x1c) = 1;
                    }
                    else {
                      plVar2 = (longlong *)param_4[1];
                      *(undefined2 *)((longlong)param_4 + 0x11) = local_156;
                      lVar9 = plVar2[2];
                      *(undefined1 *)((longlong)param_4 + 0x13) = uVar14;
                      *(undefined2 *)((longlong)param_4 + 0x35) = uVar12;
                      fVar25 = (fVar32 + *(float *)(param_4 + 4)) * fVar10;
                      *(undefined1 *)(param_4 + 2) = 1;
                      fVar28 = (fVar31 + *(float *)((longlong)param_4 + 0x24)) * fVar10;
                      *(undefined1 *)((longlong)param_4 + 0x34) = 1;
                      *(float *)((longlong)param_4 + 0x14) = fVar25;
                      *(float *)(param_4 + 7) = fVar32;
                      *(float *)(param_4 + 3) = fVar28;
                      *(float *)((longlong)param_4 + 0x3c) = fVar31;
                      *(undefined1 *)((longlong)param_4 + 0x37) = uVar14;
                      if ((int)lVar9 != 0) {
                        lVar9 = plVar2[1];
                        lVar3 = *plVar2;
                        if ((*(float *)((longlong)plVar2 + 0x14) !=
                             *(float *)((longlong)plVar2 + 0x1c)) ||
                           (*(float *)(plVar2 + 3) != *(float *)(plVar2 + 4))) {
                          uVar36 = 0;
                          if (*(longlong *)(lVar3 + 0x38) != 0) {
                            uVar36 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8);
                          }
                          lVar35 = CONCAT44(uVar33,(int)plVar2[3]);
                          (**(code **)(lVar3 + 0x18))
                                    (lVar3,lVar9,plVar2 + 2,*(float *)((longlong)plVar2 + 0x14),
                                     lVar35,uVar36);
                        }
                        if (*(longlong *)(lVar3 + 0x38) == 0) {
                          uVar20 = 0;
                        }
                        else {
                          uVar20 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x20);
                        }
                        (**(code **)(lVar3 + 0x30))(lVar3,lVar9,plVar2 + 2,uVar20);
                        *(undefined4 *)(plVar2 + 3) = 0;
                        plVar2[2] = 0;
                        *(undefined4 *)(plVar2 + 4) = 0;
                      }
                      *(float *)((longlong)plVar2 + 0x1c) = fVar25;
                      *(float *)(plVar2 + 4) = fVar28;
                    }
                  }
                  else {
                    plVar2 = (longlong *)param_4[1];
                    *(undefined2 *)((longlong)param_4 + 0x11) = uVar12;
                    *(float *)((longlong)param_4 + 0x14) = fVar32;
                    lVar9 = plVar2[2];
                    *(float *)(param_4 + 3) = fVar31;
                    *(undefined1 *)(param_4 + 2) = 1;
                    *(undefined1 *)((longlong)param_4 + 0x13) = uVar14;
                    if ((int)lVar9 != 0) {
                      lVar9 = plVar2[1];
                      lVar3 = *plVar2;
                      if ((*(float *)((longlong)plVar2 + 0x14) !=
                           *(float *)((longlong)plVar2 + 0x1c)) ||
                         (*(float *)(plVar2 + 3) != *(float *)(plVar2 + 4))) {
                        uVar36 = 0;
                        if (*(longlong *)(lVar3 + 0x38) != 0) {
                          uVar36 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8);
                        }
                        lVar35 = CONCAT44(uVar33,(int)plVar2[3]);
                        (**(code **)(lVar3 + 0x18))
                                  (lVar3,lVar9,plVar2 + 2,*(float *)((longlong)plVar2 + 0x14),lVar35
                                   ,uVar36);
                      }
                      (**(code **)(lVar3 + 0x30))(lVar3,lVar9,plVar2 + 2);
                      plVar2[2] = 0;
                      *(undefined4 *)(plVar2 + 4) = 0;
                      *(undefined4 *)(plVar2 + 3) = 0;
                    }
                    *(float *)((longlong)plVar2 + 0x1c) = fVar32;
                    *(float *)(plVar2 + 4) = fVar31;
                  }
                }
                else if (*(char *)((longlong)param_4 + 0x34) == '\0') {
                  if (bVar22 == 0) {
                    *(undefined2 *)((longlong)param_4 + 0x35) = uVar12;
                    *(undefined1 *)((longlong)param_4 + 0x37) = uVar14;
                    *(float *)(param_4 + 7) = fVar32;
                    *(float *)((longlong)param_4 + 0x3c) = fVar31;
                    *(undefined1 *)((longlong)param_4 + 0x34) = 1;
                  }
                  else {
                    plVar4 = (longlong *)param_4[1];
                    plVar2 = plVar4 + 2;
                    lVar24 = plVar4[1];
                    lVar9 = *plVar4;
                    if ((int)plVar4[2] == 0) {
                      uVar36 = 0;
                      if (*(undefined8 **)(lVar9 + 0x38) != (undefined8 *)0x0) {
                        uVar36 = **(undefined8 **)(lVar9 + 0x38);
                      }
                      uVar20 = CONCAT44(uVar33,(int)plVar4[4]);
                      (**(code **)(lVar9 + 0x10))
                                (lVar9,lVar24,plVar2,*(undefined4 *)((longlong)plVar4 + 0x1c),uVar20
                                 ,uVar36);
                      uVar33 = (undefined4)((ulonglong)uVar20 >> 0x20);
                      *(undefined4 *)((longlong)plVar4 + 0x14) =
                           *(undefined4 *)((longlong)plVar4 + 0x1c);
                      *(int *)(plVar4 + 3) = (int)plVar4[4];
                      *(undefined4 *)plVar2 = 1;
                    }
                    uVar36 = 0;
                    if (*(longlong *)(lVar9 + 0x38) != 0) {
                      uVar36 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 8);
                    }
                    lVar35 = CONCAT44(uVar33,fVar31);
                    (**(code **)(lVar9 + 0x18))(lVar9,lVar24,plVar2,fVar32,lVar35,uVar36);
                    *(float *)((longlong)plVar4 + 0x1c) = fVar32;
                    *(float *)(plVar4 + 4) = fVar31;
                    lVar24 = local_148;
                  }
                }
                else {
                  plVar4 = (longlong *)param_4[1];
                  iVar1 = (int)plVar4[2];
                  plVar2 = plVar4 + 2;
                  fVar25 = *(float *)((longlong)param_4 + 0x3c);
                  fVar28 = *(float *)(param_4 + 7);
                  lVar24 = plVar4[1];
                  lVar9 = *plVar4;
                  if (bVar22 == 0) {
                    fVar26 = (fVar31 + fVar25) * fVar10;
                    fVar29 = (fVar28 + fVar32) * fVar10;
                    if (iVar1 == 0) {
                      uVar36 = 0;
                      if (*(undefined8 **)(lVar9 + 0x38) != (undefined8 *)0x0) {
                        uVar36 = **(undefined8 **)(lVar9 + 0x38);
                      }
                      uVar40 = CONCAT44(uVar33,(int)plVar4[4]);
                      (**(code **)(lVar9 + 0x10))
                                (lVar9,lVar24,plVar2,*(undefined4 *)((longlong)plVar4 + 0x1c),uVar40
                                 ,uVar36);
                      uVar33 = (undefined4)((ulonglong)uVar40 >> 0x20);
                      uVar34 = (undefined4)((ulonglong)uVar36 >> 0x20);
                      *(undefined4 *)((longlong)plVar4 + 0x14) =
                           *(undefined4 *)((longlong)plVar4 + 0x1c);
                      *(int *)(plVar4 + 3) = (int)plVar4[4];
                      *(undefined4 *)plVar2 = 1;
                    }
                    uVar40 = 0;
                    if (*(longlong *)(lVar9 + 0x38) != 0) {
                      uVar40 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 0x10);
                    }
                    uVar37 = CONCAT44(uVar27,fVar26);
                    uVar36 = CONCAT44(uVar34,fVar29);
                    lVar35 = CONCAT44(uVar33,fVar25);
                    (**(code **)(lVar9 + 0x20))
                              (lVar9,lVar24,plVar2,fVar28,lVar35,uVar36,uVar37,uVar40);
                    *(undefined2 *)((longlong)param_4 + 0x35) = uVar12;
                    *(undefined1 *)((longlong)param_4 + 0x37) = uVar14;
                    *(float *)((longlong)plVar4 + 0x1c) = fVar29;
                    *(float *)(plVar4 + 4) = fVar26;
                    *(float *)(param_4 + 7) = fVar32;
                    *(float *)((longlong)param_4 + 0x3c) = fVar31;
                    *(undefined1 *)((longlong)param_4 + 0x34) = 1;
                    lVar24 = local_148;
                  }
                  else {
                    if ((char)param_4[8] == '\0') {
                      if (iVar1 == 0) {
                        uVar36 = 0;
                        if (*(undefined8 **)(lVar9 + 0x38) != (undefined8 *)0x0) {
                          uVar36 = **(undefined8 **)(lVar9 + 0x38);
                        }
                        uVar40 = CONCAT44(uVar33,(int)plVar4[4]);
                        (**(code **)(lVar9 + 0x10))
                                  (lVar9,lVar24,plVar2,*(undefined4 *)((longlong)plVar4 + 0x1c),
                                   uVar40,uVar36);
                        uVar33 = (undefined4)((ulonglong)uVar40 >> 0x20);
                        uVar34 = (undefined4)((ulonglong)uVar36 >> 0x20);
                        *(undefined4 *)((longlong)plVar4 + 0x14) =
                             *(undefined4 *)((longlong)plVar4 + 0x1c);
                        *(int *)(plVar4 + 3) = (int)plVar4[4];
                        *(undefined4 *)plVar2 = 1;
                      }
                      uVar40 = 0;
                      if (*(longlong *)(lVar9 + 0x38) != 0) {
                        uVar40 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 0x10);
                      }
                      uVar37 = CONCAT44(uVar27,fVar31);
                      uVar36 = CONCAT44(uVar34,fVar32);
                      lVar35 = CONCAT44(uVar33,fVar25);
                      (**(code **)(lVar9 + 0x20))
                                (lVar9,lVar24,plVar2,fVar28,lVar35,uVar36,uVar37,uVar40);
                    }
                    else {
                      uVar21 = param_4[9];
                      if (iVar1 == 0) {
                        uVar36 = 0;
                        if (*(undefined8 **)(lVar9 + 0x38) != (undefined8 *)0x0) {
                          uVar36 = **(undefined8 **)(lVar9 + 0x38);
                        }
                        uVar40 = CONCAT44(uVar33,(int)plVar4[4]);
                        (**(code **)(lVar9 + 0x10))
                                  (lVar9,lVar24,plVar2,*(undefined4 *)((longlong)plVar4 + 0x1c),
                                   uVar40,uVar36);
                        uVar33 = (undefined4)((ulonglong)uVar40 >> 0x20);
                        uVar34 = (undefined4)((ulonglong)uVar36 >> 0x20);
                        *(undefined4 *)((longlong)plVar4 + 0x14) =
                             *(undefined4 *)((longlong)plVar4 + 0x1c);
                        *(int *)(plVar4 + 3) = (int)plVar4[4];
                        *(undefined4 *)plVar2 = 1;
                      }
                      uVar20 = 0;
                      if (*(longlong *)(lVar9 + 0x38) != 0) {
                        uVar20 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 0x18);
                      }
                      uVar40 = CONCAT44(uVar30,fVar32);
                      uVar37 = CONCAT44(uVar27,fVar25);
                      uVar36 = CONCAT44(uVar34,fVar28);
                      lVar35 = CONCAT44(uVar33,(int)uVar21);
                      (**(code **)(lVar9 + 0x28))
                                (lVar9,lVar24,plVar2,*(undefined4 *)((longlong)param_4 + 0x44),
                                 lVar35,uVar36,uVar37,uVar40,fVar31,uVar20);
                      *(undefined8 *)((longlong)param_4 + 0x41) = uVar19;
                      *(undefined4 *)(param_4 + 9) = local_130;
                      *(undefined1 *)(param_4 + 8) = 0;
                    }
                    *(float *)((longlong)plVar4 + 0x1c) = fVar32;
                    *(float *)(plVar4 + 4) = fVar31;
                    *(undefined8 *)((longlong)param_4 + 0x35) = uVar8;
                    *(undefined4 *)((longlong)param_4 + 0x3c) = local_12c;
                    *(undefined1 *)((longlong)param_4 + 0x34) = 0;
                    lVar24 = local_148;
                  }
                }
                uVar23 = uVar23 + 1;
                uVar21 = local_150 + 1;
              } while (uVar23 < local_140);
              uVar33 = CONCAT13(uStack_175,CONCAT21(uStack_177,local_178));
              uVar34 = uStack_174;
              uVar18 = uVar21;
            }
            local_150 = uVar18;
            FUN_1403b70d0(param_4);
LAB_140389b10:
            uVar27 = (undefined4)local_128;
            uVar30 = (undefined4)((ulonglong)local_128 >> 0x20);
          }
          else if (uVar23 < uVar16) {
            local_150 = *param_4;
            do {
              uVar30 = (undefined4)((ulonglong)uVar36 >> 0x20);
              uVar39 = (undefined4)((ulonglong)uVar37 >> 0x20);
              uVar42 = (undefined4)((ulonglong)uVar40 >> 0x20);
              bVar22 = *(byte *)(lVar24 + 8 + uVar21 * 0xc) & 1;
              fVar32 = *(float *)(lVar24 + uVar21 * 0xc) * *(float *)(local_150 + 0x50);
              fVar31 = *(float *)(lVar24 + 4 + uVar21 * 0xc) * *(float *)(local_150 + 0x54);
              uVar27 = (undefined4)((ulonglong)lVar35 >> 0x20);
              if ((char)param_4[2] == '\0') {
                if (bVar22 == 0) {
                  if (*(char *)((longlong)param_4 + 0x1c) == '\0') {
                    *(undefined2 *)((longlong)param_4 + 0x1d) = uVar11;
                    *(undefined1 *)((longlong)param_4 + 0x1f) = uVar13;
                    *(float *)(param_4 + 4) = fVar32;
                    *(float *)((longlong)param_4 + 0x24) = fVar31;
                    *(undefined1 *)((longlong)param_4 + 0x1c) = 1;
                  }
                  else {
                    plVar2 = (longlong *)param_4[1];
                    lVar9 = plVar2[2];
                    *(undefined2 *)((longlong)param_4 + 0x11) = uVar11;
                    fVar25 = (fVar32 + *(float *)(param_4 + 4)) * fVar10;
                    *(undefined2 *)((longlong)param_4 + 0x35) = uVar11;
                    fVar28 = (fVar31 + *(float *)((longlong)param_4 + 0x24)) * fVar10;
                    *(undefined1 *)(param_4 + 2) = 1;
                    *(float *)((longlong)param_4 + 0x14) = fVar25;
                    *(float *)(param_4 + 7) = fVar32;
                    *(float *)(param_4 + 3) = fVar28;
                    *(float *)((longlong)param_4 + 0x3c) = fVar31;
                    *(undefined1 *)((longlong)param_4 + 0x13) = uVar13;
                    *(undefined1 *)((longlong)param_4 + 0x34) = 1;
                    *(undefined1 *)((longlong)param_4 + 0x37) = uVar13;
                    if ((int)lVar9 != 0) {
                      lVar9 = plVar2[1];
                      lVar3 = *plVar2;
                      if ((*(float *)((longlong)plVar2 + 0x14) !=
                           *(float *)((longlong)plVar2 + 0x1c)) ||
                         (*(float *)(plVar2 + 3) != *(float *)(plVar2 + 4))) {
                        uVar36 = 0;
                        if (*(longlong *)(lVar3 + 0x38) != 0) {
                          uVar36 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8);
                        }
                        lVar35 = CONCAT44(uVar27,(int)plVar2[3]);
                        (**(code **)(lVar3 + 0x18))
                                  (lVar3,lVar9,plVar2 + 2,*(float *)((longlong)plVar2 + 0x14),lVar35
                                   ,uVar36);
                      }
                      if (*(longlong *)(lVar3 + 0x38) == 0) {
                        uVar19 = 0;
                      }
                      else {
                        uVar19 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x20);
                      }
                      (**(code **)(lVar3 + 0x30))(lVar3,lVar9,plVar2 + 2,uVar19);
                      *(undefined4 *)(plVar2 + 3) = 0;
                      uVar21 = (ulonglong)local_194;
                      plVar2[2] = 0;
                      *(undefined4 *)(plVar2 + 4) = 0;
                    }
                    *(float *)((longlong)plVar2 + 0x1c) = fVar25;
                    *(float *)(plVar2 + 4) = fVar28;
                  }
                }
                else {
                  plVar2 = (longlong *)param_4[1];
                  *(undefined2 *)((longlong)param_4 + 0x11) = uVar11;
                  *(float *)((longlong)param_4 + 0x14) = fVar32;
                  *(float *)(param_4 + 3) = fVar31;
                  lVar9 = plVar2[2];
                  *(undefined1 *)(param_4 + 2) = 1;
                  *(undefined1 *)((longlong)param_4 + 0x13) = uVar13;
                  if ((int)lVar9 != 0) {
                    lVar9 = plVar2[1];
                    lVar3 = *plVar2;
                    if ((*(float *)((longlong)plVar2 + 0x14) != *(float *)((longlong)plVar2 + 0x1c))
                       || (*(float *)(plVar2 + 3) != *(float *)(plVar2 + 4))) {
                      uVar36 = 0;
                      if (*(longlong *)(lVar3 + 0x38) != 0) {
                        uVar36 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8);
                      }
                      lVar35 = CONCAT44(uVar27,(int)plVar2[3]);
                      (**(code **)(lVar3 + 0x18))
                                (lVar3,lVar9,plVar2 + 2,*(float *)((longlong)plVar2 + 0x14),lVar35,
                                 uVar36);
                    }
                    if (*(longlong *)(lVar3 + 0x38) == 0) {
                      uVar19 = 0;
                    }
                    else {
                      uVar19 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x20);
                    }
                    (**(code **)(lVar3 + 0x30))(lVar3,lVar9,plVar2 + 2,uVar19);
                    plVar2[2] = 0;
                    *(undefined4 *)(plVar2 + 4) = 0;
                    *(undefined4 *)(plVar2 + 3) = 0;
                  }
                  uVar21 = (ulonglong)local_194;
                  *(float *)((longlong)plVar2 + 0x1c) = fVar32;
                  *(float *)(plVar2 + 4) = fVar31;
                }
              }
              else if (*(char *)((longlong)param_4 + 0x34) == '\0') {
                if (bVar22 == 0) {
                  *(undefined2 *)((longlong)param_4 + 0x35) = uVar11;
                  *(undefined1 *)((longlong)param_4 + 0x37) = uVar13;
                  *(float *)(param_4 + 7) = fVar32;
                  *(float *)((longlong)param_4 + 0x3c) = fVar31;
                  *(undefined1 *)((longlong)param_4 + 0x34) = 1;
                }
                else {
                  plVar4 = (longlong *)param_4[1];
                  plVar2 = plVar4 + 2;
                  lVar24 = plVar4[1];
                  lVar9 = *plVar4;
                  if ((int)plVar4[2] == 0) {
                    uVar36 = 0;
                    if (*(undefined8 **)(lVar9 + 0x38) != (undefined8 *)0x0) {
                      uVar36 = **(undefined8 **)(lVar9 + 0x38);
                    }
                    uVar19 = CONCAT44(uVar27,(int)plVar4[4]);
                    (**(code **)(lVar9 + 0x10))
                              (lVar9,lVar24,plVar2,*(undefined4 *)((longlong)plVar4 + 0x1c),uVar19,
                               uVar36);
                    uVar27 = (undefined4)((ulonglong)uVar19 >> 0x20);
                    *(undefined4 *)((longlong)plVar4 + 0x14) =
                         *(undefined4 *)((longlong)plVar4 + 0x1c);
                    *(int *)(plVar4 + 3) = (int)plVar4[4];
                    *(undefined4 *)plVar2 = 1;
                  }
                  uVar36 = 0;
                  if (*(longlong *)(lVar9 + 0x38) != 0) {
                    uVar36 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 8);
                  }
                  lVar35 = CONCAT44(uVar27,fVar31);
                  (**(code **)(lVar9 + 0x18))(lVar9,lVar24,plVar2,fVar32,lVar35,uVar36);
                  uVar21 = (ulonglong)local_194;
                  *(float *)((longlong)plVar4 + 0x1c) = fVar32;
                  *(float *)(plVar4 + 4) = fVar31;
                  lVar24 = local_148;
                }
              }
              else {
                plVar4 = (longlong *)param_4[1];
                iVar1 = (int)plVar4[2];
                plVar2 = plVar4 + 2;
                fVar25 = *(float *)((longlong)param_4 + 0x3c);
                fVar28 = *(float *)(param_4 + 7);
                lVar24 = plVar4[1];
                lVar9 = *plVar4;
                if (bVar22 == 0) {
                  fVar26 = (fVar31 + fVar25) * fVar10;
                  fVar29 = (fVar32 + fVar28) * fVar10;
                  if (iVar1 == 0) {
                    uVar36 = 0;
                    if (*(undefined8 **)(lVar9 + 0x38) != (undefined8 *)0x0) {
                      uVar36 = **(undefined8 **)(lVar9 + 0x38);
                    }
                    uVar40 = CONCAT44(uVar27,(int)plVar4[4]);
                    (**(code **)(lVar9 + 0x10))
                              (lVar9,lVar24,plVar2,*(undefined4 *)((longlong)plVar4 + 0x1c),uVar40,
                               uVar36);
                    uVar27 = (undefined4)((ulonglong)uVar40 >> 0x20);
                    uVar30 = (undefined4)((ulonglong)uVar36 >> 0x20);
                    *(undefined4 *)((longlong)plVar4 + 0x14) =
                         *(undefined4 *)((longlong)plVar4 + 0x1c);
                    *(int *)(plVar4 + 3) = (int)plVar4[4];
                    *(undefined4 *)plVar2 = 1;
                  }
                  uVar40 = 0;
                  if (*(longlong *)(lVar9 + 0x38) != 0) {
                    uVar40 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 0x10);
                  }
                  uVar37 = CONCAT44(uVar39,fVar26);
                  uVar36 = CONCAT44(uVar30,fVar29);
                  lVar35 = CONCAT44(uVar27,fVar25);
                  (**(code **)(lVar9 + 0x20))
                            (lVar9,lVar24,plVar2,fVar28,lVar35,uVar36,uVar37,uVar40);
                  uVar21 = (ulonglong)local_194;
                  *(undefined2 *)((longlong)param_4 + 0x35) = uVar11;
                  *(undefined1 *)((longlong)param_4 + 0x37) = uVar13;
                  *(float *)((longlong)plVar4 + 0x1c) = fVar29;
                  *(float *)(plVar4 + 4) = fVar26;
                  *(float *)(param_4 + 7) = fVar32;
                  *(float *)((longlong)param_4 + 0x3c) = fVar31;
                  *(undefined1 *)((longlong)param_4 + 0x34) = 1;
                  lVar24 = local_148;
                }
                else {
                  if ((char)param_4[8] == '\0') {
                    if (iVar1 == 0) {
                      uVar36 = 0;
                      if (*(undefined8 **)(lVar9 + 0x38) != (undefined8 *)0x0) {
                        uVar36 = **(undefined8 **)(lVar9 + 0x38);
                      }
                      uVar40 = CONCAT44(uVar27,(int)plVar4[4]);
                      (**(code **)(lVar9 + 0x10))
                                (lVar9,lVar24,plVar2,*(undefined4 *)((longlong)plVar4 + 0x1c),uVar40
                                 ,uVar36);
                      uVar27 = (undefined4)((ulonglong)uVar40 >> 0x20);
                      uVar30 = (undefined4)((ulonglong)uVar36 >> 0x20);
                      *(undefined4 *)((longlong)plVar4 + 0x14) =
                           *(undefined4 *)((longlong)plVar4 + 0x1c);
                      *(int *)(plVar4 + 3) = (int)plVar4[4];
                      *(undefined4 *)plVar2 = 1;
                    }
                    uVar40 = 0;
                    if (*(longlong *)(lVar9 + 0x38) != 0) {
                      uVar40 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 0x10);
                    }
                    uVar37 = CONCAT44(uVar39,fVar31);
                    uVar36 = CONCAT44(uVar30,fVar32);
                    lVar35 = CONCAT44(uVar27,fVar25);
                    (**(code **)(lVar9 + 0x20))
                              (lVar9,lVar24,plVar2,fVar28,lVar35,uVar36,uVar37,uVar40);
                  }
                  else {
                    uVar21 = param_4[9];
                    if (iVar1 == 0) {
                      uVar36 = 0;
                      if (*(undefined8 **)(lVar9 + 0x38) != (undefined8 *)0x0) {
                        uVar36 = **(undefined8 **)(lVar9 + 0x38);
                      }
                      uVar40 = CONCAT44(uVar27,(int)plVar4[4]);
                      (**(code **)(lVar9 + 0x10))
                                (lVar9,lVar24,plVar2,*(undefined4 *)((longlong)plVar4 + 0x1c),uVar40
                                 ,uVar36);
                      uVar27 = (undefined4)((ulonglong)uVar40 >> 0x20);
                      uVar30 = (undefined4)((ulonglong)uVar36 >> 0x20);
                      *(undefined4 *)((longlong)plVar4 + 0x14) =
                           *(undefined4 *)((longlong)plVar4 + 0x1c);
                      *(int *)(plVar4 + 3) = (int)plVar4[4];
                      *(undefined4 *)plVar2 = 1;
                    }
                    uVar19 = 0;
                    if (*(longlong *)(lVar9 + 0x38) != 0) {
                      uVar19 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 0x18);
                    }
                    uVar40 = CONCAT44(uVar42,fVar32);
                    uVar37 = CONCAT44(uVar39,fVar25);
                    uVar36 = CONCAT44(uVar30,fVar28);
                    lVar35 = CONCAT44(uVar27,(int)uVar21);
                    (**(code **)(lVar9 + 0x28))
                              (lVar9,lVar24,plVar2,*(undefined4 *)((longlong)param_4 + 0x44),lVar35,
                               uVar36,uVar37,uVar40,fVar31,uVar19);
                    *(ulonglong *)((longlong)param_4 + 0x41) = CONCAT44(uVar34,uVar33);
                    *(undefined4 *)(param_4 + 9) = local_13c;
                    *(undefined1 *)(param_4 + 8) = 0;
                  }
                  uVar21 = (ulonglong)local_194;
                  *(float *)((longlong)plVar4 + 0x1c) = fVar32;
                  *(float *)(plVar4 + 4) = fVar31;
                  *(undefined8 *)((longlong)param_4 + 0x35) = uVar17;
                  *(undefined4 *)((longlong)param_4 + 0x3c) = uVar5;
                  *(undefined1 *)((longlong)param_4 + 0x34) = 0;
                  lVar24 = local_148;
                }
              }
              uVar23 = (uint)uVar21;
              if (*(char *)(lVar24 + 9 + uVar21 * 0xc) != '\0') {
                FUN_1403b70d0(param_4);
                break;
              }
              uVar23 = uVar23 + 1;
              uVar21 = (ulonglong)uVar23;
              local_194 = uVar23;
            } while (uVar23 < uVar16);
            goto LAB_140389b10;
          }
          local_194 = uVar23 + 1;
          uVar21 = (ulonglong)local_194;
        } while (local_194 < uVar16);
      }
      return 1;
    }
  }
  return 0;
}

