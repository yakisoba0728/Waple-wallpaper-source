// Function: FUN_14035b4c0
// Addr: 14035b4c0
// Size: 171 bytes


longlong FUN_14035b4c0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res18 [2];
  
  lVar2 = FUN_1403f70d0();
  if (lVar2 != 0) {
    iVar1 = FUN_1402f21e0(lVar2,param_1,param_2,local_res18);
    lVar3 = local_res18[0];
    if (iVar1 == 0) {
      FUN_1402f42f0(local_res18[0]);
      lVar3 = FUN_140416910(lVar3,&LAB_14039d530);
      FUN_1402efa80(local_res18[0]);
      *(longlong *)(local_res18[0] + 0x48) = lVar2;
      *(undefined1 **)(local_res18[0] + 0x50) = &LAB_1403c03d0;
      if (*(char *)(lVar3 + 4) == '\0') {
        lVar3 = 0;
      }
      return lVar3;
    }
  }
  return 0;
}

