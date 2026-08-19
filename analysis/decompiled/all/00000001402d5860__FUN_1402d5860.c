// Function: FUN_1402d5860
// Addr: 1402d5860
// Size: 146 bytes


ulonglong FUN_1402d5860(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *local_res10 [3];
  
  if (DAT_1404e46ac == 0) {
    if (param_1 + 1U < 0x101) {
      return (ulonglong)(*(ushort *)(PTR_DAT_1404dc660 + (longlong)param_1 * 2) & 2);
    }
  }
  else {
    lVar1 = FUN_1402d9964();
    local_res10[0] = *(longlong **)(lVar1 + 0x90);
    FUN_1402d9b18(lVar1,local_res10);
    if (param_1 + 1U < 0x101) {
      return (ulonglong)(*(ushort *)(*local_res10[0] + (longlong)param_1 * 2) & 2);
    }
    if (1 < (int)local_res10[0][1]) {
      uVar2 = FUN_1402d9f60(param_1,2);
      return uVar2;
    }
  }
  return 0;
}

