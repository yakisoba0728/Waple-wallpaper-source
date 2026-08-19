// Function: FUN_14019ed60
// Addr: 14019ed60
// Size: 205 bytes


longlong * FUN_14019ed60(longlong param_1,longlong *param_2,byte *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar3 = *(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar3 * 0x10);
  if (lVar2 != lVar1) {
    if (*(longlong *)param_3 == *(longlong *)(lVar2 + 0x10)) goto LAB_14019ee1f;
    while (lVar2 != *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar3 * 0x10)) {
      lVar2 = *(longlong *)(lVar2 + 8);
      if (*(longlong *)param_3 == *(longlong *)(lVar2 + 0x10)) {
        if (lVar2 == 0) {
          lVar2 = lVar1;
        }
        *param_2 = lVar2;
        return param_2;
      }
    }
  }
  lVar2 = 0;
LAB_14019ee1f:
  if (lVar2 == 0) {
    lVar2 = lVar1;
  }
  *param_2 = lVar2;
  return param_2;
}

