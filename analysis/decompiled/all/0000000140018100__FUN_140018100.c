// Function: FUN_140018100
// Addr: 140018100
// Size: 274 bytes


void FUN_140018100(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  size_t sVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  if ((*(char *)(param_1 + 8) == '\a') && (*(char *)(param_2 + 1) == '\a')) {
    plVar2 = *(longlong **)*param_2;
    plVar5 = (longlong *)*plVar2;
    while (plVar5 != plVar2) {
      pcVar3 = (char *)plVar5[4];
      sVar7 = strlen(pcVar3);
      lVar8 = FUN_140087490(param_2,pcVar3,pcVar3 + sVar7);
      if (lVar8 == 0) {
        lVar8 = FUN_140084ac0();
      }
      pcVar3 = (char *)plVar5[4];
      sVar7 = strlen(pcVar3);
      uVar9 = FUN_140086de0(param_1,pcVar3,pcVar3 + sVar7);
      FUN_140085520(uVar9,lVar8);
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
  return;
}

