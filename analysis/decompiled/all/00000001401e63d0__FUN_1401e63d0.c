// Function: FUN_1401e63d0
// Addr: 1401e63d0
// Size: 167 bytes


void FUN_1401e63d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 200);
  iVar4 = 0;
  iVar5 = 0;
  for (plVar3 = (longlong *)plVar1[0x61]; plVar3 != (longlong *)plVar1[0x62]; plVar3 = plVar3 + 1) {
    lVar2 = *plVar3;
    if ((*(byte *)(lVar2 + 0x118) & 1) != 0) {
      iVar4 = iVar4 + *(int *)(lVar2 + 0x140) + 1;
      iVar5 = iVar5 + (int)(*(longlong *)(lVar2 + 0xd8) - *(longlong *)(lVar2 + 0xd0) >> 4) *
                      -0x55555555;
    }
  }
  if (((int)plVar1[100] == iVar4) && (*(int *)((longlong)plVar1 + 0x324) == iVar5)) {
    return;
  }
  *(int *)(plVar1 + 100) = iVar4;
  *(int *)((longlong)plVar1 + 0x324) = iVar5;
                    /* WARNING: Could not recover jumptable at 0x0001401e646b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x110))(plVar1);
  return;
}

