// Function: FUN_140032640
// Addr: 140032640
// Size: 4 bytes


longlong FUN_140032640(undefined8 param_1,byte *param_2)

{
  return ((((ulonglong)param_2[1] ^ ((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3) *
           0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^ (ulonglong)param_2[3]) *
         0x100000001b3;
}

