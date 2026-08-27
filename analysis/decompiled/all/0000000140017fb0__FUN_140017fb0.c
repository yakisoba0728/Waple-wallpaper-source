// Function: FUN_140017fb0
// Addr: 140017fb0
// Size: 336 bytes


undefined8 FUN_140017fb0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *plVar6;
  size_t sVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 local_48 [48];
  
  if ((*(char *)(param_3 + 1) == '\a') && (*(char *)(param_2 + 8) == '\a')) {
    FUN_140085090(local_48);
    plVar2 = *(longlong **)*param_3;
    plVar3 = (longlong *)*plVar2;
    while (plVar3 != plVar2) {
      pcVar4 = (char *)plVar3[4];
      sVar7 = strlen(pcVar4);
      lVar8 = FUN_140087490(param_3,pcVar4,pcVar4 + sVar7);
      if (lVar8 == 0) {
        lVar8 = FUN_140084ac0();
      }
      pcVar4 = (char *)plVar3[4];
      sVar7 = strlen(pcVar4);
      uVar9 = FUN_140086de0(local_48,pcVar4,pcVar4 + sVar7);
      FUN_140085520(uVar9,lVar8);
      plVar5 = (longlong *)plVar3[2];
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        plVar3 = plVar5;
        while (cVar1 == '\0') {
          plVar3 = (longlong *)*plVar3;
          cVar1 = *(char *)(*plVar3 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar3[1] + 0x19);
        plVar6 = (longlong *)plVar3[1];
        plVar5 = plVar3;
        while ((plVar3 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar3[2]))) {
          cVar1 = *(char *)(plVar3[1] + 0x19);
          plVar6 = (longlong *)plVar3[1];
          plVar5 = plVar3;
        }
      }
    }
    FUN_140085350(param_1,local_48);
    FUN_140085440(local_48);
    return param_1;
  }
  FUN_140085090();
  return param_1;
}

