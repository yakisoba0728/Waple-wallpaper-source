// Function: FUN_1402f7150
// Addr: 1402f7150
// Size: 70 bytes


void FUN_1402f7150(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)(param_1 + 0xf0);
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x90);
  lVar3 = puVar2[3];
  lVar4 = puVar2[2];
  if ((*(uint *)(*(longlong *)(param_1 + 8) + 8) & 0x10000) != 0) {
    if ((*plVar1 != 0) && ((*(byte *)(*plVar1 + 8) & 2) != 0)) {
      plVar5 = *(longlong **)(param_1 + 0xe8);
      if (*plVar5 != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4);
      }
      *plVar5 = 0;
      *(uint *)(*plVar1 + 8) = *(uint *)(*plVar1 + 8) & 0xfffffffd;
    }
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4);
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(code **)(lVar3 + 0x70) != (code *)0x0) {
    (**(code **)(lVar3 + 0x70))(param_1);
  }
  if ((*plVar1 == 0) || ((*(byte *)(*plVar1 + 8) & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
      (**(code **)(lVar3 + 0x10))(lVar3);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(uint *)(*plVar1 + 8) = *(uint *)(*plVar1 + 8) & 0xfffffffe;
  }
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    if ((*(uint *)*puVar2 & 0x200) == 0) {
      plVar5 = *(longlong **)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        lVar3 = *plVar5;
        FUN_1402f1070(plVar5);
        (**(code **)(lVar3 + 0x10))(lVar3,plVar5);
      }
      *(undefined8 *)*plVar1 = 0;
    }
    if (*plVar1 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4);
    }
    *plVar1 = 0;
  }
  return;
}

