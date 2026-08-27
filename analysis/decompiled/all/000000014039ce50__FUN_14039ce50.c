// Function: FUN_14039ce50
// Addr: 14039ce50
// Size: 113 bytes


void FUN_14039ce50(longlong param_1,int *param_2,undefined8 param_3,int param_4)

{
  undefined1 uVar1;
  
  thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x80));
  thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x88));
  *(int **)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x88) = param_3;
  *(int *)(param_1 + 0x7c) = param_4;
  do {
    if (param_4 == 0) {
      uVar1 = 0;
LAB_14039cea7:
      *(undefined1 *)(param_1 + 0x78) = uVar1;
      FUN_1403b2f70(param_1);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
      return;
    }
    if (*param_2 != 0) {
      uVar1 = 1;
      goto LAB_14039cea7;
    }
    param_4 = param_4 + -1;
    param_2 = param_2 + 1;
  } while( true );
}

