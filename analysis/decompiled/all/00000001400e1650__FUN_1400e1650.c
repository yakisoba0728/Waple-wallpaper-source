// Function: FUN_1400e1650
// Addr: 1400e1650
// Size: 476 bytes


void FUN_1400e1650(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  cVar5 = FUN_1400e59c0();
  if (cVar5 == '\0') {
    if (*(int *)(param_1 + 0x70) != 0x7c) {
      return;
    }
    puVar6 = (undefined8 *)FUN_14028af20(0x20);
    *puVar6 = &PTR_FUN_140486c30;
    puVar6[1] = 8;
    puVar6[2] = 0;
    puVar6[3] = 0;
    FUN_1400e5e40(param_1 + 0x38,puVar6);
    FUN_1400e1a50();
  }
  if (*(int *)(param_1 + 0x70) == 0x7c) {
    puVar6 = (undefined8 *)FUN_14028af20(0x20);
    puVar6[1] = 0x11;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = &PTR_FUN_140486c30;
    FUN_1400e5e40(param_1 + 0x38,puVar6);
    puVar7 = (undefined8 *)FUN_14028af20(0x30);
    puVar7[1] = 0x10;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = &PTR_FUN_140486c28;
    puVar7[4] = puVar6;
    puVar7[5] = 0;
    lVar2 = *(longlong *)(lVar1 + 0x10);
    *(undefined8 **)(*(longlong *)(lVar2 + 0x18) + 0x10) = puVar7;
    puVar7[3] = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 **)(lVar2 + 0x18) = puVar7;
    puVar7[2] = lVar2;
    do {
      FUN_1400e5740(param_1);
      cVar5 = FUN_1400e59c0(param_1);
      if (cVar5 == '\0') {
        puVar7 = (undefined8 *)FUN_14028af20(0x20);
        *puVar7 = &PTR_FUN_140486c30;
        puVar7[1] = 8;
        puVar7[2] = 0;
        puVar7[3] = 0;
        uVar8 = FUN_1400e5e40(param_1 + 0x38,puVar7);
        FUN_1400e1a50(param_1 + 0x38,uVar8);
      }
      lVar2 = *(longlong *)(lVar1 + 0x10);
      lVar3 = puVar6[2];
      puVar6[2] = 0;
      lVar4 = *(longlong *)(param_1 + 0x40);
      *(undefined8 **)(param_1 + 0x40) = puVar6;
      puVar6[2] = 0;
      *(undefined8 **)(lVar4 + 0x10) = puVar6;
      lVar4 = *(longlong *)(lVar2 + 0x28);
      while (lVar4 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x28);
        lVar4 = *(longlong *)(lVar2 + 0x28);
      }
      puVar7 = (undefined8 *)FUN_14028af20(0x30);
      puVar7[1] = 0x10;
      puVar7[3] = 0;
      *puVar7 = &PTR_FUN_140486c28;
      puVar7[4] = puVar6;
      puVar7[5] = 0;
      *(undefined8 **)(lVar2 + 0x28) = puVar7;
      puVar7[2] = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x28);
    } while (*(int *)(param_1 + 0x70) == 0x7c);
  }
  return;
}

