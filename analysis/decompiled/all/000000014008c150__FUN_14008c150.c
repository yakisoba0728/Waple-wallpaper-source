// Function: FUN_14008c150
// Addr: 14008c150
// Size: 151 bytes


void FUN_14008c150(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [8];
  undefined1 local_40;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffffeff;
  *param_1 = &PTR_UNWIND_INFO_140485130;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_40 = 4;
  puVar1 = (undefined4 *)thunk_FUN_1402da070(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 3;
    *(short *)(puVar1 + 1) = (short)DAT_140478b78;
    *(char *)((longlong)puVar1 + 6) = (char)((uint)DAT_140478b78 >> 0x10);
    *(undefined1 *)((longlong)puVar1 + 7) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(param_1 + 1,"commentStyle","");
  }
  func_0x000140017240(auStack_48,
                      "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                     );
                    /* WARNING: Subroutine does not return */
  FUN_140084c90(auStack_48);
}

