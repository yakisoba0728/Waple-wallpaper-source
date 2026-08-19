// Function: FUN_1400cd120
// Addr: 1400cd120
// Size: 282 bytes


void FUN_1400cd120(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  longlong *local_48;
  char local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined **local_28;
  undefined1 *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined **local_10;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    local_48 = plVar2 + 4;
    local_40 = 0;
    iVar6 = func_0x000140290e50();
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(5);
    }
    if (*(int *)((longlong)plVar2 + 0x6c) == 0x7fffffff) {
      *(undefined4 *)((longlong)plVar2 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(6);
    }
    local_40 = '\x01';
    if (*(char *)((longlong)plVar2 + 0xc1) == '\0') {
      local_18 = 1;
      local_20 = &DAT_140474550;
      local_28 = &PTR_UNWIND_INFO_1400138cf_UnwindCodes_54__UnwindOpCode_140486298;
      local_14 = local_38._4_4_;
      local_10 = &PTR_PTR_1404dfcc0;
      local_38 = 0;
      uStack_30 = 0;
      FUN_140293770(&local_38);
      func_0x0001402936b0(&local_38,&local_28,&DAT_1404d8770);
      local_28 = &PTR_DAT_1404745b0;
      if (*(char *)((longlong)plVar2 + 0xc1) != '\0') {
        func_0x00014009c0d0(3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      func_0x0001402935e0(plVar2 + 2,&local_38);
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_48,0);
      FUN_140292ec0(&local_38);
      if (local_40 == '\0') goto LAB_1400cd223;
    }
    FUN_140290f70(local_48);
  }
LAB_1400cd223:
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      puVar4 = (undefined8 *)puVar3[0x19];
      if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400cd25a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar4)(puVar4,puVar3);
        return;
      }
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

