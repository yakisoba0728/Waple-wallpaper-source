// Function: FUN_1401a37d0
// Addr: 1401a37d0
// Size: 276 bytes


ulonglong FUN_1401a37d0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  *param_1 = *param_1 + 1;
  uVar4 = *param_1;
  while( true ) {
    uVar3 = param_1[7] &
            ((((((((uVar4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)param_1 + 1)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_1 + 4)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_1 + 5)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_1 + 6)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_1 + 7)) * 0x100000001b3;
    uVar1 = param_1[2];
    uVar2 = *(ulonglong *)(param_1[4] + 8 + uVar3 * 0x10);
    if (uVar2 == uVar1) {
      return uVar4;
    }
    if (uVar4 != *(ulonglong *)(uVar2 + 0x10)) {
      do {
        if (uVar2 == *(ulonglong *)(param_1[4] + uVar3 * 0x10)) {
          return *param_1;
        }
        uVar2 = *(ulonglong *)(uVar2 + 8);
      } while (uVar4 != *(ulonglong *)(uVar2 + 0x10));
      uVar4 = *param_1;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1;
    }
    if (uVar2 == uVar1) break;
    *param_1 = uVar4 + 1;
    bVar5 = uVar4 == 0xfffffffffffffffe;
    uVar4 = uVar4 + 1;
    if (bVar5) {
      FUN_140077f50(param_1 + 1);
      *param_1 = 0;
      uVar4 = 0;
    }
  }
  return uVar4;
}

