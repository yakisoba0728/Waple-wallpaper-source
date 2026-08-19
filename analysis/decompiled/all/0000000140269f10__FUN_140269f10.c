// Function: FUN_140269f10
// Addr: 140269f10
// Size: 439 bytes


longlong FUN_140269f10(longlong *param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar4 = *param_1;
  lVar2 = (param_1[1] - lVar4 >> 3) * -0x7d05f417d05f417d;
  if (lVar2 == 0xbe82fa0be82fa0) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar6 = lVar2 + 1;
  uVar5 = (param_1[2] - lVar4 >> 3) * -0x7d05f417d05f417d;
  uVar3 = 0xbe82fa0be82fa0 - (uVar5 >> 1);
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar3 = uVar6;
    if (uVar6 <= uVar5) {
      uVar3 = uVar5;
    }
    if (uVar3 < 0xbe82fa0be82fa1) {
      uVar3 = uVar3 * 0x158;
      if (uVar3 == 0) {
        lVar7 = 0;
        lVar9 = ((param_2 - lVar4) / 0x158) * 0x158;
        FUN_14026bed0(lVar9,param_3);
        lVar4 = param_1[1];
        lVar2 = *param_1;
        if (param_2 == lVar4) {
          for (; lVar2 != lVar4; lVar2 = lVar2 + 0x158) {
            FUN_14026bed0(lVar7,lVar2);
            lVar7 = lVar7 + 0x158;
          }
        }
        else {
          for (; lVar2 != param_2; lVar2 = lVar2 + 0x158) {
            FUN_14026bed0(lVar7,lVar2);
            lVar7 = lVar7 + 0x158;
          }
          lVar4 = param_1[1];
          lVar2 = lVar9;
          for (; param_2 != lVar4; param_2 = param_2 + 0x158) {
            lVar2 = lVar2 + 0x158;
            FUN_14026bed0(lVar2,param_2);
          }
        }
        lVar4 = *param_1;
        if (lVar4 != 0) {
          lVar2 = param_1[1];
          for (; lVar4 != lVar2; lVar4 = lVar4 + 0x158) {
            FUN_1401dced0(lVar4);
          }
          lVar4 = *param_1;
          lVar2 = lVar4;
          puVar8 = auStack_48;
          if ((0xfff < (ulonglong)((param_1[2] - lVar4 >> 3) * 8)) &&
             (lVar2 = *(longlong *)(lVar4 + -8), puVar8 = auStack_48, 0x1f < (lVar4 - lVar2) - 8U))
          {
            lVar2 = 5;
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar8 = auStack_40;
          }
          *(undefined8 *)(puVar8 + -8) = 0x14026a139;
          func_0x00014028b040(lVar2);
        }
        *param_1 = 0;
        param_1[1] = uVar6 * 0x158;
        param_1[2] = 0;
        return lVar9;
      }
      if (uVar3 < 0x1000) {
        lVar4 = func_0x00014028aff0(uVar3);
        return lVar4;
      }
      uVar6 = uVar3 + 0x27;
      if (uVar3 < uVar6) goto LAB_140269fd4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140017440();
  }
  uVar6 = 0xffffffffffffff27;
LAB_140269fd4:
  lVar4 = func_0x00014028aff0(uVar6);
  return lVar4;
}

