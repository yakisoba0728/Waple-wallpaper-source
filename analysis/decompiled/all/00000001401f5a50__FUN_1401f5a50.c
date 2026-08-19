// Function: FUN_1401f5a50
// Addr: 1401f5a50
// Size: 1125 bytes


void FUN_1401f5a50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  
  if ((*(float *)(param_1 + 0x2f0) * *(float *)(param_1 + 0x2f0) *
       *(float *)(*(longlong *)(param_1 + 200) + 0x2d8) <= 0.0) ||
     ((*(uint *)(param_1 + 0x310) & 0x20000000) != 0)) {
    *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0x3ffffffd;
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x2c0);
  if (*plVar1 == *(longlong *)(param_1 + 0x2c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(param_1 + 0x1b0,"sound","");
  }
  uVar10 = *(uint *)(param_1 + 0x310);
  if ((uVar10 & 4) != 0) {
    func_0x0001401f5530(param_1,1);
    uVar10 = *(uint *)(param_1 + 0x310);
  }
  lVar2 = *(longlong *)(param_1 + 0x2c8);
  lVar8 = *plVar1;
  uVar9 = (lVar2 - lVar8 >> 3) * 0x6db6db6db6db6db7;
  if ((uVar9 < 2) && (*(char *)(param_1 + 0x30c) == '\0')) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  if ((uVar10 >> 0x1e & 1) == 0) {
    cVar5 = *(char *)(param_1 + 0x30c);
    if (cVar5 == '\0') {
      if (lVar8 != lVar2) {
        FUN_1401f59b0(param_1);
        iVar4 = (int)(*(longlong *)(param_1 + 0x2c8) - *plVar1 >> 3) * -0x49249249;
        uVar10 = iVar4 - 1;
        iVar6 = func_0x0001402c9870();
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
        uVar7 = (uint)(((float)iVar6 / DAT_140492a30) * (float)iVar4 + 0.0);
        if ((int)uVar7 < (int)uVar10) {
          uVar10 = uVar7;
        }
        if ((int)uVar10 < 0) {
          uVar10 = 0;
        }
        lVar2 = *plVar1;
        lVar8 = (ulonglong)uVar10 * 0x38;
        (**(code **)(*plVar3 + 0xd0))
                  (plVar3,*(undefined8 *)(lVar8 + 0x28 + lVar2),
                   *(float *)(param_1 + 0x2f0) * *(float *)(param_1 + 0x2f0) *
                   *(float *)(*(longlong *)(param_1 + 200) + 0x2d8));
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
        (**(code **)(*plVar1 + 0xb8))(plVar1,*(undefined8 *)(lVar8 + 0x28 + lVar2),uVar11);
        if (1 < uVar9) {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
          uVar12 = (**(code **)(*plVar1 + 0x98))(plVar1,*(undefined8 *)(lVar8 + 0x28 + lVar2));
          *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0x7ffffffd;
          *(undefined4 *)(param_1 + 0x2fc) = uVar12;
          return;
        }
        *(undefined4 *)(param_1 + 0x2fc) = 0;
      }
    }
    else if (cVar5 == '\x01') {
      if ((*(float *)(param_1 + 0x2fc) == 0.0) && (lVar8 != lVar2)) {
        FUN_1401f59b0(param_1);
        iVar4 = (int)(*(longlong *)(param_1 + 0x2c8) - *plVar1 >> 3) * -0x49249249;
        uVar10 = iVar4 - 1;
        iVar6 = func_0x0001402c9870();
        lVar2 = *plVar1;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
        uVar7 = (uint)(((float)iVar6 / DAT_140492a30) * (float)iVar4 + 0.0);
        if ((int)uVar7 < (int)uVar10) {
          uVar10 = uVar7;
        }
        if ((int)uVar10 < 0) {
          uVar10 = 0;
        }
        lVar8 = (ulonglong)uVar10 * 0x38;
        (**(code **)(*plVar1 + 0xd0))
                  (plVar1,*(undefined8 *)(lVar8 + 0x28 + lVar2),
                   *(float *)(param_1 + 0x2f0) * *(float *)(param_1 + 0x2f0) *
                   *(float *)(*(longlong *)(param_1 + 200) + 0x2d8));
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
        (**(code **)(*plVar1 + 0xb8))(plVar1,*(undefined8 *)(lVar8 + 0x28 + lVar2),0);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
        uVar12 = (**(code **)(*plVar1 + 0x98))(plVar1,*(undefined8 *)(lVar8 + 0x28 + lVar2));
        *(undefined4 *)(param_1 + 0x300) = uVar12;
        fVar13 = (float)FUN_1401f4c90(*(undefined8 *)(param_1 + 200));
        *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0x7ffffffd;
        *(float *)(param_1 + 0x2fc) =
             fVar13 * (*(float *)(param_1 + 0x2f8) - *(float *)(param_1 + 0x2f4)) +
             *(float *)(param_1 + 0x2f4) + *(float *)(param_1 + 0x300);
        return;
      }
    }
    else if ((cVar5 == '\x02') && (lVar8 != lVar2)) {
      FUN_1401f59b0(param_1);
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      iVar4 = (int)(*(longlong *)(param_1 + 0x2c8) - *plVar1 >> 3) * -0x49249249;
      uVar10 = iVar4 - 1;
      iVar6 = func_0x0001402c9870();
      lVar2 = *plVar1;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
      uVar7 = (uint)(((float)iVar6 / DAT_140492a30) * (float)iVar4 + 0.0);
      if ((int)uVar7 < (int)uVar10) {
        uVar10 = uVar7;
      }
      if ((int)uVar10 < 0) {
        uVar10 = 0;
      }
      lVar8 = (ulonglong)uVar10 * 0x38;
      (**(code **)(*plVar1 + 0xd0))
                (plVar1,*(undefined8 *)(lVar8 + 0x28 + lVar2),
                 *(float *)(param_1 + 0x2f0) * *(float *)(param_1 + 0x2f0) *
                 *(float *)(*(longlong *)(param_1 + 200) + 0x2d8));
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
      (**(code **)(*plVar1 + 0xb8))(plVar1,*(undefined8 *)(lVar8 + 0x28 + lVar2),0);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
      uVar12 = (**(code **)(*plVar1 + 0x98))(plVar1,*(undefined8 *)(lVar8 + 0x28 + lVar2));
      *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0x7ffffffd;
      *(undefined4 *)(param_1 + 0x300) = uVar12;
      return;
    }
    *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0x7ffffffd;
    return;
  }
  *(uint *)(param_1 + 0x310) = uVar10 & 0xbfffffff;
  lVar2 = *(longlong *)(param_1 + 0x2c8);
  while( true ) {
    if (lVar8 == lVar2) {
      return;
    }
    if ((*(longlong *)(lVar8 + 0x28) != 0) &&
       (cVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 0x158) + 0xa8))(),
       cVar5 != '\0')) break;
    lVar8 = lVar8 + 0x38;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
  (**(code **)(*plVar1 + 0xb8))(plVar1,*(undefined8 *)(lVar8 + 0x28),uVar11);
  return;
}

