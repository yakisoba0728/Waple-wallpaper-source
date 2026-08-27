// Function: FUN_140398d80
// Addr: 140398d80
// Size: 140 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140398d80(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = param_1 + 8;
  if (param_1 == -9) {
    lVar5 = 0;
  }
  while( true ) {
    plVar4 = (longlong *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      iVar2 = iVar2 + -1;
      *plVar4 = *plVar4 + 0x18;
      *(int *)(param_1 + 0x18) = iVar2;
    }
    if (*(int *)(lVar5 + 0x10) == 0) break;
    if (iVar2 == 0) {
      puVar3 = &DAT_1404e4f20;
      DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
      DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
      _DAT_1404e4f2c = DAT_14045dd18._4_4_;
      _DAT_1404e4f30 = DAT_14045dd20;
    }
    else {
      puVar3 = (undefined8 *)*plVar4;
    }
    cVar1 = (**(code **)(param_1 + 0x20))(puVar3);
    if (cVar1 != '\0') {
      return param_1;
    }
  }
  return param_1;
}

