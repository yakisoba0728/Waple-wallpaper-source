// Function: FUN_1401c1e20
// Addr: 1401c1e20
// Size: 1171 bytes


void FUN_1401c1e20(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  double dVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  float fVar13;
  float fVar14;
  undefined8 local_78;
  uint local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar5 = FUN_140087490(param_2,"audioprocessingmode","");
  if (lVar5 == 0) {
    local_70 = CONCAT31(local_70._1_3_,1);
    plVar6 = (longlong *)FUN_140086de0(param_2,"audioprocessingmode","");
    uVar11 = *(uint *)(plVar6 + 1);
    *(uint *)(plVar6 + 1) = local_70 & 0xfffffeff;
    lVar5 = *plVar6;
    *plVar6 = 0;
    lVar1 = plVar6[2];
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    switch(uVar11 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar11 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(lVar5);
      }
      break;
    case 6:
    case 7:
      if (lVar5 != 0) {
        FUN_140088e40(lVar5);
        thunk_FUN_14028af80(lVar5,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar5 = FUN_140087490(param_2,"audioprocessingexponent","");
  if (lVar5 == 0) {
    local_70 = CONCAT31(local_70._1_3_,3);
    uVar11 = local_70 & 0xfffffeff;
    puVar7 = (undefined8 *)FUN_140086de0(param_2,"audioprocessingexponent","");
    local_70 = *(uint *)(puVar7 + 1);
    *(uint *)(puVar7 + 1) = uVar11;
    local_78 = *puVar7;
    *puVar7 = 0x4000000000000000;
    lVar5 = puVar7[2];
    puVar7[2] = 0;
    uStack_60 = puVar7[3];
    local_58 = puVar7[4];
    puVar7[3] = 0;
    puVar7[4] = 0;
    local_68 = lVar5;
    FUN_140086d30(&local_78);
    if (lVar5 != 0) {
      FUN_140017240(lVar5 + 0x40);
      FUN_140017240(lVar5 + 0x20);
      FUN_140017240(lVar5);
      thunk_FUN_14028af80(lVar5,0x60);
    }
  }
  lVar5 = FUN_140087490(param_2,"audioprocessingbounds","");
  if (lVar5 == 0) {
    local_70 = CONCAT31(local_70._1_3_,4);
    uVar11 = local_70 | 0x100;
    puVar8 = (undefined4 *)_malloc_base(0xc);
    if (puVar8 == (undefined4 *)0x0) {
      FUN_140017170(&local_78,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_78);
    }
    *puVar8 = 7;
    puVar8[1] = (undefined4)DAT_14048f3b8;
    *(undefined2 *)(puVar8 + 2) = DAT_14048f3b8._4_2_;
    *(undefined1 *)((longlong)puVar8 + 10) = DAT_14048f3b8._6_1_;
    *(undefined1 *)((longlong)puVar8 + 0xb) = 0;
    puVar7 = (undefined8 *)FUN_140086de0(param_2,"audioprocessingbounds","");
    local_70 = *(uint *)(puVar7 + 1);
    *(uint *)(puVar7 + 1) = uVar11;
    local_78 = *puVar7;
    *puVar7 = puVar8;
    lVar5 = puVar7[2];
    puVar7[2] = 0;
    local_58 = puVar7[4];
    uStack_60 = puVar7[3];
    puVar7[3] = 0;
    puVar7[4] = 0;
    local_68 = lVar5;
    FUN_140086d30(&local_78);
    if (lVar5 != 0) {
      FUN_140017240(lVar5 + 0x40);
      FUN_140017240(lVar5 + 0x20);
      FUN_140017240(lVar5);
      thunk_FUN_14028af80(lVar5,0x60);
    }
  }
  lVar5 = FUN_140087490(param_2,"audioprocessingfrequencystart","");
  if (lVar5 == 0) {
    local_70 = CONCAT31(local_70._1_3_,1);
    local_70 = local_70 & 0xfffffeff;
    local_58 = 0;
    local_78 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uVar9 = FUN_140086de0(param_2,"audioprocessingfrequencystart","");
    FUN_140085610(uVar9,&local_78);
    FUN_140085440(&local_78);
  }
  FUN_1401d7be0(param_2,"audioprocessingfrequencyend",1);
  uVar9 = FUN_140086de0(param_2,"audioprocessingmode","");
  uVar3 = FUN_140085ee0(uVar9);
  *param_1 = uVar3;
  puVar7 = (undefined8 *)FUN_140086de0(param_2,"audioprocessingbounds","");
  pcVar12 = (char *)*puVar7;
  if ((pcVar12 == (char *)0x0) ||
     ((((*(uint *)(puVar7 + 1) >> 8 & 1) != 0 && (pcVar12 = pcVar12 + 4, pcVar12 == (char *)0x0)) ||
      (*pcVar12 == '\0')))) {
    fVar14 = 0.0;
    fVar13 = 0.0;
    goto LAB_1401c21f1;
  }
  dVar2 = (double)FUN_1402d06ac(pcVar12);
  fVar14 = (float)dVar2;
  if (*pcVar12 != '\0') {
    do {
      if (*pcVar12 == ' ') goto LAB_1401c21d5;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar12 != '\0');
    dVar2 = (double)FUN_1402d06ac(pcVar12);
    fVar13 = (float)dVar2;
    goto LAB_1401c21f1;
  }
  goto LAB_1401c21dd;
  while (*pcVar12 == ' ') {
LAB_1401c21d5:
    pcVar12 = pcVar12 + 1;
    if (*pcVar12 == '\0') break;
  }
LAB_1401c21dd:
  dVar2 = (double)FUN_1402d06ac(pcVar12);
  fVar13 = (float)dVar2;
LAB_1401c21f1:
  param_1[2] = fVar14;
  param_1[3] = fVar13;
  uVar9 = FUN_140086de0(param_2,"audioprocessingexponent","");
  uVar3 = FUN_140086220(uVar9);
  param_1[1] = uVar3;
  uVar9 = FUN_140086de0(param_2,"audioprocessingfrequencystart","");
  uVar3 = FUN_140085ee0(uVar9);
  param_1[4] = uVar3;
  uVar9 = FUN_140086de0(param_2,"audioprocessingfrequencyend","");
  uVar4 = FUN_140085ee0(uVar9);
  uVar11 = 0xf;
  if ((uint)param_1[4] < 0xf) {
    uVar11 = param_1[4];
  }
  param_1[4] = uVar11;
  uVar10 = 0xf;
  if (uVar4 < 0xf) {
    uVar10 = uVar4;
  }
  param_1[5] = uVar10;
  if (uVar10 < uVar11) {
    param_1[5] = uVar11;
    param_1[4] = uVar10;
  }
  return;
}

