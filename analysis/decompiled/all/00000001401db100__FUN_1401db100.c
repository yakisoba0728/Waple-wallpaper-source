// Function: FUN_1401db100
// Addr: 1401db100
// Size: 571 bytes


longlong * FUN_1401db100(longlong *param_1,longlong *param_2,longlong *param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  do {
    if (param_1 == param_2) {
      return param_3;
    }
    if (param_3 != param_1) {
      lVar2 = *param_3;
      if (lVar2 != 0) {
        uVar4 = (param_3[2] - lVar2 >> 3) * 8;
        if (0xfff < uVar4) {
          if (0x1f < (lVar2 - *(longlong *)(lVar2 + -8)) - 8U) goto LAB_1401db333;
          uVar4 = uVar4 + 0x27;
          lVar2 = *(longlong *)(lVar2 + -8);
        }
        thunk_FUN_14028af80(lVar2,uVar4);
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
      }
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    *(int *)(param_3 + 3) = (int)param_1[3];
    *(undefined4 *)((longlong)param_3 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x1c);
    param_3[4] = param_1[4];
    *(int *)(param_3 + 5) = (int)param_1[5];
    *(undefined8 *)((longlong)param_3 + 0x2c) = *(undefined8 *)((longlong)param_1 + 0x2c);
    *(undefined4 *)((longlong)param_3 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x34);
    *(int *)(param_3 + 7) = (int)param_1[7];
    *(undefined4 *)((longlong)param_3 + 0x3c) = *(undefined4 *)((longlong)param_1 + 0x3c);
    *(int *)(param_3 + 8) = (int)param_1[8];
    param_3[9] = param_1[9];
    *(int *)(param_3 + 10) = (int)param_1[10];
    param_3[0xb] = param_1[0xb];
    *(int *)(param_3 + 0xc) = (int)param_1[0xc];
    *(undefined4 *)((longlong)param_3 + 100) = *(undefined4 *)((longlong)param_1 + 100);
    if (param_3 != param_1) {
      lVar2 = param_3[0xd];
      if (lVar2 != 0) {
        uVar4 = param_3[0xf] - lVar2 & 0xffffffffffffffc0;
        if (0xfff < uVar4) {
          if (0x1f < (lVar2 - *(longlong *)(lVar2 + -8)) - 8U) {
LAB_1401db333:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            plVar3 = (longlong *)(*pcVar1)();
            return plVar3;
          }
          uVar4 = uVar4 | 0x27;
          lVar2 = *(longlong *)(lVar2 + -8);
        }
        thunk_FUN_14028af80(lVar2,uVar4);
        param_3[0xd] = 0;
        param_3[0xe] = 0;
        param_3[0xf] = 0;
      }
      param_3[0xd] = param_1[0xd];
      param_3[0xe] = param_1[0xe];
      param_3[0xf] = param_1[0xf];
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
    *(int *)(param_3 + 0x10) = (int)param_1[0x10];
    param_3[0x11] = param_1[0x11];
    *(int *)(param_3 + 0x12) = (int)param_1[0x12];
    param_3[0x13] = param_1[0x13];
    *(int *)(param_3 + 0x14) = (int)param_1[0x14];
    param_3[0x15] = param_1[0x15];
    if (param_3 != param_1) {
      FUN_1401dcd40(param_3 + 0x16);
      param_3[0x16] = param_1[0x16];
      param_3[0x17] = param_1[0x17];
      param_3[0x18] = param_1[0x18];
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
    }
    param_3 = param_3 + 0x19;
    param_1 = param_1 + 0x19;
  } while( true );
}

