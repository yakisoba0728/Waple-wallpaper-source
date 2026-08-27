// Function: FUN_140119640
// Addr: 140119640
// Size: 1043 bytes


void FUN_140119640(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  ulonglong uVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  undefined8 *puVar11;
  undefined8 ****ppppuVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 ***local_88;
  uint local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar15 = auStack_c8;
  uVar7 = FUN_140085090(&local_60);
  FUN_14010c380(param_1,uVar7);
  cVar4 = FUN_14010d100(param_1);
  if (cVar4 == '\0') goto LAB_140119775;
  lVar8 = FUN_140086de0(param_1 + 0x38,"wproperties","");
  if (*(char *)(lVar8 + 8) == '\a') {
    uVar7 = FUN_140086de0(param_1 + 0x38,"wproperties","");
    lVar8 = FUN_140086de0(uVar7,"audioprocessing","");
    if (*(char *)(lVar8 + 8) != '\a') goto LAB_140119771;
    uVar7 = FUN_140086de0(param_1 + 0x38,"wproperties","");
    uVar7 = FUN_140086de0(uVar7,"audioprocessing","");
    lVar8 = FUN_140086de0(uVar7,"value","");
    if (*(char *)(lVar8 + 8) == '\x05') {
      uVar7 = FUN_140086de0(param_1 + 0x38,"wproperties","");
      uVar7 = FUN_140086de0(uVar7,"audioprocessing","");
      uVar7 = FUN_140086de0(uVar7,"value","");
      cVar4 = FUN_140086300(uVar7);
      if (cVar4 != '\0') goto LAB_140119771;
    }
LAB_140119775:
    uVar5 = 0;
  }
  else {
LAB_140119771:
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0x439) = uVar5;
  if (*(longlong *)(param_1 + 0x158) != -1) {
    local_58 = CONCAT31(local_58._1_3_,7);
    local_58 = local_58 & 0xfffffeff;
    local_40 = 0;
    local_50 = 0;
    uStack_48 = 0;
    plVar9 = (longlong *)FUN_14028af20(0x10);
    *plVar9 = 0;
    plVar9[1] = 0;
    lVar8 = FUN_14028af20(0x58);
    *(longlong *)lVar8 = lVar8;
    *(longlong *)(lVar8 + 8) = lVar8;
    *(longlong *)(lVar8 + 0x10) = lVar8;
    *(undefined2 *)(lVar8 + 0x18) = 0x101;
    *plVar9 = lVar8;
    local_60 = plVar9;
    uVar7 = FUN_140086de0(&local_60,"properties","");
    FUN_140085520(uVar7,param_2);
    plVar9 = (longlong *)(param_1 + 0x100);
    uVar14 = *(uint *)(param_1 + 0x110);
    uVar13 = (ulonglong)uVar14;
    local_80 = CONCAT31(local_80._1_3_,4);
    if (0xf < *(ulonglong *)(param_1 + 0x118)) {
      plVar9 = (longlong *)*plVar9;
    }
    puVar10 = (uint *)_malloc_base(uVar13 + 5);
    if (puVar10 == (uint *)0x0) {
      FUN_140017170(&local_88,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_88);
    }
    *puVar10 = uVar14;
    uVar14 = local_80 | 0x100;
    FUN_1404210f0(puVar10 + 1,plVar9,uVar13);
    *(undefined1 *)((longlong)puVar10 + uVar13 + 4) = 0;
    puVar11 = (undefined8 *)FUN_140086de0(&local_60,&DAT_1404748b8,&DAT_1404748bc);
    local_80 = *(uint *)(puVar11 + 1);
    *(uint *)(puVar11 + 1) = uVar14;
    local_88 = (undefined8 ***)*puVar11;
    *puVar11 = puVar10;
    uVar13 = puVar11[2];
    puVar11[2] = 0;
    local_68 = puVar11[4];
    local_70 = puVar11[3];
    puVar11[3] = 0;
    puVar11[4] = 0;
    local_78 = uVar13;
    FUN_140086d30(&local_88);
    if (uVar13 != 0) {
      FUN_140017240(uVar13 + 0x40);
      FUN_140017240(uVar13 + 0x20);
      FUN_140017240(uVar13);
      thunk_FUN_14028af80(uVar13,0x60);
    }
    FUN_140004d00(&local_88,&local_60,0);
    uVar3 = local_70;
    uVar13 = local_78;
    pppuVar2 = local_88;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_a8 = 6;
    if (local_78 != 0) {
      uVar16 = (undefined4)local_78;
      local_98 = uVar16;
      uVar7 = thunk_FUN_14028af20(local_78 & 0xffffffff);
      ppppuVar12 = &local_88;
      if (0xf < uVar3) {
        ppppuVar12 = (undefined8 ****)pppuVar2;
      }
      local_90 = uVar7;
      FUN_1404210f0(uVar7,ppppuVar12,uVar13 & 0xffffffff);
      local_a8 = CONCAT44(uVar16,(undefined4)local_a8);
      local_a0 = uVar7;
    }
    uVar7 = local_a0;
    iVar6 = FUN_140290d80(param_1 + 0x4a0);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    iVar6 = *(int *)(param_1 + 0x4ec);
    if (iVar6 == 0x7fffffff) {
LAB_140119a1e:
      *(int *)(param_1 + 0x4ec) = iVar6 + -1;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar15 + -8) = &UNK_140119a30;
      FUN_140290d30(6);
    }
    FUN_1400182d0(param_1 + 0x158,&local_a8);
    FUN_140290ea0(param_1 + 0x4a0);
    thunk_FUN_14028af80(uVar7);
    if (0xf < uVar3) {
      uVar13 = uVar3 + 1;
      ppppuVar12 = (undefined8 ****)pppuVar2;
      if (0xfff < uVar13) {
        ppppuVar12 = (undefined8 ****)pppuVar2[-1];
        if (0x1f < (ulonglong)((longlong)pppuVar2 + (-8 - (longlong)ppppuVar12))) {
          pcVar1 = (code *)swi(0x29);
          iVar6 = (*pcVar1)(5);
          puVar15 = auStack_c0;
          goto LAB_140119a1e;
        }
        uVar13 = uVar3 + 0x28;
      }
      thunk_FUN_14028af80(ppppuVar12,uVar13);
    }
    FUN_140085440(&local_60);
  }
  FUN_14011ae10(param_1);
  FUN_140085440(param_2);
  return;
}

