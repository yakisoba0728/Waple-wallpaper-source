// Function: FUN_14000dcf0
// Addr: 14000dcf0
// Size: 32 bytes


void FUN_14000dcf0(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_18 [16];
  
  puVar3 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar3 = (undefined8 *)*param_2;
  }
  uVar2 = 0;
  uVar4 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar3 + uVar2);
      uVar2 = uVar2 + 1;
      uVar4 = (uVar4 ^ *pbVar1) * 0x100000001b3;
    } while (uVar2 < (ulonglong)param_2[2]);
  }
  func_0x000140011170(&DAT_1404e8bf0,auStack_18,param_2,uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_140017310(param_2);
}

