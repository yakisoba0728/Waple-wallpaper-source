// Function: FUN_14015ad10
// Addr: 14015ad10
// Size: 203 bytes


longlong * FUN_14015ad10(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 local_38 [8];
  longlong local_30;
  
  puVar5 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar5 = (undefined8 *)*param_3;
  }
  uVar3 = 0;
  uVar4 = 0xcbf29ce484222325;
  if (param_3[2] != 0) {
    do {
      pbVar1 = (byte *)(uVar3 + (longlong)puVar5);
      uVar3 = uVar3 + 1;
      uVar4 = (uVar4 ^ *pbVar1) * 0x100000001b3;
    } while (uVar3 < (ulonglong)param_3[2]);
  }
  func_0x000140011170(param_1,local_38,param_3,uVar4);
  if (local_30 == 0) {
    if (*(longlong *)(param_1 + 0x10) == 0x1e1e1e1e1e1e1e1) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c3b0("unordered_map/set too long");
    }
    plVar2 = (longlong *)func_0x00014028aff0(0x88);
    return plVar2;
  }
  *param_2 = local_30;
  *(undefined1 *)(param_2 + 1) = 0;
  return param_2;
}

