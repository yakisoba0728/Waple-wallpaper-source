// Function: FUN_1401b56a0
// Addr: 1401b56a0
// Size: 39 bytes


longlong FUN_1401b56a0(undefined8 param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (*param_2 != 0.0) {
    fVar1 = *param_2;
  }
  return ((((ulonglong)((uint)fVar1 >> 8 & 0xff) ^
           ((ulonglong)((uint)fVar1 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
          (ulonglong)((uint)fVar1 >> 0x10 & 0xff)) * 0x100000001b3 ^
         (ulonglong)((uint)fVar1 >> 0x18)) * 0x100000001b3;
}

