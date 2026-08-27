// Function: FUN_1400bcfa0
// Addr: 1400bcfa0
// Size: 1093 bytes


char * FUN_1400bcfa0(longlong param_1,uint *param_2,ulonglong *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  char cVar8;
  char *pcVar9;
  code *pcVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  longlong lVar61;
  longlong lVar62;
  longlong lVar63;
  uint uVar64;
  longlong lVar65;
  longlong lVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  longlong local_res20;
  char *pcVar83;
  ulonglong uVar84;
  char *local_78;
  ulonglong local_70;
  char *local_68;
  ulonglong local_60;
  char *local_58;
  ulonglong local_50;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  
  uVar67 = 0;
  uVar68 = 0;
  uVar69 = 0;
  uVar70 = 0;
  uVar71 = 0;
  uVar72 = 0;
  uVar73 = 0;
  uVar74 = 0;
  uVar75 = 0;
  uVar76 = 0;
  uVar77 = 0;
  uVar78 = 0;
  uVar79 = 0;
  uVar80 = 0;
  uVar81 = 0;
  uVar82 = 0;
  pcVar83 = (char *)0x0;
  uVar84 = 0;
  if (param_2 == (uint *)0x0) {
    uVar57 = 0;
LAB_1400bd00e:
    uVar64 = (&DAT_140482a50)[(uint)uVar57 & 0xf] +
             (&DAT_140482a50)[(uint)(uVar57 >> 0xc) & 0xf] +
             (&DAT_140482a50)[(uint)(uVar57 >> 8) & 0xf] +
             (&DAT_140482a50)[(uint)(uVar57 >> 4) & 0xf];
    uVar57 = (ulonglong)uVar64;
    if ((uVar64 & 7) != 0) {
      return "#base: unsupported option";
    }
  }
  else {
    uVar57 = (ulonglong)*param_2;
    if ((*param_2 & 0x30000) == 0) goto LAB_1400bd00e;
    uVar57 = 0;
  }
  if ((((param_2 == (uint *)0x0) || ((*param_2 & 0x40000) == 0)) ||
      (*(longlong *)(param_2 + 0x1e) != 0x400)) || (*(longlong *)(param_2 + 0x20) != 1)) {
    lVar61 = param_1 + 0xa5b8;
    if (param_2 != (uint *)0x0) goto LAB_1400bd06a;
    local_res20 = 0;
    lVar63 = 0;
  }
  else {
    lVar61 = *(longlong *)(param_2 + 0x1c);
LAB_1400bd06a:
    local_res20 = *(longlong *)(param_2 + 4);
    lVar63 = *(longlong *)(param_2 + 10);
    uVar59 = (ulonglong)*(uint *)(param_1 + 0xa8) * (uVar57 >> 3);
    uVar60 = (ulonglong)*(uint *)(param_1 + 0xa0) * (uVar57 >> 3);
    uVar57 = *(ulonglong *)(param_2 + 6);
    if (uVar59 < *(ulonglong *)(param_2 + 6)) {
      uVar57 = uVar59;
    }
    if (uVar60 < uVar57) {
      uVar59 = *(ulonglong *)(param_2 + 8);
      local_res20 = local_res20 + uVar60;
      lVar62 = uVar57 - uVar60;
      goto LAB_1400bd0d8;
    }
  }
  lVar62 = 0;
  uVar59 = 0;
LAB_1400bd0d8:
  uVar64 = *(uint *)(param_1 + 0xa4);
  if (*(uint *)(param_1 + 0xac) <= uVar64) {
    return (char *)0x0;
  }
  do {
    if (uVar64 < uVar59) {
      lVar66 = lVar63 * (ulonglong)uVar64 + local_res20;
      lVar65 = lVar62;
    }
    else {
      lVar65 = 0;
      lVar66 = 0;
    }
    if (param_3[1] == 0) {
LAB_1400bd39f:
      return "#png: internal error: inconsistent workbuf length";
    }
    pcVar9 = (char *)*param_3;
    uVar60 = param_3[1] - 1;
    uVar57 = *(ulonglong *)(param_1 + 0x30);
    param_3[1] = uVar60;
    pcVar1 = pcVar9 + 1;
    *param_3 = (ulonglong)pcVar1;
    if (uVar60 < uVar57) goto LAB_1400bd39f;
    cVar8 = *pcVar9;
    *param_3 = (ulonglong)(pcVar1 + uVar57);
    param_3[1] = uVar60 - uVar57;
    if (cVar8 != '\0') {
      if (cVar8 == '\x01') {
        local_78 = pcVar1;
        local_70 = uVar57;
        (**(code **)(param_1 + 0x130))(param_1,&local_78);
      }
      else if (cVar8 == '\x02') {
        uVar60 = uVar84;
        if (uVar57 < uVar84) {
          uVar60 = uVar57;
        }
        if (uVar60 != 0) {
          uVar58 = 0;
          if ((7 < uVar60) && ((pcVar83 + (uVar60 - 1) < pcVar1 || (pcVar9 + uVar60 < pcVar83)))) {
            if (uVar60 < 0x40) {
LAB_1400bd26d:
              do {
                uVar5 = *(undefined8 *)(pcVar1 + uVar58);
                uVar6 = *(undefined8 *)(pcVar83 + uVar58);
                pcVar9 = pcVar1 + uVar58;
                *pcVar9 = (char)uVar6 + (char)uVar5;
                pcVar9[1] = (char)((ulonglong)uVar6 >> 8) + (char)((ulonglong)uVar5 >> 8);
                pcVar9[2] = (char)((ulonglong)uVar6 >> 0x10) + (char)((ulonglong)uVar5 >> 0x10);
                pcVar9[3] = (char)((ulonglong)uVar6 >> 0x18) + (char)((ulonglong)uVar5 >> 0x18);
                pcVar9[4] = (char)((ulonglong)uVar6 >> 0x20) + (char)((ulonglong)uVar5 >> 0x20);
                pcVar9[5] = (char)((ulonglong)uVar6 >> 0x28) + (char)((ulonglong)uVar5 >> 0x28);
                pcVar9[6] = (char)((ulonglong)uVar6 >> 0x30) + (char)((ulonglong)uVar5 >> 0x30);
                pcVar9[7] = (char)((ulonglong)uVar6 >> 0x38) + (char)((ulonglong)uVar5 >> 0x38);
                uVar58 = uVar58 + 8;
              } while (uVar58 < (uVar60 & 0xfffffffffffffff8));
            }
            else {
              do {
                pcVar2 = pcVar1 + uVar58;
                cVar8 = pcVar2[1];
                cVar11 = pcVar2[2];
                cVar12 = pcVar2[3];
                cVar13 = pcVar2[4];
                cVar14 = pcVar2[5];
                cVar15 = pcVar2[6];
                cVar16 = pcVar2[7];
                cVar17 = pcVar2[8];
                cVar18 = pcVar2[9];
                cVar19 = pcVar2[10];
                cVar20 = pcVar2[0xb];
                cVar21 = pcVar2[0xc];
                cVar22 = pcVar2[0xd];
                cVar23 = pcVar2[0xe];
                cVar24 = pcVar2[0xf];
                pcVar3 = pcVar83 + uVar58;
                cVar25 = pcVar3[1];
                cVar26 = pcVar3[2];
                cVar27 = pcVar3[3];
                cVar28 = pcVar3[4];
                cVar29 = pcVar3[5];
                cVar30 = pcVar3[6];
                cVar31 = pcVar3[7];
                cVar32 = pcVar3[8];
                cVar33 = pcVar3[9];
                cVar34 = pcVar3[10];
                cVar35 = pcVar3[0xb];
                cVar36 = pcVar3[0xc];
                cVar37 = pcVar3[0xd];
                cVar38 = pcVar3[0xe];
                cVar39 = pcVar3[0xf];
                pcVar4 = pcVar83 + uVar58 + 0x10;
                cVar40 = *pcVar4;
                cVar41 = pcVar4[1];
                cVar42 = pcVar4[2];
                cVar43 = pcVar4[3];
                cVar44 = pcVar4[4];
                cVar45 = pcVar4[5];
                cVar46 = pcVar4[6];
                cVar47 = pcVar4[7];
                cVar48 = pcVar4[8];
                cVar49 = pcVar4[9];
                cVar50 = pcVar4[10];
                cVar51 = pcVar4[0xb];
                cVar52 = pcVar4[0xc];
                cVar53 = pcVar4[0xd];
                cVar54 = pcVar4[0xe];
                cVar55 = pcVar4[0xf];
                pcVar4 = pcVar1 + uVar58;
                *pcVar4 = *pcVar3 + *pcVar2;
                pcVar4[1] = cVar25 + cVar8;
                pcVar4[2] = cVar26 + cVar11;
                pcVar4[3] = cVar27 + cVar12;
                pcVar4[4] = cVar28 + cVar13;
                pcVar4[5] = cVar29 + cVar14;
                pcVar4[6] = cVar30 + cVar15;
                pcVar4[7] = cVar31 + cVar16;
                pcVar4[8] = cVar32 + cVar17;
                pcVar4[9] = cVar33 + cVar18;
                pcVar4[10] = cVar34 + cVar19;
                pcVar4[0xb] = cVar35 + cVar20;
                pcVar4[0xc] = cVar36 + cVar21;
                pcVar4[0xd] = cVar37 + cVar22;
                pcVar4[0xe] = cVar38 + cVar23;
                pcVar4[0xf] = cVar39 + cVar24;
                pcVar2 = pcVar9 + uVar58 + 0x11;
                cVar8 = pcVar2[1];
                cVar11 = pcVar2[2];
                cVar12 = pcVar2[3];
                cVar13 = pcVar2[4];
                cVar14 = pcVar2[5];
                cVar15 = pcVar2[6];
                cVar16 = pcVar2[7];
                cVar17 = pcVar2[8];
                cVar18 = pcVar2[9];
                cVar19 = pcVar2[10];
                cVar20 = pcVar2[0xb];
                cVar21 = pcVar2[0xc];
                cVar22 = pcVar2[0xd];
                cVar23 = pcVar2[0xe];
                cVar24 = pcVar2[0xf];
                pcVar3 = pcVar83 + uVar58 + 0x20;
                cVar25 = *pcVar3;
                cVar26 = pcVar3[1];
                cVar27 = pcVar3[2];
                cVar28 = pcVar3[3];
                cVar29 = pcVar3[4];
                cVar30 = pcVar3[5];
                cVar31 = pcVar3[6];
                cVar32 = pcVar3[7];
                cVar33 = pcVar3[8];
                cVar34 = pcVar3[9];
                cVar35 = pcVar3[10];
                cVar36 = pcVar3[0xb];
                cVar37 = pcVar3[0xc];
                cVar38 = pcVar3[0xd];
                cVar39 = pcVar3[0xe];
                cVar56 = pcVar3[0xf];
                pcVar3 = pcVar9 + uVar58 + 0x11;
                *pcVar3 = cVar40 + *pcVar2;
                pcVar3[1] = cVar41 + cVar8;
                pcVar3[2] = cVar42 + cVar11;
                pcVar3[3] = cVar43 + cVar12;
                pcVar3[4] = cVar44 + cVar13;
                pcVar3[5] = cVar45 + cVar14;
                pcVar3[6] = cVar46 + cVar15;
                pcVar3[7] = cVar47 + cVar16;
                pcVar3[8] = cVar48 + cVar17;
                pcVar3[9] = cVar49 + cVar18;
                pcVar3[10] = cVar50 + cVar19;
                pcVar3[0xb] = cVar51 + cVar20;
                pcVar3[0xc] = cVar52 + cVar21;
                pcVar3[0xd] = cVar53 + cVar22;
                pcVar3[0xe] = cVar54 + cVar23;
                pcVar3[0xf] = cVar55 + cVar24;
                pcVar2 = pcVar9 + uVar58 + 0x21;
                cVar8 = pcVar2[1];
                cVar11 = pcVar2[2];
                cVar12 = pcVar2[3];
                cVar13 = pcVar2[4];
                cVar14 = pcVar2[5];
                cVar15 = pcVar2[6];
                cVar16 = pcVar2[7];
                cVar17 = pcVar2[8];
                cVar18 = pcVar2[9];
                cVar19 = pcVar2[10];
                cVar20 = pcVar2[0xb];
                cVar21 = pcVar2[0xc];
                cVar22 = pcVar2[0xd];
                cVar23 = pcVar2[0xe];
                cVar24 = pcVar2[0xf];
                pcVar3 = pcVar83 + uVar58 + 0x30;
                cVar40 = *pcVar3;
                cVar41 = pcVar3[1];
                cVar42 = pcVar3[2];
                cVar43 = pcVar3[3];
                cVar44 = pcVar3[4];
                cVar45 = pcVar3[5];
                cVar46 = pcVar3[6];
                cVar47 = pcVar3[7];
                cVar48 = pcVar3[8];
                cVar49 = pcVar3[9];
                cVar50 = pcVar3[10];
                cVar51 = pcVar3[0xb];
                cVar52 = pcVar3[0xc];
                cVar53 = pcVar3[0xd];
                cVar54 = pcVar3[0xe];
                cVar55 = pcVar3[0xf];
                pcVar3 = pcVar9 + uVar58 + 0x21;
                *pcVar3 = cVar25 + *pcVar2;
                pcVar3[1] = cVar26 + cVar8;
                pcVar3[2] = cVar27 + cVar11;
                pcVar3[3] = cVar28 + cVar12;
                pcVar3[4] = cVar29 + cVar13;
                pcVar3[5] = cVar30 + cVar14;
                pcVar3[6] = cVar31 + cVar15;
                pcVar3[7] = cVar32 + cVar16;
                pcVar3[8] = cVar33 + cVar17;
                pcVar3[9] = cVar34 + cVar18;
                pcVar3[10] = cVar35 + cVar19;
                pcVar3[0xb] = cVar36 + cVar20;
                pcVar3[0xc] = cVar37 + cVar21;
                pcVar3[0xd] = cVar38 + cVar22;
                pcVar3[0xe] = cVar39 + cVar23;
                pcVar3[0xf] = cVar56 + cVar24;
                auVar7 = *(undefined1 (*) [16])(pcVar9 + uVar58 + 0x31);
                pcVar2 = pcVar9 + uVar58 + 0x31;
                *pcVar2 = cVar40 + auVar7[0];
                pcVar2[1] = cVar41 + auVar7[1];
                pcVar2[2] = cVar42 + auVar7[2];
                pcVar2[3] = cVar43 + auVar7[3];
                pcVar2[4] = cVar44 + auVar7[4];
                pcVar2[5] = cVar45 + auVar7[5];
                pcVar2[6] = cVar46 + auVar7[6];
                pcVar2[7] = cVar47 + auVar7[7];
                pcVar2[8] = cVar48 + auVar7[8];
                pcVar2[9] = cVar49 + auVar7[9];
                pcVar2[10] = cVar50 + auVar7[10];
                pcVar2[0xb] = cVar51 + auVar7[0xb];
                pcVar2[0xc] = cVar52 + auVar7[0xc];
                pcVar2[0xd] = cVar53 + auVar7[0xd];
                pcVar2[0xe] = cVar54 + auVar7[0xe];
                pcVar2[0xf] = cVar55 + auVar7[0xf];
                uVar58 = uVar58 + 0x40;
              } while (uVar58 < (uVar60 & 0xffffffffffffffc0));
              if ((uVar60 & 0x38) != 0) goto LAB_1400bd26d;
            }
            if (uVar60 <= uVar58) goto LAB_1400bd327;
          }
          do {
            pcVar1[uVar58] = pcVar1[uVar58] + pcVar83[uVar58];
            uVar58 = uVar58 + 1;
          } while (uVar58 < uVar60);
        }
      }
      else {
        local_48 = uVar67;
        uStack_47 = uVar68;
        uStack_46 = uVar69;
        uStack_45 = uVar70;
        uStack_44 = uVar71;
        uStack_43 = uVar72;
        uStack_42 = uVar73;
        uStack_41 = uVar74;
        uStack_40 = uVar75;
        uStack_3f = uVar76;
        uStack_3e = uVar77;
        uStack_3d = uVar78;
        uStack_3c = uVar79;
        uStack_3b = uVar80;
        uStack_3a = uVar81;
        uStack_39 = uVar82;
        if (cVar8 == '\x03') {
          local_68 = pcVar1;
          local_60 = uVar57;
          (**(code **)(param_1 + 0x138))(param_1,&local_68,&local_48);
        }
        else {
          if (cVar8 != '\x04') {
            return "#png: bad filter";
          }
          local_58 = pcVar1;
          local_50 = uVar57;
          (**(code **)(param_1 + 0x140))(param_1,&local_58,&local_48);
        }
      }
    }
LAB_1400bd327:
    if (((undefined8 *)(param_1 + 0x118) != (undefined8 *)0x0) &&
       (pcVar10 = *(code **)(param_1 + 0x118), pcVar10 != (code *)0x0)) {
      (*pcVar10)(lVar66,lVar65,lVar61,0x400,pcVar1,uVar57,lVar62,uVar59,pcVar83,uVar84);
    }
    uVar64 = uVar64 + 1;
    if (*(uint *)(param_1 + 0xac) <= uVar64) {
      return (char *)0x0;
    }
    uVar67 = SUB81(pcVar1,0);
    uVar68 = (undefined1)((ulonglong)pcVar1 >> 8);
    uVar69 = (undefined1)((ulonglong)pcVar1 >> 0x10);
    uVar70 = (undefined1)((ulonglong)pcVar1 >> 0x18);
    uVar71 = (undefined1)((ulonglong)pcVar1 >> 0x20);
    uVar72 = (undefined1)((ulonglong)pcVar1 >> 0x28);
    uVar73 = (undefined1)((ulonglong)pcVar1 >> 0x30);
    uVar74 = (undefined1)((ulonglong)pcVar1 >> 0x38);
    uVar75 = (undefined1)uVar57;
    uVar76 = (undefined1)(uVar57 >> 8);
    uVar77 = (undefined1)(uVar57 >> 0x10);
    uVar78 = (undefined1)(uVar57 >> 0x18);
    uVar79 = (undefined1)(uVar57 >> 0x20);
    uVar80 = (undefined1)(uVar57 >> 0x28);
    uVar81 = (undefined1)(uVar57 >> 0x30);
    uVar82 = (undefined1)(uVar57 >> 0x38);
    pcVar83 = pcVar1;
    uVar84 = uVar57;
  } while( true );
}

