// Function: FUN_14011ae10
// Addr: 14011ae10
// Size: 198 bytes


void FUN_14011ae10(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  cVar1 = *(char *)(param_1 + 8);
  if ((bool)*(char *)(param_1 + 0x4f0) == (cVar1 == '\0')) {
    return;
  }
  *(bool *)(param_1 + 0x4f0) = cVar1 == '\0';
  if (cVar1 != '\0') {
    FUN_14011aee0(param_1);
    return;
  }
  plVar2 = (longlong *)FUN_14028af20(0x10);
  plVar2[1] = (longlong)FUN_14011af50;
  *plVar2 = param_1;
  lVar3 = FUN_1402ca17c(0,0,FUN_140082eb0,plVar2,0,&local_10);
  if (lVar3 == 0) {
    local_10 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  if (*(int *)(param_1 + 0x448) == 0) {
    *(undefined4 *)(param_1 + 0x448) = local_10;
    *(undefined4 *)(param_1 + 0x44c) = local_c;
    *(longlong *)(param_1 + 0x440) = lVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140015110();
}

