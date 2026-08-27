// Function: FUN_140170470
// Addr: 140170470
// Size: 159 bytes


void FUN_140170470(longlong param_1,int param_2,undefined8 param_3,longlong param_4,int param_5,
                  uint param_6,int param_7,int param_8)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_6 != 0) {
    do {
      FUN_1404210f0((ulonglong)(uVar1 * param_5 * 4) + param_4,
                    (ulonglong)((uVar1 + param_8) * param_2 * 4) +
                    (ulonglong)(uint)(param_7 * 4) + param_1,param_5 * 4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_6);
  }
  return;
}

