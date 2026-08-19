// Function: FUN_140160e10
// Addr: 140160e10
// Size: 271 bytes


longlong FUN_140160e10(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_2 != param_3) {
    lVar1 = func_0x00014028b040(param_2,0x18,(ulonglong)*(byte *)(param_2 + 0x14),
                                (ulonglong)*(byte *)(param_2 + 0x15),*(undefined8 *)(param_2 + 8),
                                *(longlong *)(param_1 + 0x18) + 8 +
                                (*(ulonglong *)(param_1 + 0x30) &
                                (((((((((ulonglong)*(byte *)(param_2 + 0x10) ^ 0xcbf29ce484222325) *
                                       0x100000001b3 ^ (ulonglong)*(byte *)(param_2 + 0x11)) *
                                      0x100000001b3 ^ (ulonglong)*(byte *)(param_2 + 0x12)) *
                                     0x100000001b3 ^ (ulonglong)*(byte *)(param_2 + 0x13)) *
                                    0x100000001b3 ^ (ulonglong)*(byte *)(param_2 + 0x14)) *
                                   0x100000001b3 ^ (ulonglong)*(byte *)(param_2 + 0x15)) *
                                  0x100000001b3 ^ (ulonglong)*(byte *)(param_2 + 0x16)) *
                                 0x100000001b3 ^ (ulonglong)*(byte *)(param_2 + 0x17)) *
                                0x100000001b3) * 0x10);
    return lVar1;
  }
  return param_3;
}

