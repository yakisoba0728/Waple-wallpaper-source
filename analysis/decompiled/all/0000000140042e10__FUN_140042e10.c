// Function: FUN_140042e10
// Addr: 140042e10
// Size: 1500 bytes


undefined8 FUN_140042e10(longlong param_1,char *param_2,char *param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  size_t sVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  char *pcVar11;
  undefined1 *puVar12;
  char *pcVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  longlong *local_b8;
  uint local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  char *local_88;
  longlong local_80;
  ulonglong local_78;
  undefined1 local_70 [8];
  char local_68;
  
  puVar12 = auStack_d8;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (*param_2 == '\0') {
    return 0;
  }
  if (param_3 == (char *)0x0) {
    return 0;
  }
  if (*param_3 == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x50) != '\a') {
    return 0;
  }
  lVar3 = FUN_140086de0(param_1 + 0x48,"wproperties","");
  if (*(int *)(param_1 + 0x98) < 0) {
LAB_14004302c:
    if (*(char *)(lVar3 + 8) != '\a') {
      return 0;
    }
    sVar7 = strlen(param_3);
    lVar4 = FUN_140087490(lVar3,param_3,param_3 + sVar7);
    if (lVar4 == 0) {
      return 0;
    }
    sVar7 = strlen(param_3);
    lVar3 = FUN_140086de0(lVar3,param_3,param_3 + sVar7);
    if (*(char *)(lVar3 + 8) != '\a') {
      return 0;
    }
    sVar7 = strlen(param_2);
    lVar4 = FUN_140087490(lVar3,param_2,param_2 + sVar7);
    if (lVar4 == 0) {
      return 0;
    }
    local_b0 = CONCAT31(local_b0._1_3_,7);
    local_b0 = local_b0 & 0xfffffeff;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    plVar5 = (longlong *)FUN_14028af20(0x10);
    *plVar5 = 0;
    plVar5[1] = 0;
    lVar4 = FUN_14028af20(0x58);
    *(longlong *)lVar4 = lVar4;
    *(longlong *)(lVar4 + 8) = lVar4;
    *(longlong *)(lVar4 + 0x10) = lVar4;
    *(undefined2 *)(lVar4 + 0x18) = 0x101;
    *plVar5 = lVar4;
    local_b8 = plVar5;
    FUN_140085610(param_4,&local_b8);
    plVar5 = local_b8;
    switch((undefined1)local_b0) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((local_b0 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(local_b8);
      }
      break;
    case 6:
    case 7:
      if (local_b8 != (longlong *)0x0) {
        FUN_140088e40(local_b8);
        thunk_FUN_14028af80(plVar5,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    lVar4 = local_a8;
    if (local_a8 != 0) {
      FUN_140017240(local_a8 + 0x40);
      FUN_140017240(lVar4 + 0x20);
      FUN_140017240(lVar4);
      thunk_FUN_14028af80(lVar4,0x60);
    }
    sVar7 = strlen(param_2);
    uVar6 = FUN_140086de0(lVar3,param_2,param_2 + sVar7);
    FUN_140088360(uVar6,&local_90);
    param_2 = (char *)CONCAT71(uStack_8f,local_90);
    for (pcVar13 = param_2; pcVar13 != local_88; pcVar13 = pcVar13 + 0x20) {
      pcVar11 = pcVar13;
      if (0xf < *(ulonglong *)(pcVar13 + 0x18)) {
        pcVar11 = *(char **)pcVar13;
      }
      uVar8 = FUN_140086de0(uVar6,pcVar11,pcVar11 + *(longlong *)(pcVar13 + 0x10));
      FUN_140085090(local_70,uVar8);
      if (local_68 == '\a') {
        pcVar11 = pcVar13;
        if (0xf < *(ulonglong *)(pcVar13 + 0x18)) {
          pcVar11 = *(char **)pcVar13;
        }
        uVar8 = FUN_140086de0(param_4,pcVar11,pcVar11 + *(longlong *)(pcVar13 + 0x10));
        FUN_140085520(uVar8,local_70);
      }
      else {
        local_b0 = CONCAT31(local_b0._1_3_,7);
        local_b0 = local_b0 & 0xfffffeff;
        local_98 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        plVar5 = (longlong *)FUN_14028af20(0x10);
        *plVar5 = 0;
        plVar5[1] = 0;
        lVar3 = FUN_14028af20(0x58);
        *(longlong *)lVar3 = lVar3;
        *(longlong *)(lVar3 + 8) = lVar3;
        *(longlong *)(lVar3 + 0x10) = lVar3;
        *(undefined2 *)(lVar3 + 0x18) = 0x101;
        *plVar5 = lVar3;
        local_b8 = plVar5;
        uVar8 = FUN_140086de0(&local_b8,"value","");
        FUN_140085520(uVar8,local_70);
        pcVar11 = pcVar13;
        if (0xf < *(ulonglong *)(pcVar13 + 0x18)) {
          pcVar11 = *(char **)pcVar13;
        }
        uVar8 = FUN_140086de0(param_4,pcVar11,pcVar11 + *(longlong *)(pcVar13 + 0x10));
        FUN_140085520(uVar8,&local_b8);
        plVar5 = local_b8;
        switch((undefined1)local_b0) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 5:
          break;
        case 4:
          if ((local_b0 >> 8 & 1) != 0) {
            thunk_FUN_1402d9040(local_b8);
          }
          break;
        case 6:
        case 7:
          if (local_b8 != (longlong *)0x0) {
            FUN_140088e40(local_b8);
            thunk_FUN_14028af80(plVar5,0x10);
          }
          break;
        default:
          FID_conflict__assert
                    (L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
        }
        lVar3 = local_a8;
        if (local_a8 != 0) {
          FUN_140017240(local_a8 + 0x40);
          FUN_140017240(lVar3 + 0x20);
          FUN_140017240(lVar3);
          thunk_FUN_14028af80(lVar3,0x60);
        }
      }
      FUN_140085440(local_70);
    }
    pcVar13 = param_2;
    if (param_2 == (char *)0x0) {
      return 1;
    }
    for (; pcVar13 != local_88; pcVar13 = pcVar13 + 0x20) {
      FUN_140017240(pcVar13);
    }
    uVar10 = local_80 - (longlong)param_2 & 0xffffffffffffffe0;
    if (uVar10 < 0x1000) goto LAB_1400433ca;
    plVar5 = (longlong *)(param_2 + -8);
    param_2 = param_2 + (-8 - *plVar5);
    if (param_2 < &DAT_00000020) {
      thunk_FUN_14028af80(*plVar5,uVar10 + 0x27);
      return 1;
    }
  }
  else {
    lVar4 = FUN_140086de0(param_1 + 0x48,"wpropertiesvd","");
    uVar14 = extraout_XMM0_Da;
    if (*(char *)(lVar4 + 8) != '\a') {
      local_b0 = CONCAT31(local_b0._1_3_,7);
      local_b0 = local_b0 & 0xfffffeff;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      plVar5 = (longlong *)FUN_14028af20(0x10);
      *plVar5 = 0;
      plVar5[1] = 0;
      lVar4 = FUN_14028af20(0x58);
      *(longlong *)lVar4 = lVar4;
      *(longlong *)(lVar4 + 8) = lVar4;
      *(longlong *)(lVar4 + 0x10) = lVar4;
      *(undefined2 *)(lVar4 + 0x18) = 0x101;
      *plVar5 = lVar4;
      local_b8 = plVar5;
      uVar6 = FUN_140086de0(param_1 + 0x48,"wpropertiesvd","");
      FUN_140085610(uVar6,&local_b8);
      uVar14 = FUN_140085440(&local_b8);
    }
    FUN_14003f6b0(uVar14,&local_90,*(undefined4 *)(param_1 + 0x98));
    uVar6 = FUN_140086de0(param_1 + 0x48,"wpropertiesvd","");
    puVar9 = &local_90;
    if (0xf < local_78) {
      puVar9 = (undefined1 *)CONCAT71(uStack_8f,local_90);
    }
    lVar4 = FUN_140087490(uVar6,puVar9,puVar9 + local_80);
    if (lVar4 != 0) {
      uVar6 = FUN_140086de0(param_1 + 0x48,"wpropertiesvd","");
      puVar9 = &local_90;
      if (0xf < local_78) {
        puVar9 = (undefined1 *)CONCAT71(uStack_8f,local_90);
      }
      lVar4 = FUN_140086de0(uVar6,puVar9,puVar9 + local_80);
      if (*(char *)(lVar4 + 8) == '\a') {
        uVar6 = FUN_140086de0(param_1 + 0x48,"wpropertiesvd","");
        puVar9 = &local_90;
        if (0xf < local_78) {
          puVar9 = (undefined1 *)CONCAT71(uStack_8f,local_90);
        }
        lVar3 = FUN_140086de0(uVar6,puVar9,puVar9 + local_80);
      }
    }
    if (local_78 < 0x10) {
LAB_14004301c:
      local_80 = 0;
      local_78 = 0xf;
      local_90 = 0;
      goto LAB_14004302c;
    }
    lVar2 = CONCAT71(uStack_8f,local_90);
    uVar10 = local_78 + 1;
    lVar4 = lVar2;
    if (uVar10 < 0x1000) {
LAB_140043017:
      thunk_FUN_14028af80(lVar4,uVar10);
      goto LAB_14004301c;
    }
    lVar4 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar4) - 8U < 0x20) {
      uVar10 = local_78 + 0x28;
      goto LAB_140043017;
    }
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar12 = auStack_d0;
LAB_1400433ca:
  *(undefined8 *)(puVar12 + -8) = 0x1400433d2;
  thunk_FUN_14028af80(param_2);
  return 1;
}

