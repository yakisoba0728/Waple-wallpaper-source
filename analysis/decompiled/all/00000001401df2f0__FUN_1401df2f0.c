// Function: FUN_1401df2f0
// Addr: 1401df2f0
// Size: 657 bytes


void FUN_1401df2f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 local_48;
  float local_40;
  
  uVar2 = param_1[1];
  uVar5 = *(uint *)(param_3 + 1) & 0xff;
  if (uVar5 == 4) {
    pcVar7 = (char *)*param_3;
    if (pcVar7 == (char *)0x0) {
      local_40 = 0.0;
      local_48 = 0;
    }
    else {
      if ((*(uint *)(param_3 + 1) >> 8 & 1) != 0) {
        pcVar7 = pcVar7 + 4;
      }
      local_48 = 0;
      local_40 = 0.0;
      if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
        dVar3 = (double)FUN_1402d06ac(pcVar7);
        cVar1 = *pcVar7;
        local_48 = CONCAT44(local_48._4_4_,(float)dVar3);
        while (cVar1 != '\0') {
          if (*pcVar7 == ' ') {
            bVar4 = false;
            goto LAB_1401df394;
          }
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar7;
        }
      }
    }
    goto LAB_1401df424;
  }
  if (((uVar5 == 1) || (uVar5 == 2)) || (uVar5 == 3)) {
    local_40 = (float)FUN_140086220(param_3);
    local_48 = CONCAT44(local_40,local_40);
    goto LAB_1401df424;
  }
  goto LAB_1401df430;
  while( true ) {
    pcVar7 = pcVar7 + 1;
    bVar4 = true;
    if (*pcVar7 == '\0') break;
LAB_1401df394:
    if (*pcVar7 != ' ') {
      if (!bVar4) goto LAB_1401df424;
      break;
    }
  }
  dVar3 = (double)FUN_1402d06ac(pcVar7);
  cVar1 = *pcVar7;
  local_48 = CONCAT44((float)dVar3,(undefined4)local_48);
  while (cVar1 != '\0') {
    if (*pcVar7 == ' ') {
      bVar4 = false;
      goto LAB_1401df3d3;
    }
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  goto LAB_1401df424;
  while( true ) {
    pcVar7 = pcVar7 + 1;
    bVar4 = true;
    if (*pcVar7 == '\0') break;
LAB_1401df3d3:
    if (*pcVar7 != ' ') {
      if (!bVar4) goto LAB_1401df424;
      break;
    }
  }
  dVar3 = (double)FUN_1402d06ac(pcVar7);
  local_40 = (float)dVar3;
LAB_1401df424:
  FUN_1401dd630(uVar2,&local_48);
LAB_1401df430:
  if (*(char *)(param_1 + 2) == '\0') {
    return;
  }
  FUN_140176f70(*param_1,param_1[1],param_2);
  if (*(char *)(param_3 + 1) != '\a') {
    return;
  }
  puVar6 = (undefined8 *)FUN_140087490(param_3,"value","");
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_140084ac0();
  }
  if ((char)*(uint *)(puVar6 + 1) != '\x04') goto LAB_1401df566;
  pcVar7 = (char *)*puVar6;
  if (pcVar7 == (char *)0x0) {
    local_40 = 0.0;
    local_48 = 0;
  }
  else {
    if ((*(uint *)(puVar6 + 1) >> 8 & 1) != 0) {
      pcVar7 = pcVar7 + 4;
    }
    local_48 = 0;
    local_40 = 0.0;
    if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
      dVar3 = (double)FUN_1402d06ac(pcVar7);
      cVar1 = *pcVar7;
      local_48 = CONCAT44(local_48._4_4_,(float)dVar3);
      while (cVar1 != '\0') {
        if (*pcVar7 == ' ') {
          bVar4 = false;
          goto LAB_1401df4f1;
        }
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
    }
  }
  goto LAB_1401df55a;
  while( true ) {
    pcVar7 = pcVar7 + 1;
    bVar4 = true;
    if (*pcVar7 == '\0') break;
LAB_1401df4f1:
    if (*pcVar7 != ' ') {
      if (!bVar4) goto LAB_1401df55a;
      break;
    }
  }
  dVar3 = (double)FUN_1402d06ac(pcVar7);
  cVar1 = *pcVar7;
  local_48 = CONCAT44((float)dVar3,(undefined4)local_48);
  while (cVar1 != '\0') {
    if (*pcVar7 == ' ') {
      bVar4 = false;
      goto LAB_1401df531;
    }
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  goto LAB_1401df55a;
  while( true ) {
    pcVar7 = pcVar7 + 1;
    bVar4 = true;
    if (*pcVar7 == '\0') break;
LAB_1401df531:
    if (*pcVar7 != ' ') {
      if (!bVar4) goto LAB_1401df55a;
      break;
    }
  }
  dVar3 = (double)FUN_1402d06ac(pcVar7);
  local_40 = (float)dVar3;
LAB_1401df55a:
  FUN_1401dd630(uVar2,&local_48);
LAB_1401df566:
  FUN_1401a4db0(param_2,param_1,param_3);
  return;
}

