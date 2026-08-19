// Function: FUN_1400ec2f0
// Addr: 1400ec2f0
// Size: 61 bytes


void FUN_1400ec2f0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_f8 [192];
  
  puVar1 = *(undefined8 **)(param_1 + 0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (*(longlong **)(param_1 + 0x168) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x168) + 0x10))();
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x148);
  for (plVar4 = *(longlong **)(param_1 + 0x140); plVar4 != plVar2; plVar4 = plVar4 + 3) {
    if ((longlong *)plVar4[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar4[2] + 0x10))();
      plVar4[2] = 0;
    }
    if ((longlong *)*plVar4 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar4 + 0x10))();
      *plVar4 = 0;
    }
    if ((longlong *)plVar4[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar4[1] + 0x10))();
      plVar4[1] = 0;
    }
  }
  func_0x0001400efd20((undefined8 *)(param_1 + 0x140));
  FUN_14017e110(*(undefined8 *)(param_1 + 8));
  func_0x0001400edf20(auStack_f8);
  uVar3 = func_0x000140421ed0(param_2);
                    /* WARNING: Subroutine does not return */
  FUN_14000f950(param_1 + 0x78,param_2,uVar3);
}

