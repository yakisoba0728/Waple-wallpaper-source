// Function: FUN_140043430
// Addr: 140043430
// Size: 3265 bytes


void FUN_140043430(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  size_t sVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  double *pdVar16;
  double *pdVar17;
  uint uVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  uint *_Str;
  undefined1 *puVar22;
  undefined1 *puVar23;
  longlong *plVar24;
  uint *_Str_00;
  longlong *plVar25;
  bool bVar26;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  longlong *local_d8;
  uint local_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  uint local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar22 = auStack_f8;
  if (((char)*param_3 == '\0') || (*(char *)(param_4 + 8) != '\a')) goto LAB_1400440d2;
  lVar6 = FUN_140086de0(param_1 + 0x48,"wproperties","");
  local_78 = lVar6;
  if (-1 < *(int *)(param_1 + 0x98)) {
    lVar6 = FUN_140086de0(param_1 + 0x48,"wpropertiesvd","");
    if (*(char *)(lVar6 + 8) != '\a') {
      local_60 = CONCAT31(local_60._1_3_,7);
      local_60 = local_60 & 0xfffffeff;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      plVar7 = (longlong *)FUN_14028af20(0x10);
      *plVar7 = 0;
      plVar7[1] = 0;
      lVar6 = FUN_14028af20(0x58);
      *(longlong *)lVar6 = lVar6;
      *(longlong *)(lVar6 + 8) = lVar6;
      *(longlong *)(lVar6 + 0x10) = lVar6;
      *(undefined2 *)(lVar6 + 0x18) = 0x101;
      *plVar7 = lVar6;
      local_68 = plVar7;
      uVar8 = FUN_140086de0(param_1 + 0x48,"wpropertiesvd","");
      FUN_140085610(uVar8,&local_68);
      FUN_140085440(&local_68);
    }
    uVar8 = FUN_140086de0(param_1 + 0x48,"wpropertiesvd","");
    puVar9 = (undefined8 *)FUN_14003f6b0(extraout_XMM0_Da,&local_68,*(undefined4 *)(param_1 + 0x98))
    ;
    puVar20 = puVar9;
    if (0xf < (ulonglong)puVar9[3]) {
      puVar20 = (undefined8 *)*puVar9;
    }
    lVar6 = FUN_140086de0(uVar8,puVar20,puVar9[2] + (longlong)puVar20);
    local_78 = lVar6;
    FUN_140017240(&local_68);
  }
  if (*(char *)(lVar6 + 8) != '\a') {
    local_d0 = CONCAT31(local_d0._1_3_,7);
    local_d0 = local_d0 & 0xfffffeff;
    local_c8 = 0;
    lStack_c0 = 0;
    local_b8 = 0;
    plVar7 = (longlong *)FUN_14028af20(0x10);
    *plVar7 = 0;
    plVar7[1] = 0;
    lVar10 = FUN_14028af20(0x58);
    *(longlong *)lVar10 = lVar10;
    *(longlong *)(lVar10 + 8) = lVar10;
    *(longlong *)(lVar10 + 0x10) = lVar10;
    *(undefined2 *)(lVar10 + 0x18) = 0x101;
    *plVar7 = lVar10;
    local_d8 = plVar7;
    FUN_140085610(lVar6,&local_d8);
    FUN_140085440(&local_d8);
  }
  sVar11 = strlen((char *)param_3);
  lVar10 = FUN_140087490(lVar6,param_3,sVar11 + (longlong)param_3);
  if (lVar10 == 0) {
LAB_140043aa3:
    if (*(char *)(param_5 + 8) == '\a') {
      FUN_140088360(param_4,&local_d8);
      plVar7 = (longlong *)CONCAT44(uStack_cc,local_d0);
      for (plVar24 = local_d8; plVar24 != plVar7; plVar24 = plVar24 + 4) {
        plVar12 = plVar24;
        if (0xf < (ulonglong)plVar24[3]) {
          plVar12 = (longlong *)*plVar24;
        }
        lVar6 = FUN_140086de0(param_4,plVar12,plVar24[2] + (longlong)plVar12);
        plVar12 = plVar24;
        if (0xf < (ulonglong)plVar24[3]) {
          plVar12 = (longlong *)*plVar24;
        }
        lVar10 = FUN_140087490(param_5,plVar12,plVar24[2] + (longlong)plVar12);
        if (lVar10 == 0) {
          lVar10 = FUN_140084ac0();
        }
        if ((*(char *)(lVar6 + 8) != '\a') || (*(char *)(lVar10 + 8) != '\a')) goto LAB_140043db7;
        pdVar16 = (double *)FUN_140086de0(lVar6,"value","");
        pdVar17 = (double *)FUN_140087490(lVar10,"value","");
        if (pdVar17 == (double *)0x0) {
          pdVar17 = (double *)FUN_140084ac0();
        }
        uVar5 = *(uint *)(pdVar17 + 1);
        uVar18 = *(uint *)(pdVar16 + 1) & 0xff;
        if (uVar18 != (uVar5 & 0xff)) goto LAB_140043db7;
        switch(uVar18) {
        case 0:
          goto switchD_140043bab_caseD_0;
        case 1:
        case 2:
          bVar26 = *pdVar16 == *pdVar17;
          goto LAB_140043c6b;
        case 3:
          if (*pdVar16 == *pdVar17) goto switchD_140043bab_caseD_0;
          break;
        case 4:
          _Str = (uint *)*pdVar16;
          if ((_Str == (uint *)0x0) || (_Str_00 = (uint *)*pdVar17, _Str_00 == (uint *)0x0)) {
            bVar26 = _Str == (uint *)*pdVar17;
          }
          else {
            if ((*(uint *)(pdVar16 + 1) >> 8 & 1) == 0) {
              sVar11 = strlen((char *)_Str);
              uVar18 = (uint)sVar11;
            }
            else {
              uVar18 = *_Str;
              _Str = _Str + 1;
            }
            if ((uVar5 >> 8 & 1) == 0) {
              sVar11 = strlen((char *)_Str_00);
              uVar5 = (uint)sVar11;
            }
            else {
              uVar5 = *_Str_00;
              _Str_00 = _Str_00 + 1;
            }
            if (uVar18 != uVar5) break;
            if ((_Str == (uint *)0x0) || (_Str_00 == (uint *)0x0)) {
              FID_conflict__assert
                        (L"this_str && other_str",
                         L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x25d);
            }
            iVar4 = memcmp(_Str,_Str_00,(ulonglong)uVar18);
            bVar26 = iVar4 == 0;
          }
          goto LAB_140043c6b;
        case 5:
          bVar26 = *(char *)pdVar16 == *(char *)pdVar17;
LAB_140043c6b:
          if (bVar26) {
switchD_140043bab_caseD_0:
            local_a8 = plVar24;
            if (0xf < (ulonglong)plVar24[3]) {
              local_a8 = (longlong *)*plVar24;
            }
            local_a0 = (longlong *)plVar24[2];
            FUN_1400878f0(param_4,&local_a8);
          }
          break;
        case 6:
        case 7:
          if (((longlong *)*pdVar16)[1] == ((undefined8 *)*pdVar17)[1]) {
            plVar12 = *(longlong **)*pdVar16;
            plVar19 = (longlong *)**(longlong **)*pdVar17;
            plVar13 = (longlong *)*plVar12;
            while (plVar13 != plVar12) {
              cVar3 = FUN_140084d30(plVar13 + 4,plVar19 + 4);
              if ((cVar3 == '\0') || (cVar3 = FUN_1400857b0(plVar13 + 6,plVar19 + 6), cVar3 == '\0')
                 ) goto LAB_140043db7;
              plVar25 = (longlong *)plVar13[2];
              if (*(char *)((longlong)plVar25 + 0x19) == '\0') {
                cVar3 = *(char *)(*plVar25 + 0x19);
                while (cVar3 == '\0') {
                  plVar25 = (longlong *)*plVar25;
                  cVar3 = *(char *)(*plVar25 + 0x19);
                }
              }
              else {
                cVar3 = *(char *)(plVar13[1] + 0x19);
                plVar1 = (longlong *)plVar13[1];
                while ((plVar25 = plVar1, cVar3 == '\0' && (plVar13 == (longlong *)plVar25[2]))) {
                  cVar3 = *(char *)(plVar25[1] + 0x19);
                  plVar1 = (longlong *)plVar25[1];
                  plVar13 = plVar25;
                }
              }
              plVar1 = (longlong *)plVar19[2];
              plVar13 = plVar25;
              if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
                cVar3 = *(char *)(*plVar1 + 0x19);
                plVar19 = plVar1;
                while (cVar3 == '\0') {
                  plVar19 = (longlong *)*plVar19;
                  cVar3 = *(char *)(*plVar19 + 0x19);
                }
              }
              else {
                cVar3 = *(char *)(plVar19[1] + 0x19);
                plVar1 = (longlong *)plVar19[1];
                plVar25 = plVar19;
                while ((plVar19 = plVar1, cVar3 == '\0' && (plVar25 == (longlong *)plVar19[2]))) {
                  cVar3 = *(char *)(plVar19[1] + 0x19);
                  plVar1 = (longlong *)plVar19[1];
                  plVar25 = plVar19;
                }
              }
            }
            goto switchD_140043bab_caseD_0;
          }
          break;
        default:
          FID_conflict__assert
                    (L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x266);
        }
LAB_140043db7:
      }
      uVar5 = *(uint *)(param_4 + 8) & 0xff;
      if (((uVar5 == 0) || (uVar5 - 6 < 2)) && (iVar4 = FUN_1400863a0(param_4), iVar4 == 0)) {
        FUN_14000dcc0(&local_d8);
        goto LAB_1400440d2;
      }
      FUN_14000dcc0(&local_d8);
    }
    plVar7 = local_a0;
    local_a0 = (longlong *)CONCAT71(local_a0._1_7_,7);
    local_a0._4_4_ = SUB84(plVar7,4);
    local_a0 = (longlong *)(CONCAT44(local_a0._4_4_,(undefined4)local_a0) & 0xfffffffffffffeff);
    lVar6 = 0;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    plVar7 = (longlong *)FUN_14028af20(0x10);
    *plVar7 = 0;
    plVar7[1] = 0;
    lVar10 = FUN_14028af20(0x58);
    *(longlong *)lVar10 = lVar10;
    *(longlong *)(lVar10 + 8) = lVar10;
    *(longlong *)(lVar10 + 0x10) = lVar10;
    *(undefined2 *)(lVar10 + 0x18) = 0x101;
    *plVar7 = lVar10;
    local_a8 = plVar7;
    FUN_140088360(param_4,&local_d8);
    plVar19 = local_d8;
    plVar7 = (longlong *)CONCAT44(uStack_cc,local_d0);
    for (plVar24 = local_d8; plVar24 != plVar7; plVar24 = plVar24 + 4) {
      plVar12 = plVar24;
      if (0xf < (ulonglong)plVar24[3]) {
        plVar12 = (longlong *)*plVar24;
      }
      lVar10 = FUN_140086de0(param_4,plVar12,plVar24[2] + (longlong)plVar12);
      if (*(char *)(lVar10 + 8) == '\a') {
        plVar12 = plVar24;
        if (0xf < (ulonglong)plVar24[3]) {
          plVar12 = (longlong *)*plVar24;
        }
        uVar8 = FUN_140086de0(param_4,plVar12,plVar24[2] + (longlong)plVar12);
        lVar10 = FUN_140086de0(uVar8,"value","");
        if (*(char *)(lVar10 + 8) != '\0') {
          plVar12 = plVar24;
          if (0xf < (ulonglong)plVar24[3]) {
            plVar12 = (longlong *)*plVar24;
          }
          uVar8 = FUN_140086de0(param_4,plVar12,plVar24[2] + (longlong)plVar12);
          uVar8 = FUN_140086de0(uVar8,"value","");
          plVar12 = plVar24;
          if (0xf < (ulonglong)plVar24[3]) {
            plVar12 = (longlong *)*plVar24;
          }
          uVar15 = FUN_140086de0(&local_a8,plVar12,plVar24[2] + (longlong)plVar12);
          FUN_140085520(uVar15,uVar8);
        }
      }
    }
    puVar23 = auStack_f8;
    plVar24 = plVar19;
    if (plVar19 != (longlong *)0x0) {
      for (; plVar24 != plVar7; plVar24 = plVar24 + 4) {
        FUN_140017240(plVar24);
      }
      if (0xfff < (local_c8 - (longlong)plVar19 & 0xffffffffffffffe0U)) {
        plVar24 = (longlong *)((longlong)plVar19 + (-8 - plVar19[-1]));
        plVar19 = (longlong *)plVar19[-1];
        puVar22 = auStack_f8;
        plVar12 = param_3;
        if ((longlong *)0x1f < plVar24) goto LAB_140043f9c;
      }
      goto LAB_140043fa6;
    }
  }
  else {
    sVar11 = strlen((char *)param_3);
    lVar10 = FUN_140086de0(lVar6,param_3,sVar11 + (longlong)param_3);
    local_70 = lVar10;
    sVar11 = strlen((char *)param_2);
    plVar12 = (longlong *)FUN_140086de0(lVar10,param_2,(longlong)param_2 + sVar11);
    FUN_140088360(param_4,&local_a8);
    plVar24 = local_a0;
    plVar7 = local_a8;
    if (local_a8 == local_a0) {
      plVar19 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        for (; plVar19 != plVar24; plVar19 = plVar19 + 4) {
          FUN_140017240(plVar19);
        }
        uVar21 = local_98 - (longlong)plVar7 & 0xffffffffffffffe0;
        if (0xfff < uVar21) {
          plVar24 = (longlong *)((longlong)plVar7 + (-8 - plVar7[-1]));
          if ((longlong *)0x1f < plVar24) goto LAB_140043f9c;
          uVar21 = uVar21 + 0x27;
          plVar7 = (longlong *)plVar7[-1];
        }
        thunk_FUN_14028af80(plVar7,uVar21);
      }
      bVar26 = false;
LAB_14004391d:
      if (*(char *)(param_5 + 8) == '\a') {
        FUN_140088360(plVar12,&local_d8);
        plVar7 = (longlong *)CONCAT44(uStack_cc,local_d0);
        for (plVar24 = local_d8; plVar24 != plVar7; plVar24 = plVar24 + 4) {
          plVar19 = plVar24;
          if (0xf < (ulonglong)plVar24[3]) {
            plVar19 = (longlong *)*plVar24;
          }
          lVar6 = FUN_140087490(param_5,plVar19,plVar24[2] + (longlong)plVar19);
          if (lVar6 == 0) {
            lVar6 = FUN_140084ac0();
          }
          plVar19 = plVar24;
          if (0xf < (ulonglong)plVar24[3]) {
            plVar19 = (longlong *)*plVar24;
          }
          uVar8 = FUN_140086de0(plVar12,plVar19,plVar24[2] + (longlong)plVar19);
          if (*(char *)(lVar6 + 8) == '\a') {
            lVar6 = FUN_140087490(lVar6,"value","");
            if (lVar6 == 0) {
              lVar6 = FUN_140084ac0();
            }
            cVar3 = FUN_140085a30(lVar6,uVar8);
            if (cVar3 == '\0') {
              local_a8 = plVar24;
              if (0xf < (ulonglong)plVar24[3]) {
                local_a8 = (longlong *)*plVar24;
              }
              local_a0 = (longlong *)plVar24[2];
              FUN_1400878f0(plVar12,&local_a8);
            }
          }
          lVar10 = local_70;
        }
        if ((((*(uint *)(plVar12 + 1) & 0xff) == 0) || ((*(uint *)(plVar12 + 1) & 0xff) - 6 < 2)) &&
           (iVar4 = FUN_1400863a0(plVar12), iVar4 == 0)) {
          local_a0 = (longlong *)strlen((char *)param_2);
          local_a8 = param_2;
          FUN_1400878f0(lVar10,&local_a8);
          uVar5 = *(uint *)(lVar10 + 8) & 0xff;
          if (((uVar5 == 0) || (uVar5 - 6 < 2)) && (iVar4 = FUN_1400863a0(lVar10), iVar4 == 0)) {
            local_a0 = (longlong *)strlen((char *)param_3);
            local_a8 = param_3;
            FUN_1400878f0(local_78,&local_a8);
          }
        }
        FUN_14000dcc0(&local_d8);
      }
      if (bVar26) goto LAB_1400440d2;
      goto LAB_140043aa3;
    }
    plVar19 = plVar7;
    if ((char)plVar12[1] != '\a') {
      local_d0 = CONCAT31(local_d0._1_3_,7);
      local_d0 = local_d0 & 0xfffffeff;
      local_b8 = 0;
      local_c8 = 0;
      lStack_c0 = 0;
      plVar13 = (longlong *)FUN_14028af20(0x10);
      *plVar13 = 0;
      plVar13[1] = 0;
      lVar14 = FUN_14028af20(0x58);
      *(longlong *)lVar14 = lVar14;
      *(longlong *)(lVar14 + 8) = lVar14;
      *(longlong *)(lVar14 + 0x10) = lVar14;
      *(undefined2 *)(lVar14 + 0x18) = 0x101;
      *plVar13 = lVar14;
      local_d8 = plVar13;
      FUN_140085610(plVar12,&local_d8);
      plVar13 = local_d8;
      switch((undefined1)local_d0) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
        break;
      case 4:
        if ((local_d0 >> 8 & 1) != 0) {
          thunk_FUN_1402d9040(local_d8);
        }
        break;
      case 6:
      case 7:
        if (local_d8 != (longlong *)0x0) {
          FUN_140088e40(local_d8);
          thunk_FUN_14028af80(plVar13,0x10);
        }
        break;
      default:
        FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434)
        ;
      }
      lVar14 = local_c8;
      if (local_c8 != 0) {
        FUN_140017240(local_c8 + 0x40);
        FUN_140017240(lVar14 + 0x20);
        FUN_140017240(lVar14);
        thunk_FUN_14028af80(lVar14,0x60);
      }
    }
    for (; plVar19 != plVar24; plVar19 = plVar19 + 4) {
      plVar13 = plVar19;
      if (0xf < (ulonglong)plVar19[3]) {
        plVar13 = (longlong *)*plVar19;
      }
      lVar10 = FUN_140086de0(param_4,plVar13,plVar19[2] + (longlong)plVar13);
      if (*(char *)(lVar10 + 8) == '\a') {
        plVar13 = plVar19;
        if (0xf < (ulonglong)plVar19[3]) {
          plVar13 = (longlong *)*plVar19;
        }
        uVar8 = FUN_140086de0(param_4,plVar13,plVar19[2] + (longlong)plVar13);
        lVar10 = FUN_140086de0(uVar8,"value","");
        if (*(char *)(lVar10 + 8) != '\0') {
          plVar13 = plVar19;
          if (0xf < (ulonglong)plVar19[3]) {
            plVar13 = (longlong *)*plVar19;
          }
          uVar8 = FUN_140086de0(param_4,plVar13,plVar19[2] + (longlong)plVar13);
          uVar8 = FUN_140086de0(uVar8,"value","");
          plVar13 = plVar19;
          if (0xf < (ulonglong)plVar19[3]) {
            plVar13 = (longlong *)*plVar19;
          }
          uVar15 = FUN_140086de0(plVar12,plVar13,plVar19[2] + (longlong)plVar13);
          FUN_140085520(uVar15,uVar8);
        }
      }
      lVar10 = local_70;
    }
    plVar19 = plVar7;
    if (plVar7 == (longlong *)0x0) {
LAB_1400438c0:
      bVar26 = true;
      goto LAB_14004391d;
    }
    for (; plVar19 != plVar24; plVar19 = plVar19 + 4) {
      FUN_140017240(plVar19);
    }
    uVar21 = local_98 - (longlong)plVar7 & 0xffffffffffffffe0;
    if (uVar21 < 0x1000) {
      thunk_FUN_14028af80(plVar7);
      goto LAB_1400438c0;
    }
    plVar24 = (longlong *)((longlong)plVar7 + (-8 - plVar7[-1]));
    if (plVar24 < &DAT_00000020) {
      thunk_FUN_14028af80(plVar7[-1],uVar21 + 0x27);
      bVar26 = true;
      goto LAB_14004391d;
    }
LAB_140043f9c:
    plVar19 = plVar24;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar22 = auStack_f0;
    param_3 = plVar12;
LAB_140043fa6:
    *(undefined8 *)(puVar22 + -8) = 0x140043fab;
    thunk_FUN_14028af80(plVar19);
    puVar23 = puVar22;
  }
  local_d0 = CONCAT31(local_d0._1_3_,(char)lVar6);
  local_d0 = local_d0 & 0xfffffeff;
  local_c8 = 0;
  lStack_c0 = 0;
  *(undefined8 *)(puVar23 + -8) = 0x140043fce;
  local_b8 = lVar6;
  sVar11 = strlen((char *)param_2);
  *(undefined8 *)(puVar23 + -8) = 0x140043fdf;
  uVar8 = FUN_140086de0(puVar23 + 0x20,param_2,(longlong)param_2 + sVar11);
  *(undefined8 *)(puVar23 + -8) = 0x140043feb;
  FUN_140085520(uVar8,&local_a8);
  *(undefined8 *)(puVar23 + -8) = 0x140043ff3;
  sVar11 = strlen((char *)param_3);
  *(undefined8 *)(puVar23 + -8) = 0x140044003;
  plVar7 = (longlong *)FUN_140086de0(local_78,param_3,sVar11 + (longlong)param_3);
  uVar5 = *(uint *)(plVar7 + 1);
  *(uint *)(plVar7 + 1) = local_d0;
  lVar6 = *plVar7;
  *plVar7 = *(longlong *)(puVar23 + 0x20);
  lVar10 = plVar7[2];
  plVar7[2] = local_c8;
  plVar7[3] = lStack_c0;
  plVar7[4] = local_b8;
  switch(uVar5 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if ((uVar5 >> 8 & 1) != 0) {
      *(undefined8 *)(puVar23 + -8) = 0x140044062;
      thunk_FUN_1402d9040(lVar6);
    }
    break;
  case 6:
  case 7:
    if (lVar6 != 0) {
      *(undefined8 *)(puVar23 + -8) = 0x140044071;
      FUN_140088e40(lVar6);
      *(undefined8 *)(puVar23 + -8) = 0x14004407e;
      thunk_FUN_14028af80(lVar6,0x10);
    }
    break;
  default:
    *(undefined8 *)(puVar23 + -8) = 0x140044099;
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  if (lVar10 != 0) {
    *(undefined8 *)(puVar23 + -8) = 0x1400440a7;
    FUN_140017240(lVar10 + 0x40);
    *(undefined8 *)(puVar23 + -8) = 0x1400440b0;
    FUN_140017240(lVar10 + 0x20);
    *(undefined8 *)(puVar23 + -8) = 0x1400440b8;
    FUN_140017240(lVar10);
    *(undefined8 *)(puVar23 + -8) = 0x1400440c5;
    thunk_FUN_14028af80(lVar10,0x60);
  }
  *(undefined8 *)(puVar23 + -8) = 0x1400440ce;
  FUN_140085440(&local_a8);
LAB_1400440d2:
  FUN_140085440(param_4);
  return;
}

