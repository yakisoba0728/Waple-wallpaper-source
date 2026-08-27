// Function: FUN_1402fa9f0
// Addr: 1402fa9f0
// Size: 477 bytes


int FUN_1402fa9f0(longlong param_1,int param_2,longlong param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    if ((*(uint *)(param_1 + 8) & 0x8000) == 0) {
      return 0;
    }
  }
  else if (param_3 == 0) {
    return 6;
  }
  if (param_1 == 0) {
    return 0x23;
  }
  if ((*(uint *)(param_1 + 8) & 0x100) == 0) {
    return 6;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x28);
  if (lVar5 == -2) {
    return 6;
  }
  if (lVar5 == 0) {
    pcVar2 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
    if (pcVar2 != (code *)0x0) {
      lVar5 = (*pcVar2)(*(longlong **)(param_1 + 0x90),"multi-masters");
    }
    lVar6 = -2;
    if (lVar5 != 0) {
      lVar6 = lVar5;
    }
    *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x28) = lVar6;
    if (lVar5 == 0) {
      return 6;
    }
  }
  if (*(code **)(lVar5 + 0x28) == (code *)0x0) {
    return 6;
  }
  iVar3 = (**(code **)(lVar5 + 0x28))(param_1,param_2,param_3);
  if (2 < iVar3 + 2U) {
    return iVar3;
  }
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = uVar1;
  if (iVar3 != -1) {
    if (iVar3 == -2) {
      *(uint *)(param_1 + 8) = uVar1 | 0x8000;
      iVar3 = 0;
      uVar4 = uVar1 | 0x8000;
    }
    else {
      *(uint *)(param_1 + 8) = uVar1 & 0xffff7fff;
      uVar4 = uVar1 & 0xffff7fff;
    }
  }
  pcVar2 = *(code **)(lVar5 + 0x58);
  if (pcVar2 == (code *)0x0) {
    if (iVar3 == -1) {
      return 0;
    }
  }
  else {
    if (iVar3 == -1) {
      if (((uVar1 ^ uVar4) >> 0xf & 1) != 0) {
        (*pcVar2)(param_1);
      }
      return 0;
    }
    (*pcVar2)(param_1);
  }
  if (iVar3 != 0) {
    return iVar3;
  }
  if (((*(uint *)(param_1 + 8) & 0x100) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x30), lVar5 != -2)) {
    if (lVar5 == 0) {
      pcVar2 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
      if (pcVar2 != (code *)0x0) {
        lVar5 = (*pcVar2)(*(longlong **)(param_1 + 0x90),"metrics-variations");
      }
      lVar6 = -2;
      if (lVar5 != 0) {
        lVar6 = lVar5;
      }
      *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x30) = lVar6;
      if (lVar5 == 0) goto LAB_1402fab9e;
    }
    if (*(code **)(lVar5 + 0x38) != (code *)0x0) {
      (**(code **)(lVar5 + 0x38))(param_1);
    }
  }
LAB_1402fab9e:
  if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
    (**(code **)(param_1 + 0xc0))(*(undefined8 *)(param_1 + 0xb8));
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  return 0;
}

