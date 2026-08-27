// Function: FUN_140084fe0
// Addr: 140084fe0
// Size: 142 bytes


undefined8 * FUN_140084fe0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined1 local_58 [40];
  
  *(undefined1 *)(param_1 + 1) = 4;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x100;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = *(uint *)(param_2 + 2);
  uVar3 = (ulonglong)uVar1;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  puVar2 = (uint *)_malloc_base(uVar3 + 5);
  if (puVar2 != (uint *)0x0) {
    *puVar2 = uVar1;
    FUN_1404210f0(puVar2 + 1,param_2,uVar3);
    *(undefined1 *)((longlong)puVar2 + uVar3 + 4) = 0;
    *param_1 = puVar2;
    return param_1;
  }
  FUN_140017170(local_58,
                "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
               );
                    /* WARNING: Subroutine does not return */
  FUN_140084bc0(local_58);
}

