// Function: FUN_1403bf880
// Addr: 1403bf880
// Size: 101 bytes


longlong * FUN_1403bf880(longlong param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar8 = (ulonglong)(param_3 & 0x3fffffff) % (ulonglong)*(uint *)(param_1 + 0x20);
  if ((*(uint *)(lVar2 + 8 + uVar8 * 0x10) >> 1 & 1) != 0) {
    iVar10 = 0;
    do {
      if (*(uint *)(lVar2 + 8 + uVar8 * 0x10) >> 2 == (param_3 & 0x3fffffff)) {
        plVar3 = (longlong *)*param_2;
        plVar9 = (longlong *)(uVar8 * 0x10 + lVar2);
        plVar4 = (longlong *)*plVar9;
        lVar5 = *plVar4;
        if (plVar4[1] - lVar5 == plVar3[1] - *plVar3) {
          iVar7 = *(int *)((longlong)plVar3 + 0x14);
          iVar1 = *(int *)((longlong)plVar4 + 0x14);
          if (((iVar1 == iVar7) &&
              ((((int)plVar4[1] == (int)lVar5 || (iVar6 = func_0x0001404210c0(lVar5), iVar6 == 0))
               && (iVar7 * 0xc == iVar1 * 0xc)))) &&
             (((iVar1 * 3 & 0x3fffffffU) == 0 ||
              (iVar7 = func_0x0001404210c0(plVar4[3],plVar3[3]), iVar7 == 0)))) {
            if ((*(byte *)(plVar9 + 1) & 1) == 0) {
              return (longlong *)0x0;
            }
            return plVar9;
          }
        }
      }
      iVar10 = iVar10 + 1;
      uVar8 = (ulonglong)((int)uVar8 + iVar10 & *(uint *)(param_1 + 0x1c));
    } while ((*(uint *)(lVar2 + 8 + uVar8 * 0x10) >> 1 & 1) != 0);
  }
  return (longlong *)0x0;
}

