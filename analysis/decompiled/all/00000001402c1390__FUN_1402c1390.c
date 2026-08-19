// Function: FUN_1402c1390
// Addr: 1402c1390
// Size: 133 bytes


/* WARNING: Possible PIC construction at 0x0001402c148f: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001402c1494) */
/* WARNING: Removing unreachable block (ram,0x0001402c13fd) */

ulonglong FUN_1402c1390(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  char cStack_20;
  
  if (DAT_1404e46ac == 0) {
    if ((param_1 == (ushort *)0x0) || (param_2 == (ushort *)0x0)) {
      uVar3 = FUN_1402c1170();
      return uVar3;
    }
  }
  else {
    if ((param_1 == (ushort *)0x0) || (param_2 == (ushort *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402cb004();
    }
    cStack_20 = '\0';
    if (DAT_1404e46ac == 0) {
      uStack_30 = CONCAT44(PTR_PTR_1404dc7b8._4_4_,PTR_PTR_1404dc7b8._0_4_);
      uStack_28 = CONCAT44(PTR_DAT_1404dc7c0._4_4_,PTR_DAT_1404dc7c0._0_4_);
    }
    else {
      lStack_38 = FUN_1402d9964();
      uStack_30 = *(longlong *)(lStack_38 + 0x90);
      uStack_28 = *(undefined8 *)(lStack_38 + 0x88);
      FUN_1402d9b18(lStack_38,&uStack_30);
      FUN_1402d9b84(lStack_38,&uStack_28);
      if ((*(uint *)(lStack_38 + 0x3a8) & 2) == 0) {
        *(uint *)(lStack_38 + 0x3a8) = *(uint *)(lStack_38 + 0x3a8) | 2;
        cStack_20 = '\x01';
      }
    }
    lVar4 = uStack_30;
    if (*(longlong *)(uStack_30 + 0x138) != 0) {
      do {
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        uVar5 = (uint)uVar2;
        uVar6 = (uint)uVar1;
        if (uVar1 != uVar2) {
          if (uVar1 < 0x100) {
            uVar3 = (ulonglong)uVar1 & 0xff;
            if (((&UNK_14042f0d2)[uVar3 * 2] & 1) != 0) {
              uVar3 = (ulonglong)*(byte *)(uVar3 + *(longlong *)(lVar4 + 0x110));
            }
            uVar1 = (ushort)uVar3;
          }
          else {
            uVar1 = func_0x0001402d5b1c(uVar1,&uStack_30);
            lVar4 = uStack_30;
          }
          uVar5 = (uint)uVar2;
          uVar6 = (uint)uVar1;
          if (uVar1 != uVar2) {
            if (uVar2 < 0x100) {
              uVar3 = (ulonglong)uVar2 & 0xff;
              if (((&UNK_14042f0d2)[uVar3 * 2] & 1) != 0) {
                uVar3 = (ulonglong)*(byte *)(uVar3 + *(longlong *)(lVar4 + 0x110));
              }
              uVar2 = (ushort)uVar3;
            }
            else {
              uVar2 = func_0x0001402d5b1c(uVar2,&uStack_30);
              lVar4 = uStack_30;
            }
            uVar5 = (uint)uVar2;
            uVar6 = (uint)uVar1;
          }
        }
      } while ((uVar6 - uVar5 == 0) && (uVar6 != 0));
      if (cStack_20 != '\0') {
        *(uint *)(lStack_38 + 0x3a8) = *(uint *)(lStack_38 + 0x3a8) & 0xfffffffd;
      }
      return (ulonglong)(uVar6 - uVar5);
    }
  }
  do {
    uVar1 = *param_1;
    uVar5 = (uint)uVar1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar6 = (uint)uVar2;
    if ((uint)uVar1 != (uint)uVar2) {
      uVar5 = uVar1 + 0x20;
      if (0x19 < uVar1 - 0x41) {
        uVar5 = (uint)uVar1;
      }
      uVar6 = uVar2 + 0x20;
      if (0x19 < uVar2 - 0x41) {
        uVar6 = (uint)uVar2;
      }
    }
  } while ((uVar5 - uVar6 == 0) && (uVar5 != 0));
  return (ulonglong)(uVar5 - uVar6);
}

