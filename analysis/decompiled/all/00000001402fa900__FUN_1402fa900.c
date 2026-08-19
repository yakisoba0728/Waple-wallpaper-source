// Function: FUN_1402fa900
// Addr: 1402fa900
// Size: 269 bytes


int FUN_1402fa900(longlong param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if ((*(uint *)(param_1 + 8) & 0x100) == 0) {
    return 6;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x28);
  if (lVar4 == -2) {
    return 6;
  }
  if (lVar4 == 0) {
    pcVar2 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
    if (pcVar2 != (code *)0x0) {
      lVar4 = (*pcVar2)(*(longlong **)(param_1 + 0x90),"multi-masters");
    }
    lVar5 = -2;
    if (lVar4 != 0) {
      lVar5 = lVar4;
    }
    *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x28) = lVar5;
    if (lVar4 == 0) {
      return 6;
    }
  }
  if (*(code **)(lVar4 + 0x38) == (code *)0x0) {
    return 6;
  }
  iVar3 = (**(code **)(lVar4 + 0x38))(param_1,param_2);
  if (1 < iVar3 + 1U) {
    return iVar3;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff;
  uVar1 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | param_2 << 0x10;
  *(uint *)(param_1 + 8) = uVar1 & 0xffff7fff;
  pcVar2 = *(code **)(lVar4 + 0x58);
  if (pcVar2 == (code *)0x0) {
    if (iVar3 == -1) {
      return 0;
    }
  }
  else {
    if (iVar3 == -1) {
      if ((uVar1 >> 0xf & 1) == 0) {
        return 0;
      }
      (*pcVar2)(param_1);
      return 0;
    }
    (*pcVar2)(param_1);
  }
  if (iVar3 != 0) {
    return iVar3;
  }
  if (((*(uint *)(param_1 + 8) & 0x100) != 0) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x30), lVar4 != -2)) {
    if (lVar4 == 0) {
      pcVar2 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
      if (pcVar2 != (code *)0x0) {
        lVar4 = (*pcVar2)(*(longlong **)(param_1 + 0x90),"metrics-variations");
      }
      lVar5 = -2;
      if (lVar4 != 0) {
        lVar5 = lVar4;
      }
      *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x30) = lVar5;
      if (lVar4 == 0) goto code_r0x0001402faa71;
    }
    if (*(code **)(lVar4 + 0x38) != (code *)0x0) {
      (**(code **)(lVar4 + 0x38))(param_1);
    }
  }
code_r0x0001402faa71:
  if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
    (**(code **)(param_1 + 0xc0))(*(undefined8 *)(param_1 + 0xb8));
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  return 0;
}

