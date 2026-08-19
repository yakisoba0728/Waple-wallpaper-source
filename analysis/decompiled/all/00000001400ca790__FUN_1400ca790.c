// Function: FUN_1400ca790
// Addr: 1400ca790
// Size: 183 bytes


longlong * FUN_1400ca790(longlong param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_3;
  uVar4 = *(ulonglong *)(param_1 + 0x30) &
          (((((ulonglong)(uVar1 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)(uVar1 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar1 >> 0x10 & 0xff)) *
           0x100000001b3 ^ (ulonglong)(uVar1 >> 0x18)) * 0x100000001b3;
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar4 * 0x10);
  if (lVar3 != lVar2) {
    if (uVar1 == *(uint *)(lVar3 + 0x10)) goto LAB_1400ca834;
    while (lVar3 != *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar4 * 0x10)) {
      lVar3 = *(longlong *)(lVar3 + 8);
      if (uVar1 == *(uint *)(lVar3 + 0x10)) {
        if (lVar3 == 0) {
          lVar3 = lVar2;
        }
        *param_2 = lVar3;
        return param_2;
      }
    }
  }
  lVar3 = 0;
LAB_1400ca834:
  if (lVar3 == 0) {
    lVar3 = lVar2;
  }
  *param_2 = lVar3;
  return param_2;
}

