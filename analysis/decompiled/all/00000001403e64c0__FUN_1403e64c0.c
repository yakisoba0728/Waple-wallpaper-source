// Function: FUN_1403e64c0
// Addr: 1403e64c0
// Size: 223 bytes


ulonglong FUN_1403e64c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (*(uint *)(param_1 + 0x24) != 0) {
    uVar5 = 0;
    uVar6 = 0;
    do {
      if (*(uint *)(param_2 + 0x24) <= (uint)uVar6) break;
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar5 * 8);
      in_RAX = *(ulonglong *)(param_2 + 0x18);
      uVar2 = *(uint *)(in_RAX + uVar6 * 8);
      if (uVar3 == uVar2) {
        lVar1 = *(longlong *)(param_2 + 0x28) + (ulonglong)*(uint *)(in_RAX + uVar6 * 8 + 4) * 0x48;
        uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + uVar5 * 8 + 4);
        in_RAX = *(ulonglong *)(param_1 + 0x28);
        if ((((((*(ulonglong *)(lVar1 + 8) & *(ulonglong *)(in_RAX + 8 + uVar4 * 0x48)) != 0) ||
              ((*(ulonglong *)(lVar1 + 0x10) & *(ulonglong *)(in_RAX + 0x10 + uVar4 * 0x48)) != 0))
             || ((*(ulonglong *)(lVar1 + 0x18) & *(ulonglong *)(in_RAX + 0x18 + uVar4 * 0x48)) != 0)
             ) || (((*(ulonglong *)(lVar1 + 0x20) & *(ulonglong *)(in_RAX + 0x20 + uVar4 * 0x48)) !=
                    0 || ((*(ulonglong *)(lVar1 + 0x28) &
                          *(ulonglong *)(in_RAX + 0x28 + uVar4 * 0x48)) != 0)))) ||
           (((*(ulonglong *)(lVar1 + 0x30) & *(ulonglong *)(in_RAX + 0x30 + uVar4 * 0x48)) != 0 ||
            (((*(ulonglong *)(lVar1 + 0x38) & *(ulonglong *)(in_RAX + 0x38 + uVar4 * 0x48)) != 0 ||
             ((*(ulonglong *)(lVar1 + 0x40) & *(ulonglong *)(in_RAX + 0x40 + uVar4 * 0x48)) != 0))))
           )) {
          return CONCAT71((int7)(in_RAX >> 8),1);
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
LAB_1403e657e:
        uVar6 = (ulonglong)((uint)uVar6 + 1);
      }
      else {
        if (uVar2 <= uVar3) goto LAB_1403e657e;
        uVar5 = (ulonglong)((int)uVar5 + 1);
      }
    } while ((uint)uVar5 < *(uint *)(param_1 + 0x24));
  }
  return in_RAX & 0xffffffffffffff00;
}

