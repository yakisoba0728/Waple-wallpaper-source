// Function: FUN_1400f11f0
// Addr: 1400f11f0
// Size: 51 bytes


void FUN_1400f11f0(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [8];
  longlong *plStack_10;
  
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (param_1[0x13] == 0) {
    lVar4 = func_0x0001402924d0(param_2,param_3,0x40);
    if (lVar4 == 0) {
      lVar4 = *param_1;
      goto code_r0x0001400f1216;
    }
    plVar1 = param_1 + 3;
    func_0x00014004c3c0(plVar1,lVar4);
    plVar2 = *(longlong **)(param_1[0xf] + 8);
    plStack_10 = plVar2;
    (**(code **)(*plVar2 + 8))(plVar2);
    uVar3 = FUN_14004bdb0(auStack_18);
    func_0x00014004c270(plVar1,uVar3);
    if ((plVar2 != (longlong *)0x0) &&
       (puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2), puVar5 != (undefined8 *)0x0))
    {
      (**(code **)*puVar5)(puVar5,1);
    }
    lVar6 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    lVar4 = *(longlong *)(lVar6 + 0x48);
    if (plVar1 != (longlong *)0x0) {
      uVar7 = 4;
      if (lVar4 != 0) {
        uVar7 = 0;
      }
      goto UNWIND_INFO_140013bbd_UnwindCodes_47__UnwindOpCode;
    }
  }
  else {
    lVar4 = *param_1;
code_r0x0001400f1216:
    lVar6 = (longlong)*(int *)(lVar4 + 4) + (longlong)param_1;
    lVar4 = *(longlong *)(lVar6 + 0x48);
  }
  uVar7 = 6;
  if (lVar4 != 0) {
    uVar7 = 2;
  }
  uVar7 = uVar7 | *(uint *)(lVar6 + 0x10);
UNWIND_INFO_140013bbd_UnwindCodes_47__UnwindOpCode:
  uVar8 = uVar7 & *(uint *)(lVar6 + 0x14);
  *(uint *)(lVar6 + 0x10) = uVar7 & 0x17;
  if ((uVar8 & 0x17) != 0) {
    if ((uVar8 & 4) == 0) {
      pcVar9 = "ios_base::failbit set";
      if ((uVar8 & 2) == 0) {
        pcVar9 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar9 = "ios_base::badbit set";
    }
    uVar3 = func_0x000140013bf0(auStack_38,1,0);
    uVar3 = FUN_140013a40(auStack_28,pcVar9,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_1400173d0(uVar3);
  }
  return;
}

