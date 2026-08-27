// Function: FUN_14020e910
// Addr: 14020e910
// Size: 221 bytes


void FUN_14020e910(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
    if ((*param_3 & 8) == 0) {
      if (((*param_3 >> 9 & 1) != 0) && (pcVar3 = (char *)*param_4, *pcVar3 != '\0')) {
        plVar4 = *(longlong **)(lVar2 + 0x3d8);
        for (plVar6 = *(longlong **)(lVar2 + 0x3d0); plVar6 != plVar4; plVar6 = plVar6 + 1) {
          lVar2 = *plVar6;
          cVar5 = FUN_14000d010(lVar2 + 0xd8,pcVar3);
          if (cVar5 != '\0') {
            *param_5 = lVar2;
          }
        }
      }
    }
    else {
      iVar1 = *(int *)*param_4;
      if ((-1 < iVar1) &&
         ((ulonglong)(longlong)iVar1 <
          (ulonglong)(*(longlong *)(lVar2 + 0x3d8) - *(longlong *)(lVar2 + 0x3d0) >> 3))) {
        *param_5 = *(longlong *)(*(longlong *)(lVar2 + 0x3d0) + (longlong)iVar1 * 8);
        return;
      }
    }
  }
  return;
}

