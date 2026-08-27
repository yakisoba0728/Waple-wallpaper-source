// Function: FUN_140196530
// Addr: 140196530
// Size: 413 bytes


void FUN_140196530(longlong param_1,undefined8 param_2,byte param_3,char *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd8) + 0x1518);
  (**(code **)(*plVar1 + 0xa0))(plVar1,1);
  plVar2 = *(longlong **)(param_1 + 0x420);
  lVar3 = plVar2[1];
  plVar1 = (longlong *)(lVar3 + 0x50);
  *plVar1 = *plVar1 + 8;
  **(longlong **)(lVar3 + 0x50) = (longlong)plVar2;
  (**(code **)(*plVar2 + 0x48))();
  if (*param_4 != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd8) + 0x1518);
    (**(code **)(*plVar1 + 0x120))(plVar1,0,1);
    *param_4 = '\0';
  }
  lVar3 = *(longlong *)(param_1 + 0x420);
  *(undefined8 *)(lVar3 + 0x30) = param_2;
  *(byte *)(lVar3 + 0x38) = param_3;
  (**(code **)(**(longlong **)(param_1 + 0x420) + 0x28))();
  *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x12eb) = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd8) + 0x1518);
  *(byte *)(*(longlong *)(param_1 + 0xd8) + 0x1c8) = param_3;
  (**(code **)(*plVar1 + 0x150))(plVar1,param_3);
  lVar3 = *(longlong *)(param_1 + 0xd8);
  uVar5 = 0;
  if (param_3 != 0) {
    do {
      FUN_1401849e0(uVar5 * 0x60 + lVar3 + 0xf20,uVar5 * 0x40 + lVar3 + 0xb30);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < (int)(uint)param_3);
  }
  FUN_14018aac0(param_1,2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd8) + 0x1518);
  *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x1c8) = 0;
  (**(code **)(*plVar1 + 0x150))(plVar1,0);
  *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x12eb) = 2;
  plVar1 = *(longlong **)(param_1 + 0x420);
  *(longlong *)(plVar1[1] + 0x50) = *(longlong *)(plVar1[1] + 0x50) + -8;
  if ((longlong *)**(longlong **)(plVar1[1] + 0x50) == (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  else {
    (**(code **)(*(longlong *)**(longlong **)(plVar1[1] + 0x50) + 0x48))();
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd8) + 0x1518);
  (**(code **)(*plVar1 + 0xa0))(plVar1,0);
                    /* WARNING: Could not recover jumptable at 0x0001401966c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x420) + 0x30))();
  return;
}

