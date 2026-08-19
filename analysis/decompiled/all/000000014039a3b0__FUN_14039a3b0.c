// Function: FUN_14039a3b0
// Addr: 14039a3b0
// Size: 120 bytes


void FUN_14039a3b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  lVar1 = param_1 + 0x10;
  (*DAT_140426580)(lVar1);
  lVar3 = *(longlong *)(param_1 + 0x60);
  uVar6 = (uint)((ulonglong)param_2 >> 0x20);
  if ((lVar3 != 0) &&
     (uVar5 = (ulonglong)((uVar6 ^ (uint)param_2) * 0x1e3779b1 & 0x3fffffff) %
              (ulonglong)*(uint *)(param_1 + 0x58),
     (*(uint *)(lVar3 + 8 + uVar5 * 0x18) >> 1 & 1) != 0)) {
    iVar7 = 0;
    do {
      plVar4 = (longlong *)(lVar3 + uVar5 * 0x18);
      if (*plVar4 == param_2) {
        if (((*(byte *)(plVar4 + 1) & 1) != 0) && (plVar4 != (longlong *)0x0)) {
          plVar4 = plVar4 + 2;
          goto code_r0x00014039a450;
        }
        break;
      }
      iVar7 = iVar7 + 1;
      uVar5 = (ulonglong)((int)uVar5 + iVar7 & *(uint *)(param_1 + 0x54));
    } while ((*(uint *)(lVar3 + 8 + uVar5 * 0x18) >> 1 & 1) != 0);
  }
  plVar4 = &DAT_14045dde0;
code_r0x00014039a450:
  plVar4 = (longlong *)*plVar4;
  if (plVar4 != (longlong *)0x0) {
    if ((lVar3 != 0) &&
       (uVar5 = (ulonglong)(((uint)param_2 ^ uVar6) * 0x1e3779b1 & 0x3fffffff) %
                (ulonglong)*(uint *)(param_1 + 0x58),
       (*(uint *)(lVar3 + 8 + uVar5 * 0x18) >> 1 & 1) != 0)) {
      iVar7 = 0;
      do {
        plVar2 = (longlong *)(lVar3 + uVar5 * 0x18);
        if (*plVar2 == param_2) {
          if (((*(byte *)(plVar2 + 1) & 1) != 0) && (plVar2 != (longlong *)0x0)) {
            *(uint *)(plVar2 + 1) = *(uint *)(plVar2 + 1) & 0xfffffffe;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
          }
          break;
        }
        iVar7 = iVar7 + 1;
        uVar5 = (ulonglong)((int)uVar5 + iVar7 & *(uint *)(param_1 + 0x54));
      } while ((*(uint *)(lVar3 + 8 + uVar5 * 0x18) >> 1 & 1) != 0);
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (lVar1 != 0) {
    (*DAT_140426578)(lVar1);
  }
  return;
}

