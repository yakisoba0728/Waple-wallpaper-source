// Function: FUN_14031f4c0
// Addr: 14031f4c0
// Size: 171 bytes


longlong FUN_14031f4c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_res8 [4];
  uint local_res18 [2];
  undefined8 local_res20;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x30);
  local_res8[0] = FUN_14031f2f0((undefined8 *)(param_1 + 0x30),param_2,&local_res20,local_res18);
  if (local_res8[0] == 0) {
    lVar2 = FUN_1402f7fa0(uVar1,local_res18[0] + 1,local_res8);
    if (local_res8[0] == 0) {
      FUN_1404210f0(lVar2,local_res20,local_res18[0]);
      *(undefined1 *)((ulonglong)local_res18[0] + lVar2) = 0;
    }
    if (*(longlong *)(param_1 + 0x58) == 0) {
      FUN_1402f5c00(*(undefined8 *)(param_1 + 0x30),&local_res20);
    }
    return lVar2;
  }
  return 0;
}

