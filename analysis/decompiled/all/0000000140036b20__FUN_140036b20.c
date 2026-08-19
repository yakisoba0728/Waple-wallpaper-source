// Function: FUN_140036b20
// Addr: 140036b20
// Size: 187 bytes


void FUN_140036b20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 local_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  (*DAT_140426838)(DAT_1404e5350,0x75);
  iVar1 = *(int *)(param_3 + 0x40);
  uVar3 = func_0x000140053f10(local_28,iVar1);
  FUN_14002fdf0(local_48,&DAT_140476cd8,uVar3);
  if (local_10 < 0x10) {
    if (-1 < iVar1) {
      func_0x000140087560(&DAT_1404df6b8,"wpropertiesvd","");
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(&DAT_1404df6b8,"wpropertiesvd","");
  }
  uVar5 = local_10 + 1;
  lVar4 = local_28[0];
  if (0xfff < uVar5) {
    lVar4 = *(longlong *)(local_28[0] + -8);
    if (0x1f < (local_28[0] - lVar4) - 8U) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = local_10 + 0x28;
  }
  func_0x00014028b040(lVar4,uVar5);
  return;
}

