// Function: FUN_140084f50
// Addr: 140084f50
// Size: 135 bytes


longlong * FUN_140084f50(longlong *param_1,char *param_2)

{
  size_t sVar1;
  undefined4 *puVar2;
  undefined1 local_48 [32];
  
  *(undefined1 *)(param_1 + 1) = 4;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x100;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  sVar1 = strlen(param_2);
  puVar2 = (undefined4 *)_malloc_base((sVar1 & 0xffffffff) + 5);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = (int)sVar1;
    FUN_1404210f0(puVar2 + 1,param_2,sVar1 & 0xffffffff);
    *(undefined1 *)((longlong)puVar2 + (sVar1 & 0xffffffff) + 4) = 0;
    *param_1 = (longlong)puVar2;
    return param_1;
  }
  FUN_140017170(local_48,
                "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
               );
                    /* WARNING: Subroutine does not return */
  FUN_140084bc0(local_48);
}

