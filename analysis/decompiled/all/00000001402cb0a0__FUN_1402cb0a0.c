// Function: FUN_1402cb0a0
// Addr: 1402cb0a0
// Size: 64 bytes


/* WARNING: Removing unreachable block (ram,0x0001402cb129) */

ulonglong FUN_1402cb0a0(ushort *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  char cStack_20;
  
  if (DAT_1404e46ac != 0) {
    if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
      if (param_3 == 0) {
        return 0;
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
      lVar5 = uStack_30;
      if (*(longlong *)(uStack_30 + 0x138) == 0) {
        uVar3 = FUN_1402cb030(param_1,param_2,param_3);
      }
      else {
        do {
          uVar1 = *param_1;
          param_1 = param_1 + 1;
          if (uVar1 < 0x100) {
            uVar4 = (ulonglong)(byte)uVar1;
            if (((&UNK_14042f0d2)[uVar4 * 2] & 1) != 0) {
              uVar4 = (ulonglong)*(byte *)(uVar4 + *(longlong *)(lVar5 + 0x110));
            }
            uVar1 = (ushort)uVar4;
          }
          else {
            uVar1 = func_0x0001402d5b1c(uVar1,&uStack_30);
            lVar5 = uStack_30;
          }
          uVar2 = *param_2;
          param_2 = param_2 + 1;
          if (uVar2 < 0x100) {
            uVar4 = (ulonglong)(byte)uVar2;
            if (((&UNK_14042f0d2)[uVar4 * 2] & 1) != 0) {
              uVar4 = (ulonglong)*(byte *)(uVar4 + *(longlong *)(lVar5 + 0x110));
            }
            uVar2 = (ushort)uVar4;
          }
          else {
            uVar2 = func_0x0001402d5b1c(uVar2,&uStack_30);
            lVar5 = uStack_30;
          }
          uVar3 = (uint)uVar1 - (uint)uVar2;
        } while (((uVar3 == 0) && (uVar1 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
      }
      if (cStack_20 != '\0') {
        *(uint *)(lStack_38 + 0x3a8) = *(uint *)(lStack_38 + 0x3a8) & 0xfffffffd;
      }
      return (ulonglong)uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    if (param_3 == 0) {
      return 0;
    }
    do {
      uVar1 = *param_1;
      uVar3 = (uint)uVar1;
      param_1 = param_1 + 1;
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar6 = (uint)uVar2;
      if ((uint)uVar1 != (uint)uVar2) {
        uVar3 = uVar1 + 0x20;
        if (0x19 < uVar1 - 0x41) {
          uVar3 = (uint)uVar1;
        }
        uVar6 = uVar2 + 0x20;
        if (0x19 < uVar2 - 0x41) {
          uVar6 = (uint)uVar2;
        }
      }
    } while (((uVar3 - uVar6 == 0) && (uVar3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
    return (ulonglong)(uVar3 - uVar6);
  }
  uVar4 = FUN_1402c1170();
  return uVar4;
}

