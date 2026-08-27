// Function: FUN_14039a2e0
// Addr: 14039a2e0
// Size: 328 bytes


void FUN_14039a2e0(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  EnterCriticalSection(lpCriticalSection);
  lVar2 = *(longlong *)(param_1 + 0x60);
  uVar5 = (uint)((ulonglong)param_2 >> 0x20);
  if ((lVar2 != 0) &&
     (uVar4 = (ulonglong)((uVar5 ^ (uint)param_2) * 0x1e3779b1 & 0x3fffffff) %
              (ulonglong)*(uint *)(param_1 + 0x58),
     (*(uint *)(lVar2 + 8 + uVar4 * 0x18) >> 1 & 1) != 0)) {
    iVar6 = 0;
    do {
      plVar3 = (longlong *)(lVar2 + uVar4 * 0x18);
      if (*plVar3 == param_2) {
        if (((*(byte *)(plVar3 + 1) & 1) != 0) && (plVar3 != (longlong *)0x0)) {
          plVar3 = plVar3 + 2;
          goto LAB_14039a380;
        }
        break;
      }
      iVar6 = iVar6 + 1;
      uVar4 = (ulonglong)((int)uVar4 + iVar6 & *(uint *)(param_1 + 0x54));
    } while ((*(uint *)(lVar2 + 8 + uVar4 * 0x18) >> 1 & 1) != 0);
  }
  plVar3 = &DAT_14045dd10;
LAB_14039a380:
  plVar3 = (longlong *)*plVar3;
  if (plVar3 != (longlong *)0x0) {
    if ((lVar2 != 0) &&
       (uVar4 = (ulonglong)(((uint)param_2 ^ uVar5) * 0x1e3779b1 & 0x3fffffff) %
                (ulonglong)*(uint *)(param_1 + 0x58),
       (*(uint *)(lVar2 + 8 + uVar4 * 0x18) >> 1 & 1) != 0)) {
      iVar6 = 0;
      do {
        plVar1 = (longlong *)(lVar2 + uVar4 * 0x18);
        if (*plVar1 == param_2) {
          if (((*(byte *)(plVar1 + 1) & 1) != 0) && (plVar1 != (longlong *)0x0)) {
            *(uint *)(plVar1 + 1) = *(uint *)(plVar1 + 1) & 0xfffffffe;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
          }
          break;
        }
        iVar6 = iVar6 + 1;
        uVar4 = (ulonglong)((int)uVar4 + iVar6 & *(uint *)(param_1 + 0x54));
      } while ((*(uint *)(lVar2 + 8 + uVar4 * 0x18) >> 1 & 1) != 0);
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

