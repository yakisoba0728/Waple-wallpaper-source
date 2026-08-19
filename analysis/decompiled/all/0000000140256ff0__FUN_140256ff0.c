// Function: FUN_140256ff0
// Addr: 140256ff0
// Size: 556 bytes


void FUN_140256ff0(float param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong in_RCX;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  
  plVar7 = (longlong *)(in_RCX + 0x450);
  if (*(ulonglong *)(in_RCX + 0x488) < 0x10) {
    lVar6 = in_RCX + 0x470;
  }
  else {
    lVar6 = *(longlong *)(in_RCX + 0x470);
  }
  uVar1 = *(ulonglong *)(in_RCX + 0x468);
  lVar2 = *(longlong *)(in_RCX + 0x460);
  plVar4 = plVar7;
  if (0xf < uVar1) {
    plVar4 = (longlong *)*plVar7;
  }
  if ((lVar2 == *(longlong *)(in_RCX + 0x480)) &&
     (((lVar2 == 0 ||
       (iVar3 = func_0x0001404210c0(plVar4,lVar6,lVar2), param_1 = extraout_XMM0_Da, iVar3 == 0)) &&
      (param_1 = *(float *)(in_RCX + 0x4e0), param_1 == *(float *)(in_RCX + 0x4e4))))) {
    plVar4 = (longlong *)(in_RCX + 0x4b0);
    plVar5 = (longlong *)(in_RCX + 0x490);
    if (0xf < *(ulonglong *)(in_RCX + 0x4c8)) {
      plVar4 = (longlong *)*plVar4;
    }
    if (0xf < *(ulonglong *)(in_RCX + 0x4a8)) {
      plVar5 = (longlong *)*plVar5;
    }
    if ((((*(longlong *)(in_RCX + 0x4a0) == *(longlong *)(in_RCX + 0x4c0)) &&
         ((*(longlong *)(in_RCX + 0x4a0) == 0 ||
          (iVar3 = func_0x0001404210c0(plVar5,plVar4), param_1 = extraout_XMM0_Da_00, iVar3 == 0))))
        && (*(int *)(in_RCX + 0x594) == *(int *)(in_RCX + 0x598))) &&
       ((((*(char *)(in_RCX + 0x59c) == *(char *)(in_RCX + 0x59d) &&
          (*(char *)(in_RCX + 0x59e) == *(char *)(in_RCX + 0x59f))) &&
         ((param_1 = *(float *)(in_RCX + 0x4e8), param_1 == *(float *)(in_RCX + 0x4f0) &&
          ((((param_1 = *(float *)(in_RCX + 0x4ec), param_1 == *(float *)(in_RCX + 0x4f4) &&
             (param_1 = *(float *)(in_RCX + 0x4f8), param_1 == *(float *)(in_RCX + 0x500))) &&
            (param_1 = *(float *)(in_RCX + 0x4fc), param_1 == *(float *)(in_RCX + 0x504))) &&
           ((param_1 = *(float *)(in_RCX + 0x508), param_1 == *(float *)(in_RCX + 0x50c) &&
            (*(int *)(in_RCX + 0x510) == *(int *)(in_RCX + 0x514))))))))) &&
        ((*(char *)(in_RCX + 0x5a1) == *(char *)(in_RCX + 0x5a0) &&
         ((*(int *)(in_RCX + 0x518) == 0) == (*(int *)(in_RCX + 0x51c) == 0))))))) {
      return;
    }
  }
  if (in_RCX == in_RCX + -0x20) {
    *(undefined4 *)(in_RCX + 0x4e4) = *(undefined4 *)(in_RCX + 0x4e0);
    *(undefined4 *)(in_RCX + 0x598) = *(undefined4 *)(in_RCX + 0x594);
    *(undefined1 *)(in_RCX + 0x59d) = *(undefined1 *)(in_RCX + 0x59c);
    *(undefined1 *)(in_RCX + 0x59f) = *(undefined1 *)(in_RCX + 0x59e);
    *(undefined8 *)(in_RCX + 0x4f0) = *(undefined8 *)(in_RCX + 0x4e8);
    *(undefined8 *)(in_RCX + 0x500) = *(undefined8 *)(in_RCX + 0x4f8);
    *(undefined4 *)(in_RCX + 0x50c) = *(undefined4 *)(in_RCX + 0x508);
    *(undefined4 *)(in_RCX + 0x514) = *(undefined4 *)(in_RCX + 0x510);
    *(undefined1 *)(in_RCX + 0x5a1) = *(undefined1 *)(in_RCX + 0x5a0);
    *(undefined4 *)(in_RCX + 0x51c) = *(undefined4 *)(in_RCX + 0x518);
    FUN_1401b3310(param_1,*(undefined8 *)(in_RCX + 0x5a8));
    func_0x000140421ed0(PTR_s_HT_14048ef48_8_140484d98);
    return;
  }
  if (0xf < uVar1) {
    plVar7 = (longlong *)*plVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000f950(in_RCX + 0x470,plVar7,lVar2);
}

