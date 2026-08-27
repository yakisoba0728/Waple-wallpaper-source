// Function: FUN_14008c080
// Addr: 14008c080
// Size: 1163 bytes


undefined8 * FUN_14008c080(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong local_48;
  uint local_40;
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffffeff;
  *param_1 = &PTR__scalar_deleting_destructor__140485060;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_40 = CONCAT31(local_40._1_3_,4);
  puVar4 = (undefined4 *)_malloc_base(8);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_140017170(&local_48,
                  "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                 );
                    /* WARNING: Subroutine does not return */
    FUN_140084bc0(&local_48);
  }
  *puVar4 = 3;
  *(short *)(puVar4 + 1) = (short)DAT_140478aa8;
  *(char *)((longlong)puVar4 + 6) = (char)((uint)DAT_140478aa8 >> 0x10);
  uVar7 = local_40 | 0x100;
  *(undefined1 *)((longlong)puVar4 + 7) = 0;
  puVar5 = (ulonglong *)FUN_140086de0(param_1 + 1,"commentStyle","");
  local_40 = (uint)puVar5[1];
  *(uint *)(puVar5 + 1) = uVar7;
  local_48 = *puVar5;
  *puVar5 = (ulonglong)puVar4;
  uVar1 = puVar5[2];
  puVar5[2] = 0;
  uStack_30 = puVar5[3];
  local_28 = puVar5[4];
  puVar5[3] = 0;
  puVar5[4] = 0;
  local_38 = uVar1;
  FUN_140086d30(&local_48);
  if (uVar1 != 0) {
    FUN_140017240(uVar1 + 0x40);
    FUN_140017240(uVar1 + 0x20);
    FUN_140017240(uVar1);
    thunk_FUN_14028af80(uVar1,0x60);
  }
  local_40 = CONCAT31(local_40._1_3_,4);
  puVar4 = (undefined4 *)_malloc_base(6);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_140017170(&local_48,
                  "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                 );
                    /* WARNING: Subroutine does not return */
    FUN_140084bc0(&local_48);
  }
  *puVar4 = 1;
  *(char *)(puVar4 + 1) = (char)DAT_14047225c;
  uVar7 = local_40 | 0x100;
  *(undefined1 *)((longlong)puVar4 + 5) = 0;
  puVar5 = (ulonglong *)FUN_140086de0(param_1 + 1,"indentation","");
  local_40 = (uint)puVar5[1];
  *(uint *)(puVar5 + 1) = uVar7;
  local_48 = *puVar5;
  *puVar5 = (ulonglong)puVar4;
  uVar1 = puVar5[2];
  puVar5[2] = 0;
  local_28 = puVar5[4];
  uStack_30 = puVar5[3];
  puVar5[3] = 0;
  puVar5[4] = 0;
  local_38 = uVar1;
  FUN_140086d30(&local_48);
  if (uVar1 != 0) {
    FUN_140017240(uVar1 + 0x40);
    FUN_140017240(uVar1 + 0x20);
    FUN_140017240(uVar1);
    thunk_FUN_14028af80(uVar1,0x60);
  }
  local_40 = CONCAT31(local_40._1_3_,5);
  local_48 = local_48 & 0xffffffffffffff00;
  puVar5 = (ulonglong *)FUN_140086de0(param_1 + 1,"enableYAMLCompatibility","");
  uVar3 = puVar5[1];
  *(uint *)(puVar5 + 1) = local_40 & 0xfffffeff;
  uVar1 = *puVar5;
  *puVar5 = local_48;
  uVar2 = puVar5[2];
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  switch((uint)uVar3 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if (((uint)uVar3 >> 8 & 1) != 0) {
      thunk_FUN_1402d9040(uVar1);
    }
    break;
  case 6:
  case 7:
    if (uVar1 != 0) {
      FUN_140088e40(uVar1);
      thunk_FUN_14028af80(uVar1,0x10);
    }
    break;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  if (uVar2 != 0) {
    FUN_140017240(uVar2 + 0x40);
    FUN_140017240(uVar2 + 0x20);
    FUN_140017240(uVar2);
    thunk_FUN_14028af80(uVar2,0x60);
  }
  local_40 = CONCAT31(local_40._1_3_,5);
  local_40 = local_40 & 0xfffffeff;
  local_28 = 0;
  local_48 = local_48 & 0xffffffffffffff00;
  local_38 = 0;
  uStack_30 = 0;
  uVar6 = FUN_140086de0(param_1 + 1,"dropNullPlaceholders","");
  FUN_140085610(uVar6,&local_48);
  FUN_140086d30(&local_48);
  uVar1 = local_38;
  if (local_38 != 0) {
    FUN_140017240(local_38 + 0x40);
    FUN_140017240(uVar1 + 0x20);
    FUN_140017240(uVar1);
    thunk_FUN_14028af80(uVar1,0x60);
  }
  local_40 = CONCAT31(local_40._1_3_,5);
  local_40 = local_40 & 0xfffffeff;
  local_28 = 0;
  local_48 = local_48 & 0xffffffffffffff00;
  local_38 = 0;
  uStack_30 = 0;
  uVar6 = FUN_140086de0(param_1 + 1,"useSpecialFloats","");
  FUN_140085610(uVar6,&local_48);
  FUN_140085440(&local_48);
  local_40 = CONCAT31(local_40._1_3_,5);
  local_40 = local_40 & 0xfffffeff;
  local_28 = 0;
  local_48 = local_48 & 0xffffffffffffff00;
  local_38 = 0;
  uStack_30 = 0;
  uVar6 = FUN_140086de0(param_1 + 1,"emitUTF8","");
  FUN_140085610(uVar6,&local_48);
  FUN_140085440(&local_48);
  local_40 = CONCAT31(local_40._1_3_,1);
  local_40 = local_40 & 0xfffffeff;
  local_28 = 0;
  local_48 = 0x11;
  local_38 = 0;
  uStack_30 = 0;
  uVar6 = FUN_140086de0(param_1 + 1,"precision","");
  FUN_140085610(uVar6,&local_48);
  FUN_140085440(&local_48);
  local_40 = CONCAT31(local_40._1_3_,4);
  local_40 = local_40 | 0x100;
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = FUN_140084b30("significant",0xb);
  uVar6 = FUN_140086de0(param_1 + 1,"precisionType","");
  FUN_140085610(uVar6,&local_48);
  FUN_140085440(&local_48);
  return param_1;
}

