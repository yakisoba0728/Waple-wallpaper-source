// Function: FUN_1403f18e0
// Addr: 1403f18e0
// Size: 202 bytes


void FUN_1403f18e0(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  uint param_5,undefined1 param_6)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar2 = *(longlong *)(param_3 + 0x70);
  uVar4 = (uint)param_4;
  do {
    if (param_5 <= uVar4) {
      return;
    }
    if (2 < (*(ushort *)(lVar2 + 0x10 + (param_4 & 0xffffffff) * 0x14) & 0x1f) - 10) {
      uVar4 = (uint)param_4;
      do {
        uVar3 = uVar4;
        uVar4 = uVar3 + 1;
        if (param_5 <= uVar4) break;
        uVar1 = *(ushort *)(lVar2 + 0x10 + (ulonglong)uVar4 * 0x14);
      } while (((uVar1 & 0x40) != 0) ||
              ((((uVar1 & 0x20) != 0 &&
                ((*(byte *)(lVar2 + 0xc + (ulonglong)uVar4 * 0x14) & 0x10) == 0)) ||
               ((uVar1 & 0x1f) - 10 < 3))));
      FUN_1403f13e0(param_1,param_2,param_3,param_4,uVar4,param_6);
      param_4 = (ulonglong)uVar3;
    }
    uVar4 = (int)param_4 + 1;
    param_4 = (ulonglong)uVar4;
  } while( true );
}

