// Function: FUN_1401de2b0
// Addr: 1401de2b0
// Size: 384 bytes


/* WARNING: Removing unreachable block (ram,0x0001401de3c8) */
/* WARNING: Removing unreachable block (ram,0x0001401de388) */
/* WARNING: Removing unreachable block (ram,0x0001401de390) */
/* WARNING: Removing unreachable block (ram,0x0001401de3e0) */
/* WARNING: Removing unreachable block (ram,0x0001401de3f1) */
/* WARNING: Removing unreachable block (ram,0x0001401de3f7) */
/* WARNING: Removing unreachable block (ram,0x0001401de3fe) */
/* WARNING: Removing unreachable block (ram,0x0001401de401) */

void FUN_1401de2b0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = &PTR_PTR_140490488;
  if (param_1[0x33] != param_1[0x34]) {
    lVar2 = param_1[0x34] - param_1[0x33];
    if (lVar2 != 0) {
      uVar3 = lVar2 >> 3;
      if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_140013120();
      }
      uVar3 = uVar3 * 8;
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(0,param_1[0x33],param_1[0x34] - param_1[0x33]);
      }
      if (uVar3 < 0x1000) {
        func_0x00014028aff0(uVar3);
        return;
      }
      if (uVar3 < uVar3 + 0x27) {
        func_0x00014028aff0();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    if (param_1[0x33] != param_1[0x34]) {
      param_1[0x34] = param_1[0x33];
    }
  }
  lVar2 = param_1[0x30];
  if (lVar2 != 0) {
    lVar2 = func_0x00014028f030(*(undefined8 *)(lVar2 + 0x198),*(undefined8 *)(lVar2 + 0x1a0),
                                param_1);
    if (lVar2 != *(longlong *)(param_1[0x30] + 0x1a0)) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(lVar2,lVar2 + 8,*(longlong *)(param_1[0x30] + 0x1a0) - (lVar2 + 8));
    }
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  }
  plVar1 = *(longlong **)(param_1[0x19] + 0x1830);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  FUN_140177040(param_1[0x19] + 0x1708,param_1,0);
  func_0x00014000dab0(param_1 + 0x42);
  func_0x000140049410(param_1 + 0x40);
                    /* WARNING: Subroutine does not return */
  FUN_140017310(param_1 + 0x3b);
}

