// Function: FUN_1401165c0
// Addr: 1401165c0
// Size: 33 bytes


/* WARNING: Possible PIC construction at 0x00014011668f: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140116647: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014011667d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014011664c) */
/* WARNING: Removing unreachable block (ram,0x000140116682) */

void FUN_1401165c0(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong unaff_RBX;
  longlong lVar5;
  undefined *apuStack_30 [5];
  
  if (param_1[3] != 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  lVar5 = param_1[3];
  if (lVar5 == 0) {
    apuStack_30[0] = &UNK_14011669d;
    func_0x0001402bf8e0(param_1[6]);
    lVar4 = param_1[5];
    lVar5 = unaff_RBX;
  }
  else {
    lVar4 = *(longlong *)(lVar5 + 0x10);
    if (lVar4 != 0) {
      uVar1 = *(ulonglong *)(lVar4 + 0x10);
      if (uVar1 < 2) {
        if (uVar1 == 0) {
          apuStack_30[0] = (undefined *)0x14011662d;
          func_0x0001402cba34(L"shared_->refcount > 0",
                              L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\../allocators.h"
                              ,0x116);
        }
        lVar4 = **(longlong **)(lVar5 + 0x10);
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          *(undefined8 *)(lVar4 + 8) = 0;
          lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 8);
          if (*(char *)(*(longlong *)(lVar5 + 0x10) + 0x18) != '\0') {
            apuStack_30[0] = (undefined *)0x140116675;
            func_0x0001402bf8e0();
          }
          register0x00000020 = (BADSPACEBASE *)apuStack_30;
          apuStack_30[0] = &UNK_140116682;
        }
        else {
          **(longlong **)(lVar5 + 0x10) = *(longlong *)(lVar4 + 0x10);
          register0x00000020 = (BADSPACEBASE *)apuStack_30;
          apuStack_30[0] = (undefined *)0x14011664c;
        }
        goto UNWIND_INFO_1402bf8b3_UnwindCodes_20__UnwindOpCode;
      }
      *(ulonglong *)(lVar4 + 0x10) = uVar1 - 1;
    }
    register0x00000020 = (BADSPACEBASE *)apuStack_30;
    apuStack_30[0] = &UNK_140116694;
    lVar4 = lVar5;
  }
UNWIND_INFO_1402bf8b3_UnwindCodes_20__UnwindOpCode:
  if (lVar4 != 0) {
    *(longlong *)((longlong)register0x00000020 + -8) = lVar5;
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d912c;
    iVar2 = (*DAT_1404264b8)(DAT_1404e4fa0,0,lVar4);
    if (iVar2 == 0) {
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d9136;
      uVar3 = (*DAT_1404266a8)();
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d913d;
      func_0x0001402caec4(uVar3);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)register0x00000020 + -0x30) = &UNK_1402d9144;
      FUN_1402cb004();
    }
  }
  return;
}

