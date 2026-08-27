// Function: FUN_1402f6810
// Addr: 1402f6810
// Size: 423 bytes


uint FUN_1402f6810(longlong *param_1,longlong param_2,longlong param_3,int param_4,uint param_5,
                  undefined8 param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  bool bVar9;
  
  uVar6 = ~param_5;
  if (-1 < (int)param_5) {
    uVar6 = param_5;
  }
  if ((int)uVar6 < param_4) {
    lVar2 = *param_1;
    uVar1 = *(uint *)(param_3 + (longlong)(int)uVar6 * 4);
    if (*(code **)(param_2 + 0x20) == (code *)0x0) {
      bVar9 = *(uint *)(param_2 + 8) < uVar1;
    }
    else {
      iVar4 = (**(code **)(param_2 + 0x20))(param_2,uVar1,0,0);
      bVar9 = iVar4 != 0;
    }
    param_5 = -(uint)bVar9 & 0x55;
    if (param_5 != 0) {
      return param_5;
    }
    *(uint *)(param_2 + 0xc) = uVar1;
    uVar5 = FUN_1402f58c0(param_2,&param_5);
    uVar3 = param_6;
    if (param_5 != 0) {
      return param_5;
    }
    if (uVar5 != 0) {
      if (0xffffff < uVar5) {
        return 9;
      }
      iVar4 = FUN_1402f99c0(param_1,param_2,uVar6,0,0,param_6);
      if (iVar4 == 0) {
        return 0;
      }
      uVar6 = FUN_1402f5c50(param_2,uVar1 + 4);
      if (uVar6 != 0) {
        return uVar6;
      }
      if ((int)uVar5 < 1) {
        piVar7 = (int *)0x0;
        if ((int)uVar5 < 0) {
          return 6;
        }
      }
      else {
        piVar7 = (int *)(**(code **)(lVar2 + 8))(lVar2,uVar5);
        if (piVar7 == (int *)0x0) {
          return 0x40;
        }
      }
      uVar6 = FUN_1402f54b0(param_2,piVar7,uVar5);
      if (uVar6 != 0) {
        if (piVar7 == (int *)0x0) {
          return uVar6;
        }
        (**(code **)(lVar2 + 0x10))(lVar2,piVar7);
        return uVar6;
      }
      if ((uVar5 < 5) || (*piVar7 != 0x4f54544f)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      pcVar8 = "truetype";
      if (bVar9) {
        pcVar8 = "cff";
      }
      uVar6 = FUN_1402f9b80(param_1,piVar7,uVar5,0,pcVar8,uVar3);
      return uVar6;
    }
  }
  return 1;
}

