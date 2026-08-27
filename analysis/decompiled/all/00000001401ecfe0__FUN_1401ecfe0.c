// Function: FUN_1401ecfe0
// Addr: 1401ecfe0
// Size: 208 bytes


void FUN_1401ecfe0(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  int iVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  
  if ((*param_3 & 8) == 0) {
    if (((*param_3 >> 9 & 1) != 0) && (pcVar2 = (char *)*param_4, *pcVar2 != '\0')) {
      plVar3 = *(longlong **)(param_1 + 0x310);
      for (plVar6 = *(longlong **)(param_1 + 0x308); plVar6 != plVar3; plVar6 = plVar6 + 1) {
        lVar4 = *plVar6;
        cVar5 = FUN_14000d010(lVar4 + 0x120,pcVar2);
        if (cVar5 != '\0') {
          *param_5 = lVar4;
        }
      }
    }
  }
  else {
    iVar1 = *(int *)*param_4;
    if ((-1 < iVar1) &&
       ((ulonglong)(longlong)iVar1 <
        (ulonglong)(*(longlong *)(param_1 + 0x310) - *(longlong *)(param_1 + 0x308) >> 3))) {
      *param_5 = *(longlong *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar1 * 8);
      return;
    }
  }
  return;
}

