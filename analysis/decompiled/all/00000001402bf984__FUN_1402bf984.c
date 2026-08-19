// Function: FUN_1402bf984
// Addr: 1402bf984
// Size: 118 bytes


uint FUN_1402bf984(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 uStackX_8;
  undefined1 uStackX_9;
  undefined1 uStackX_a;
  undefined2 uStackX_18;
  undefined1 uStackX_1a;
  longlong local_28;
  longlong *local_20 [2];
  char local_10;
  
  uVar2 = 0xffffffff;
  if (param_1 != 0xffffffff) {
    func_0x0001402bf8e8(&local_28);
    uStackX_9 = (undefined1)param_1;
    if (param_1 < 0x100) {
      uVar2 = (uint)*(byte *)(local_20[0][0x22] + (ulonglong)(param_1 & 0xff));
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      uStackX_a = 0;
      if (((int)local_20[0][1] < 2) ||
         (-1 < *(short *)(*local_20[0] + (ulonglong)((int)param_1 >> 8 & 0xff) * 2))) {
                    /* WARNING: Subroutine does not return */
        FUN_1402cb004();
      }
      uStackX_8 = (undefined1)(param_1 >> 8);
      uStackX_18 = 0;
      uStackX_1a = 0;
      iVar1 = FUN_1402d949c(local_20,local_20[0][0x27],0x100,&uStackX_8,2,&uStackX_18,3,
                            *(undefined4 *)((longlong)local_20[0] + 0xc),1);
      if (iVar1 != 0) {
        param_1 = (uint)(byte)uStackX_18;
        if (iVar1 != 1) {
          param_1 = (uint)CONCAT11((byte)uStackX_18,uStackX_18._1_1_);
        }
      }
      uVar2 = param_1;
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  return uVar2;
}

