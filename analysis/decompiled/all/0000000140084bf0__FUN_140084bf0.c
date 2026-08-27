// Function: FUN_140084bf0
// Addr: 140084bf0
// Size: 160 bytes


longlong * FUN_140084bf0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 local_48 [32];
  
  if (((*(uint *)(param_2 + 1) & 3) == 0) || (lVar1 = *param_2, lVar1 == 0)) {
    lVar2 = *param_2;
  }
  else {
    uVar4 = (ulonglong)(*(uint *)(param_2 + 1) >> 2);
    lVar2 = _malloc_base(uVar4 + 1);
    if (lVar2 == 0) {
      FUN_140017170(local_48,
                    "in Json::Value::duplicateStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(local_48);
    }
    FUN_1404210f0(lVar2,lVar1,uVar4);
    *(undefined1 *)(lVar2 + uVar4) = 0;
  }
  *param_1 = lVar2;
  uVar3 = *(uint *)(param_2 + 1);
  if (*param_2 != 0) {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xfffffffc;
    uVar3 = (uint)((uVar3 & 3) != 0);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | uVar3;
    uVar3 = *(uint *)(param_2 + 1) & 0xfffffffc | uVar3;
  }
  *(uint *)(param_1 + 1) = uVar3;
  return param_1;
}

