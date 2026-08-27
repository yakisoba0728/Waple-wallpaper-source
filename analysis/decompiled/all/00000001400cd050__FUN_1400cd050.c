// Function: FUN_1400cd050
// Addr: 1400cd050
// Size: 375 bytes


void FUN_1400cd050(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
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
    iVar5 = FUN_140290d80();
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    if (*(int *)((longlong)plVar2 + 0x6c) == 0x7fffffff) {
      *(undefined4 *)((longlong)plVar2 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    local_40 = '\x01';
    if (*(char *)((longlong)plVar2 + 0xc1) == '\0') {
      local_18 = 1;
      local_20 = &DAT_140474480;
      local_28 = &PTR_FUN_1404861c8;
      local_14 = local_38._4_4_;
      local_10 = &PTR_PTR_1404dfbf0;
      local_38 = 0;
      uStack_30 = 0;
      FUN_1402936a0(&local_38);
      FUN_1402935e0(&local_38,&local_28,&DAT_1404d86a0);
      local_28 = &PTR_FUN_1404744e0;
      if (*(char *)((longlong)plVar2 + 0xc1) != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_14009c000(3);
      }
      FUN_140293510(plVar2 + 2,&local_38);
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_48,0);
      FUN_140292df0(&local_38);
      if (local_40 == '\0') goto LAB_1400cd153;
    }
    FUN_140290ea0(local_48);
  }
LAB_1400cd153:
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      puVar4 = (undefined8 *)puVar3[0x19];
      if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400cd18a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar4)(puVar4,puVar3);
        return;
      }
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

