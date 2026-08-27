// Function: FUN_1403c3220
// Addr: 1403c3220
// Size: 284 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403c3220(LPCRITICAL_SECTION param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  
  if (*(int *)((longlong)&param_1[1].DebugInfo + 4) == 0) {
    puVar1 = (undefined4 *)((longlong)&param_1[1].DebugInfo + 4);
    if (1 < *(int *)&param_1[1].DebugInfo + 1U) {
      uVar4._0_4_ = param_1[1].LockCount;
      uVar4._4_4_ = param_1[1].RecursionCount;
      *puVar1 = 0;
      thunk_FUN_1402d9040(uVar4);
    }
    param_1[1].LockCount = 0;
    param_1[1].RecursionCount = 0;
    *puVar1 = 0;
    *(undefined4 *)&param_1[1].DebugInfo = 0;
  }
  else {
    EnterCriticalSection(param_1);
    uVar2 = *(uint *)((longlong)&param_1[1].DebugInfo + 4);
    while (uVar2 != 0) {
      if (uVar2 - 1 < uVar2) {
        puVar7 = (undefined8 *)(*(longlong *)&param_1[1].LockCount + (ulonglong)(uVar2 - 1) * 0x18);
      }
      else {
        puVar7 = &DAT_1404e4f20;
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        _DAT_1404e4f30 = DAT_14045dd20;
      }
      uVar5 = puVar7[1];
      pcVar6 = (code *)puVar7[2];
      iVar3 = *(int *)((longlong)&param_1[1].DebugInfo + 4);
      if (iVar3 != 0) {
        *(int *)((longlong)&param_1[1].DebugInfo + 4) = iVar3 + -1;
      }
      LeaveCriticalSection(param_1);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar5);
      }
      EnterCriticalSection(param_1);
      uVar2 = *(uint *)((longlong)&param_1[1].DebugInfo + 4);
    }
    if (1 < *(int *)&param_1[1].DebugInfo + 1U) {
      *(undefined4 *)((longlong)&param_1[1].DebugInfo + 4) = 0;
      uVar5._0_4_ = param_1[1].LockCount;
      uVar5._4_4_ = param_1[1].RecursionCount;
      thunk_FUN_1402d9040(uVar5);
    }
    param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    param_1[1].LockCount = 0;
    param_1[1].RecursionCount = 0;
    LeaveCriticalSection(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001403c3335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}

