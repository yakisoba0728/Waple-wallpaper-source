// Function: FUN_1400f3650
// Addr: 1400f3650
// Size: 729 bytes


void FUN_1400f3650(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  undefined8 local_res8;
  
  iVar1 = FUN_140290d80(param_1 + 0xd8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x124) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x124) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  if (*(longlong *)(param_1 + 0x58) == 0) goto LAB_1400f38e5;
  if ((*(char *)(param_1 + 0x90) == '\0') ||
     (*(int *)(param_1 + 0x60) + 0x1eU < *(uint *)(*(longlong *)(param_1 + 0x50) + 0x144))) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  cVar4 = *(char *)(param_1 + 0x91);
  if (cVar3 != cVar4) {
    cVar4 = cVar3;
    if (cVar3 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x108))();
      *(undefined1 *)(param_1 + 0x91) = 0;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x100))();
      *(char *)(param_1 + 0x91) = cVar3;
    }
  }
  if ((cVar4 != '\0') && (*(char *)(param_1 + 0x95) != '\0')) {
    LOCK();
    *(undefined1 *)(param_1 + 0x95) = 0;
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x108))();
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))(*(longlong **)(param_1 + 0x58),0);
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x100))();
  }
  if ((*(char *)(param_1 + 0x92) == '\0') && (*(char *)(param_1 + 0x91) == '\0')) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    goto LAB_1400f38e5;
  }
  local_res8 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x160))
                    (*(longlong **)(param_1 + 0x58),&local_res8);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xa0))();
  if ((iVar2 == 0) && (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xd8))(), iVar2 == 0))
  {
    fVar5 = (float)FUN_140057720(param_1 + 0x28);
    if (DAT_140492654 <= fVar5) {
      fVar5 = DAT_140492654;
    }
    dVar6 = (double)(**(code **)(**(longlong **)(param_1 + 0x58) + 0x80))();
    if (0.0 < *(float *)(param_1 + 0x4c)) {
      fVar7 = *(float *)(param_1 + 0x4c) - fVar5;
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      *(float *)(param_1 + 0x4c) = fVar7;
      Sleep(1);
    }
    fVar7 = DAT_14049267c;
    if (((DAT_140492858 < *(float *)(param_1 + 0x4c) || DAT_140492858 == *(float *)(param_1 + 0x4c))
        || (dVar6 <= 0.0)) || (dVar6 != *(double *)(param_1 + 0x40))) {
LAB_1400f38ac:
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      fVar5 = fVar5 + *(float *)(param_1 + 0x48);
      *(float *)(param_1 + 0x48) = fVar5;
      if (fVar7 < fVar5) {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x108))();
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))(*(longlong **)(param_1 + 0x58),0);
        Sleep(100);
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))
                  (*(longlong **)(param_1 + 0x58),SUB84(dVar6,0));
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x100))();
        fVar5 = *(float *)(param_1 + 0x4c);
        *(float *)(param_1 + 0x4c) = fVar5 + fVar5 + DAT_140492868 + fVar5;
        goto LAB_1400f38ac;
      }
    }
    *(double *)(param_1 + 0x40) = dVar6;
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (iVar1 == 0) {
    LOCK();
    *(undefined1 *)(param_1 + 200) = 1;
    UNLOCK();
    LOCK();
    *(undefined1 *)(param_1 + 0xc9) = 1;
    UNLOCK();
  }
LAB_1400f38e5:
  FUN_140290ea0(param_1 + 0xd8);
  return;
}

