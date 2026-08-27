// Function: FUN_14018dc70
// Addr: 14018dc70
// Size: 895 bytes


void FUN_14018dc70(longlong param_1,longlong *param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  size_t sVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  char *_Str;
  bool bVar17;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined1 local_78;
  undefined7 uStack_77;
  longlong local_68;
  ulonglong local_60;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar16 = auStack_98;
  local_50 = CONCAT31(local_50._1_3_,7);
  local_50 = local_50 & 0xfffffeff;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  plVar5 = (longlong *)FUN_14028af20(0x10);
  *plVar5 = 0;
  plVar5[1] = 0;
  lVar6 = FUN_14028af20(0x58);
  *(longlong *)lVar6 = lVar6;
  *(longlong *)(lVar6 + 8) = lVar6;
  *(longlong *)(lVar6 + 0x10) = lVar6;
  *(undefined2 *)(lVar6 + 0x18) = 0x101;
  *plVar5 = lVar6;
  lVar6 = *(longlong *)(param_1 + 0x90);
  local_58 = plVar5;
  if (((*(char *)(lVar6 + 0x1720) == '\x06') || (*(char *)(lVar6 + 0x1720) == '\a')) &&
     (*(undefined8 **)(lVar6 + 0x1718) != (undefined8 *)0x0)) {
    bVar3 = false;
    plVar5 = *(longlong **)**(undefined8 **)(lVar6 + 0x1718);
  }
  else {
    plVar5 = (longlong *)0x0;
    bVar3 = true;
  }
  while( true ) {
    if (((*(char *)(lVar6 + 0x1720) == '\x06') || (*(char *)(lVar6 + 0x1720) == '\a')) &&
       (*(undefined8 **)(lVar6 + 0x1718) != (undefined8 *)0x0)) {
      plVar7 = (longlong *)**(undefined8 **)(lVar6 + 0x1718);
      bVar17 = false;
    }
    else {
      plVar7 = (longlong *)0x0;
      bVar17 = true;
    }
    if (!bVar3) {
      bVar17 = plVar5 == plVar7;
    }
    if (bVar17) break;
    lVar8 = FUN_140087490(plVar5 + 6,"value");
    if (lVar8 != 0) {
      _Str = "";
      if ((char *)plVar5[4] != (char *)0x0) {
        _Str = (char *)plVar5[4];
      }
      sVar9 = strlen(_Str);
      uVar10 = FUN_140086de0(&local_58,_Str,_Str + sVar9);
      uVar11 = FUN_140086de0(plVar5 + 6,"value","");
      uVar12 = FUN_140086de0(uVar10,"value","");
      FUN_140085520(uVar12,uVar11);
      uVar11 = FUN_140086de0(plVar5 + 6,&DAT_140474874,&DAT_140474878);
      uVar10 = FUN_140086de0(uVar10,&DAT_140474874);
      FUN_140085520(uVar10,uVar11);
    }
    plVar7 = (longlong *)plVar5[2];
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar7 + 0x19);
      plVar5 = plVar7;
      while (cVar1 == '\0') {
        plVar5 = (longlong *)*plVar5;
        cVar1 = *(char *)(*plVar5 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar4 = (longlong *)plVar5[1];
      plVar7 = plVar5;
      while ((plVar5 = plVar4, cVar1 == '\0' && (plVar7 == (longlong *)plVar5[2]))) {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar4 = (longlong *)plVar5[1];
        plVar7 = plVar5;
      }
    }
  }
  FUN_140004d00(&local_78,&local_58,0);
  puVar13 = (undefined1 *)CONCAT71(uStack_77,local_78);
  if (param_2 != (longlong *)0x0) {
    puVar14 = &local_78;
    if (0xf < local_60) {
      puVar14 = puVar13;
    }
    if (*param_2 != 0) {
      (*(code *)param_2[1])(*param_2,puVar14,puVar14 + local_68);
      puVar13 = (undefined1 *)CONCAT71(uStack_77,local_78);
    }
  }
  if (local_60 < 0x10) {
LAB_14018df28:
    plVar5 = local_58;
    local_68 = 0;
    local_60 = 0xf;
    local_78 = 0;
    puVar13 = auStack_98;
    switch((undefined1)local_50) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      goto switchD_14018df56_caseD_4;
    case 6:
    case 7:
      puVar13 = auStack_98;
      if (local_58 != (longlong *)0x0) {
        FUN_140088e40(local_58);
        thunk_FUN_14028af80(plVar5,0x10);
        puVar13 = auStack_98;
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      puVar13 = auStack_98;
    }
  }
  else {
    uVar15 = local_60 + 1;
    puVar14 = puVar13;
    if (uVar15 < 0x1000) {
LAB_14018df23:
      thunk_FUN_14028af80(puVar14,uVar15);
      goto LAB_14018df28;
    }
    puVar14 = *(undefined1 **)(puVar13 + -8);
    if (puVar13 + (-8 - (longlong)puVar14) < (undefined1 *)0x20) {
      uVar15 = local_60 + 0x28;
      goto LAB_14018df23;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar16 = auStack_90;
switchD_14018df56_caseD_4:
    puVar13 = puVar16;
    if ((local_50 >> 8 & 1) != 0) {
      *(undefined8 *)(puVar16 + -8) = 0x14018df72;
      thunk_FUN_1402d9040(local_58);
    }
  }
  lVar6 = local_48;
  local_58 = (longlong *)0x0;
  if (local_48 != 0) {
    *(undefined8 *)(puVar13 + -8) = 0x14018dfc7;
    FUN_140017240(local_48 + 0x40);
    *(undefined8 *)(puVar13 + -8) = 0x14018dfd0;
    FUN_140017240(lVar6 + 0x20);
    *(undefined8 *)(puVar13 + -8) = 0x14018dfd8;
    FUN_140017240(lVar6);
    *(undefined8 *)(puVar13 + -8) = 0x14018dfe5;
    thunk_FUN_14028af80(lVar6,0x60);
  }
  return;
}

