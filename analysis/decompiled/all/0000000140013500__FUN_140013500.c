// Function: FUN_140013500
// Addr: 140013500
// Size: 701 bytes


void FUN_140013500(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  size_t sVar5;
  longlong lVar6;
  undefined2 *puVar7;
  char *_Str;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  ulonglong local_res8;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined1 local_68 [48];
  
  lVar3 = FUN_1402ca9c0();
  puVar4 = (undefined8 *)FUN_140291ac0(local_68);
  lVar8 = 0;
  _Str = "";
  local_98 = *puVar4;
  uStack_90 = puVar4[1];
  local_88 = puVar4[2];
  uStack_80 = (undefined4)puVar4[3];
  uVar1 = *(undefined8 *)((longlong)puVar4 + 0x1c);
  uStack_74 = *(undefined8 *)((longlong)puVar4 + 0x24);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uStack_7c = (undefined4)uVar1;
  uStack_78 = (undefined4)((ulonglong)uVar1 >> 0x20);
  if (param_3 == '\0') {
    _Str = *(char **)(lVar3 + 0x10);
  }
  sVar5 = strlen(_Str);
  lVar10 = sVar5 + 1;
  lVar6 = _calloc_base(lVar10,1);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14028b8c0();
  }
  if (lVar10 != 0) {
    FUN_1404210f0(lVar6,_Str,lVar10);
  }
  *(longlong *)(param_1 + 0x10) = lVar6;
  puVar12 = &DAT_140474458;
  local_res8 = 0;
  puVar9 = &DAT_140474458;
  lVar10 = 6;
  do {
    iVar2 = FUN_1402911d0(local_res18,puVar9,lVar10,&local_res8,&local_98);
    if (iVar2 < 1) break;
    lVar8 = lVar8 + 1;
    puVar9 = (undefined4 *)((longlong)puVar9 + (longlong)iVar2);
    lVar10 = lVar10 - iVar2;
  } while (lVar10 != 0);
  lVar8 = lVar8 + 1;
  puVar7 = (undefined2 *)_calloc_base(lVar8,2);
  if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_14028b8c0();
  }
  local_res20 = 0;
  puVar11 = puVar7;
  while ((lVar8 != 0 && (iVar2 = FUN_1402911d0(puVar11,puVar12,6,&local_res20,&local_98), 0 < iVar2)
         )) {
    puVar11 = puVar11 + 1;
    puVar12 = (undefined4 *)((longlong)puVar12 + (longlong)iVar2);
    lVar8 = lVar8 + -1;
  }
  *(undefined2 **)(param_1 + 0x20) = puVar7;
  puVar12 = &DAT_140474460;
  *puVar11 = 0;
  lVar10 = 5;
  local_res8 = 0;
  lVar8 = 0;
  puVar9 = &DAT_140474460;
  do {
    iVar2 = FUN_1402911d0(local_res18,puVar9,lVar10,&local_res8,&local_98);
    if (iVar2 < 1) break;
    lVar8 = lVar8 + 1;
    puVar9 = (undefined4 *)((longlong)puVar9 + (longlong)iVar2);
    lVar10 = lVar10 - iVar2;
  } while (lVar10 != 0);
  lVar8 = lVar8 + 1;
  puVar7 = (undefined2 *)_calloc_base(lVar8,2);
  if (puVar7 != (undefined2 *)0x0) {
    local_res20 = 0;
    puVar11 = puVar7;
    while ((lVar8 != 0 &&
           (iVar2 = FUN_1402911d0(puVar11,puVar12,5,&local_res20,&local_98), 0 < iVar2))) {
      puVar11 = puVar11 + 1;
      puVar12 = (undefined4 *)((longlong)puVar12 + (longlong)iVar2);
      lVar8 = lVar8 + -1;
    }
    *(undefined2 **)(param_1 + 0x28) = puVar7;
    *puVar11 = 0;
    if (param_3 == '\0') {
      *(undefined2 *)(param_1 + 0x18) = **(undefined2 **)(lVar3 + 0x58);
      *(undefined2 *)(param_1 + 0x1a) = **(undefined2 **)(lVar3 + 0x60);
    }
    else {
      local_res18[0] = 0x2e;
      local_res8 = local_res8 & 0xffffffffffff0000;
      local_res20 = 0;
      FUN_1402911d0(&local_res8,local_res18,1,&local_res20,&local_98);
      *(undefined2 *)(param_1 + 0x18) = (undefined2)local_res8;
      local_res18[0] = 0x2c;
      local_res8 = local_res8 & 0xffffffffffff0000;
      local_res20 = 0;
      FUN_1402911d0(&local_res8,local_res18,1,&local_res20,&local_98);
      *(undefined2 *)(param_1 + 0x1a) = (undefined2)local_res8;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028b8c0();
}

