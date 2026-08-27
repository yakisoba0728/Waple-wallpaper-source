// Function: FUN_14035b680
// Addr: 14035b680
// Size: 612 bytes


void FUN_14035b680(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_res8 [4];
  longlong *plVar7;
  undefined4 uVar8;
  
  uVar6 = 2;
  if ((*(code **)(param_1 + 0xa0) == FUN_14039d540) &&
     (*(undefined4 **)(param_1 + 0x98) != (undefined4 *)0x0)) {
    uVar6 = **(undefined4 **)(param_1 + 0x98);
  }
  if (*(char *)(param_1 + 4) != '\0') {
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0x98));
    }
    if (DAT_1404df428 != 0) {
      LOCK();
      DAT_1404df428 = DAT_1404df428 + 1;
      UNLOCK();
    }
    FUN_1404160c0(*(undefined8 *)(param_1 + 0x90));
    *(int **)(param_1 + 0x90) = &DAT_1404df428;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    FUN_1403b2f70(param_1);
  }
  piVar4 = (int *)FUN_140415980(*(undefined8 *)(param_1 + 0x20));
  iVar3 = piVar4[6];
  uVar1 = *(undefined8 *)(piVar4 + 4);
  lVar5 = FUN_1403f70d0();
  if (lVar5 == 0) {
    if (*piVar4 == 0) {
      return;
    }
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    *piVar4 = -0xdead;
    lVar5 = *(longlong *)(piVar4 + 2);
    if (lVar5 != 0) {
      FUN_1403c3220(lVar5);
      thunk_FUN_1402d9040(lVar5);
      piVar4[2] = 0;
      piVar4[3] = 0;
    }
  }
  else {
    local_res8[0] = 0;
    plVar7 = local_res8;
    iVar3 = FUN_1402f24e0(lVar5,uVar1,iVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x10),
                          plVar7);
    uVar8 = (undefined4)((ulonglong)plVar7 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = FUN_1402f4b80(local_res8[0],0x73796d62);
      if (iVar3 != 0) {
        FUN_1402f4b80(local_res8[0],0x756e6963);
      }
      *(int **)(local_res8[0] + 0x48) = piVar4;
      *(code **)(local_res8[0] + 0x50) = FUN_1403a24f0;
      cVar2 = FUN_14038a850(piVar4,&DAT_1404e51e8,lVar5,&LAB_1403bdf10,CONCAT44(uVar8,1));
      if (cVar2 == '\0') {
        FUN_1402efa80(local_res8[0]);
        return;
      }
      FUN_14039d570(param_1,local_res8[0],1);
      if ((*(char *)(param_1 + 4) != '\0') && (*(code **)(param_1 + 0xa0) == FUN_14039d540)) {
        **(undefined4 **)(param_1 + 0x98) = uVar6;
      }
      FUN_14039d7d0(param_1,local_res8[0]);
      return;
    }
    if (*piVar4 == 0) {
      return;
    }
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    *piVar4 = -0xdead;
    lVar5 = *(longlong *)(piVar4 + 2);
    if (lVar5 != 0) {
      FUN_1403c3220(lVar5);
      thunk_FUN_1402d9040(lVar5);
      piVar4[2] = 0;
      piVar4[3] = 0;
    }
  }
  if (*(code **)(piVar4 + 10) != (code *)0x0) {
    (**(code **)(piVar4 + 10))(*(undefined8 *)(piVar4 + 8));
    piVar4[10] = 0;
    piVar4[0xb] = 0;
    piVar4[8] = 0;
    piVar4[9] = 0;
  }
  thunk_FUN_1402d9040(piVar4);
  return;
}

