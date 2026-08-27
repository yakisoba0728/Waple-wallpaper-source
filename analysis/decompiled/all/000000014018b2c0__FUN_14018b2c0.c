// Function: FUN_14018b2c0
// Addr: 14018b2c0
// Size: 208 bytes


void FUN_14018b2c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x158);
  plVar1 = *(longlong **)(param_1 + 0x160);
  while( true ) {
    if (plVar6 == plVar1) {
      return;
    }
    plVar2 = (longlong *)*plVar6;
    iVar5 = (**(code **)(*plVar2 + 0x60))(plVar2);
    fVar4 = DAT_1404926c0;
    if (iVar5 == 1) break;
    plVar6 = plVar6 + 1;
  }
  lVar3 = *(longlong *)(param_1 + 0xd8);
  *(longlong *)(param_1 + 0x354) = plVar2[0x5e];
  *(int *)(lVar3 + 0x84) = (int)*(float *)(plVar2 + 0x5e);
  *(int *)(lVar3 + 0x88) = (int)*(float *)((longlong)plVar2 + 0x2f4);
  *(undefined4 *)(plVar2 + 0x1a) = 0;
  *(undefined4 *)(plVar2 + 0x26) = 0;
  *(float *)(plVar2 + 0x25) = *(float *)(plVar2 + 0x5e) * fVar4;
  *(float *)((longlong)plVar2 + 300) = *(float *)((longlong)plVar2 + 0x2f4) * fVar4;
  return;
}

