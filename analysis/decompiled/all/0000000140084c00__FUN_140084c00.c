// Function: FUN_140084c00
// Addr: 140084c00
// Size: 77 bytes


void FUN_140084c00(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  undefined1 local_48 [32];
  
  puVar1 = (uint *)thunk_FUN_1402da070((ulonglong)param_2 + 5);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(puVar1 + 1,param_1,param_2);
  }
  func_0x000140017240(local_48,
                      "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                     );
                    /* WARNING: Subroutine does not return */
  FUN_140084c90(local_48);
}

