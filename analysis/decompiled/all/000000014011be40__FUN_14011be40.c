// Function: FUN_14011be40
// Addr: 14011be40
// Size: 2700 bytes


void FUN_14011be40(longlong param_1,byte *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  code *pcVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  char cVar14;
  longlong local_res10 [3];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  longlong local_e8;
  uint local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  uint local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  longlong local_70 [3];
  ulonglong local_58;
  
  puVar13 = auStack_108;
  puVar12 = auStack_108;
  uVar10 = 0;
  cVar14 = '\0';
  if ((*param_2 & 0x10) == 0) {
LAB_14011c090:
    if ((*param_2 & 4) == 0) goto LAB_14011c2c0;
    iVar1 = *(int *)(param_2 + 0x168);
    local_e0 = (local_e0 >> 8 & 0xfffffe) << 8;
    local_b8 = CONCAT31(local_b8._1_3_,1);
    uVar11 = local_b8 & 0xfffffeff;
    local_c8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    pdVar6 = (double *)FUN_140086de0(&local_e8,"state","");
    local_b8 = *(uint *)(pdVar6 + 1);
    *(uint *)(pdVar6 + 1) = uVar11;
    local_c0 = *pdVar6;
    *pdVar6 = (double)(longlong)iVar1;
    dVar2 = pdVar6[2];
    pdVar6[2] = 0.0;
    local_a0 = pdVar6[4];
    dStack_a8 = pdVar6[3];
    pdVar6[3] = 0.0;
    pdVar6[4] = 0.0;
    local_b0 = dVar2;
    FUN_140086d30(&local_c0);
    if (dVar2 != 0.0) {
      FUN_140017240((longlong)dVar2 + 0x40);
      FUN_140017240((longlong)dVar2 + 0x20);
      FUN_140017240(dVar2);
      thunk_FUN_14028af80(dVar2,0x60);
    }
    puVar7 = (undefined8 *)FUN_140004d00(local_70,&local_e8,0);
    local_98 = 0x12;
    local_90 = 0;
    local_88 = 0;
    uVar10 = puVar7[2];
    local_80 = 0;
    if (uVar10 != 0) {
      local_88 = (int)uVar10;
      uVar8 = thunk_FUN_14028af20(uVar10 & 0xffffffff);
      if (0xf < (ulonglong)puVar7[3]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      local_80 = uVar8;
      FUN_1404210f0(uVar8,puVar7,uVar10 & 0xffffffff);
      local_98 = CONCAT44((int)uVar10,(undefined4)local_98);
      local_90 = uVar8;
    }
    uVar8 = local_90;
    if (0xf < local_58) {
      uVar10 = local_58 + 1;
      lVar9 = local_70[0];
      if (0xfff < uVar10) {
        lVar9 = *(longlong *)(local_70[0] + -8);
        if (0x1f < (local_70[0] - lVar9) - 8U) goto LAB_14011c233;
        uVar10 = local_58 + 0x28;
      }
      thunk_FUN_14028af80(lVar9,uVar10);
    }
    if (cVar14 == '\0') {
      cVar14 = '\x01';
      FUN_140015140(param_1 + 0x4a0);
    }
    FUN_1400182d0(param_1 + 0x158,&local_98);
    thunk_FUN_14028af80(uVar8);
    lVar9 = local_e8;
    puVar13 = auStack_108;
    switch((undefined1)local_e0) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      goto switchD_14011c231_caseD_4;
    case 6:
    case 7:
      puVar13 = auStack_108;
      if (local_e8 != 0) {
        FUN_140088e40(local_e8);
        thunk_FUN_14028af80(lVar9,0x10);
        puVar13 = auStack_108;
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      puVar13 = auStack_108;
    }
  }
  else {
    local_e0 = (local_e0 >> 8 & 0xfffffe) << 8;
    local_b8 = CONCAT31(local_b8._1_3_,5);
    uVar11 = local_b8 & 0xfffffeff;
    local_c8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c0 = (double)CONCAT71(local_c0._1_7_,param_2[0x174]);
    pdVar6 = (double *)FUN_140086de0(&local_e8,"enabled","");
    local_b8 = *(uint *)(pdVar6 + 1);
    *(uint *)(pdVar6 + 1) = uVar11;
    dVar2 = *pdVar6;
    *pdVar6 = local_c0;
    dVar3 = pdVar6[2];
    pdVar6[2] = 0.0;
    dStack_a8 = pdVar6[3];
    local_a0 = pdVar6[4];
    pdVar6[3] = 0.0;
    pdVar6[4] = 0.0;
    local_c0 = dVar2;
    local_b0 = dVar3;
    FUN_140086d30(&local_c0);
    if (dVar3 != 0.0) {
      FUN_140017240((longlong)dVar3 + 0x40);
      FUN_140017240((longlong)dVar3 + 0x20);
      FUN_140017240(dVar3);
      thunk_FUN_14028af80(dVar3,0x60);
    }
    puVar7 = (undefined8 *)FUN_140004d00(local_70,&local_e8,0);
    local_98 = 0x11;
    local_90 = 0;
    local_88 = 0;
    uVar4 = puVar7[2];
    local_80 = 0;
    if (uVar4 != 0) {
      uVar10 = uVar4 & 0xffffffff;
      local_88 = (int)uVar4;
      uVar8 = thunk_FUN_14028af20(uVar4 & 0xffffffff);
      if (0xf < (ulonglong)puVar7[3]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      local_80 = uVar8;
      FUN_1404210f0(uVar8,puVar7,uVar10);
      local_98 = CONCAT44((int)uVar4,(undefined4)local_98);
      local_90 = uVar8;
    }
    uVar8 = local_90;
    cVar14 = (char)uVar10;
    if (local_58 < 0x10) {
LAB_14011bfcc:
      FUN_140015140(param_1 + 0x4a0);
      FUN_1400182d0(param_1 + 0x158,&local_98);
      thunk_FUN_14028af80(uVar8);
      switch((undefined1)local_e0) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
        break;
      case 4:
        if ((local_e0 >> 8 & 1) != 0) {
          thunk_FUN_1402d9040(local_e8);
        }
        break;
      case 6:
      case 7:
        if (local_e8 != 0) {
          FUN_140088e40(local_e8);
          thunk_FUN_14028af80(local_e8,0x10);
        }
        break;
      default:
        FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434)
        ;
      }
      lVar9 = local_d8;
      cVar14 = '\x01';
      local_e8 = 0;
      if (local_d8 != 0) {
        FUN_140017240(local_d8 + 0x40);
        FUN_140017240(lVar9 + 0x20);
        FUN_140017240(lVar9);
        thunk_FUN_14028af80(lVar9,0x60);
      }
      goto LAB_14011c090;
    }
    uVar10 = local_58 + 1;
    lVar9 = local_70[0];
    if (uVar10 < 0x1000) {
LAB_14011bfc7:
      thunk_FUN_14028af80(lVar9,uVar10);
      goto LAB_14011bfcc;
    }
    lVar9 = *(longlong *)(local_70[0] + -8);
    if ((local_70[0] - lVar9) - 8U < 0x20) {
      uVar10 = local_58 + 0x28;
      goto LAB_14011bfc7;
    }
LAB_14011c233:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar12 = auStack_100;
switchD_14011c231_caseD_4:
    puVar13 = puVar12;
    if ((*(uint *)(puVar12 + 0x28) >> 8 & 1) != 0) {
      *(undefined8 *)(puVar12 + -8) = 0x14011c24f;
      thunk_FUN_1402d9040(*(undefined8 *)(puVar12 + 0x20));
    }
  }
  lVar9 = local_d8;
  *(undefined8 *)(puVar13 + 0x20) = 0;
  if (local_d8 != 0) {
    *(undefined8 *)(puVar13 + -8) = 0x14011c2a2;
    FUN_140017240(local_d8 + 0x40);
    *(undefined8 *)(puVar13 + -8) = 0x14011c2ab;
    FUN_140017240(lVar9 + 0x20);
    *(undefined8 *)(puVar13 + -8) = 0x14011c2b3;
    FUN_140017240(lVar9);
    *(undefined8 *)(puVar13 + -8) = 0x14011c2c0;
    thunk_FUN_14028af80(lVar9,0x60);
  }
LAB_14011c2c0:
  if ((*param_2 & 1) != 0) {
    puVar13[0x28] = 0;
    *(uint *)(puVar13 + 0x28) = *(uint *)(puVar13 + 0x28) & 0xfffffeff;
    local_c8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    *(undefined8 *)(puVar13 + -8) = 0x14011c2f0;
    FUN_140084fe0(&local_c0,param_2 + 0x30);
    *(undefined8 *)(puVar13 + -8) = 0x14011c308;
    uVar8 = FUN_140086de0(puVar13 + 0x20,"title","");
    *(undefined8 *)(puVar13 + -8) = 0x14011c314;
    FUN_140085610(uVar8,&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c31d;
    FUN_140085440(&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c32a;
    FUN_140084fe0(&local_c0,param_2 + 0x50);
    *(undefined8 *)(puVar13 + -8) = 0x14011c342;
    uVar8 = FUN_140086de0(puVar13 + 0x20,"subTitle","");
    *(undefined8 *)(puVar13 + -8) = 0x14011c34e;
    FUN_140085610(uVar8,&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c357;
    FUN_140085440(&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c367;
    FUN_140084fe0(&local_c0,param_2 + 0x90);
    *(undefined8 *)(puVar13 + -8) = 0x14011c37f;
    uVar8 = FUN_140086de0(puVar13 + 0x20,"albumArtist","");
    *(undefined8 *)(puVar13 + -8) = 0x14011c38b;
    FUN_140085610(uVar8,&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c394;
    FUN_140085440(&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c3a1;
    FUN_140084fe0(&local_c0,param_2 + 0x70);
    *(undefined8 *)(puVar13 + -8) = 0x14011c3b9;
    uVar8 = FUN_140086de0(puVar13 + 0x20,"albumTitle","");
    *(undefined8 *)(puVar13 + -8) = 0x14011c3c5;
    FUN_140085610(uVar8,&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c3ce;
    FUN_140085440(&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c3de;
    FUN_140084fe0(&local_c0,param_2 + 0xb0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c3f6;
    uVar8 = FUN_140086de0(puVar13 + 0x20,"artist","");
    *(undefined8 *)(puVar13 + -8) = 0x14011c402;
    FUN_140085610(uVar8,&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c40b;
    FUN_140085440(&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c41b;
    FUN_140084fe0(&local_c0,param_2 + 0xd0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c433;
    uVar8 = FUN_140086de0(puVar13 + 0x20,"genres","");
    *(undefined8 *)(puVar13 + -8) = 0x14011c43f;
    FUN_140085610(uVar8,&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c448;
    FUN_140085440(&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c458;
    FUN_140084fe0(&local_c0,param_2 + 0xf0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c470;
    uVar8 = FUN_140086de0(puVar13 + 0x20,"contentType","");
    *(undefined8 *)(puVar13 + -8) = 0x14011c47c;
    FUN_140085610(uVar8,&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c485;
    FUN_140085440(&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c496;
    uVar8 = FUN_140004d00(&local_98,puVar13 + 0x20,0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c4a7;
    FUN_140018240(local_70,0x13,uVar8);
    *(undefined8 *)(puVar13 + -8) = 0x14011c4b0;
    FUN_140017240(&local_98);
    if (cVar14 == '\0') {
      cVar14 = '\x01';
      *(undefined8 *)(puVar13 + -8) = 0x14011c4c4;
      FUN_140015140(param_1 + 0x4a0);
    }
    *(undefined8 *)(puVar13 + -8) = 0x14011c4d4;
    FUN_1400182d0(param_1 + 0x158,local_70);
    *(undefined8 *)(puVar13 + -8) = 0x14011c4dd;
    thunk_FUN_14028af80(local_58);
    *(undefined8 *)(puVar13 + -8) = 0x14011c4e7;
    FUN_140085440(puVar13 + 0x20);
  }
  if ((*param_2 & 2) != 0) {
    uVar11 = *(uint *)(param_2 + 0x150);
    local_b8 = (local_b8 >> 8 & 0xfffffe) << 8;
    puVar13[0x28] = 2;
    *(uint *)(puVar13 + 0x28) = *(uint *)(puVar13 + 0x28) & 0xfffffeff;
    local_b0 = 0.0;
    dStack_a8 = 0.0;
    *(ulonglong *)(puVar13 + 0x20) = (ulonglong)uVar11;
    local_d8 = 0;
    uStack_d0 = 0;
    local_a0 = 0.0;
    local_c8 = 0;
    *(undefined8 *)(puVar13 + -8) = 0x14011c541;
    uVar8 = FUN_140086de0(&local_c0,"primaryColor","");
    *(undefined8 *)(puVar13 + -8) = 0x14011c54e;
    FUN_140085610(uVar8,puVar13 + 0x20);
    *(undefined8 *)(puVar13 + -8) = 0x14011c558;
    FUN_140085440(puVar13 + 0x20);
    uVar11 = *(uint *)(param_2 + 0x154);
    puVar13[0x28] = 2;
    *(uint *)(puVar13 + 0x28) = *(uint *)(puVar13 + 0x28) & 0xfffffeff;
    *(ulonglong *)(puVar13 + 0x20) = (ulonglong)uVar11;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    *(undefined8 *)(puVar13 + -8) = 0x14011c594;
    uVar8 = FUN_140086de0(&local_c0,"secondaryColor","");
    *(undefined8 *)(puVar13 + -8) = 0x14011c5a1;
    FUN_140085610(uVar8,puVar13 + 0x20);
    *(undefined8 *)(puVar13 + -8) = 0x14011c5ab;
    FUN_140085440(puVar13 + 0x20);
    uVar11 = *(uint *)(param_2 + 0x158);
    puVar13[0x28] = 2;
    *(uint *)(puVar13 + 0x28) = *(uint *)(puVar13 + 0x28) & 0xfffffeff;
    *(ulonglong *)(puVar13 + 0x20) = (ulonglong)uVar11;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    *(undefined8 *)(puVar13 + -8) = 0x14011c5e7;
    uVar8 = FUN_140086de0(&local_c0,"tertiaryColor","");
    *(undefined8 *)(puVar13 + -8) = 0x14011c5f4;
    FUN_140085610(uVar8,puVar13 + 0x20);
    *(undefined8 *)(puVar13 + -8) = 0x14011c5fe;
    FUN_140085440(puVar13 + 0x20);
    uVar11 = *(uint *)(param_2 + 0x15c);
    puVar13[0x28] = 2;
    *(uint *)(puVar13 + 0x28) = *(uint *)(puVar13 + 0x28) & 0xfffffeff;
    *(ulonglong *)(puVar13 + 0x20) = (ulonglong)uVar11;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    *(undefined8 *)(puVar13 + -8) = 0x14011c63a;
    uVar8 = FUN_140086de0(&local_c0,"textColor","");
    *(undefined8 *)(puVar13 + -8) = 0x14011c647;
    FUN_140085610(uVar8,puVar13 + 0x20);
    *(undefined8 *)(puVar13 + -8) = 0x14011c651;
    FUN_140085440(puVar13 + 0x20);
    uVar11 = *(uint *)(param_2 + 0x160);
    puVar13[0x28] = 2;
    *(uint *)(puVar13 + 0x28) = *(uint *)(puVar13 + 0x28) & 0xfffffeff;
    *(ulonglong *)(puVar13 + 0x20) = (ulonglong)uVar11;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    *(undefined8 *)(puVar13 + -8) = 0x14011c68d;
    uVar8 = FUN_140086de0(&local_c0,"highContrastColor","");
    *(undefined8 *)(puVar13 + -8) = 0x14011c69a;
    FUN_140085610(uVar8,puVar13 + 0x20);
    *(undefined8 *)(puVar13 + -8) = 0x14011c6a4;
    FUN_140085440(puVar13 + 0x20);
    lVar9 = *(longlong *)(param_2 + 0x110);
    local_res10[0] = *(longlong *)(param_2 + 0x118) - lVar9;
    *(undefined8 *)(puVar13 + -8) = 0x14011c6c6;
    FUN_140141920(&local_98,lVar9,local_res10);
    *(undefined8 *)(puVar13 + -8) = 0x14011c6da;
    uVar8 = FUN_1400924d0(local_70,"data:image/png;base64,",&local_98);
    *(undefined8 *)(puVar13 + -8) = 0x14011c6e7;
    FUN_140084fe0(puVar13 + 0x20,uVar8);
    *(undefined8 *)(puVar13 + -8) = 0x14011c6fe;
    uVar8 = FUN_140086de0(&local_c0,"thumbnail","");
    *(undefined8 *)(puVar13 + -8) = 0x14011c70b;
    FUN_140085610(uVar8,puVar13 + 0x20);
    *(undefined8 *)(puVar13 + -8) = 0x14011c715;
    FUN_140085440(puVar13 + 0x20);
    *(undefined8 *)(puVar13 + -8) = 0x14011c71e;
    FUN_140017240(local_70);
    *(undefined8 *)(puVar13 + -8) = 0x14011c72f;
    uVar8 = FUN_140004d00(puVar13 + 0x20,&local_c0,0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c740;
    FUN_140018240(local_70,0x14,uVar8);
    *(undefined8 *)(puVar13 + -8) = 0x14011c74a;
    FUN_140017240(puVar13 + 0x20);
    if (cVar14 == '\0') {
      cVar14 = '\x01';
      *(undefined8 *)(puVar13 + -8) = 0x14011c75e;
      FUN_140015140(param_1 + 0x4a0);
    }
    *(undefined8 *)(puVar13 + -8) = 0x14011c76e;
    FUN_1400182d0(param_1 + 0x158,local_70);
    *(undefined8 *)(puVar13 + -8) = 0x14011c777;
    thunk_FUN_14028af80(local_58);
    *(undefined8 *)(puVar13 + -8) = 0x14011c780;
    FUN_140017240(&local_98);
    *(undefined8 *)(puVar13 + -8) = 0x14011c789;
    FUN_140085440(&local_c0);
  }
  if ((*param_2 & 8) == 0) {
    if (cVar14 == '\0') {
      return;
    }
  }
  else {
    *(undefined8 *)(puVar13 + -8) = 0x14011c79e;
    FUN_140084dd0(&local_98,0);
    local_b8 = CONCAT31(local_b8._1_3_,3);
    local_b8 = local_b8 & 0xfffffeff;
    local_b0 = 0.0;
    dStack_a8 = 0.0;
    local_a0 = 0.0;
    local_c0 = (double)*(float *)(param_2 + 0x16c);
    *(undefined8 *)(puVar13 + -8) = 0x14011c7dd;
    uVar8 = FUN_140086de0(&local_98,"position","");
    *(undefined8 *)(puVar13 + -8) = 0x14011c7e9;
    FUN_140085610(uVar8,&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c7f2;
    FUN_140085440(&local_c0);
    local_b8 = CONCAT31(local_b8._1_3_,3);
    local_b8 = local_b8 & 0xfffffeff;
    local_b0 = 0.0;
    dStack_a8 = 0.0;
    local_a0 = 0.0;
    local_c0 = (double)*(float *)(param_2 + 0x170);
    *(undefined8 *)(puVar13 + -8) = 0x14011c831;
    uVar8 = FUN_140086de0(&local_98,"duration","");
    *(undefined8 *)(puVar13 + -8) = 0x14011c83d;
    FUN_140085610(uVar8,&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c846;
    FUN_140085440(&local_c0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c857;
    uVar8 = FUN_140004d00(puVar13 + 0x20,&local_98,0);
    *(undefined8 *)(puVar13 + -8) = 0x14011c868;
    FUN_140018240(local_70,0x15,uVar8);
    *(undefined8 *)(puVar13 + -8) = 0x14011c872;
    FUN_140017240(puVar13 + 0x20);
    if (cVar14 == '\0') {
      *(undefined8 *)(puVar13 + -8) = 0x14011c883;
      FUN_140015140(param_1 + 0x4a0);
    }
    *(undefined8 *)(puVar13 + -8) = 0x14011c893;
    FUN_1400182d0(param_1 + 0x158,local_70);
    *(undefined8 *)(puVar13 + -8) = 0x14011c89c;
    thunk_FUN_14028af80(local_58);
    *(undefined8 *)(puVar13 + -8) = 0x14011c8a5;
    FUN_140085440(&local_98);
  }
  *(undefined8 *)(puVar13 + -8) = 0x14011c8b8;
  FUN_140290ea0(param_1 + 0x4a0);
  return;
}

