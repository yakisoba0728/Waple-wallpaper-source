// Function: FUN_1401bd5d0
// Addr: 1401bd5d0
// Size: 825 bytes


void FUN_1401bd5d0(undefined8 param_1,char param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 local_68;
  uint local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar1 = FUN_140087490(param_1,&DAT_14048f9a0,&DAT_14048f9a4);
  if (lVar1 == 0) {
    local_60 = CONCAT31(local_60._1_3_,4);
    uVar5 = local_60 | 0x100;
    puVar2 = (undefined4 *)_malloc_base(10);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_140017170(&local_68,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_68);
    }
    *puVar2 = 5;
    puVar2[1] = DAT_14048f488;
    *(undefined1 *)(puVar2 + 2) = DAT_14048f48c;
    *(undefined1 *)((longlong)puVar2 + 9) = 0;
    puVar3 = (undefined8 *)FUN_140086de0(param_1,&DAT_14048f9a0,&DAT_14048f9a4);
    local_60 = *(uint *)(puVar3 + 1);
    *(uint *)(puVar3 + 1) = uVar5;
    local_68 = *puVar3;
    *puVar3 = puVar2;
    lVar1 = puVar3[2];
    puVar3[2] = 0;
    local_48 = puVar3[4];
    uStack_50 = puVar3[3];
    puVar3[3] = 0;
    puVar3[4] = 0;
    local_58 = lVar1;
    FUN_140086d30(&local_68);
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar1 = FUN_140087490(param_1,"frequencymin","");
  if (lVar1 == 0) {
    local_60 = CONCAT31(local_60._1_3_,3);
    uVar5 = local_60 & 0xfffffeff;
    puVar3 = (undefined8 *)FUN_140086de0(param_1,"frequencymin","");
    local_60 = *(uint *)(puVar3 + 1);
    *(uint *)(puVar3 + 1) = uVar5;
    local_68 = *puVar3;
    *puVar3 = 0x3ff0000000000000;
    lVar1 = puVar3[2];
    puVar3[2] = 0;
    uStack_50 = puVar3[3];
    local_48 = puVar3[4];
    puVar3[3] = 0;
    puVar3[4] = 0;
    local_58 = lVar1;
    FUN_140086d30(&local_68);
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar1 = FUN_140087490(param_1,"frequencymax","");
  if (lVar1 == 0) {
    local_60 = CONCAT31(local_60._1_3_,3);
    uVar5 = local_60 & 0xfffffeff;
    puVar3 = (undefined8 *)FUN_140086de0(param_1,"frequencymax","");
    local_60 = *(uint *)(puVar3 + 1);
    *(uint *)(puVar3 + 1) = uVar5;
    local_68 = *puVar3;
    *puVar3 = 0x4014000000000000;
    lVar1 = puVar3[2];
    puVar3[2] = 0;
    uStack_50 = puVar3[3];
    local_48 = puVar3[4];
    puVar3[3] = 0;
    puVar3[4] = 0;
    local_58 = lVar1;
    FUN_140086d30(&local_68);
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar1 = FUN_140087490(param_1,"scalemin","");
  if (lVar1 == 0) {
    local_60 = CONCAT31(local_60._1_3_,3);
    local_60 = local_60 & 0xfffffeff;
    local_68 = 0;
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uVar4 = FUN_140086de0(param_1,"scalemin","");
    FUN_140085610(uVar4,&local_68);
    FUN_140085440(&local_68);
  }
  uVar6 = DAT_1404926c0;
  if (param_2 != '\0') {
    uVar6 = DAT_140492868;
  }
  FUN_1401d7d30(param_1,"scalemax",uVar6);
  FUN_1401d7d30(param_1,"phasemin",0);
  FUN_1401d7d30(param_1,"phasemax",DAT_140492864);
  return;
}

