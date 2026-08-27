// Function: FUN_140217b50
// Addr: 140217b50
// Size: 367 bytes


longlong FUN_140217b50(longlong param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  do {
    if (param_1 == param_2) {
      return param_3;
    }
    *(undefined4 *)(param_3 + -0x40) = *(undefined4 *)(param_2 + -0x40);
    *(undefined4 *)(param_3 + -0x3c) = *(undefined4 *)(param_2 + -0x3c);
    *(undefined4 *)(param_3 + -0x38) = *(undefined4 *)(param_2 + -0x38);
    *(undefined4 *)(param_3 + -0x34) = *(undefined4 *)(param_2 + -0x34);
    if (param_3 != param_2) {
      lVar2 = *(longlong *)(param_3 + -0x30);
      if (lVar2 != 0) {
        uVar3 = (*(longlong *)(param_3 + -0x20) - lVar2 >> 2) * 4;
        if (0xfff < uVar3) {
          if (0x1f < (lVar2 - *(longlong *)(lVar2 + -8)) - 8U) goto LAB_140217cb7;
          uVar3 = uVar3 + 0x27;
          lVar2 = *(longlong *)(lVar2 + -8);
        }
        thunk_FUN_14028af80(lVar2,uVar3);
        *(undefined8 *)(param_3 + -0x30) = 0;
        *(undefined8 *)(param_3 + -0x28) = 0;
        *(undefined8 *)(param_3 + -0x20) = 0;
      }
      *(undefined8 *)(param_3 + -0x30) = *(undefined8 *)(param_2 + -0x30);
      *(undefined8 *)(param_3 + -0x28) = *(undefined8 *)(param_2 + -0x28);
      *(undefined8 *)(param_3 + -0x20) = *(undefined8 *)(param_2 + -0x20);
      *(undefined8 *)(param_2 + -0x30) = 0;
      *(undefined8 *)(param_2 + -0x28) = 0;
      *(undefined8 *)(param_2 + -0x20) = 0;
      lVar2 = *(longlong *)(param_3 + -0x18);
      if (lVar2 != 0) {
        uVar3 = (*(longlong *)(param_3 + -8) - lVar2 >> 2) * 4;
        if (0xfff < uVar3) {
          if (0x1f < (lVar2 - *(longlong *)(lVar2 + -8)) - 8U) {
LAB_140217cb7:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            lVar2 = (*pcVar1)();
            return lVar2;
          }
          uVar3 = uVar3 + 0x27;
          lVar2 = *(longlong *)(lVar2 + -8);
        }
        thunk_FUN_14028af80(lVar2,uVar3);
        *(undefined8 *)(param_3 + -0x18) = 0;
        *(undefined8 *)(param_3 + -0x10) = 0;
        *(undefined8 *)(param_3 + -8) = 0;
      }
      *(undefined8 *)(param_3 + -0x18) = *(undefined8 *)(param_2 + -0x18);
      *(undefined8 *)(param_3 + -0x10) = *(undefined8 *)(param_2 + -0x10);
      *(undefined8 *)(param_3 + -8) = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_2 + -0x18) = 0;
      *(undefined8 *)(param_2 + -0x10) = 0;
      *(undefined8 *)(param_2 + -8) = 0;
    }
    param_3 = param_3 + -0x40;
    param_2 = param_2 + -0x40;
  } while( true );
}

