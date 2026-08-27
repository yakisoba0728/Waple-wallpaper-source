// Function: FUN_14003ee20
// Addr: 14003ee20
// Size: 216 bytes


undefined1 FUN_14003ee20(undefined8 param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  uint *puVar3;
  uint *local_68;
  uint local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_60 = CONCAT31(local_60._1_3_,4);
  local_60 = local_60 | 0x100;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  puVar3 = (uint *)_malloc_base((ulonglong)param_3 + 5);
  if (puVar3 != (uint *)0x0) {
    *puVar3 = param_3;
    FUN_1404210f0(puVar3 + 1,param_2,param_3);
    *(undefined1 *)((longlong)puVar3 + (ulonglong)param_3 + 4) = 0;
    local_68 = puVar3;
    uVar2 = FUN_14003f1b0(param_1,&local_68);
    FUN_140086d30(&local_68);
    lVar1 = local_58;
    if (local_58 != 0) {
      FUN_140017240(local_58 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
    return uVar2;
  }
  FUN_140017170(&local_68,
                "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
               );
                    /* WARNING: Subroutine does not return */
  FUN_140084bc0(&local_68);
}

