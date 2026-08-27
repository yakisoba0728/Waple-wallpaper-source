// Function: FUN_1400bd3f0
// Addr: 1400bd3f0
// Size: 2761 bytes


char * FUN_1400bd3f0(longlong param_1,uint *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  char *pcVar7;
  byte *pbVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  longlong lVar36;
  byte bVar37;
  uint uVar38;
  byte *pbVar39;
  char *pcVar40;
  code *pcVar41;
  byte *pbVar42;
  byte bVar43;
  ulonglong uVar44;
  byte *pbVar45;
  char cVar46;
  ulonglong uVar47;
  byte *pbVar48;
  byte *pbVar49;
  ulonglong uVar50;
  byte *pbVar51;
  uint uVar52;
  char cVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  byte local_res10;
  uint local_res20;
  undefined8 uVar70;
  undefined8 local_118;
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  ulonglong local_f8;
  byte *local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  char *local_c8;
  char *local_c0;
  byte *local_b8;
  byte *local_b0;
  ulonglong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  byte *local_78;
  byte *local_70;
  byte *local_68;
  byte *local_60;
  byte *local_58;
  byte *local_50;
  
  local_118 = 0;
  local_98 = (byte *)0x0;
  uStack_90 = (byte *)0x0;
  if (param_2 == (uint *)0x0) {
    uVar47 = 0;
LAB_1400bd44e:
    uVar52 = (&DAT_140482a50)[(uint)(uVar47 >> 0xc) & 0xf] +
             (&DAT_140482a50)[(uint)(uVar47 >> 8) & 0xf] +
             (&DAT_140482a50)[(uint)(uVar47 >> 4) & 0xf] + (&DAT_140482a50)[(uint)uVar47 & 0xf];
    if ((uVar52 & 7) != 0) {
      return "#base: unsupported option";
    }
    local_f8 = (ulonglong)(uVar52 >> 3);
    if (param_2 != (uint *)0x0) goto LAB_1400bd4b4;
LAB_1400bd4db:
    local_110 = param_1 + 0xa5b8;
    if (param_2 == (uint *)0x0) {
      local_d8 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d0 = 0;
      goto LAB_1400bd50d;
    }
  }
  else {
    uVar47 = (ulonglong)*param_2;
    if ((*param_2 & 0x30000) == 0) goto LAB_1400bd44e;
    local_f8 = 0;
LAB_1400bd4b4:
    if ((((*param_2 & 0x40000) == 0) || (*(longlong *)(param_2 + 0x1e) != 0x400)) ||
       (*(longlong *)(param_2 + 0x20) != 1)) goto LAB_1400bd4db;
    local_110 = *(longlong *)(param_2 + 0x1c);
  }
  local_d8 = *(longlong *)(param_2 + 4);
  local_e8 = *(ulonglong *)(param_2 + 6);
  local_e0 = *(ulonglong *)(param_2 + 8);
  local_d0 = *(longlong *)(param_2 + 10);
LAB_1400bd50d:
  local_f0 = (byte *)0x1;
  if (7 < *(byte *)(param_1 + 0x60)) {
    local_f0 = (byte *)((ulonglong)(byte)(&DAT_1404795f0)[*(byte *)(param_1 + 0x61)] *
                       (ulonglong)(*(byte *)(param_1 + 0x60) >> 3));
  }
  if (*(char *)(param_1 + 0x78) == 'I') {
    uVar47 = (ulonglong)(byte)(&DAT_1404798c5)[(ulonglong)*(byte *)(param_1 + 99) * 6];
  }
  else {
    uVar47 = (ulonglong)*(uint *)(param_1 + 0xa4);
  }
  local_res20 = (uint)uVar47;
  if (*(uint *)(param_1 + 0xac) <= local_res20) {
    return (char *)0x0;
  }
  plVar1 = (longlong *)(param_1 + 0x118);
  local_a8 = *(uint *)(param_1 + 0xa8) * local_f8;
  local_res10 = 0;
  local_c8 = &DAT_00000020;
  local_c0 = (char *)0x30;
  uVar54 = 0;
  uVar55 = 0;
  uVar56 = 0;
  uVar57 = 0;
  uVar58 = 0;
  uVar59 = 0;
  uVar60 = 0;
  uVar61 = 0;
  uVar62 = 0;
  uVar63 = 0;
  uVar64 = 0;
  uVar65 = 0;
  uVar66 = 0;
  uVar67 = 0;
  uVar68 = 0;
  uVar69 = 0;
  do {
    if (uVar47 < local_e0) {
      local_100 = local_d0 * uVar47 + local_d8;
      uVar47 = local_e8;
      if (local_a8 < local_e8) {
        uVar47 = local_a8;
      }
    }
    else {
      local_100 = 0;
      uVar47 = 0;
    }
    if (param_3[1] == 0) {
LAB_1400bde9d:
      return "#png: internal error: inconsistent workbuf length";
    }
    pcVar7 = (char *)*param_3;
    pbVar51 = (byte *)(param_3[1] + -1);
    cVar53 = *pcVar7;
    pbVar49 = (byte *)(pcVar7 + 1);
    *param_3 = pbVar49;
    param_3[1] = pbVar51;
    pbVar8 = *(byte **)(param_1 + 0x30);
    if (pbVar51 < pbVar8) goto LAB_1400bde9d;
    pbVar45 = pbVar49;
    pbVar48 = pbVar8;
    if (pbVar51 < pbVar8) {
      pbVar45 = (byte *)0x0;
      pbVar48 = (byte *)0x0;
    }
    *param_3 = pbVar8 + (longlong)pbVar49;
    param_3[1] = (longlong)pbVar51 - (longlong)pbVar8;
    local_108 = uVar47;
    local_b8 = pbVar45;
    local_b0 = pbVar48;
    if (cVar53 != '\0') {
      if (cVar53 == '\x01') {
        local_78 = pbVar45;
        local_70 = pbVar48;
        (**(code **)(param_1 + 0x130))(param_1,&local_78);
      }
      else if (cVar53 == '\x02') {
        pbVar49 = uStack_90;
        if (pbVar48 < uStack_90) {
          pbVar49 = pbVar48;
        }
        if (pbVar49 != (byte *)0x0) {
          pbVar42 = (byte *)0x0;
          if ((byte *)0x7 < pbVar49) {
            if (pbVar45 <= pbVar49 + -1 + (longlong)local_98) {
              pbVar39 = (byte *)(pcVar7 + (longlong)pbVar49);
              if (pbVar51 < pbVar8) {
                pbVar39 = pbVar49 + -1;
              }
              if (local_98 <= pbVar39) goto LAB_1400bd7a0;
            }
            if (pbVar49 < (byte *)0x40) {
LAB_1400bd763:
              do {
                uVar70 = *(undefined8 *)(pbVar42 + (longlong)pbVar45);
                uVar4 = *(undefined8 *)(pbVar42 + (longlong)local_98);
                pbVar8 = pbVar42 + (longlong)pbVar45;
                *pbVar8 = (char)uVar4 + (char)uVar70;
                pbVar8[1] = (char)((ulonglong)uVar4 >> 8) + (char)((ulonglong)uVar70 >> 8);
                pbVar8[2] = (char)((ulonglong)uVar4 >> 0x10) + (char)((ulonglong)uVar70 >> 0x10);
                pbVar8[3] = (char)((ulonglong)uVar4 >> 0x18) + (char)((ulonglong)uVar70 >> 0x18);
                pbVar8[4] = (char)((ulonglong)uVar4 >> 0x20) + (char)((ulonglong)uVar70 >> 0x20);
                pbVar8[5] = (char)((ulonglong)uVar4 >> 0x28) + (char)((ulonglong)uVar70 >> 0x28);
                pbVar8[6] = (char)((ulonglong)uVar4 >> 0x30) + (char)((ulonglong)uVar70 >> 0x30);
                pbVar8[7] = (char)((ulonglong)uVar4 >> 0x38) + (char)((ulonglong)uVar70 >> 0x38);
                pbVar42 = pbVar42 + 8;
              } while (pbVar42 < (byte *)((ulonglong)pbVar49 & 0xfffffffffffffff8));
            }
            else {
              do {
                pbVar39 = pbVar42 + (longlong)pbVar45;
                bVar37 = pbVar39[1];
                bVar43 = pbVar39[2];
                bVar6 = pbVar39[3];
                bVar9 = pbVar39[4];
                bVar10 = pbVar39[5];
                bVar11 = pbVar39[6];
                bVar12 = pbVar39[7];
                bVar13 = pbVar39[8];
                bVar14 = pbVar39[9];
                bVar15 = pbVar39[10];
                bVar16 = pbVar39[0xb];
                bVar17 = pbVar39[0xc];
                bVar18 = pbVar39[0xd];
                bVar19 = pbVar39[0xe];
                bVar20 = pbVar39[0xf];
                pcVar40 = pcVar7 + 0x11;
                pbVar2 = pbVar42 + (longlong)local_98;
                bVar21 = pbVar2[1];
                bVar22 = pbVar2[2];
                bVar23 = pbVar2[3];
                bVar24 = pbVar2[4];
                bVar25 = pbVar2[5];
                bVar26 = pbVar2[6];
                bVar27 = pbVar2[7];
                bVar28 = pbVar2[8];
                bVar29 = pbVar2[9];
                bVar30 = pbVar2[10];
                bVar31 = pbVar2[0xb];
                bVar32 = pbVar2[0xc];
                bVar33 = pbVar2[0xd];
                bVar34 = pbVar2[0xe];
                bVar35 = pbVar2[0xf];
                if (pbVar51 < pbVar8) {
                  pcVar40 = &DAT_00000010;
                }
                pbVar3 = pbVar42 + (longlong)pbVar45;
                *pbVar3 = *pbVar2 + *pbVar39;
                pbVar3[1] = bVar21 + bVar37;
                pbVar3[2] = bVar22 + bVar43;
                pbVar3[3] = bVar23 + bVar6;
                pbVar3[4] = bVar24 + bVar9;
                pbVar3[5] = bVar25 + bVar10;
                pbVar3[6] = bVar26 + bVar11;
                pbVar3[7] = bVar27 + bVar12;
                pbVar3[8] = bVar28 + bVar13;
                pbVar3[9] = bVar29 + bVar14;
                pbVar3[10] = bVar30 + bVar15;
                pbVar3[0xb] = bVar31 + bVar16;
                pbVar3[0xc] = bVar32 + bVar17;
                pbVar3[0xd] = bVar33 + bVar18;
                pbVar3[0xe] = bVar34 + bVar19;
                pbVar3[0xf] = bVar35 + bVar20;
                pbVar39 = pbVar42 + (longlong)pcVar40;
                bVar37 = pbVar39[1];
                bVar43 = pbVar39[2];
                bVar6 = pbVar39[3];
                bVar9 = pbVar39[4];
                bVar10 = pbVar39[5];
                bVar11 = pbVar39[6];
                bVar12 = pbVar39[7];
                bVar13 = pbVar39[8];
                bVar14 = pbVar39[9];
                bVar15 = pbVar39[10];
                bVar16 = pbVar39[0xb];
                bVar17 = pbVar39[0xc];
                bVar18 = pbVar39[0xd];
                bVar19 = pbVar39[0xe];
                bVar20 = pbVar39[0xf];
                pbVar3 = pbVar42 + 0x10 + (longlong)local_98;
                bVar21 = pbVar3[1];
                bVar22 = pbVar3[2];
                bVar23 = pbVar3[3];
                bVar24 = pbVar3[4];
                bVar25 = pbVar3[5];
                bVar26 = pbVar3[6];
                bVar27 = pbVar3[7];
                bVar28 = pbVar3[8];
                bVar29 = pbVar3[9];
                bVar30 = pbVar3[10];
                bVar31 = pbVar3[0xb];
                bVar32 = pbVar3[0xc];
                bVar33 = pbVar3[0xd];
                bVar34 = pbVar3[0xe];
                bVar35 = pbVar3[0xf];
                pbVar2 = pbVar42 + (longlong)pcVar40;
                *pbVar2 = *pbVar3 + *pbVar39;
                pbVar2[1] = bVar21 + bVar37;
                pbVar2[2] = bVar22 + bVar43;
                pbVar2[3] = bVar23 + bVar6;
                pbVar2[4] = bVar24 + bVar9;
                pbVar2[5] = bVar25 + bVar10;
                pbVar2[6] = bVar26 + bVar11;
                pbVar2[7] = bVar27 + bVar12;
                pbVar2[8] = bVar28 + bVar13;
                pbVar2[9] = bVar29 + bVar14;
                pbVar2[10] = bVar30 + bVar15;
                pbVar2[0xb] = bVar31 + bVar16;
                pbVar2[0xc] = bVar32 + bVar17;
                pbVar2[0xd] = bVar33 + bVar18;
                pbVar2[0xe] = bVar34 + bVar19;
                pbVar2[0xf] = bVar35 + bVar20;
                pcVar40 = pcVar7 + 0x21;
                if (pbVar51 < pbVar8) {
                  pcVar40 = local_c8;
                }
                pbVar3 = pbVar42 + 0x20 + (longlong)local_98;
                bVar37 = pbVar3[1];
                bVar43 = pbVar3[2];
                bVar6 = pbVar3[3];
                bVar9 = pbVar3[4];
                bVar10 = pbVar3[5];
                bVar11 = pbVar3[6];
                bVar12 = pbVar3[7];
                bVar13 = pbVar3[8];
                bVar14 = pbVar3[9];
                bVar15 = pbVar3[10];
                bVar16 = pbVar3[0xb];
                bVar17 = pbVar3[0xc];
                bVar18 = pbVar3[0xd];
                bVar19 = pbVar3[0xe];
                bVar20 = pbVar3[0xf];
                pbVar39 = pbVar42 + (longlong)pcVar40;
                bVar21 = pbVar39[1];
                bVar22 = pbVar39[2];
                bVar23 = pbVar39[3];
                bVar24 = pbVar39[4];
                bVar25 = pbVar39[5];
                bVar26 = pbVar39[6];
                bVar27 = pbVar39[7];
                bVar28 = pbVar39[8];
                bVar29 = pbVar39[9];
                bVar30 = pbVar39[10];
                bVar31 = pbVar39[0xb];
                bVar32 = pbVar39[0xc];
                bVar33 = pbVar39[0xd];
                bVar34 = pbVar39[0xe];
                bVar35 = pbVar39[0xf];
                pbVar2 = pbVar42 + (longlong)pcVar40;
                *pbVar2 = *pbVar3 + *pbVar39;
                pbVar2[1] = bVar37 + bVar21;
                pbVar2[2] = bVar43 + bVar22;
                pbVar2[3] = bVar6 + bVar23;
                pbVar2[4] = bVar9 + bVar24;
                pbVar2[5] = bVar10 + bVar25;
                pbVar2[6] = bVar11 + bVar26;
                pbVar2[7] = bVar12 + bVar27;
                pbVar2[8] = bVar13 + bVar28;
                pbVar2[9] = bVar14 + bVar29;
                pbVar2[10] = bVar15 + bVar30;
                pbVar2[0xb] = bVar16 + bVar31;
                pbVar2[0xc] = bVar17 + bVar32;
                pbVar2[0xd] = bVar18 + bVar33;
                pbVar2[0xe] = bVar19 + bVar34;
                pbVar2[0xf] = bVar20 + bVar35;
                pcVar40 = pcVar7 + 0x31;
                if (pbVar51 < pbVar8) {
                  pcVar40 = local_c0;
                }
                pbVar2 = pbVar42 + 0x30 + (longlong)local_98;
                bVar37 = pbVar2[1];
                bVar43 = pbVar2[2];
                bVar6 = pbVar2[3];
                bVar9 = pbVar2[4];
                bVar10 = pbVar2[5];
                bVar11 = pbVar2[6];
                bVar12 = pbVar2[7];
                bVar13 = pbVar2[8];
                bVar14 = pbVar2[9];
                bVar15 = pbVar2[10];
                bVar16 = pbVar2[0xb];
                bVar17 = pbVar2[0xc];
                bVar18 = pbVar2[0xd];
                bVar19 = pbVar2[0xe];
                bVar20 = pbVar2[0xf];
                auVar5 = *(undefined1 (*) [16])(pbVar42 + (longlong)pcVar40);
                pbVar39 = pbVar42 + (longlong)pcVar40;
                *pbVar39 = *pbVar2 + auVar5[0];
                pbVar39[1] = bVar37 + auVar5[1];
                pbVar39[2] = bVar43 + auVar5[2];
                pbVar39[3] = bVar6 + auVar5[3];
                pbVar39[4] = bVar9 + auVar5[4];
                pbVar39[5] = bVar10 + auVar5[5];
                pbVar39[6] = bVar11 + auVar5[6];
                pbVar39[7] = bVar12 + auVar5[7];
                pbVar39[8] = bVar13 + auVar5[8];
                pbVar39[9] = bVar14 + auVar5[9];
                pbVar39[10] = bVar15 + auVar5[10];
                pbVar39[0xb] = bVar16 + auVar5[0xb];
                pbVar39[0xc] = bVar17 + auVar5[0xc];
                pbVar39[0xd] = bVar18 + auVar5[0xd];
                pbVar39[0xe] = bVar19 + auVar5[0xe];
                pbVar39[0xf] = bVar20 + auVar5[0xf];
                pbVar42 = pbVar42 + 0x40;
              } while (pbVar42 < (byte *)((ulonglong)pbVar49 & 0xffffffffffffffc0));
              if (((ulonglong)pbVar49 & 0x38) != 0) goto LAB_1400bd763;
            }
            if (pbVar49 <= pbVar42) goto LAB_1400bd800;
          }
LAB_1400bd7a0:
          do {
            pbVar42[(longlong)pbVar45] = pbVar42[(longlong)pbVar45] + pbVar42[(longlong)local_98];
            pbVar42 = pbVar42 + 1;
          } while (pbVar42 < pbVar49);
        }
      }
      else {
        local_88 = uVar54;
        uStack_87 = uVar55;
        uStack_86 = uVar56;
        uStack_85 = uVar57;
        uStack_84 = uVar58;
        uStack_83 = uVar59;
        uStack_82 = uVar60;
        uStack_81 = uVar61;
        uStack_80 = uVar62;
        uStack_7f = uVar63;
        uStack_7e = uVar64;
        uStack_7d = uVar65;
        uStack_7c = uVar66;
        uStack_7b = uVar67;
        uStack_7a = uVar68;
        uStack_79 = uVar69;
        if (cVar53 == '\x03') {
          local_68 = pbVar45;
          local_60 = pbVar48;
          (**(code **)(param_1 + 0x138))(param_1,&local_68,&local_88);
        }
        else {
          if (cVar53 != '\x04') {
            return "#png: bad filter";
          }
          local_58 = pbVar45;
          local_50 = pbVar48;
          (**(code **)(param_1 + 0x140))(param_1,&local_58,&local_88);
        }
      }
    }
LAB_1400bd800:
    lVar36 = local_100;
    uVar50 = local_108;
    if (*(char *)(param_1 + 0x78) == 'I') {
      uVar52 = (uint)(byte)(&DAT_1404798c2)[(ulonglong)*(byte *)(param_1 + 99) * 6];
    }
    else {
      uVar52 = *(uint *)(param_1 + 0xa0);
    }
    bVar37 = *(byte *)(param_1 + 0x60);
    uVar44 = (ulonglong)*(byte *)(param_1 + 99);
    if (bVar37 == 8) {
      if (uVar52 < *(uint *)(param_1 + 0xa8)) {
        do {
          uVar50 = uVar52 * local_f8;
          if (uVar50 < uVar47 || uVar50 - uVar47 == 0) {
            if (*(char *)(param_1 + 0x61) == '\x04') {
              if ((byte *)0x1 < pbVar48) {
                pbVar48 = pbVar48 + -2;
                local_118._0_2_ = CONCAT11(*pbVar45,*pbVar45);
                local_118._0_3_ = CONCAT12(*pbVar45,(undefined2)local_118);
                pbVar49 = pbVar45 + 1;
                pbVar45 = pbVar45 + 2;
                local_118._0_4_ = CONCAT13(*pbVar49,(undefined3)local_118);
                if (plVar1 != (longlong *)0x0) {
                  pcVar41 = (code *)*plVar1;
                  goto joined_r0x0001400bd95e;
                }
              }
            }
            else {
              uVar38 = *(uint *)(param_1 + 0x80);
              if (uVar38 == 0) {
                if (local_f0 <= pbVar48) {
                  if ((plVar1 != (longlong *)0x0) && ((code *)*plVar1 != (code *)0x0)) {
                    (*(code *)*plVar1)(lVar36 + uVar50,uVar47 - uVar50,local_110,0x400,pbVar45,
                                       local_f0);
                  }
                  pbVar45 = pbVar45 + (longlong)local_f0;
                  pbVar48 = pbVar48 + -(longlong)local_f0;
                }
              }
              else if (*(char *)(param_1 + 0x61) == '\0') {
                if (pbVar48 != (byte *)0x0) {
                  bVar37 = *pbVar45;
                  bVar43 = *pbVar45;
                  local_118._0_2_ = CONCAT11(bVar43,bVar37);
                  bVar6 = *pbVar45;
                  pbVar45 = pbVar45 + 1;
                  local_118._0_3_ = CONCAT12(bVar6,(undefined2)local_118);
                  local_118._0_4_ = CONCAT13(0xff,(undefined3)local_118);
                  pbVar48 = pbVar48 + -1;
                  if (uVar38 == (((bVar6 | 0xff00) << 8 | (uint)bVar43) << 8 | (uint)bVar37)) {
                    local_118._0_4_ = 0;
                  }
                  if (plVar1 != (longlong *)0x0) {
                    pcVar41 = (code *)*plVar1;
joined_r0x0001400bd95e:
                    if (pcVar41 != (code *)0x0) {
                      (*pcVar41)(lVar36 + uVar50,uVar47 - uVar50,local_110,0x400,&local_118,4);
                    }
                  }
                }
              }
              else if ((byte *)0x2 < pbVar48) {
                pbVar49 = pbVar45 + 2;
                pbVar48 = pbVar48 + -3;
                pbVar8 = pbVar45 + 1;
                local_118._0_2_ = CONCAT11(*pbVar8,*pbVar49);
                bVar37 = *pbVar45;
                pbVar45 = pbVar45 + 3;
                local_118._0_3_ = CONCAT12(bVar37,(undefined2)local_118);
                local_118._0_4_ = CONCAT13(0xff,(undefined3)local_118);
                if (uVar38 == (((bVar37 | 0xff00) << 8 | (uint)*pbVar8) << 8 | (uint)*pbVar49)) {
                  local_118._0_4_ = 0;
                }
                if (plVar1 != (longlong *)0x0) {
                  pcVar41 = (code *)*plVar1;
                  goto joined_r0x0001400bd95e;
                }
              }
            }
          }
          uVar44 = (ulonglong)*(byte *)(param_1 + 99);
          uVar52 = uVar52 + (1 << ((&DAT_1404798c0)[uVar44 * 6] & 0x1f));
        } while (uVar52 < *(uint *)(param_1 + 0xa8));
      }
    }
    else if (bVar37 < 8) {
      cVar53 = '\x01';
      if (*(char *)(param_1 + 0x61) == '\0') {
        cVar53 = (&DAT_1404798f0)[bVar37];
      }
      cVar46 = '\0';
      uVar47 = local_108;
      if (uVar52 < *(uint *)(param_1 + 0xa8)) {
        do {
          uVar70 = local_118;
          uVar50 = uVar52 * local_f8;
          if (uVar50 < uVar47 || uVar50 - uVar47 == 0) {
            if ((cVar46 == '\0') && (pbVar48 != (byte *)0x0)) {
              local_res10 = *pbVar45;
              pbVar45 = pbVar45 + 1;
              pbVar48 = pbVar48 + -1;
              cVar46 = (&DAT_1404798f8)[*(byte *)(param_1 + 0x60)];
            }
            bVar43 = local_res10 >> (-bVar37 & 7);
            cVar46 = cVar46 + -1;
            local_res10 = local_res10 << (*(byte *)(param_1 + 0x60) & 0x1f);
            bVar43 = bVar43 * cVar53;
            local_118 = CONCAT71(local_118._1_7_,bVar43);
            if (*(uint *)(param_1 + 0x80) == 0) {
              if ((plVar1 != (longlong *)0x0) && (pcVar41 = (code *)*plVar1, pcVar41 != (code *)0x0)
                 ) {
                uVar70 = 1;
                goto LAB_1400bdb4c;
              }
            }
            else {
              uVar38 = (uint)bVar43;
              local_118._0_2_ = CONCAT11(bVar43,bVar43);
              local_118._0_3_ = CONCAT12(bVar43,(undefined2)local_118);
              local_118._4_4_ = SUB84(uVar70,4);
              local_118._0_4_ = CONCAT13(0xff,(undefined3)local_118);
              if (*(uint *)(param_1 + 0x80) == (((uVar38 | 0xff00) << 8 | uVar38) << 8 | uVar38)) {
                local_118._0_4_ = 0;
              }
              if ((plVar1 != (longlong *)0x0) && (pcVar41 = (code *)*plVar1, pcVar41 != (code *)0x0)
                 ) {
                uVar70 = 4;
LAB_1400bdb4c:
                (*pcVar41)(local_100 + uVar50,uVar47 - uVar50,local_110,0x400,&local_118,uVar70);
                uVar47 = local_108;
              }
            }
          }
          uVar44 = (ulonglong)*(byte *)(param_1 + 99);
          uVar52 = uVar52 + (1 << ((&DAT_1404798c0)[uVar44 * 6] & 0x1f));
        } while (uVar52 < *(uint *)(param_1 + 0xa8));
      }
    }
    else if (uVar52 < *(uint *)(param_1 + 0xa8)) {
      do {
        uVar47 = uVar52 * local_f8;
        if (uVar47 < uVar50 || uVar47 - uVar50 == 0) {
          cVar53 = *(char *)(param_1 + 0x61);
          if (cVar53 == '\0') {
            if ((byte *)0x1 < pbVar48) {
              pbVar49 = pbVar45 + 1;
              pbVar48 = pbVar48 + -2;
              bVar37 = *pbVar45;
              local_118._0_2_ = CONCAT11(bVar37,*pbVar49);
              pbVar8 = pbVar45 + 1;
              local_118._0_3_ = CONCAT12(*pbVar8,(undefined2)local_118);
              bVar43 = *pbVar45;
              local_118._0_4_ = CONCAT13(bVar43,(undefined3)local_118);
              pbVar51 = pbVar45 + 1;
              local_118._0_5_ = CONCAT14(*pbVar51,(undefined4)local_118);
              bVar6 = *pbVar45;
              pbVar45 = pbVar45 + 2;
              local_118._0_6_ = CONCAT15(bVar6,(undefined5)local_118);
              local_118 = CONCAT26(0xffff,(undefined6)local_118);
              if (*(ulonglong *)(param_1 + 0x80) ==
                  (((((((ulonglong)bVar6 | 0xffff00) << 8 | (ulonglong)*pbVar51) << 8 |
                     (ulonglong)bVar43) << 8 | (ulonglong)*pbVar8) << 8 | (ulonglong)bVar37) << 8 |
                  (ulonglong)*pbVar49)) {
                local_118 = 0;
              }
            }
          }
          else if (cVar53 == '\x02') {
            if (&DAT_00000005 < pbVar48) {
              pbVar49 = pbVar45 + 5;
              pbVar48 = pbVar48 + -6;
              pbVar8 = pbVar45 + 4;
              local_118._0_2_ = CONCAT11(*pbVar8,*pbVar49);
              pbVar51 = pbVar45 + 3;
              local_118._0_3_ = CONCAT12(*pbVar51,(undefined2)local_118);
              pbVar42 = pbVar45 + 2;
              local_118._0_4_ = CONCAT13(*pbVar42,(undefined3)local_118);
              pbVar39 = pbVar45 + 1;
              local_118._0_5_ = CONCAT14(*pbVar39,(undefined4)local_118);
              bVar37 = *pbVar45;
              pbVar45 = pbVar45 + 6;
              local_118._0_6_ = CONCAT15(bVar37,(undefined5)local_118);
              local_118 = CONCAT26(0xffff,(undefined6)local_118);
              if (*(ulonglong *)(param_1 + 0x80) ==
                  (((((((ulonglong)bVar37 | 0xffff00) << 8 | (ulonglong)*pbVar39) << 8 |
                     (ulonglong)*pbVar42) << 8 | (ulonglong)*pbVar51) << 8 | (ulonglong)*pbVar8) <<
                   8 | (ulonglong)*pbVar49)) {
                local_118 = 0;
              }
            }
          }
          else if (cVar53 == '\x04') {
            if ((byte *)0x3 < pbVar48) {
              local_118._0_2_ = CONCAT11(*pbVar45,pbVar45[1]);
              local_118._0_3_ = CONCAT12(pbVar45[1],(undefined2)local_118);
              local_118._0_4_ = CONCAT13(*pbVar45,(undefined3)local_118);
              local_118._0_5_ = CONCAT14(pbVar45[1],(undefined4)local_118);
              local_118._0_6_ = CONCAT15(*pbVar45,(undefined5)local_118);
              local_118._0_7_ = CONCAT16(pbVar45[3],(undefined6)local_118);
              bVar37 = pbVar45[2];
              pbVar45 = pbVar45 + 4;
              pbVar48 = pbVar48 + -4;
LAB_1400bddbd:
              local_118 = CONCAT17(bVar37,(undefined7)local_118);
            }
          }
          else if ((byte *)0x7 < pbVar48) {
            local_118._0_2_ = CONCAT11(pbVar45[4],pbVar45[5]);
            local_118._0_3_ = CONCAT12(pbVar45[3],(undefined2)local_118);
            local_118._0_4_ = CONCAT13(pbVar45[2],(undefined3)local_118);
            local_118._0_5_ = CONCAT14(pbVar45[1],(undefined4)local_118);
            local_118._0_6_ = CONCAT15(*pbVar45,(undefined5)local_118);
            local_118._0_7_ = CONCAT16(pbVar45[7],(undefined6)local_118);
            bVar37 = pbVar45[6];
            pbVar45 = pbVar45 + 8;
            pbVar48 = pbVar48 + -8;
            goto LAB_1400bddbd;
          }
          if ((plVar1 != (longlong *)0x0) && ((code *)*plVar1 != (code *)0x0)) {
            (*(code *)*plVar1)(local_100 + uVar47,uVar50 - uVar47,local_110,0x400,&local_118,8);
          }
        }
        uVar44 = (ulonglong)*(byte *)(param_1 + 99);
        uVar52 = uVar52 + (1 << ((&DAT_1404798c0)[uVar44 * 6] & 0x1f));
      } while (uVar52 < *(uint *)(param_1 + 0xa8));
    }
    local_res20 = local_res20 + (1 << ((&DAT_1404798c3)[uVar44 * 6] & 0x1f));
    uVar47 = (ulonglong)local_res20;
    if (*(uint *)(param_1 + 0xac) <= local_res20) {
      return (char *)0x0;
    }
    local_98._0_1_ = SUB81(local_b8,0);
    local_98._1_1_ = (undefined1)((ulonglong)local_b8 >> 8);
    local_98._2_1_ = (undefined1)((ulonglong)local_b8 >> 0x10);
    local_98._3_1_ = (undefined1)((ulonglong)local_b8 >> 0x18);
    local_98._4_1_ = (undefined1)((ulonglong)local_b8 >> 0x20);
    local_98._5_1_ = (undefined1)((ulonglong)local_b8 >> 0x28);
    local_98._6_1_ = (undefined1)((ulonglong)local_b8 >> 0x30);
    local_98._7_1_ = (undefined1)((ulonglong)local_b8 >> 0x38);
    uStack_90._0_1_ = SUB81(local_b0,0);
    uStack_90._1_1_ = (undefined1)((ulonglong)local_b0 >> 8);
    uStack_90._2_1_ = (undefined1)((ulonglong)local_b0 >> 0x10);
    uStack_90._3_1_ = (undefined1)((ulonglong)local_b0 >> 0x18);
    uStack_90._4_1_ = (undefined1)((ulonglong)local_b0 >> 0x20);
    uStack_90._5_1_ = (undefined1)((ulonglong)local_b0 >> 0x28);
    uStack_90._6_1_ = (undefined1)((ulonglong)local_b0 >> 0x30);
    uStack_90._7_1_ = (undefined1)((ulonglong)local_b0 >> 0x38);
    uVar54 = (undefined1)local_98;
    uVar55 = local_98._1_1_;
    uVar56 = local_98._2_1_;
    uVar57 = local_98._3_1_;
    uVar58 = local_98._4_1_;
    uVar59 = local_98._5_1_;
    uVar60 = local_98._6_1_;
    uVar61 = local_98._7_1_;
    uVar62 = (undefined1)uStack_90;
    uVar63 = uStack_90._1_1_;
    uVar64 = uStack_90._2_1_;
    uVar65 = uStack_90._3_1_;
    uVar66 = uStack_90._4_1_;
    uVar67 = uStack_90._5_1_;
    uVar68 = uStack_90._6_1_;
    uVar69 = uStack_90._7_1_;
    local_98 = local_b8;
    uStack_90 = local_b0;
  } while( true );
}

