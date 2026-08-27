// Function: FUN_140347c00
// Addr: 140347c00
// Size: 376 bytes


longlong FUN_140347c00(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x3f0);
  if (lVar2 == 0) {
    if ((*(longlong *)(param_1 + 0x408) != 0) &&
       (((*(uint *)(param_1 + 4) & 0x7fff0000) != 0 || ((*(uint *)(param_1 + 8) & 0x8000) != 0)))) {
      lVar2 = FUN_14034b740();
      *(longlong *)(param_1 + 0x3f0) = lVar2;
      return lVar2;
    }
    if (*(ushort *)(param_1 + 0x1d0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1e8);
      iVar7 = -1;
      iVar6 = -1;
      uVar5 = 0;
      do {
        iVar4 = (int)uVar5;
        if ((*(short *)(lVar2 + 6 + uVar5 * 0x18) == 6) &&
           (*(short *)(lVar2 + 8 + uVar5 * 0x18) != 0)) {
          sVar1 = *(short *)(lVar2 + uVar5 * 0x18);
          if (sVar1 == 3) {
            if ((*(ushort *)(lVar2 + 2 + uVar5 * 0x18) < 2) &&
               ((*(short *)(lVar2 + 4 + uVar5 * 0x18) == 0x409 || (iVar7 == -1)))) {
              iVar7 = iVar4;
            }
          }
          else if (((sVar1 == 1) && (*(short *)(lVar2 + 2 + uVar5 * 0x18) == 0)) &&
                  ((*(short *)(lVar2 + 4 + uVar5 * 0x18) == 0 || (iVar6 == -1)))) {
            iVar6 = iVar4;
          }
        }
        uVar5 = (ulonglong)(iVar4 + 1U);
      } while ((int)(iVar4 + 1U) < (int)(uint)*(ushort *)(param_1 + 0x1d0));
      if ((-1 < iVar7) || (-1 < iVar6)) {
        lVar3 = 0;
        if (iVar7 != -1) {
          lVar3 = FUN_1403493b0(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x200),
                                lVar2 + (longlong)iVar7 * 0x18,&LAB_14034bf30,1);
          if (lVar3 != 0) goto LAB_140347d59;
        }
        if (iVar6 != -1) {
          lVar3 = FUN_1403491b0(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x200),
                                *(longlong *)(param_1 + 0x1e8) + (longlong)iVar6 * 0x18,
                                &LAB_14034bf30,1);
        }
LAB_140347d59:
        *(longlong *)(param_1 + 0x3f0) = lVar3;
        return lVar3;
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}

