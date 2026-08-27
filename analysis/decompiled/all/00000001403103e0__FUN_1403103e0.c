// Function: FUN_1403103e0
// Addr: 1403103e0
// Size: 226 bytes


undefined4
FUN_1403103e0(uint *param_1,ushort param_2,longlong param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  uVar5 = 0x10000;
  if (*param_1 == 0) {
    return 0x10000;
  }
  do {
    iVar6 = *(int *)(param_3 + uVar8 * 4);
    lVar1 = uVar8 * 4;
    if (iVar6 != 0) {
      iVar4 = *(int *)(lVar1 + *(longlong *)(param_1 + 4));
      if (iVar4 == 0) {
        return 0;
      }
      if (iVar6 != iVar4) {
        if ((param_2 >> 0xe & 1) == 0) {
          if (iVar4 < iVar6) {
            if (iVar4 < 1) {
              return 0;
            }
          }
          else {
            if (iVar4 <= iVar6) {
              return 0;
            }
            if (-1 < iVar4) {
              return 0;
            }
          }
        }
        else {
          iVar2 = *(int *)(param_4 + lVar1);
          if (iVar4 <= iVar2) {
            return 0;
          }
          iVar3 = *(int *)(param_5 + lVar1);
          if (iVar3 <= iVar4) {
            return 0;
          }
          if (iVar4 < iVar6) {
            iVar6 = iVar6 - iVar2;
            iVar4 = iVar4 - iVar2;
          }
          else {
            iVar6 = iVar3 - iVar6;
            iVar4 = iVar3 - iVar4;
          }
        }
        uVar5 = FUN_1402f20b0(uVar5,iVar4,iVar6);
      }
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    if (*param_1 <= uVar7) {
      return uVar5;
    }
  } while( true );
}

