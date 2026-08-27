// Function: FUN_140145e60
// Addr: 140145e60
// Size: 578 bytes


longlong * FUN_140145e60(ulonglong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (param_1 < 2) {
    return (longlong *)0x0;
  }
  if ((param_1 & param_1 - 1) != 0) {
    plVar3 = (longlong *)FUN_14014b2f0(param_1,0xffffffff);
    return plVar3;
  }
  plVar3 = (longlong *)_calloc_base(1,0xd0);
  if (plVar3 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  plVar3[0x16] = (longlong)FUN_140145900;
  plVar3[10] = param_1;
  if (param_1 < 0x20) {
    if (param_1 == 2) {
      plVar3[0xc] = (longlong)&LAB_140146aa0;
      return plVar3;
    }
    if (param_1 != 4) {
      pcVar6 = FUN_140146b70;
      if (param_1 != 8) {
        pcVar6 = FUN_140146c90;
      }
      plVar3[0xc] = (longlong)pcVar6;
      return plVar3;
    }
    plVar3[0xc] = (longlong)FUN_140146ac0;
    return plVar3;
  }
  iVar2 = FUN_140145950(plVar3,param_1);
  if (iVar2 == 0) {
    lVar4 = _malloc_base(param_1 & 0xfffffffffffffff8);
    if (lVar4 != 0) {
      lVar5 = _malloc_base((param_1 >> 2) << 3);
      if (lVar5 != 0) {
        lVar1 = 0;
        if (param_1 != 0) {
          for (; (param_1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
          }
        }
        uVar9 = param_1 >> 3;
        FUN_140145220(lVar5,lVar1);
        uVar8 = 0;
        uVar10 = (param_1 & 0x7fffffffffffffff) >> 2;
        uVar7 = uVar8;
        if (uVar10 != 0) {
          do {
            lVar1 = *(longlong *)(lVar5 + uVar7 * 8);
            if (lVar1 < 0) {
              *(ulonglong *)(lVar5 + uVar7 * 8) = lVar1 + param_1;
            }
            uVar7 = uVar7 + 2;
          } while (uVar7 < uVar10);
        }
        FUN_1402ea670(lVar5,uVar9,0x10,&LAB_140145200);
        if (uVar9 != 0) {
          do {
            *(longlong *)(lVar4 + uVar8 * 8) = *(longlong *)(lVar5 + 8 + uVar8 * 0x10) * 2;
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar9);
        }
        thunk_FUN_1402d9040(lVar5);
        *plVar3 = lVar4;
        lVar4 = FUN_140145610(param_1);
        plVar3[5] = lVar4;
        if (lVar4 != 0) {
          uVar8 = uVar9 / 3;
          plVar3[0x19] = uVar8;
          uVar7 = uVar8;
          if (1 < uVar9 % 3) {
            uVar7 = uVar8 + 1;
          }
          plVar3[8] = uVar7 >> 1;
          plVar3[7] = uVar8 + 1 >> 1;
          plVar3[0xc] = (longlong)FUN_140149100;
          return plVar3;
        }
        goto LAB_140145f26;
      }
      thunk_FUN_1402d9040(lVar4);
    }
    *plVar3 = 0;
  }
LAB_140145f26:
  FUN_140145900(plVar3);
  return (longlong *)0x0;
}

