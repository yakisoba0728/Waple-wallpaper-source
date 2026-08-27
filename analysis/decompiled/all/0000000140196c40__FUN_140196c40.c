// Function: FUN_140196c40
// Addr: 140196c40
// Size: 158 bytes


int FUN_140196c40(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x108);
  uVar6 = *(longlong *)(param_1 + 0x110) - lVar1 >> 3;
  if (uVar6 != 0) {
    uVar5 = 0;
    do {
      iVar3 = (int)uVar5 + 1;
      if (*(longlong *)(lVar1 + (longlong)(int)uVar5 * 8) == param_2) {
        if (uVar6 <= (ulonglong)(longlong)iVar3) {
          return 0x7fffffff;
        }
        iVar4 = 0;
        do {
          lVar2 = *(longlong *)(lVar1 + (longlong)iVar3 * 8);
          if (lVar2 == param_3) {
            return iVar4;
          }
          lVar2 = *(longlong *)(lVar2 + 0x180);
          if (lVar2 == param_2) {
            iVar4 = iVar4 + 1;
          }
          else if (lVar2 == 0) {
            return 0x7fffffff;
          }
          iVar3 = iVar3 + 1;
        } while ((ulonglong)(longlong)iVar3 < uVar6);
        return 0x7fffffff;
      }
      uVar5 = (ulonglong)iVar3;
    } while (uVar5 < uVar6);
  }
  return 0x7fffffff;
}

