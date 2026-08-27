// Function: FUN_14012e370
// Addr: 14012e370
// Size: 494 bytes


void FUN_14012e370(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = param_1[3];
  lVar6 = param_1[2];
  plVar3 = param_1;
  if (0xf < uVar1) {
    plVar3 = (longlong *)*param_1;
  }
  if (lVar6 == 7) {
    iVar4 = (int)*plVar3 + -0x616e616d;
    if ((iVar4 == 0) && (iVar4 = *(ushort *)((longlong)plVar3 + 4) - 0x6567, iVar4 == 0)) {
      iVar4 = *(byte *)((longlong)plVar3 + 6) - 100;
    }
    if (iVar4 == 0) {
      DAT_1404df594 = 0;
      goto LAB_14012e544;
    }
  }
  plVar3 = param_1;
  if (0xf < uVar1) {
    plVar3 = (longlong *)*param_1;
  }
  if (lVar6 == 10) {
    lVar5 = *plVar3 + -0x6170656369766564;
    if (lVar5 == 0) {
      lVar5 = (ulonglong)*(ushort *)(plVar3 + 1) - 0x6874;
    }
    if (lVar5 != 0) goto LAB_14012e3f7;
LAB_14012e434:
    DAT_1404df594 = 1;
  }
  else {
LAB_14012e3f7:
    plVar3 = param_1;
    if (0xf < uVar1) {
      plVar3 = (longlong *)*param_1;
    }
    if (lVar6 == 0xd) {
      lVar5 = *plVar3 + -0x6170656369766564;
      if ((lVar5 == 0) && (lVar5 = (ulonglong)*(uint *)(plVar3 + 1) - 0x6c616874, lVar5 == 0)) {
        lVar5 = (ulonglong)*(byte *)((longlong)plVar3 + 0xc) - 0x6c;
      }
      if (lVar5 == 0) goto LAB_14012e434;
    }
    plVar3 = param_1;
    if (0xf < uVar1) {
      plVar3 = (longlong *)*param_1;
    }
    if (lVar6 == 0xe) {
      lVar5 = *plVar3 + -0x657274756f79616c;
      if ((lVar5 == 0) && (lVar5 = (ulonglong)*(uint *)(plVar3 + 1) - 0x6974616c, lVar5 == 0)) {
        lVar5 = (ulonglong)*(ushort *)((longlong)plVar3 + 0xc) - 0x6576;
      }
      if (lVar5 == 0) {
        DAT_1404df594 = 2;
        goto LAB_14012e544;
      }
    }
    plVar3 = param_1;
    if (0xf < uVar1) {
      plVar3 = (longlong *)*param_1;
    }
    if (lVar6 == 6) {
      iVar4 = (int)*plVar3 + -0x6f79616c;
      if (iVar4 == 0) {
        iVar4 = *(ushort *)((longlong)plVar3 + 4) - 0x7475;
      }
      if (iVar4 == 0) {
        DAT_1404df594 = 3;
        goto LAB_14012e544;
      }
    }
    plVar3 = param_1;
    if (0xf < uVar1) {
      plVar3 = (longlong *)*param_1;
    }
    if ((lVar6 == 8) && (*plVar3 == 0x6970616c6c656873)) {
      cVar2 = FUN_140015180(10,0,0);
      DAT_1404df594 = 1;
      if (cVar2 != '\0') {
        DAT_1404df594 = 6;
      }
    }
    else {
      if (0xf < uVar1) {
        param_1 = (longlong *)*param_1;
      }
      if (lVar6 == 10) {
        lVar6 = *param_1 + -0x7461636572706564;
        if (lVar6 == 0) {
          lVar6 = (ulonglong)*(ushort *)(param_1 + 1) - 0x6465;
        }
        DAT_1404df594 = 4;
        if (lVar6 == 0) goto LAB_14012e544;
      }
      DAT_1404df594 = 5;
    }
  }
LAB_14012e544:
  FUN_140085520(&DAT_1404e7ef8,param_2);
  return;
}

