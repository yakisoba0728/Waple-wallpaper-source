// Function: FUN_140210860
// Addr: 140210860
// Size: 302 bytes


void FUN_140210860(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  int *param_5)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  
  *param_5 = -1;
  lVar2 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
    if ((*param_3 & 8) == 0) {
      if (((*param_3 >> 9 & 1) != 0) && (pcVar3 = (char *)*param_4, *pcVar3 != '\0')) {
        lVar4 = *(longlong *)(lVar2 + 0x38);
        uVar7 = (*(longlong *)(lVar2 + 0x40) - lVar4 >> 4) * -0x1111111111111111;
        if (uVar7 != 0) {
          iVar6 = 0;
          do {
            cVar5 = FUN_14000d010((longlong)iVar6 * 0xf0 + lVar4,pcVar3);
            if ((cVar5 != '\0') &&
               (iVar1 = *(int *)((longlong)iVar6 * 0xf0 + 0x60 + lVar4), iVar1 != -1)) {
              *param_5 = iVar1;
              return;
            }
            iVar6 = iVar6 + 1;
          } while ((ulonglong)(longlong)iVar6 < uVar7);
        }
      }
    }
    else {
      iVar6 = *(int *)*param_4;
      if (((-1 < iVar6) &&
          ((ulonglong)(longlong)iVar6 <
           (ulonglong)
           ((*(longlong *)(lVar2 + 0x40) - *(longlong *)(lVar2 + 0x38) >> 4) * -0x1111111111111111))
          ) && (iVar6 = *(int *)((longlong)iVar6 * 0xf0 + 0x60 + *(longlong *)(lVar2 + 0x38)),
               iVar6 != -1)) {
        *param_5 = iVar6;
        return;
      }
    }
  }
  return;
}

