// Function: FUN_14008d530
// Addr: 14008d530
// Size: 4511 bytes


ulonglong FUN_14008d530(longlong param_1)

{
  ulonglong *puVar1;
  code *pcVar2;
  char ******ppppppcVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  undefined8 uVar13;
  char *******pppppppcVar14;
  size_t sVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  char *pcVar21;
  int iVar22;
  ulonglong uVar23;
  char *pcVar24;
  undefined1 *puVar25;
  uint uVar26;
  char *pcVar27;
  int *piVar28;
  char *pcVar29;
  undefined8 in_R10;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 local_res8;
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [24];
  undefined4 local_228;
  char ******local_218;
  undefined8 uStack_210;
  ulonglong local_208;
  ulonglong uStack_200;
  char *local_1f8;
  uint local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  char ******local_1d0;
  undefined8 uStack_1c8;
  ulonglong local_1c0;
  ulonglong uStack_1b8;
  int local_1b0 [2];
  longlong local_1a8;
  longlong local_1a0;
  int local_198 [6];
  undefined8 local_180;
  uint local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  char local_158 [22];
  char local_142 [10];
  int local_138 [8];
  undefined1 local_118 [240];
  
  puVar25 = auStack_248;
  if (*(ulonglong *)(param_1 + 0xd0) < *(ulonglong *)(param_1 + 0x20)) {
    FUN_140017170(&local_218,"Exceeded stackLimit in readValue().");
                    /* WARNING: Subroutine does not return */
    FUN_140084bc0(&local_218);
  }
  cVar10 = FUN_14008e780(param_1,local_1b0);
  if (*(char *)(param_1 + 0xc0) != '\0') {
    while ((cVar10 != '\0' && (local_1b0[0] == 0xf))) {
      cVar10 = FUN_14008e780(param_1,local_1b0);
    }
  }
  iVar9 = local_1b0[0];
  iVar22 = 0;
  if ((*(char *)(param_1 + 0xd8) != '\0') && (*(longlong *)(param_1 + 0xb0) != 0)) {
    puVar17 = (undefined8 *)(param_1 + 0xa0);
    uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    uVar16 = *(undefined8 *)
              (*(longlong *)
                (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8
                ) + (ulonglong)((uint)uVar23 & 1) * 8);
    uVar13 = FUN_140016fc0(&local_218,puVar17);
    FUN_1400888c0(uVar16,uVar13,0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (0xf < *(ulonglong *)(param_1 + 0xb8)) {
      puVar17 = (undefined8 *)*puVar17;
    }
    *(undefined1 *)puVar17 = 0;
  }
  pcVar27 = (char *)0x1;
  switch(iVar9) {
  case 1:
    local_178 = CONCAT31(local_178._1_3_,7);
    uStack_1c8 = 0;
    local_1d0 = (char ******)0x0;
    uVar26 = local_178 & 0xfffffeff;
    local_1c0 = 0;
    uStack_1b8 = 0xf;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    plVar18 = (longlong *)FUN_14028af20(0x10);
    *plVar18 = 0;
    plVar18[1] = 0;
    lVar19 = FUN_14028af20(0x58);
    *(longlong *)lVar19 = lVar19;
    *(longlong *)(lVar19 + 8) = lVar19;
    *(longlong *)(lVar19 + 0x10) = lVar19;
    *(undefined2 *)(lVar19 + 0x18) = 0x101;
    *plVar18 = lVar19;
    uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    puVar17 = *(undefined8 **)
               (*(longlong *)
                 (*(longlong *)(param_1 + 8) +
                 (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8) +
               (ulonglong)((uint)uVar23 & 1) * 8);
    local_178 = *(uint *)(puVar17 + 1);
    *(uint *)(puVar17 + 1) = uVar26;
    local_180 = *puVar17;
    *puVar17 = plVar18;
    uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    *(longlong *)
     (*(longlong *)
       (*(longlong *)
         (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8) +
       (ulonglong)((uint)uVar23 & 1) * 8) + 0x18) = local_1a8 - *(longlong *)(param_1 + 0x70);
    do {
      pcVar24 = (char *)0x8000000000000000;
      cVar10 = FUN_14008e780(param_1,local_1b0);
      if (*(char *)(param_1 + 0xc0) != '\0') {
        if (cVar10 != '\0') {
          while (local_1b0[0] == 0xf) {
            cVar10 = FUN_14008e780(param_1,local_1b0);
            if (cVar10 == '\0') goto LAB_14008d77c;
          }
          goto LAB_14008d890;
        }
LAB_14008d77c:
        local_208 = 0;
        uStack_200 = 0;
        local_218 = (char ******)0x0;
        uStack_210 = 0;
        FUN_140017480(&local_218,"Missing \'}\' or object member name",0x21);
LAB_14008d7a5:
        piVar28 = local_1b0;
        goto LAB_14008d7a9;
      }
LAB_14008d890:
      iVar9 = local_1b0[0];
      if (cVar10 == '\0') goto LAB_14008d77c;
      if ((local_1b0[0] == 2) && ((local_1c0 == 0 || (*(char *)(param_1 + 0xc1) != '\0')))) {
LAB_14008ddd1:
        FUN_140085440(&local_180);
        if (0xf < uStack_1b8) {
          uVar23 = uStack_1b8 + 1;
          pppppppcVar14 = (char *******)local_1d0;
          if (0xfff < uVar23) {
            pppppppcVar14 = (char *******)local_1d0[-1];
            if ((char *)0x1f < (char *)((longlong)local_1d0 + (-8 - (longlong)pppppppcVar14)))
            goto LAB_14008e674;
            uVar23 = uStack_1b8 + 0x28;
          }
          thunk_FUN_14028af80(pppppppcVar14,uVar23);
        }
        pcVar27 = (char *)0x1;
        goto LAB_14008d84b;
      }
      local_1c0 = 0;
      pppppppcVar14 = &local_1d0;
      if (0xf < uStack_1b8) {
        pppppppcVar14 = (char *******)local_1d0;
      }
      *(char *)pppppppcVar14 = '\0';
      if (iVar9 == 5) {
        cVar10 = FUN_14008fd60(param_1,local_1b0,&local_1d0);
        if (cVar10 == '\0') {
          bVar12 = FUN_140090830(param_1,2);
          pcVar27 = (char *)(ulonglong)bVar12;
          goto LAB_14008d806;
        }
      }
      else {
        if ((iVar9 != 6) || (*(char *)(param_1 + 0xc4) == '\0')) goto LAB_14008d77c;
        local_1f0 = (local_1f0 >> 8 & 0xfffffe) << 8;
        local_1d8 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        cVar10 = FUN_14008f570(param_1,local_1b0,&local_1f8);
        uVar8 = local_1f0;
        pcVar27 = local_1f8;
        if (cVar10 == '\0') {
          bVar12 = FUN_140090830(param_1,2);
          pcVar27 = (char *)(ulonglong)bVar12;
          FUN_140085440(&local_1f8);
          goto LAB_14008d806;
        }
        uVar7 = (undefined1)local_1f0;
        switch(local_1f0 & 0xff) {
        case 0:
switchD_14008d970_caseD_0:
          local_208 = 0;
          uStack_210 = 0;
          local_218 = (char ******)0x0;
          uStack_200 = 0xf;
          break;
        case 1:
          local_142[2] = 0;
          if (local_1f8 == (char *)0x8000000000000000) {
            uVar23 = 0x8000000000000000;
            pcVar29 = local_142 + 2;
            do {
              pcVar24 = pcVar29;
              pcVar29 = pcVar24 + -1;
              uVar20 = uVar23 / 10;
              *pcVar29 = (char)uVar23 + (char)uVar20 * -10 + '0';
              uVar23 = uVar20;
            } while (uVar20 != 0);
            pcVar24 = pcVar24 + -2;
            *pcVar24 = '-';
          }
          else if ((longlong)local_1f8 < 0) {
            uVar23 = -(longlong)local_1f8;
            pcVar29 = local_142 + 2;
            do {
              pcVar24 = pcVar29;
              pcVar29 = pcVar24 + -1;
              uVar20 = uVar23 / 10;
              *pcVar29 = (char)uVar23 + (char)uVar20 * -10 + '0';
              uVar23 = uVar20;
            } while (uVar20 != 0);
            pcVar24 = pcVar24 + -2;
            *pcVar24 = '-';
          }
          else {
            pcVar24 = local_142 + 2;
            pcVar29 = local_1f8;
            do {
              pcVar24 = pcVar24 + -1;
              pcVar21 = (char *)((ulonglong)pcVar29 / 10);
              *pcVar24 = (char)pcVar29 + (char)pcVar21 * -10 + '0';
              pcVar29 = pcVar21;
            } while (pcVar21 != (char *)0x0);
          }
          if (pcVar24 < local_158) {
            FID_conflict__assert
                      (L"current >= buffer",L"D:\\dev\\we\\windows\\src\\json\\src\\json_writer.cpp"
                       ,0x2b);
          }
          local_208 = 0;
          uStack_200 = 0;
          local_218 = (char ******)0x0;
          uStack_210 = 0;
          sVar15 = strlen(pcVar24);
          FUN_140017480(&local_218,pcVar24,sVar15);
          break;
        case 2:
          FUN_140089ba0(&local_218,local_1f8);
          break;
        case 3:
          local_228 = 0;
          FUN_140089c60(&local_218,local_1f8,0,0x11);
          break;
        case 4:
          if (local_1f8 == (char *)0x0) goto switchD_14008d970_caseD_0;
          if ((local_1f0 >> 8 & 1) == 0) {
            sVar15 = strlen(local_1f8);
            uVar30 = (undefined4)sVar15;
            pcVar29 = pcVar27;
          }
          else {
            uVar30 = *(undefined4 *)local_1f8;
            pcVar29 = local_1f8 + 4;
          }
          local_208 = 0;
          local_218 = (char ******)0x0;
          uStack_210 = 0;
          uStack_200 = 0;
          FUN_140017480(&local_218,pcVar29,uVar30);
          break;
        case 5:
          local_208 = 0;
          uStack_200 = 0;
          pcVar24 = "false";
          local_218 = (char ******)0x0;
          uStack_210 = 0;
          if ((char)local_1f8 != '\0') {
            pcVar24 = "true";
          }
          sVar15 = strlen(pcVar24);
          FUN_140017480(&local_218,pcVar24,sVar15);
          break;
        default:
          goto switchD_14008d970_default;
        }
        if (0xf < uStack_1b8) {
          uVar23 = uStack_1b8 + 1;
          pppppppcVar14 = (char *******)local_1d0;
          if (0xfff < uVar23) {
            pppppppcVar14 = (char *******)local_1d0[-1];
            if ((char *)0x1f < (char *)((longlong)local_1d0 + (-8 - (longlong)pppppppcVar14)))
            goto LAB_14008e674;
            uVar23 = uStack_1b8 + 0x28;
          }
          thunk_FUN_14028af80(pppppppcVar14,uVar23);
        }
        uVar26 = (uint)in_R10;
        local_1c0 = local_208;
        uStack_1b8 = uStack_200;
        local_1d0 = local_218;
        uStack_1c8 = uStack_210;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar7) {
        case 4:
          if ((uVar8 >> 8 & 1) != 0) {
            thunk_FUN_1402d9040(pcVar27);
          }
          break;
        case 6:
        case 7:
          if (pcVar27 != (char *)0x0) {
            FUN_140088e40(pcVar27);
            thunk_FUN_14028af80(pcVar27,0x10);
          }
          break;
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xd:
          goto switchD_14008e486_caseD_0;
        case 0xc:
          goto switchD_14008e486_caseD_4;
        case 0xe:
        case 0xf:
          goto switchD_14008e486_caseD_6;
        }
        lVar19 = local_1e8;
        if (local_1e8 != 0) {
          FUN_140017240(local_1e8 + 0x40);
          FUN_140017240(lVar19 + 0x20);
          FUN_140017240(lVar19);
          thunk_FUN_14028af80(lVar19,0x60);
        }
      }
      if (0x3fffffff < local_1c0) {
        FUN_140017170(&local_218,"keylength >= 2^30");
                    /* WARNING: Subroutine does not return */
        FUN_140084bc0(&local_218);
      }
      if (*(char *)(param_1 + 199) != '\0') {
        uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
        pppppppcVar14 = &local_1d0;
        if (0xf < uStack_1b8) {
          pppppppcVar14 = (char *******)local_1d0;
        }
        lVar19 = FUN_140087490(*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(param_1 + 8) +
                                  (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8) +
                                (ulonglong)((uint)uVar23 & 1) * 8),pppppppcVar14,
                               (char *)((longlong)pppppppcVar14 + local_1c0));
        if (lVar19 == 0) goto LAB_14008dcbb;
        uVar16 = FUN_1400924d0(local_138,"Duplicate key: \'",&local_1d0);
        puVar17 = (undefined8 *)FUN_1400532a0(uVar16,&DAT_140485270,1);
        local_218 = (char ******)*puVar17;
        uStack_210 = puVar17[1];
        local_208 = puVar17[2];
        uStack_200 = puVar17[3];
        puVar17[2] = 0;
        puVar17[3] = 0xf;
        *(undefined1 *)puVar17 = 0;
        FUN_140017240(local_138);
        goto LAB_14008d7a5;
      }
LAB_14008dcbb:
      cVar10 = FUN_14008e780(param_1,local_138);
      if ((cVar10 == '\0') || (local_138[0] != 0xe)) {
        local_208 = 0;
        uStack_200 = 0;
        local_218 = (char ******)0x0;
        uStack_210 = 0;
        FUN_140017480(&local_218,"Missing \':\' after object member name",0x24);
        piVar28 = local_138;
        goto LAB_14008d7a9;
      }
      uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
      pppppppcVar14 = &local_1d0;
      if (0xf < uStack_1b8) {
        pppppppcVar14 = (char *******)local_1d0;
      }
      local_res8 = FUN_140086de0(*(undefined8 *)
                                  (*(longlong *)
                                    (*(longlong *)(param_1 + 8) +
                                    (uVar23 >> 1 & *(longlong *)(param_1 + 0x10) - 1U) * 8) +
                                  (ulonglong)((uint)uVar23 & 1) * 8),pppppppcVar14,
                                 (char *)((longlong)pppppppcVar14 + local_1c0));
      FUN_140092720(param_1,&local_res8);
      cVar10 = FUN_14008d530(param_1);
      plVar18 = (longlong *)(param_1 + 0x20);
      *plVar18 = *plVar18 + -1;
      if (*plVar18 == 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      if (cVar10 == '\0') {
        bVar12 = FUN_140090830(param_1,2);
        pcVar27 = (char *)(ulonglong)bVar12;
        goto LAB_14008d806;
      }
      cVar10 = FUN_14008e780(param_1,local_198);
      if (*(char *)(param_1 + 0xc0) != '\0') {
        while( true ) {
          if (cVar10 == '\0') goto LAB_14008dd88;
          if (local_198[0] != 0xf) break;
          cVar10 = FUN_14008e780(param_1,local_198);
        }
      }
      if (cVar10 == '\0') break;
      if (local_198[0] == 2) goto LAB_14008ddd1;
    } while (local_198[0] == 0xd);
LAB_14008dd88:
    local_208 = 0;
    uStack_200 = 0;
    local_218 = (char ******)0x0;
    uStack_210 = 0;
    FUN_140017480(&local_218,"Missing \',\' or \'}\' in object declaration",0x28);
    piVar28 = local_198;
LAB_14008d7a9:
    FUN_1400904e0(param_1,&local_218,piVar28,0);
    bVar12 = FUN_140090830(param_1,2);
    pcVar27 = (char *)(ulonglong)bVar12;
    if (0xf < uStack_200) {
      uVar23 = uStack_200 + 1;
      pppppppcVar14 = (char *******)local_218;
      if (0xfff < uVar23) {
        pppppppcVar14 = (char *******)local_218[-1];
        if ((char *)0x1f < (char *)((longlong)local_218 + (-8 - (longlong)pppppppcVar14)))
        goto LAB_14008e674;
        uVar23 = uStack_200 + 0x28;
      }
      thunk_FUN_14028af80(pppppppcVar14,uVar23);
    }
LAB_14008d806:
    FUN_140085440(&local_180);
    if (0xf < uStack_1b8) {
      uVar23 = uStack_1b8 + 1;
      pppppppcVar14 = (char *******)local_1d0;
      if (0xfff < uVar23) {
        pppppppcVar14 = (char *******)local_1d0[-1];
        if ((char *)0x1f < (char *)((longlong)local_1d0 + (-8 - (longlong)pppppppcVar14)))
        goto LAB_14008e674;
        uVar23 = uStack_1b8 + 0x28;
      }
      thunk_FUN_14028af80(pppppppcVar14,uVar23);
    }
    goto LAB_14008d84b;
  case 2:
  case 4:
  case 0xd:
    if (*(char *)(param_1 + 0xc3) != '\0') {
      *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -1;
      uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
      local_1f0 = (uint)local_1f0._1_3_ << 8;
      puVar17 = *(undefined8 **)
                 (*(longlong *)
                   (*(longlong *)(param_1 + 8) +
                   (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8) +
                 (ulonglong)((uint)uVar23 & 1) * 8);
      uVar26 = *(uint *)(puVar17 + 1);
      *(uint *)(puVar17 + 1) = local_1f0 & 0xfffffeff;
      pcVar24 = (char *)*puVar17;
      *puVar17 = local_1f8;
      uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
      *(longlong *)
       (*(longlong *)
         (*(longlong *)
           (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8) +
         (ulonglong)((uint)uVar23 & 1) * 8) + 0x18) =
           (*(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x70)) + -1;
      uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
      *(longlong *)
       (*(longlong *)
         (*(longlong *)
           (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8) +
         (ulonglong)((uint)uVar23 & 1) * 8) + 0x20) =
           *(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x70);
      switch(uVar26 & 0xff) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
        break;
      case 4:
switchD_14008e486_caseD_4:
        if ((byte)((byte)pcVar27 & (byte)(uVar26 >> 8)) != 0) {
          thunk_FUN_1402d9040(pcVar24);
        }
        break;
      case 6:
      case 7:
switchD_14008e486_caseD_6:
        if (pcVar24 != (char *)0x0) {
          FUN_140088e40(pcVar24);
          thunk_FUN_14028af80(pcVar24,0x10);
        }
        break;
      default:
        FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434)
        ;
      }
      goto switchD_14008e486_caseD_0;
    }
  default:
    uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    uStack_210 = 0;
    *(longlong *)
     (*(longlong *)
       (*(longlong *)
         (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8) +
       (ulonglong)((uint)uVar23 & 1) * 8) + 0x18) = local_1a8 - *(longlong *)(param_1 + 0x70);
    uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    *(longlong *)
     (*(longlong *)
       (*(longlong *)
         (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8) +
       (ulonglong)((uint)uVar23 & 1) * 8) + 0x20) = local_1a0 - *(longlong *)(param_1 + 0x70);
    local_218 = (char ******)FUN_14028af20(0x30);
    uVar13 = s_Syntax_error__value__object_or_a_1404850b8._16_8_;
    uVar16 = s_Syntax_error__value__object_or_a_1404850b8._8_8_;
    ppppppcVar3 = (char ******)
                  CONCAT26(s_Syntax_error__value__object_or_a_1404850b8._30_2_,
                           s_Syntax_error__value__object_or_a_1404850b8._24_6_);
    *local_218 = (char *****)s_Syntax_error__value__object_or_a_1404850b8._0_8_;
    local_218[1] = (char *****)uVar16;
    uVar6 = s_Syntax_error__value__object_or_a_1404850b8._42_4_;
    uVar5 = s_Syntax_error__value__object_or_a_1404850b8._38_4_;
    uVar31 = s_Syntax_error__value__object_or_a_1404850b8._34_4_;
    uVar30 = CONCAT22(s_Syntax_error__value__object_or_a_1404850b8._32_2_,
                      s_Syntax_error__value__object_or_a_1404850b8._30_2_);
    local_208 = 0x2e;
    local_218[2] = (char *****)uVar13;
    local_218[3] = (char *****)ppppppcVar3;
    uStack_200 = 0x2f;
    *(undefined4 *)((longlong)local_218 + 0x1e) = uVar30;
    *(undefined4 *)((longlong)local_218 + 0x22) = uVar31;
    *(undefined4 *)((longlong)local_218 + 0x26) = uVar5;
    *(undefined4 *)((longlong)local_218 + 0x2a) = uVar6;
    *(char *)((longlong)local_218 + 0x2e) = '\0';
    bVar12 = FUN_1400904e0(param_1,&local_218,local_1b0,0);
    if (0xf < uStack_200) {
      uVar23 = uStack_200 + 1;
      pppppppcVar14 = (char *******)local_218;
      if (0xfff < uVar23) {
        pppppppcVar14 = (char *******)local_218[-1];
        if ((char *)0x1f < (char *)((longlong)local_218 + (-8 - (longlong)pppppppcVar14))) {
LAB_14008e674:
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar25 = auStack_240;
switchD_14008d970_default:
          *(undefined8 *)(puVar25 + -8) = 0x14008e684;
          FUN_140089050(local_118);
          *(undefined8 *)(puVar25 + -8) = 0x14008e694;
          FUN_14000c990(local_118,"Type is not convertible to string");
          *(undefined8 *)(puVar25 + -8) = 0x14008e6ad;
          FID_conflict__assert
                    (L"false && oss.str().c_str()",
                     L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x2b8);
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar25 + -8) = &UNK_14008e6b2;
          FUN_1402c97e4();
        }
        uVar23 = uStack_200 + 0x28;
      }
      thunk_FUN_14028af80(pppppppcVar14,uVar23);
    }
    return (ulonglong)bVar12;
  case 3:
    local_1f0 = CONCAT31(local_1f0._1_3_,6);
    uVar26 = local_1f0 & 0xfffffeff;
    local_1d8 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    plVar18 = (longlong *)FUN_14028af20(0x10);
    *plVar18 = 0;
    plVar18[1] = 0;
    lVar19 = FUN_14028af20(0x58);
    *(longlong *)lVar19 = lVar19;
    *(longlong *)(lVar19 + 8) = lVar19;
    *(longlong *)(lVar19 + 0x10) = lVar19;
    *(undefined2 *)(lVar19 + 0x18) = 0x101;
    *plVar18 = lVar19;
    uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    puVar17 = *(undefined8 **)
               (*(longlong *)
                 (*(longlong *)(param_1 + 8) +
                 (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8) +
               (ulonglong)((uint)uVar23 & 1) * 8);
    local_1f0 = *(uint *)(puVar17 + 1);
    *(uint *)(puVar17 + 1) = uVar26;
    local_1f8 = (char *)*puVar17;
    *puVar17 = plVar18;
    uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    *(longlong *)
     (*(longlong *)
       (*(longlong *)
         (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8) +
       (ulonglong)((uint)uVar23 & 1) * 8) + 0x18) = local_1a8 - *(longlong *)(param_1 + 0x70);
    while( true ) {
      FUN_14008f240(param_1);
      if (((*(char **)(param_1 + 0x80) != *(char **)(param_1 + 0x78)) &&
          (**(char **)(param_1 + 0x80) == ']')) &&
         ((iVar22 == 0 ||
          ((*(char *)(param_1 + 0xc1) != '\0' && (*(char *)(param_1 + 0xc3) == '\0')))))) break;
      uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
      local_res8 = FUN_140086540(*(undefined8 *)
                                  (*(longlong *)
                                    (*(longlong *)(param_1 + 8) +
                                    (uVar23 >> 1 & *(longlong *)(param_1 + 0x10) - 1U) * 8) +
                                  (ulonglong)((uint)uVar23 & 1) * 8),iVar22);
      FUN_140092720(param_1,&local_res8);
      cVar10 = FUN_14008d530(param_1);
      plVar18 = (longlong *)(param_1 + 0x20);
      *plVar18 = *plVar18 + -1;
      if (*plVar18 == 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      if (cVar10 == '\0') {
        bVar12 = FUN_140090830(param_1,4);
        pcVar27 = (char *)(ulonglong)bVar12;
LAB_14008e140:
        FUN_140085440(&local_1f8);
        goto LAB_14008d84b;
      }
      cVar11 = FUN_14008e780();
      cVar10 = cVar11;
      if (*(char *)(param_1 + 0xc0) != '\0') {
        while ((cVar11 = '\0', cVar10 != '\0' && (cVar11 = cVar10, local_198[0] == 0xf))) {
          cVar10 = FUN_14008e780(param_1);
        }
      }
      if ((local_198[0] == 0xd) || (local_198[0] == 4)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((cVar11 == '\0') || (bVar4)) {
        local_208 = 0;
        uStack_200 = 0;
        local_218 = (char ******)0x0;
        uStack_210 = 0;
        FUN_140017480(&local_218,"Missing \',\' or \']\' in array declaration",0x27);
        FUN_1400904e0(param_1,&local_218,local_198,0);
        bVar12 = FUN_140090830(param_1,4);
        pcVar27 = (char *)(ulonglong)bVar12;
        if (uStack_200 < 0x10) goto LAB_14008e140;
        FUN_140017200(&local_218,local_218);
        FUN_140085440(&local_1f8);
        goto LAB_14008d84b;
      }
      if (local_198[0] == 4) goto LAB_14008e0ab;
      iVar22 = iVar22 + 1;
    }
    FUN_14008e780(param_1,local_138);
LAB_14008e0ab:
    pcVar27 = (char *)0x1;
    FUN_140085440(&local_1f8);
LAB_14008d84b:
    uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    *(longlong *)
     (*(longlong *)
       (*(longlong *)
         (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8) +
       (ulonglong)((uint)uVar23 & 1) * 8) + 0x20) =
         *(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x70);
    goto switchD_14008e486_caseD_0;
  case 5:
    bVar12 = FUN_14008fb80(param_1,local_1b0);
    pcVar27 = (char *)(ulonglong)bVar12;
    goto switchD_14008e486_caseD_0;
  case 6:
    bVar12 = FUN_14008f390(param_1,local_1b0);
    pcVar27 = (char *)(ulonglong)bVar12;
    goto switchD_14008e486_caseD_0;
  case 7:
    local_1e8 = 0;
    FUN_140086ca0(&local_1f8,5,0);
    local_1f8 = (char *)CONCAT71(local_1f8._1_7_,1);
    goto LAB_14008e193;
  case 8:
    local_1e8 = 0;
    FUN_140086ca0(&local_1f8,5,0);
    local_1f8 = (char *)((ulonglong)local_1f8 & 0xffffffffffffff00);
LAB_14008e193:
    uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    puVar1 = *(ulonglong **)
              (*(longlong *)
                (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8
                ) + (ulonglong)((uint)uVar23 & 1) * 8);
    uVar23 = puVar1[1];
    *(uint *)(puVar1 + 1) = local_1f0;
    pcVar24 = (char *)*puVar1;
    *puVar1 = (ulonglong)local_1f8;
    local_1f8 = pcVar24;
    local_1f0 = (int)uVar23;
    goto LAB_14008e1df;
  case 9:
    FUN_140084dd0(&local_1f8,0);
    uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    puVar1 = *(ulonglong **)
              (*(longlong *)
                (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8
                ) + (ulonglong)((uint)uVar23 & 1) * 8);
    uVar23 = puVar1[1];
    *(uint *)(puVar1 + 1) = local_1f0;
    pcVar24 = (char *)*puVar1;
    *puVar1 = (ulonglong)local_1f8;
    local_1f8 = pcVar24;
    local_1f0 = (int)uVar23;
    goto LAB_14008e1df;
  case 10:
    local_1e8 = 0;
    FUN_140086ca0(&local_1f8,3,0);
    uVar30 = (undefined4)DAT_140492998;
    uVar31 = (undefined4)((ulonglong)DAT_140492998 >> 0x20);
    break;
  case 0xb:
    local_1e8 = 0;
    FUN_140086ca0(&local_1f8,3,0);
    uVar30 = (undefined4)DAT_140492990;
    uVar31 = (undefined4)((ulonglong)DAT_140492990 >> 0x20);
    break;
  case 0xc:
    local_1e8 = 0;
    FUN_140086ca0(&local_1f8,3,0);
    uVar30 = (undefined4)DAT_140492a38;
    uVar31 = (undefined4)((ulonglong)DAT_140492a38 >> 0x20);
  }
  uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
  puVar1 = *(ulonglong **)
            (*(longlong *)
              (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8)
            + (ulonglong)((uint)uVar23 & 1) * 8);
  uVar23 = puVar1[1];
  *(uint *)(puVar1 + 1) = local_1f0;
  local_1f8 = (char *)*puVar1;
  *puVar1 = CONCAT44(uVar31,uVar30);
  local_1f0 = (int)uVar23;
LAB_14008e1df:
  uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
  *(longlong *)
   (*(longlong *)
     (*(longlong *)
       (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8) +
     (ulonglong)((uint)uVar23 & 1) * 8) + 0x18) = local_1a8 - *(longlong *)(param_1 + 0x70);
  uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
  *(longlong *)
   (*(longlong *)
     (*(longlong *)
       (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8) +
     (ulonglong)((uint)uVar23 & 1) * 8) + 0x20) = local_1a0 - *(longlong *)(param_1 + 0x70);
  FUN_140085440(&local_1f8);
switchD_14008e486_caseD_0:
  if (*(char *)(param_1 + 0xd8) != '\0') {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x80);
    *(undefined1 *)(param_1 + 0x98) = 0;
    uVar23 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    *(undefined8 *)(param_1 + 0x90) =
         *(undefined8 *)
          (*(longlong *)
            (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar23 >> 1) * 8) +
          (ulonglong)((uint)uVar23 & 1) * 8);
  }
  return (ulonglong)pcVar27 & 0xff;
}

