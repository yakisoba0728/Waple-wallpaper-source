// Function: FUN_14011d3b0
// Addr: 14011d3b0
// Size: 1051 bytes


void FUN_14011d3b0(undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  longlong *plVar4;
  size_t sVar5;
  undefined4 *puVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined8 ***local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  uint local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  
  puVar12 = auStack_b8;
  plVar4 = (longlong *)FUN_140086de0(param_1,&DAT_140473b68,&DAT_140473b6c);
  pcVar10 = (char *)0x0;
  pcVar11 = (char *)*plVar4;
  if ((pcVar11 != (char *)0x0) && (pcVar10 = pcVar11, (*(uint *)(plVar4 + 1) >> 8 & 1) != 0)) {
    pcVar10 = pcVar11 + 4;
  }
  local_88 = 0;
  local_80 = 0;
  local_98 = (undefined8 ****)0x0;
  uStack_90 = 0;
  sVar5 = strlen(pcVar10);
  FUN_140017480(&local_98,pcVar10,sVar5);
  FUN_1400187b0(&local_98);
  uVar3 = (undefined4)local_88;
  uVar8 = local_88 & 0xffffffff;
  local_70 = CONCAT31(local_70._1_3_,4);
  ppppuVar7 = &local_98;
  if (0xf < local_80) {
    ppppuVar7 = (undefined8 ****)local_98;
  }
  puVar6 = (undefined4 *)_malloc_base(uVar8 + 5);
  if (puVar6 == (undefined4 *)0x0) {
    FUN_140017170(&local_78,
                  "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                 );
                    /* WARNING: Subroutine does not return */
    FUN_140084bc0(&local_78);
  }
  *puVar6 = uVar3;
  uVar9 = local_70 | 0x100;
  FUN_1404210f0(puVar6 + 1,ppppuVar7,uVar8);
  *(undefined1 *)((longlong)puVar6 + uVar8 + 4) = 0;
  plVar4 = (longlong *)FUN_140086de0(param_1,&DAT_140473b68,&DAT_140473b6c);
  local_70 = (uint)plVar4[1];
  *(uint *)(plVar4 + 1) = uVar9;
  local_78 = *plVar4;
  *plVar4 = (longlong)puVar6;
  pcVar11 = (char *)0x0;
  lVar1 = plVar4[2];
  plVar4[2] = 0;
  local_60 = plVar4[3];
  local_58 = plVar4[4];
  plVar4[3] = 0;
  plVar4[4] = 0;
  local_68 = lVar1;
  FUN_140086d30(&local_78);
  if (lVar1 != 0) {
    FUN_140017240(lVar1 + 0x40);
    FUN_140017240(lVar1 + 0x20);
    FUN_140017240(lVar1);
    thunk_FUN_14028af80(lVar1,0x60);
  }
  plVar4 = (longlong *)FUN_140086de0(param_1,"preview","");
  pcVar10 = (char *)*plVar4;
  if ((pcVar10 != (char *)0x0) && (pcVar11 = pcVar10, (*(uint *)(plVar4 + 1) >> 8 & 1) != 0)) {
    pcVar11 = pcVar10 + 4;
  }
  sVar5 = strlen(pcVar11);
  FUN_14000f880(&local_98,pcVar11,sVar5);
  FUN_1400187b0(&local_98);
  uVar3 = (undefined4)local_88;
  uVar8 = local_88 & 0xffffffff;
  local_70 = CONCAT31(local_70._1_3_,4);
  ppppuVar7 = &local_98;
  if (0xf < local_80) {
    ppppuVar7 = (undefined8 ****)local_98;
  }
  puVar6 = (undefined4 *)_malloc_base(uVar8 + 5);
  if (puVar6 == (undefined4 *)0x0) {
    FUN_140017170(&local_78,
                  "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                 );
                    /* WARNING: Subroutine does not return */
    FUN_140084bc0(&local_78);
  }
  *puVar6 = uVar3;
  uVar9 = local_70 | 0x100;
  FUN_1404210f0(puVar6 + 1,ppppuVar7,uVar8);
  *(undefined1 *)((longlong)puVar6 + uVar8 + 4) = 0;
  plVar4 = (longlong *)FUN_140086de0(param_1,"preview","");
  local_70 = (uint)plVar4[1];
  *(uint *)(plVar4 + 1) = uVar9;
  local_78 = *plVar4;
  *plVar4 = (longlong)puVar6;
  pcVar11 = (char *)0x0;
  lVar1 = plVar4[2];
  plVar4[2] = 0;
  local_58 = plVar4[4];
  local_60 = plVar4[3];
  plVar4[3] = 0;
  plVar4[4] = 0;
  local_68 = lVar1;
  FUN_140086d30(&local_78);
  if (lVar1 != 0) {
    FUN_140017240(lVar1 + 0x40);
    FUN_140017240(lVar1 + 0x20);
    FUN_140017240(lVar1);
    thunk_FUN_14028af80(lVar1,0x60);
  }
  plVar4 = (longlong *)FUN_140086de0(param_1,"project","");
  pcVar10 = (char *)*plVar4;
  if ((pcVar10 != (char *)0x0) && (pcVar11 = pcVar10, (*(uint *)(plVar4 + 1) >> 8 & 1) != 0)) {
    pcVar11 = pcVar10 + 4;
  }
  sVar5 = strlen(pcVar11);
  FUN_14000f880(&local_98,pcVar11,sVar5);
  FUN_1400187b0(&local_98);
  uVar3 = (undefined4)local_88;
  uVar8 = local_88 & 0xffffffff;
  local_70 = CONCAT31(local_70._1_3_,4);
  ppppuVar7 = &local_98;
  if (0xf < local_80) {
    ppppuVar7 = (undefined8 ****)local_98;
  }
  puVar6 = (undefined4 *)_malloc_base(uVar8 + 5);
  if (puVar6 == (undefined4 *)0x0) {
LAB_14011d780:
    *(undefined8 *)(puVar12 + -8) = 0x14011d790;
    FUN_140017170(&local_78,
                  "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                 );
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar12 + -8) = &UNK_14011d799;
    FUN_140084bc0(&local_78);
  }
  *puVar6 = uVar3;
  uVar9 = local_70 | 0x100;
  FUN_1404210f0(puVar6 + 1,ppppuVar7,uVar8);
  *(undefined1 *)((longlong)puVar6 + uVar8 + 4) = 0;
  plVar4 = (longlong *)FUN_140086de0(param_1,"project","");
  local_70 = *(uint *)(plVar4 + 1);
  *(uint *)(plVar4 + 1) = uVar9;
  local_78 = *plVar4;
  *plVar4 = (longlong)puVar6;
  lVar1 = plVar4[2];
  plVar4[2] = 0;
  local_58 = plVar4[4];
  local_60 = plVar4[3];
  plVar4[3] = 0;
  plVar4[4] = 0;
  local_68 = lVar1;
  FUN_140086d30(&local_78);
  if (lVar1 != 0) {
    FUN_140017240(lVar1 + 0x40);
    FUN_140017240(lVar1 + 0x20);
    FUN_140017240(lVar1);
    thunk_FUN_14028af80(lVar1,0x60);
  }
  if (0xf < local_80) {
    uVar8 = local_80 + 1;
    ppppuVar7 = (undefined8 ****)local_98;
    if (0xfff < uVar8) {
      ppppuVar7 = (undefined8 ****)local_98[-1];
      if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)ppppuVar7))) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar12 = auStack_b0;
        goto LAB_14011d780;
      }
      uVar8 = local_80 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar7,uVar8);
  }
  return;
}

