// Function: FUN_1400ea780
// Addr: 1400ea780
// Size: 325 bytes


void FUN_1400ea780(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  ulonglong uVar6;
  undefined4 *puVar7;
  
  uVar5 = FUN_1400d7f90(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),
                        *(undefined4 *)(param_1 + 0x24));
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
  (**(code **)(*plVar2 + 0x88))(plVar2,uVar5);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
  (**(code **)(*plVar2 + 0xc0))(plVar2,*(undefined4 *)(param_1 + 0x30));
  puVar7 = local_res8;
  local_res8[0] = 0;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
  uVar6 = param_1 + 0x28;
  (**(code **)(*plVar2 + 0x90))(plVar2,0,1,param_1 + 0x10,uVar6,puVar7);
  FUN_140099f60(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18));
  lVar3 = *(longlong *)(param_1 + 0x18);
  cVar1 = *(char *)(*(longlong *)(param_1 + 8) + 0x50);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
  lVar4 = *plVar2;
  if (cVar1 != '\0') {
    if (lVar3 != 0) {
      (**(code **)(lVar4 + 0x98))(plVar2,lVar3,*(undefined4 *)(param_1 + 0x20));
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
      (**(code **)(*plVar2 + 0xa0))
                (plVar2,*(undefined4 *)(param_1 + 0x2c),
                 *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x50),0,uVar6 & 0xffffffff00000000,
                 (ulonglong)puVar7 & 0xffffffff00000000);
      return;
    }
    (**(code **)(lVar4 + 0xa8))
              (plVar2,*(undefined4 *)(param_1 + 0x2c),cVar1,0,uVar6 & 0xffffffff00000000);
    return;
  }
  if (lVar3 != 0) {
    (**(code **)(lVar4 + 0x98))(plVar2,lVar3,*(undefined4 *)(param_1 + 0x20),0);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
    (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined4 *)(param_1 + 0x2c),0,0);
    return;
  }
  (**(code **)(lVar4 + 0x68))(plVar2,*(undefined4 *)(param_1 + 0x2c),0);
  return;
}

