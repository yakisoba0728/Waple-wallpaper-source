// Function: FUN_1400850b0
// Addr: 1400850b0
// Size: 91 bytes


void FUN_1400850b0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined1 auStack_58 [40];
  
  *(undefined1 *)(param_1 + 8) = 4;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x100;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar1 = *(uint *)(param_2 + 2);
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  puVar2 = (uint *)thunk_FUN_1402da070((ulonglong)uVar1 + 5);
  if (puVar2 != (uint *)0x0) {
    *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(puVar2 + 1,param_2,(ulonglong)uVar1);
  }
  func_0x000140017240(auStack_58,
                      "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                     );
                    /* WARNING: Subroutine does not return */
  FUN_140084c90(auStack_58);
}

