// Function: FUN_1400483c0
// Addr: 1400483c0
// Size: 1394 bytes


void FUN_1400483c0(undefined8 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *local_68;
  uint local_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  plVar4 = (longlong *)FUN_140086de0(param_1,"showonstartup","");
  lVar8 = 0;
  uVar1 = *(uint *)(plVar4 + 1);
  if ((char)uVar1 != '\x05') {
    local_60 = CONCAT31(local_60._1_3_,5);
    local_68 = (longlong *)CONCAT71(local_68._1_7_,1);
    *(uint *)(plVar4 + 1) = local_60 & 0xfffffeff;
    lVar5 = *plVar4;
    *plVar4 = (longlong)local_68;
    lVar6 = plVar4[2];
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    switch(uVar1 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar1 >> 8 & 1) != 0) {
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
    if (lVar6 != 0) {
      FUN_140017240(lVar6 + 0x40);
      FUN_140017240(lVar6 + 0x20);
      FUN_140017240(lVar6);
      thunk_FUN_14028af80(lVar6,0x60);
    }
  }
  lVar5 = FUN_140086de0(param_1,"recentfiles","");
  if (*(char *)(lVar5 + 8) != '\x06') {
    local_60 = CONCAT31(local_60._1_3_,6);
    local_60 = local_60 & 0xfffffeff;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    plVar4 = (longlong *)FUN_14028af20(0x10);
    *plVar4 = 0;
    plVar4[1] = 0;
    lVar6 = FUN_14028af20(0x58);
    *(longlong *)lVar6 = lVar6;
    *(longlong *)(lVar6 + 8) = lVar6;
    *(longlong *)(lVar6 + 0x10) = lVar6;
    *(undefined2 *)(lVar6 + 0x18) = 0x101;
    *plVar4 = lVar6;
    local_68 = plVar4;
    FUN_140085610(lVar5,&local_68);
    FUN_140085440(&local_68);
  }
  plVar4 = (longlong *)FUN_140086de0(param_1,"previewratio","");
  if ((char)*(uint *)(plVar4 + 1) == '\x04') {
    lVar5 = *plVar4;
    lVar6 = lVar8;
    if ((lVar5 != 0) && (lVar6 = lVar5, (*(uint *)(plVar4 + 1) >> 8 & 1) != 0)) {
      lVar6 = lVar5 + 4;
    }
    iVar3 = FUN_1402c10d0(lVar6,&DAT_1404770d8);
    if (iVar3 == 0) goto LAB_14004869a;
    lVar5 = *plVar4;
    lVar6 = lVar8;
    if ((lVar5 != 0) && (lVar6 = lVar5, (*(uint *)(plVar4 + 1) >> 8 & 1) != 0)) {
      lVar6 = lVar5 + 4;
    }
    iVar3 = FUN_1402c10d0(lVar6,&DAT_1404770e0);
    if (iVar3 == 0) goto LAB_14004869a;
    lVar5 = *plVar4;
    lVar6 = lVar8;
    if ((lVar5 != 0) && (lVar6 = lVar5, (*(uint *)(plVar4 + 1) >> 8 & 1) != 0)) {
      lVar6 = lVar5 + 4;
    }
    iVar3 = FUN_1402c10d0(lVar6,"16x10");
    if (iVar3 == 0) goto LAB_14004869a;
    lVar5 = *plVar4;
    lVar6 = lVar8;
    if ((lVar5 != 0) && (lVar6 = lVar5, (*(uint *)(plVar4 + 1) >> 8 & 1) != 0)) {
      lVar6 = lVar5 + 4;
    }
    iVar3 = FUN_1402c10d0(lVar6,&DAT_1404770f0);
    if (iVar3 == 0) goto LAB_14004869a;
    lVar5 = *plVar4;
    if ((lVar5 != 0) && (lVar8 = lVar5, (*(uint *)(plVar4 + 1) >> 8 & 1) != 0)) {
      lVar8 = lVar5 + 4;
    }
    iVar3 = FUN_1402c10d0(lVar8,&DAT_1404770f4);
    if (iVar3 == 0) goto LAB_14004869a;
  }
  local_60 = CONCAT31(local_60._1_3_,4);
  local_60 = local_60 | 0x100;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  plVar7 = (longlong *)_malloc_base(9);
  if (plVar7 == (longlong *)0x0) {
    FUN_140017170(&local_68,
                  "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                 );
                    /* WARNING: Subroutine does not return */
    FUN_140084bc0(&local_68);
  }
  *(undefined4 *)plVar7 = 4;
  *(undefined4 *)((longlong)plVar7 + 4) = DAT_1404770d8;
  *(undefined1 *)(plVar7 + 1) = 0;
  local_68 = plVar7;
  FUN_140085610(plVar4,&local_68);
  FUN_140085440(&local_68);
LAB_14004869a:
  lVar8 = FUN_140086de0(param_1,"showgrid","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_60 = CONCAT31(local_60._1_3_,5);
    local_60 = local_60 & 0xfffffeff;
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = (longlong *)CONCAT71(local_68._1_7_,1);
    FUN_140085610(lVar8,&local_68);
    plVar4 = local_68;
    switch((undefined1)local_60) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((local_60 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(local_68);
      }
      break;
    case 6:
    case 7:
      if (local_68 != (longlong *)0x0) {
        FUN_140088e40(local_68);
        thunk_FUN_14028af80(plVar4,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    uVar2 = local_58;
    if (local_58 != 0) {
      FUN_140017240(local_58 + 0x40);
      FUN_140017240(uVar2 + 0x20);
      FUN_140017240(uVar2);
      thunk_FUN_14028af80(uVar2,0x60);
    }
  }
  plVar4 = (longlong *)FUN_140086de0(param_1,"showselectionbox","");
  uVar1 = *(uint *)(plVar4 + 1);
  if ((char)uVar1 != '\x05') {
    local_60 = CONCAT31(local_60._1_3_,5);
    local_68 = (longlong *)CONCAT71(local_68._1_7_,1);
    *(uint *)(plVar4 + 1) = local_60 & 0xfffffeff;
    lVar8 = *plVar4;
    *plVar4 = (longlong)local_68;
    lVar5 = plVar4[2];
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    switch(uVar1 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar1 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(lVar8);
      }
      break;
    case 6:
    case 7:
      if (lVar8 != 0) {
        FUN_140088e40(lVar8);
        thunk_FUN_14028af80(lVar8,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    if (lVar5 != 0) {
      FUN_140017240(lVar5 + 0x40);
      FUN_140017240(lVar5 + 0x20);
      FUN_140017240(lVar5);
      thunk_FUN_14028af80(lVar5,0x60);
    }
  }
  puVar9 = (ulonglong *)FUN_140086de0(param_1,"showstats","");
  uVar2 = puVar9[1];
  if ((char)(uint)uVar2 != '\x05') {
    local_60 = CONCAT31(local_60._1_3_,5);
    *(uint *)(puVar9 + 1) = local_60 & 0xfffffeff;
    plVar4 = (longlong *)*puVar9;
    local_68 = (longlong *)((ulonglong)local_68 & 0xffffffffffffff00);
    *puVar9 = (ulonglong)local_68;
    local_58 = puVar9[2];
    puVar9[2] = 0;
    uStack_50 = puVar9[3];
    local_48 = puVar9[4];
    puVar9[3] = 0;
    puVar9[4] = 0;
    local_68 = plVar4;
    local_60 = (uint)uVar2;
    FUN_140085440(&local_68);
  }
  lVar8 = FUN_140086de0(param_1,"showparticlecollision","");
  if (*(char *)(lVar8 + 8) != '\x05') {
    local_60 = CONCAT31(local_60._1_3_,5);
    local_60 = local_60 & 0xfffffeff;
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = (longlong *)CONCAT71(local_68._1_7_,1);
    FUN_140085610(lVar8,&local_68);
    FUN_140085440(&local_68);
  }
  return;
}

