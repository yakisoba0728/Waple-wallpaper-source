// Function: FUN_1401164f0
// Addr: 1401164f0
// Size: 245 bytes


void FUN_1401164f0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (param_1[3] != 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (lVar2 != 0) {
      uVar3 = *(ulonglong *)(lVar2 + 0x10);
      if (uVar3 < 2) {
        if (uVar3 == 0) {
          FID_conflict__assert
                    (L"shared_->refcount > 0",
                     L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\../allocators.h"
                     ,0x116);
        }
        plVar4 = *(longlong **)(lVar1 + 0x10);
        lVar2 = *plVar4;
        lVar5 = *(longlong *)(lVar2 + 0x10);
        while (lVar5 != 0) {
          *plVar4 = *(longlong *)(lVar2 + 0x10);
          thunk_FUN_1402d9040();
          plVar4 = *(longlong **)(lVar1 + 0x10);
          lVar2 = *plVar4;
          lVar5 = *(longlong *)(lVar2 + 0x10);
        }
        *(undefined8 *)(lVar2 + 8) = 0;
        uVar6 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8);
        if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x18) != '\0') {
          thunk_FUN_1402d9040();
        }
        thunk_FUN_14028af80(uVar6,1);
      }
      else {
        *(ulonglong *)(lVar2 + 0x10) = uVar3 - 1;
      }
    }
    thunk_FUN_14028af80(lVar1,0x18);
  }
  thunk_FUN_1402d9040(param_1[6]);
  thunk_FUN_14028af80(param_1[5],1);
  return;
}

