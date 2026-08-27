// Function: FUN_1401bcc80
// Addr: 1401bcc80
// Size: 458 bytes


void FUN_1401bcc80(undefined8 param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 local_58;
  uint local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_140087490(param_1,"force","");
  if (lVar1 == 0) {
    local_50 = CONCAT31(local_50._1_3_,4);
    uVar4 = local_50 | 0x100;
    puVar2 = (undefined4 *)_malloc_base(10);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_140017170(&local_58,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_58);
    }
    *puVar2 = 5;
    puVar2[1] = DAT_14048f4d4;
    *(undefined1 *)(puVar2 + 2) = DAT_14048f4d8;
    *(undefined1 *)((longlong)puVar2 + 9) = 0;
    puVar3 = (undefined8 *)FUN_140086de0(param_1,"force","");
    local_50 = *(uint *)(puVar3 + 1);
    *(uint *)(puVar3 + 1) = uVar4;
    local_58 = *puVar3;
    *puVar3 = puVar2;
    lVar1 = puVar3[2];
    puVar3[2] = 0;
    local_38 = puVar3[4];
    local_40 = puVar3[3];
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
  lVar1 = FUN_140087490(param_1,&DAT_14048f938,&DAT_14048f93c);
  if (lVar1 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar4 = local_50 & 0xfffffeff;
    puVar3 = (undefined8 *)FUN_140086de0(param_1,&DAT_14048f938,&DAT_14048f93c);
    local_50 = *(uint *)(puVar3 + 1);
    *(uint *)(puVar3 + 1) = uVar4;
    local_58 = *puVar3;
    *puVar3 = 0;
    lVar1 = puVar3[2];
    puVar3[2] = 0;
    local_38 = puVar3[4];
    local_40 = puVar3[3];
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
  return;
}

