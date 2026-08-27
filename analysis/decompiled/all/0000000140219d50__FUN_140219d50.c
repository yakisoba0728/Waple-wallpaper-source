// Function: FUN_140219d50
// Addr: 140219d50
// Size: 342 bytes


undefined4 * FUN_140219d50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  do {
    if (param_1 == param_2) {
      return param_3;
    }
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    if (param_3 != param_1) {
      lVar2 = *(longlong *)(param_3 + 4);
      if (lVar2 != 0) {
        uVar4 = (*(longlong *)(param_3 + 8) - lVar2 >> 2) * 4;
        if (0xfff < uVar4) {
          if (0x1f < (lVar2 - *(longlong *)(lVar2 + -8)) - 8U) goto LAB_140219e9e;
          uVar4 = uVar4 + 0x27;
          lVar2 = *(longlong *)(lVar2 + -8);
        }
        thunk_FUN_14028af80(lVar2,uVar4);
        *(undefined8 *)(param_3 + 4) = 0;
        *(undefined8 *)(param_3 + 6) = 0;
        *(undefined8 *)(param_3 + 8) = 0;
      }
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_3 + 6) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      lVar2 = *(longlong *)(param_3 + 10);
      if (lVar2 != 0) {
        uVar4 = (*(longlong *)(param_3 + 0xe) - lVar2 >> 2) * 4;
        if (0xfff < uVar4) {
          if (0x1f < (lVar2 - *(longlong *)(lVar2 + -8)) - 8U) {
LAB_140219e9e:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            puVar3 = (undefined4 *)(*pcVar1)();
            return puVar3;
          }
          uVar4 = uVar4 + 0x27;
          lVar2 = *(longlong *)(lVar2 + -8);
        }
        thunk_FUN_14028af80(lVar2,uVar4);
        *(undefined8 *)(param_3 + 10) = 0;
        *(undefined8 *)(param_3 + 0xc) = 0;
        *(undefined8 *)(param_3 + 0xe) = 0;
      }
      *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_3 + 0xe) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 0xe) = 0;
    }
    param_3 = param_3 + 0x10;
    param_1 = param_1 + 0x10;
  } while( true );
}

