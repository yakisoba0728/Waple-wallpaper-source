// Function: FUN_14011d8a0
// Addr: 14011d8a0
// Size: 299 bytes


undefined2 * FUN_14011d8a0(undefined2 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong local_50 [2];
  longlong local_40;
  ulonglong local_38;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffeff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffeff;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_14003f880(local_50,param_2);
  if (local_40 != 0) {
    cVar2 = func_0x000140017910(local_50,param_1 + 4,0);
    if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_140086eb0(param_1 + 4,&DAT_140473c38,&DAT_140473c3c);
    }
  }
  if (0xf < local_38) {
    uVar5 = local_38 + 1;
    lVar4 = local_50[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_50[0] + -8);
      if (0x1f < (local_50[0] - lVar4) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar3 = (undefined2 *)(*pcVar1)();
        return puVar3;
      }
      uVar5 = local_38 + 0x28;
    }
    puVar3 = (undefined2 *)func_0x00014028b040(lVar4,uVar5);
    return puVar3;
  }
  return param_1;
}

