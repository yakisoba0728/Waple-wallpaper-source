// Function: FUN_1401ba740
// Addr: 1401ba740
// Size: 719 bytes


void FUN_1401ba740(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 *local_58;
  uint local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar1 = FUN_140087490(param_1,"colors","");
  if (lVar1 == 0) {
    uVar2 = FUN_140086de0(param_1,"colors","");
    local_50 = CONCAT31(local_50._1_3_,4);
    local_50 = local_50 | 0x100;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_58 = (undefined4 *)_malloc_base(10);
    if (local_58 == (undefined4 *)0x0) {
      FUN_140017170(&local_58,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_58);
    }
    *local_58 = 5;
    local_58[1] = DAT_14048f4ec;
    *(undefined1 *)(local_58 + 2) = DAT_14048f4f0;
    *(undefined1 *)((longlong)local_58 + 9) = 0;
    FUN_140087690(uVar2,&local_58);
    FUN_140086d30(&local_58);
    lVar1 = local_48;
    if (local_48 != 0) {
      FUN_140017240(local_48 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar1 = FUN_140087490(param_1,"huenoise","");
  if (lVar1 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar4 = local_50 & 0xfffffeff;
    puVar3 = (undefined8 *)FUN_140086de0(param_1,"huenoise","");
    local_50 = *(uint *)(puVar3 + 1);
    *(uint *)(puVar3 + 1) = uVar4;
    local_58 = (undefined4 *)*puVar3;
    *puVar3 = 0;
    lVar1 = puVar3[2];
    puVar3[2] = 0;
    local_38 = puVar3[4];
    uStack_40 = puVar3[3];
    puVar3[3] = 0;
    puVar3[4] = 0;
    local_48 = lVar1;
    FUN_140086d30(&local_58);
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar1 = FUN_140087490(param_1,"saturationnoise","");
  if (lVar1 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar4 = local_50 & 0xfffffeff;
    puVar3 = (undefined8 *)FUN_140086de0(param_1,"saturationnoise","");
    local_50 = *(uint *)(puVar3 + 1);
    *(uint *)(puVar3 + 1) = uVar4;
    local_58 = (undefined4 *)*puVar3;
    *puVar3 = 0;
    lVar1 = puVar3[2];
    puVar3[2] = 0;
    local_38 = puVar3[4];
    uStack_40 = puVar3[3];
    puVar3[3] = 0;
    puVar3[4] = 0;
    local_48 = lVar1;
    FUN_140086d30(&local_58);
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar1 = FUN_140087490(param_1,"valuenoise","");
  if (lVar1 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar4 = local_50 & 0xfffffeff;
    puVar3 = (undefined8 *)FUN_140086de0(param_1,"valuenoise","");
    local_50 = *(uint *)(puVar3 + 1);
    *(uint *)(puVar3 + 1) = uVar4;
    local_58 = (undefined4 *)*puVar3;
    *puVar3 = 0;
    local_48 = puVar3[2];
    puVar3[2] = 0;
    uStack_40 = puVar3[3];
    local_38 = puVar3[4];
    puVar3[3] = 0;
    puVar3[4] = 0;
    FUN_140085440(&local_58);
  }
  return;
}

