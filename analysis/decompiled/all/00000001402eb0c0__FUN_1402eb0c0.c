// Function: FUN_1402eb0c0
// Addr: 1402eb0c0
// Size: 418 bytes


ulonglong FUN_1402eb0c0(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong local_20;
  undefined8 local_18;
  char local_10;
  
  if (DAT_1404e45dc == 0) {
    uVar3 = FUN_1402c9e60();
  }
  else {
    local_10 = '\0';
    lVar4 = FUN_1402d9894();
    local_20 = *(longlong *)(lVar4 + 0x90);
    local_18 = *(undefined8 *)(lVar4 + 0x88);
    __acrt_update_locale_info(lVar4,&local_20);
    FUN_1402d9ab4(lVar4,&local_18);
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
    else if ((param_1 == 0) || (param_2 == 0)) {
      puVar5 = (undefined4 *)FUN_1402caf34();
      *puVar5 = 0x16;
      FUN_1402cad8c();
      if (local_10 != '\0') {
        *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 0x7fffffff;
    }
    else {
      uVar3 = 0x7fffffff;
      if (param_3 < 0x80000000) {
        if (*(longlong *)(local_20 + 0x130) == 0) {
          uVar1 = FUN_1402c9ef0(param_1,param_2,param_3,&local_20);
          if (local_10 != '\0') {
            *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
          }
          return (ulonglong)uVar1;
        }
        iVar2 = __acrt_CompareStringA
                          (&local_20,*(longlong *)(local_20 + 0x130),0x1001,param_1,(int)param_3,
                           param_2,(int)param_3,*(undefined4 *)(local_20 + 0x14));
        if (iVar2 == 0) {
          puVar5 = (undefined4 *)FUN_1402caf34();
          *puVar5 = 0x16;
        }
        else {
          uVar3 = (ulonglong)(iVar2 - 2);
        }
      }
      else {
        puVar5 = (undefined4 *)FUN_1402caf34();
        *puVar5 = 0x16;
        FUN_1402cad8c();
      }
      if (local_10 != '\0') {
        *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  return uVar3;
}

