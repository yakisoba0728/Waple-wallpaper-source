// Function: FUN_14038a850
// Addr: 14038a850
// Size: 425 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14038a850(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong in_RAX;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if ((param_1 == (uint *)0x0) || (in_RAX = (ulonglong)*param_1, *param_1 == 0)) {
LAB_14038a9e6:
    uVar7 = in_RAX & 0xffffffffffffff00;
  }
  else {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 2);
    while (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      lpCriticalSection = (LPCRITICAL_SECTION)_calloc_base(1,0x38);
      in_RAX = 0;
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) goto LAB_14038a9e6;
      InitializeCriticalSection(lpCriticalSection);
      lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      lpCriticalSection[1].LockCount = 0;
      lpCriticalSection[1].RecursionCount = 0;
      LOCK();
      bVar8 = *(longlong *)(param_1 + 2) == 0;
      if (bVar8) {
        *(LPCRITICAL_SECTION *)(param_1 + 2) = lpCriticalSection;
      }
      UNLOCK();
      if (bVar8) break;
      if (*(int *)((longlong)&lpCriticalSection[1].DebugInfo + 4) == 0) {
        if (1 < *(int *)&lpCriticalSection[1].DebugInfo + 1U) {
          *(undefined4 *)((longlong)&lpCriticalSection[1].DebugInfo + 4) = 0;
          uVar3._0_4_ = lpCriticalSection[1].LockCount;
          uVar3._4_4_ = lpCriticalSection[1].RecursionCount;
          thunk_FUN_1402d9040(uVar3);
        }
        lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        lpCriticalSection[1].LockCount = 0;
        lpCriticalSection[1].RecursionCount = 0;
      }
      else {
        EnterCriticalSection(lpCriticalSection);
        uVar1 = *(uint *)((longlong)&lpCriticalSection[1].DebugInfo + 4);
        while (uVar1 != 0) {
          if (uVar1 - 1 < uVar1) {
            puVar6 = (undefined8 *)
                     (*(longlong *)&lpCriticalSection[1].LockCount + (ulonglong)(uVar1 - 1) * 0x18);
          }
          else {
            puVar6 = &DAT_1404e4f20;
            DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
            DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
            DAT_1404e4f28 = (undefined4)DAT_14045dd18;
            _DAT_1404e4f2c = DAT_14045dd18._4_4_;
            _DAT_1404e4f30 = DAT_14045dd20;
          }
          uVar4 = puVar6[1];
          pcVar5 = (code *)puVar6[2];
          iVar2 = *(int *)((longlong)&lpCriticalSection[1].DebugInfo + 4);
          if (iVar2 != 0) {
            *(int *)((longlong)&lpCriticalSection[1].DebugInfo + 4) = iVar2 + -1;
          }
          LeaveCriticalSection(lpCriticalSection);
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar4);
          }
          EnterCriticalSection(lpCriticalSection);
          uVar1 = *(uint *)((longlong)&lpCriticalSection[1].DebugInfo + 4);
        }
        if (1 < *(int *)&lpCriticalSection[1].DebugInfo + 1U) {
          *(undefined4 *)((longlong)&lpCriticalSection[1].DebugInfo + 4) = 0;
          uVar4._0_4_ = lpCriticalSection[1].LockCount;
          uVar4._4_4_ = lpCriticalSection[1].RecursionCount;
          thunk_FUN_1402d9040(uVar4);
        }
        lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        lpCriticalSection[1].LockCount = 0;
        lpCriticalSection[1].RecursionCount = 0;
        LeaveCriticalSection(lpCriticalSection);
      }
      DeleteCriticalSection(lpCriticalSection);
      thunk_FUN_1402d9040(lpCriticalSection);
      lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 2);
    }
    uVar7 = FUN_14040b1b0(lpCriticalSection,param_2,param_3,param_4,param_5);
  }
  return uVar7;
}

