// Function: FUN_14040ca40
// Addr: 14040ca40
// Size: 83 bytes


uint FUN_14040ca40(uint param_1,int param_2,longlong param_3)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  ushort *puVar6;
  undefined4 auStackX_10 [2];
  
  puVar6 = (ushort *)0x0;
  if (param_2 != 0) {
    if (param_2 == 1) {
      puVar6 = &DAT_140471158;
    }
    else if (param_2 == 2) {
      puVar6 = &DAT_1404711c0;
    }
    else if (param_2 == 3) {
      puVar6 = &DAT_140471190;
    }
    else if (param_2 == 4) {
      puVar6 = &DAT_140471210;
    }
    uVar2 = *puVar6;
    while (uVar2 != 0) {
      if (uVar2 == param_1) {
        auStackX_10[0] = 0;
        lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
        uVar5 = 0;
        if (lVar3 != 0) {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
        }
        iVar4 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                          (param_3,*(undefined8 *)(param_3 + 0x98),puVar6[1],auStackX_10,uVar5);
        if (iVar4 != 0) {
          return (uint)puVar6[1];
        }
        auStackX_10[0] = 0;
        lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
        uVar5 = 0;
        if (lVar3 != 0) {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
        }
        iVar4 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                          (param_3,*(undefined8 *)(param_3 + 0x98),puVar6[2],auStackX_10,uVar5);
        if (iVar4 == 0) {
          return param_1;
        }
        return (uint)puVar6[2];
      }
      puVar1 = puVar6 + 3;
      puVar6 = puVar6 + 3;
      uVar2 = *puVar1;
    }
  }
  return param_1;
}

