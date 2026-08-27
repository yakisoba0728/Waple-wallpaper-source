// Function: FUN_140361160
// Addr: 140361160
// Size: 415 bytes


longlong FUN_140361160(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  lVar4 = _calloc_base(1,0x30);
  if (lVar4 == 0) {
    return 0;
  }
  uVar5 = (uint)(*(int *)(param_1 + 4) == 0x41726162) | *(uint *)(lVar4 + 0x28) & 0xfffffffe;
  iVar8 = 0;
  *(uint *)(lVar4 + 0x28) = uVar5;
  iVar6 = *(int *)(param_1 + 0x3c) + -1;
  if (-1 < iVar6) {
    do {
      uVar1 = (uint)(iVar6 + iVar8) >> 1;
      uVar5 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar1 * 0x24);
      if (uVar5 < 0x73746369) {
        if (0x73746367 < uVar5) {
          uVar5 = *(uint *)(lVar4 + 0x28);
          iVar6 = *(int *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar1 * 0x24 + 0x1c);
          goto LAB_1403611f3;
        }
        iVar8 = uVar1 + 1;
      }
      else {
        iVar6 = uVar1 - 1;
      }
    } while (iVar8 <= iVar6);
    uVar5 = *(uint *)(lVar4 + 0x28);
  }
  iVar6 = 0;
LAB_1403611f3:
  *(uint *)(lVar4 + 0x28) = -(uint)(iVar6 != 0) & 2 | uVar5 & 0xfffffffd;
  lVar7 = 0;
  do {
    iVar8 = 0;
    iVar6 = *(int *)(param_1 + 0x3c) + -1;
    uVar5 = *(uint *)("losianif2nif3nifidem2demtini" + lVar7 * 4);
    if (-1 < iVar6) {
      do {
        uVar2 = (uint)(iVar6 + iVar8) >> 1;
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar2 * 0x24);
        if (uVar5 < uVar1) {
          iVar6 = uVar2 - 1;
        }
        else {
          if (uVar5 <= uVar1) {
            uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar2 * 0x24 + 0x1c);
            goto LAB_140361261;
          }
          iVar8 = uVar2 + 1;
        }
      } while (iVar8 <= iVar6);
    }
    uVar3 = 0;
LAB_140361261:
    *(undefined4 *)(lVar4 + lVar7 * 4) = uVar3;
    if ((*(uint *)(lVar4 + 0x28) & 1) == 0) {
LAB_1403612ba:
      uVar5 = 0;
    }
    else {
      if (1 < (byte)("losianif2nif3nifidem2demtini"[lVar7 * 4] - 0x32U)) {
        iVar8 = 0;
        iVar6 = *(int *)(param_1 + 0x3c) + -1;
        if (-1 < iVar6) {
          do {
            uVar2 = (uint)(iVar6 + iVar8) >> 1;
            uVar1 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar2 * 0x24);
            if (uVar5 < uVar1) {
              iVar6 = uVar2 - 1;
            }
            else {
              if (uVar5 <= uVar1) {
                if ((*(byte *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar2 * 0x24 + 0x20) & 1)
                    != 0) goto LAB_1403612f8;
                break;
              }
              iVar8 = uVar2 + 1;
            }
          } while (iVar8 <= iVar6);
        }
        goto LAB_1403612ba;
      }
LAB_1403612f8:
      uVar5 = 1;
    }
    lVar7 = lVar7 + 1;
    *(uint *)(lVar4 + 0x28) = *(uint *)(lVar4 + 0x28) & 0xfffffffe | uVar5;
    if (lVar7 == 7) {
      return lVar4;
    }
  } while( true );
}

