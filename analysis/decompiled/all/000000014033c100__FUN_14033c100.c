// Function: FUN_14033c100
// Addr: 14033c100
// Size: 152 bytes


int FUN_14033c100(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int local_res8 [2];
  
  lVar2 = *param_1;
  lVar3 = FUN_1402f80b0(param_1[6],1,(int)param_1[2],param_2 & 0xffffffff,lVar2,local_res8);
  *param_1 = lVar3;
  if (local_res8[0] == 0) {
    if ((lVar2 != 0) && (lVar3 != lVar2)) {
      plVar4 = (longlong *)param_1[4];
      plVar1 = plVar4 + *(int *)((longlong)param_1 + 0x1c);
      for (; plVar4 < plVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 != 0) {
          *plVar4 = (*param_1 - lVar2) + *plVar4;
        }
      }
    }
    param_1[2] = param_2;
    local_res8[0] = 0;
  }
  return local_res8[0];
}

