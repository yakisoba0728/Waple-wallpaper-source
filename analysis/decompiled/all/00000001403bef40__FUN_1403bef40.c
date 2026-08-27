// Function: FUN_1403bef40
// Addr: 1403bef40
// Size: 173 bytes


void FUN_1403bef40(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  plVar2 = *(longlong **)(param_1 + 8);
  uVar6 = 0;
  plVar1 = plVar2 + 2;
  if ((int)plVar2[2] != 0) {
    lVar3 = plVar2[1];
    lVar4 = *plVar2;
    if ((*(float *)((longlong)plVar2 + 0x14) != *(float *)((longlong)plVar2 + 0x1c)) ||
       (*(float *)(plVar2 + 3) != *(float *)(plVar2 + 4))) {
      uVar5 = uVar6;
      if (*(longlong *)(lVar4 + 0x38) != 0) {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 8);
      }
      (**(code **)(lVar4 + 0x18))
                (lVar4,lVar3,plVar1,*(float *)((longlong)plVar2 + 0x14),(int)plVar2[3],uVar5);
    }
    if (*(longlong *)(lVar4 + 0x38) != 0) {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x20);
    }
    (**(code **)(lVar4 + 0x30))(lVar4,lVar3,plVar1,uVar6);
  }
  *plVar1 = 0;
  *(undefined8 *)((longlong)plVar2 + 0x1c) = 0;
  *(undefined4 *)(plVar2 + 3) = 0;
  return;
}

