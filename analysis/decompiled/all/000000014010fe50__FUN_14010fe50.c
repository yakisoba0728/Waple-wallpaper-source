// Function: FUN_14010fe50
// Addr: 14010fe50
// Size: 519 bytes


void FUN_14010fe50(longlong param_1,WPARAM param_2)

{
  char cVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  BOOL BVar8;
  undefined8 *puVar9;
  size_t sVar10;
  longlong lVar11;
  undefined8 uVar12;
  ULONG_PTR local_res8;
  
  iVar7 = FUN_140290d80(param_1 + 0x3d8);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x424) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x424) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  puVar9 = (undefined8 *)FUN_140086de0(param_1 + 0x38,"general","");
  if ((*(char *)(puVar9 + 1) == '\a') && (*(char *)(param_2 + 8) == '\a')) {
    plVar2 = *(longlong **)*puVar9;
    plVar5 = (longlong *)*plVar2;
    while (plVar5 != plVar2) {
      pcVar3 = (char *)plVar5[4];
      sVar10 = strlen(pcVar3);
      lVar11 = FUN_140087490(param_2,pcVar3,pcVar3 + sVar10);
      if (lVar11 != 0) {
        pcVar3 = (char *)plVar5[4];
        sVar10 = strlen(pcVar3);
        lVar11 = FUN_140087490(param_2,pcVar3,pcVar3 + sVar10);
        if (lVar11 == 0) {
          lVar11 = FUN_140084ac0();
        }
        pcVar3 = (char *)plVar5[4];
        sVar10 = strlen(pcVar3);
        uVar12 = FUN_140086de0(puVar9,pcVar3,pcVar3 + sVar10);
        FUN_140085520(uVar12,lVar11);
      }
      plVar4 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x19);
        while (plVar5 = plVar4, cVar1 == '\0') {
          plVar4 = (longlong *)*plVar4;
          cVar1 = *(char *)(*plVar4 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar6 = (longlong *)plVar5[1];
        plVar4 = plVar5;
        while ((plVar5 = plVar6, cVar1 == '\0' && (plVar4 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar6 = (longlong *)plVar5[1];
          plVar4 = plVar5;
        }
      }
    }
  }
  FUN_140290ea0(param_1 + 0x3d8);
  BVar8 = IsWindow(*(HWND *)(param_1 + 0x1c8));
  if (BVar8 != 0) {
    local_res8 = 0;
    SendMessageTimeoutW(*(HWND *)(param_1 + 0x1c8),0x467,param_2,0,1,0,&local_res8);
  }
  FUN_140085440(param_2);
  return;
}

