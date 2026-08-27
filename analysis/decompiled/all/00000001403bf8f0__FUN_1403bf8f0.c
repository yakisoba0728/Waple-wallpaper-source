// Function: FUN_1403bf8f0
// Addr: 1403bf8f0
// Size: 241 bytes


undefined1 FUN_1403bf8f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_3 + 0x60) != 0) {
    cVar2 = FUN_1403ec530(param_3,param_2,"start reordering indic final");
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(param_3 + 0x60);
      if (uVar1 != 0) {
        uVar6 = 0;
        uVar4 = 0;
        do {
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          if (uVar1 <= uVar3) break;
        } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf) ==
                 *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar4 * 0x14));
        if (uVar1 != 0) {
          do {
            uVar5 = uVar4;
            FUN_1403bf9f0(param_1,param_3,uVar6,uVar5);
            uVar4 = uVar5;
            do {
              uVar3 = (int)uVar4 + 1;
              uVar4 = (ulonglong)uVar3;
              if (*(uint *)(param_3 + 0x60) <= uVar3) break;
            } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar5 * 0x14) ==
                     *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar4 * 0x14));
            uVar6 = uVar5;
          } while ((uint)uVar5 < uVar1);
        }
      }
      FUN_1403ec530(param_3,param_2,"end reordering indic final");
    }
    *(byte *)(param_3 + 0xd0) = *(byte *)(param_3 + 0xd0) & 0x3f;
  }
  return 0;
}

