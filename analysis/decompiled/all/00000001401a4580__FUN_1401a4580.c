// Function: FUN_1401a4580
// Addr: 1401a4580
// Size: 885 bytes


void FUN_1401a4580(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong lVar9;
  undefined4 uVar10;
  
  lVar3 = param_1[1];
  lVar9 = (longlong)*(int *)(param_2 + 4);
  uVar6 = *(uint *)(param_3 + 1) & 0xff;
  if (uVar6 == 4) {
    pcVar8 = (char *)*param_3;
    if (pcVar8 == (char *)0x0) {
      *(undefined8 *)(lVar9 + lVar3) = 0;
      *(undefined8 *)(lVar9 + 8 + lVar3) = 0;
    }
    else {
      if ((*(uint *)(param_3 + 1) >> 8 & 1) != 0) {
        pcVar8 = pcVar8 + 4;
      }
      *(undefined8 *)(lVar9 + lVar3) = 0;
      *(undefined8 *)(lVar9 + 8 + lVar3) = 0;
      if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) {
        dVar4 = (double)FUN_1402d06ac(pcVar8);
        *(float *)(lVar9 + lVar3) = (float)dVar4;
        cVar2 = *pcVar8;
        while (cVar2 != '\0') {
          if (*pcVar8 == ' ') {
            bVar5 = false;
            goto LAB_1401a4636;
          }
          pcVar8 = pcVar8 + 1;
          cVar2 = *pcVar8;
        }
      }
    }
  }
  else if (((uVar6 == 1) || (uVar6 == 2)) || (uVar6 == 3)) {
    uVar10 = FUN_140086220(param_3);
    puVar1 = (undefined4 *)(lVar9 + lVar3);
    *puVar1 = uVar10;
    puVar1[1] = uVar10;
    puVar1[2] = uVar10;
    puVar1[3] = uVar10;
  }
  goto LAB_1401a470f;
  while( true ) {
    pcVar8 = pcVar8 + 1;
    bVar5 = true;
    if (*pcVar8 == '\0') break;
LAB_1401a4636:
    if (*pcVar8 != ' ') {
      if (!bVar5) goto LAB_1401a470f;
      break;
    }
  }
  dVar4 = (double)FUN_1402d06ac(pcVar8);
  *(float *)(lVar9 + 4 + lVar3) = (float)dVar4;
  cVar2 = *pcVar8;
  while (cVar2 != '\0') {
    if (*pcVar8 == ' ') {
      bVar5 = false;
      goto LAB_1401a4684;
    }
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar8;
  }
  goto LAB_1401a470f;
  while( true ) {
    pcVar8 = pcVar8 + 1;
    bVar5 = true;
    if (*pcVar8 == '\0') break;
LAB_1401a4684:
    if (*pcVar8 != ' ') {
      if (!bVar5) goto LAB_1401a470f;
      break;
    }
  }
  dVar4 = (double)FUN_1402d06ac(pcVar8);
  *(float *)(lVar9 + 8 + lVar3) = (float)dVar4;
  cVar2 = *pcVar8;
  while (cVar2 != '\0') {
    if (*pcVar8 == ' ') {
      bVar5 = false;
      goto LAB_1401a46c4;
    }
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar8;
  }
  goto LAB_1401a470f;
  while( true ) {
    pcVar8 = pcVar8 + 1;
    bVar5 = true;
    if (*pcVar8 == '\0') break;
LAB_1401a47d6:
    if (*pcVar8 != ' ') {
      if (!bVar5) goto LAB_1401a48ac;
      break;
    }
  }
  dVar4 = (double)FUN_1402d06ac(pcVar8);
  *(float *)(lVar9 + 4 + lVar3) = (float)dVar4;
  cVar2 = *pcVar8;
  while (cVar2 != '\0') {
    if (*pcVar8 == ' ') {
      bVar5 = false;
      goto LAB_1401a4824;
    }
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar8;
  }
  goto LAB_1401a48ac;
  while( true ) {
    pcVar8 = pcVar8 + 1;
    bVar5 = true;
    if (*pcVar8 == '\0') break;
LAB_1401a4824:
    if (*pcVar8 != ' ') {
      if (!bVar5) goto LAB_1401a48ac;
      break;
    }
  }
  dVar4 = (double)FUN_1402d06ac(pcVar8);
  *(float *)(lVar9 + 8 + lVar3) = (float)dVar4;
  cVar2 = *pcVar8;
  while (cVar2 != '\0') {
    if (*pcVar8 == ' ') {
      bVar5 = false;
      goto LAB_1401a4864;
    }
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar8;
  }
  goto LAB_1401a48ac;
  while( true ) {
    pcVar8 = pcVar8 + 1;
    bVar5 = true;
    if (*pcVar8 == '\0') break;
LAB_1401a4864:
    if (*pcVar8 != ' ') {
      if (!bVar5) goto LAB_1401a48ac;
      break;
    }
  }
  dVar4 = (double)FUN_1402d06ac(pcVar8);
  *(float *)(lVar9 + 0xc + lVar3) = (float)dVar4;
  goto LAB_1401a48ac;
  while( true ) {
    pcVar8 = pcVar8 + 1;
    bVar5 = true;
    if (*pcVar8 == '\0') break;
LAB_1401a46c4:
    if (*pcVar8 != ' ') {
      if (!bVar5) goto LAB_1401a470f;
      break;
    }
  }
  dVar4 = (double)FUN_1402d06ac(pcVar8);
  *(float *)(lVar9 + 0xc + lVar3) = (float)dVar4;
LAB_1401a470f:
  if ((*(char *)(param_1 + 2) != '\0') &&
     (FUN_140176f70(*param_1,param_1[1],param_2), *(char *)(param_3 + 1) == '\a')) {
    puVar7 = (undefined8 *)FUN_140087490(param_3,"value","");
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_140084ac0();
    }
    uVar6 = *(uint *)(puVar7 + 1) & 0xff;
    if (uVar6 == 4) {
      pcVar8 = (char *)*puVar7;
      if (pcVar8 == (char *)0x0) {
        *(undefined8 *)(lVar9 + lVar3) = 0;
        *(undefined8 *)(lVar9 + 8 + lVar3) = 0;
      }
      else {
        if ((*(uint *)(puVar7 + 1) >> 8 & 1) != 0) {
          pcVar8 = pcVar8 + 4;
        }
        *(undefined8 *)(lVar9 + lVar3) = 0;
        *(undefined8 *)(lVar9 + 8 + lVar3) = 0;
        if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) {
          dVar4 = (double)FUN_1402d06ac(pcVar8);
          *(float *)(lVar9 + lVar3) = (float)dVar4;
          cVar2 = *pcVar8;
          while (cVar2 != '\0') {
            if (*pcVar8 == ' ') {
              bVar5 = false;
              goto LAB_1401a47d6;
            }
            pcVar8 = pcVar8 + 1;
            cVar2 = *pcVar8;
          }
        }
      }
    }
    else if (((uVar6 == 1) || (uVar6 == 2)) || (uVar6 == 3)) {
      uVar10 = FUN_140086220();
      puVar1 = (undefined4 *)(lVar9 + lVar3);
      *puVar1 = uVar10;
      puVar1[1] = uVar10;
      puVar1[2] = uVar10;
      puVar1[3] = uVar10;
    }
LAB_1401a48ac:
    FUN_1401a4db0(param_2,param_1,param_3);
  }
  if (*(code **)(param_2 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401a48ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x28))(param_1[1],param_2);
    return;
  }
  return;
}

