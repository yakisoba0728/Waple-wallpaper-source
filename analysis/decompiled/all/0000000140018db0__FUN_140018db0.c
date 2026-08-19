// Function: FUN_140018db0
// Addr: 140018db0
// Size: 164 bytes


undefined8 * FUN_140018db0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 ****ppppuVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 ***local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  ulonglong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  ulonglong uStack_10;
  
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  local_38 = 0;
  local_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  local_30 = 0;
  uVar3 = FUN_1402d6b70(param_1);
  FUN_140016240(&local_48,param_1,uVar3);
  if (local_38 != 0) {
    ppppuVar5 = &local_48;
    if (7 < local_30) {
      ppppuVar5 = (undefined8 ****)local_48;
    }
    iVar2 = (*DAT_140426608)(0xfde9,0,ppppuVar5,local_38,0,0,0,0);
    if (0 < iVar2) {
      FUN_140016a10(&local_28,(longlong)iVar2,0);
      puVar6 = &local_28;
      if (0xf < uStack_10) {
        puVar6 = (undefined4 *)CONCAT44(uStack_24,local_28);
      }
      ppppuVar5 = &local_48;
      if (7 < local_30) {
        ppppuVar5 = (undefined8 ****)local_48;
      }
      (*DAT_140426608)(0xfde9,0,ppppuVar5,local_38 & 0xffffffff,puVar6,iVar2,0,0);
      *(undefined4 *)param_2 = local_28;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_24;
      *(undefined4 *)(param_2 + 1) = uStack_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_1c;
      param_2[2] = uStack_18;
      param_2[3] = uStack_10;
      goto code_r0x000140018ec3;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
code_r0x000140018ec3:
  if (7 < local_30) {
    uVar7 = local_30 * 2 + 2;
    ppppuVar5 = (undefined8 ****)local_48;
    if (0xfff < uVar7) {
      ppppuVar5 = (undefined8 ****)local_48[-1];
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)ppppuVar5))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar4 = (undefined8 *)(*pcVar1)();
        return puVar4;
      }
      uVar7 = local_30 * 2 + 0x29;
    }
    func_0x00014028b040(ppppuVar5,uVar7);
  }
  return param_2;
}

