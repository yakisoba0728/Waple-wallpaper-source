// Function: FUN_1401a4230
// Addr: 1401a4230
// Size: 763 bytes


void FUN_1401a4230(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  lVar2 = param_1[1];
  lVar8 = (longlong)*(int *)(param_2 + 4);
  uVar5 = *(uint *)(param_3 + 1) & 0xff;
  if (uVar5 == 4) {
    pcVar7 = (char *)*param_3;
    if (pcVar7 == (char *)0x0) {
      *(undefined8 *)(lVar8 + lVar2) = 0;
      *(undefined4 *)(lVar8 + 8 + lVar2) = 0;
    }
    else {
      if ((*(uint *)(param_3 + 1) >> 8 & 1) != 0) {
        pcVar7 = pcVar7 + 4;
      }
      *(undefined8 *)(lVar8 + lVar2) = 0;
      *(undefined4 *)(lVar8 + 8 + lVar2) = 0;
      if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
        dVar3 = (double)FUN_1402d06ac(pcVar7);
        *(float *)(lVar8 + lVar2) = (float)dVar3;
        cVar1 = *pcVar7;
        while (cVar1 != '\0') {
          if (*pcVar7 == ' ') {
            bVar4 = false;
            goto LAB_1401a42e6;
          }
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar7;
        }
      }
    }
  }
  else if (((uVar5 == 1) || (uVar5 == 2)) || (uVar5 == 3)) {
    uVar9 = FUN_140086220(param_3);
    *(undefined4 *)(lVar8 + 8 + lVar2) = uVar9;
    *(undefined4 *)(lVar8 + 4 + lVar2) = uVar9;
    *(undefined4 *)(lVar8 + lVar2) = uVar9;
  }
  goto LAB_1401a4385;
  while( true ) {
    pcVar7 = pcVar7 + 1;
    bVar4 = true;
    if (*pcVar7 == '\0') break;
LAB_1401a42e6:
    if (*pcVar7 != ' ') {
      if (!bVar4) goto LAB_1401a4385;
      break;
    }
  }
  dVar3 = (double)FUN_1402d06ac(pcVar7);
  *(float *)(lVar8 + 4 + lVar2) = (float)dVar3;
  cVar1 = *pcVar7;
  while (cVar1 != '\0') {
    if (*pcVar7 == ' ') {
      bVar4 = false;
      goto LAB_1401a4331;
    }
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  goto LAB_1401a4385;
  while( true ) {
    pcVar7 = pcVar7 + 1;
    bVar4 = true;
    if (*pcVar7 == '\0') break;
LAB_1401a4450:
    if (*pcVar7 != ' ') {
      if (!bVar4) goto LAB_1401a44e2;
      break;
    }
  }
  dVar3 = (double)FUN_1402d06ac(pcVar7);
  *(float *)(lVar8 + 4 + lVar2) = (float)dVar3;
  cVar1 = *pcVar7;
  while (cVar1 != '\0') {
    if (*pcVar7 == ' ') {
      bVar4 = false;
      goto LAB_1401a4491;
    }
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  goto LAB_1401a44e2;
  while( true ) {
    pcVar7 = pcVar7 + 1;
    bVar4 = true;
    if (*pcVar7 == '\0') break;
LAB_1401a4491:
    if (*pcVar7 != ' ') {
      if (!bVar4) goto LAB_1401a44e2;
      break;
    }
  }
  dVar3 = (double)FUN_1402d06ac(pcVar7);
  *(float *)(lVar8 + 8 + lVar2) = (float)dVar3;
  goto LAB_1401a44e2;
  while( true ) {
    pcVar7 = pcVar7 + 1;
    bVar4 = true;
    if (*pcVar7 == '\0') break;
LAB_1401a4331:
    if (*pcVar7 != ' ') {
      if (!bVar4) goto LAB_1401a4385;
      break;
    }
  }
  dVar3 = (double)FUN_1402d06ac(pcVar7);
  *(float *)(lVar8 + 8 + lVar2) = (float)dVar3;
LAB_1401a4385:
  if ((*(char *)(param_1 + 2) != '\0') &&
     (FUN_140176f70(*param_1,param_1[1],param_2), *(char *)(param_3 + 1) == '\a')) {
    puVar6 = (undefined8 *)FUN_140087490(param_3,"value","");
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_140084ac0();
    }
    uVar5 = *(uint *)(puVar6 + 1) & 0xff;
    if (uVar5 == 4) {
      pcVar7 = (char *)*puVar6;
      if (pcVar7 == (char *)0x0) {
        *(undefined8 *)(lVar8 + lVar2) = 0;
        *(undefined4 *)(lVar8 + 8 + lVar2) = 0;
      }
      else {
        if ((*(uint *)(puVar6 + 1) >> 8 & 1) != 0) {
          pcVar7 = pcVar7 + 4;
        }
        *(undefined8 *)(lVar8 + lVar2) = 0;
        *(undefined4 *)(lVar8 + 8 + lVar2) = 0;
        if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
          dVar3 = (double)FUN_1402d06ac(pcVar7);
          *(float *)(lVar8 + lVar2) = (float)dVar3;
          cVar1 = *pcVar7;
          while (cVar1 != '\0') {
            if (*pcVar7 == ' ') {
              bVar4 = false;
              goto LAB_1401a4450;
            }
            pcVar7 = pcVar7 + 1;
            cVar1 = *pcVar7;
          }
        }
      }
    }
    else if (((uVar5 == 1) || (uVar5 == 2)) || (uVar5 == 3)) {
      uVar9 = FUN_140086220();
      *(undefined4 *)(lVar8 + 8 + lVar2) = uVar9;
      *(undefined4 *)(lVar8 + 4 + lVar2) = uVar9;
      *(undefined4 *)(lVar8 + lVar2) = uVar9;
    }
LAB_1401a44e2:
    FUN_1401a4db0(param_2,param_1,param_3);
  }
  if (*(code **)(param_2 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401a4520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x28))(param_1[1],param_2);
    return;
  }
  return;
}

