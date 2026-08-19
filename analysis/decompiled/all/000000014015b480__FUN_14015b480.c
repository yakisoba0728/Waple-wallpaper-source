// Function: FUN_14015b480
// Addr: 14015b480
// Size: 211 bytes


longlong FUN_14015b480(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 != param_3) {
    uVar2 = (((((ulonglong)*(byte *)(param_2 + 0x10) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)*(byte *)(param_2 + 0x11)) * 0x100000001b3 ^
             (ulonglong)*(byte *)(param_2 + 0x12)) * 0x100000001b3 ^
            (ulonglong)*(byte *)(param_2 + 0x13)) * 0x100000001b3;
    lVar1 = func_0x00014028b040(param_2,0x20,uVar2,0x100000001b3,*(undefined8 *)(param_2 + 8),
                                *(longlong *)(param_1 + 0x18) + 8 +
                                (*(ulonglong *)(param_1 + 0x30) & uVar2) * 0x10);
    return lVar1;
  }
  return param_3;
}

