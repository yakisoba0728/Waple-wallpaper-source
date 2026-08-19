// Function: FUN_1402eb190
// Addr: 1402eb190
// Size: 217 bytes


ulonglong FUN_1402eb190(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_20;
  undefined8 local_18;
  char local_10;
  
  if (DAT_1404e46ac == 0) {
    uVar3 = FUN_1402c9f30();
  }
  else {
    local_10 = '\0';
    lVar4 = FUN_1402d9964();
    local_20 = *(longlong *)(lVar4 + 0x90);
    local_18 = *(undefined8 *)(lVar4 + 0x88);
    FUN_1402d9b18(lVar4,&local_20);
    FUN_1402d9b84(lVar4,&local_18);
    if ((*(uint *)(lVar4 + 0x3a8) & 2) == 0) {
      *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) | 2;
      local_10 = '\x01';
    }
    if (param_3 == 0) {
      if (local_10 != '\0') {
        *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 0;
    }
    else {
      if ((param_1 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_1402cb004();
      }
      if (0x7fffffff < param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_1402cb004();
      }
      if (*(longlong *)(local_20 + 0x130) == 0) {
        uVar1 = FUN_1402c9fc0(param_1,param_2,param_3,&local_20);
        if (local_10 != '\0') {
          *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = (ulonglong)uVar1;
      }
      else {
        iVar2 = func_0x0001402ec60c(&local_20,*(longlong *)(local_20 + 0x130),0x1001,param_1,
                                    (int)param_3,param_2,(int)param_3,
                                    *(undefined4 *)(local_20 + 0x14));
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402cb004();
        }
        uVar3 = (ulonglong)(iVar2 - 2);
        if (local_10 != '\0') {
          *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
        }
      }
    }
  }
  return uVar3;
}

