// Function: FUN_14017ada0
// Addr: 14017ada0
// Size: 116 bytes


ulonglong FUN_14017ada0(longlong param_1,byte *param_2)

{
  return *(ulonglong *)(param_1 + 0x30) &
         (((((((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_2[1])
               * 0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^ (ulonglong)param_2[3]) *
             0x100000001b3 ^ (ulonglong)param_2[4]) * 0x100000001b3 ^ (ulonglong)param_2[5]) *
           0x100000001b3 ^ (ulonglong)param_2[6]) * 0x100000001b3 ^ (ulonglong)param_2[7]) *
         0x100000001b3;
}

