// Function: FUN_140084b30
// Addr: 140084b30
// Size: 96 bytes


uint * FUN_140084b30(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  undefined1 local_48 [32];
  
  puVar1 = (uint *)_malloc_base((ulonglong)param_2 + 5);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_2;
    FUN_1404210f0(puVar1 + 1,param_1,param_2);
    *(undefined1 *)((longlong)puVar1 + (ulonglong)param_2 + 4) = 0;
    return puVar1;
  }
  FUN_140017170(local_48,
                "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
               );
                    /* WARNING: Subroutine does not return */
  FUN_140084bc0(local_48);
}

