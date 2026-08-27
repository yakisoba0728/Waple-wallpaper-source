// Function: FUN_140356fd0
// Addr: 140356fd0
// Size: 686 bytes


undefined8
FUN_140356fd0(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_res8 [32];
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong *local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  
  if (param_1 == 0) {
    return 6;
  }
  if (param_3 == (undefined4 *)0x0) {
    return 6;
  }
  if (param_2 == 0) {
    return 6;
  }
  local_90 = param_5;
  uVar3 = 0;
  local_80 = *param_3;
  local_68 = FUN_140357be0;
  local_60 = thunk_FUN_1402f7f90;
  local_78 = 0;
  local_98 = param_4;
  local_88 = param_2;
  local_58 = param_1;
  plVar2 = (longlong *)FUN_1402f7e90(param_1,0x1bf0,local_res8);
  if (plVar2 == (longlong *)0x0) {
    return 6;
  }
  *plVar2 = (longlong)&local_98;
  plVar2[8] = 0;
  *(undefined4 *)(plVar2 + 1) = 0x3f34;
  local_70 = plVar2;
  if ((((local_68 == (code *)0x0) || (local_60 == (code *)0x0)) || (plVar2 == (longlong *)0x0)) ||
     (((undefined8 *)*plVar2 != &local_98 || (0x1f < (int)plVar2[1] - 0x3f34U)))) {
    iVar1 = -2;
  }
  else {
    if ((plVar2[8] != 0) && ((int)plVar2[6] != 0xf)) {
      if (local_60 == thunk_FUN_1402f7f90) {
        FUN_1402f7f90();
      }
      else {
        (*local_60)(local_58);
      }
      plVar2[8] = 0;
    }
    *(undefined4 *)(plVar2 + 2) = 7;
    *(undefined4 *)(plVar2 + 6) = 0xf;
    iVar1 = FUN_140359b30(&local_98);
    if (iVar1 == 0) goto LAB_1403570fe;
  }
  if (local_60 == thunk_FUN_1402f7f90) {
    FUN_1402f7f90();
  }
  else {
    (*local_60)(local_58,plVar2);
  }
  local_70 = (longlong *)0x0;
LAB_1403570fe:
  if (iVar1 != 0) {
    return 6;
  }
  iVar1 = FUN_140358210(&local_98,4);
  if (iVar1 == 1) {
    *param_3 = local_7c;
    if ((((local_68 == (code *)0x0) || (local_60 == (code *)0x0)) || (local_70 == (longlong *)0x0))
       || (((undefined8 *)*local_70 != &local_98 || (0x1f < (int)local_70[1] - 0x3f34U)))) {
      iVar1 = -2;
    }
    else {
      if (local_70[8] != 0) {
        if (local_60 == thunk_FUN_1402f7f90) {
          FUN_1402f7f90();
        }
        else {
          (*local_60)(local_58);
        }
      }
      iVar1 = 0;
      if (local_60 == thunk_FUN_1402f7f90) {
        FUN_1402f7f90();
      }
      else {
        (*local_60)(local_58,local_70);
      }
    }
  }
  else {
    if (((local_68 != (code *)0x0) && (local_60 != (code *)0x0)) &&
       ((local_70 != (longlong *)0x0 &&
        (((undefined8 *)*local_70 == &local_98 && ((int)local_70[1] - 0x3f34U < 0x20)))))) {
      if (local_70[8] != 0) {
        if (local_60 == thunk_FUN_1402f7f90) {
          FUN_1402f7f90();
        }
        else {
          (*local_60)(local_58);
        }
      }
      if (local_60 == thunk_FUN_1402f7f90) {
        FUN_1402f7f90();
      }
      else {
        (*local_60)(local_58,local_70);
      }
    }
    if (iVar1 == 0) {
      return 10;
    }
  }
  if (iVar1 == -4) {
    return 0x40;
  }
  if (iVar1 == -5) {
    return 10;
  }
  if (iVar1 != -3) {
    if (iVar1 == 2) {
      uVar3 = 8;
    }
    return uVar3;
  }
  return 8;
}

