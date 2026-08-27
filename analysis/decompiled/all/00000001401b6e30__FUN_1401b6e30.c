// Function: FUN_1401b6e30
// Addr: 1401b6e30
// Size: 110 bytes


ulonglong FUN_1401b6e30(longlong param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (*param_2 != 0.0) {
    fVar1 = *param_2;
  }
  return *(ulonglong *)(param_1 + 0x30) &
         (((((ulonglong)((uint)fVar1 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
           (ulonglong)((uint)fVar1 >> 8 & 0xff)) * 0x100000001b3 ^
          (ulonglong)((uint)fVar1 >> 0x10 & 0xff)) * 0x100000001b3 ^
         (ulonglong)((uint)fVar1 >> 0x18)) * 0x100000001b3;
}

