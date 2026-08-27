// Function: FUN_1400de740
// Addr: 1400de740
// Size: 363 bytes


longlong * FUN_1400de740(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar5 = auStack_48;
  puVar6 = auStack_48;
  *param_1 = (longlong)&DAT_1404855f8;
  param_1[0x13] = 0;
  param_1[0x12] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_140012ae0(param_1,param_1 + 2);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_140485600;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x90;
  FUN_140012b80(param_1 + 2);
  param_1[2] = (longlong)&PTR_FUN_1404740b8;
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (uVar1 < 0x80000000) {
    if (uVar1 == 0) {
      uVar3 = 2;
      param_1[0xf] = 0;
    }
    else {
      if (uVar1 < 0x1000) {
        uVar7 = FUN_14028af20(uVar1);
      }
      else {
        if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        lVar4 = FUN_14028af20();
        if (lVar4 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar4 = (*pcVar2)(5);
          puVar5 = auStack_40;
        }
        uVar7 = lVar4 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar7 - 8) = lVar4;
        puVar6 = puVar5;
      }
      *(undefined8 *)(puVar6 + -8) = 0x1400de860;
      FUN_1404210f0(uVar7,param_2,uVar1);
      param_1[0xf] = uVar7 + uVar1;
      *(ulonglong *)param_1[5] = uVar7;
      *(ulonglong *)param_1[9] = uVar7;
      *(int *)param_1[0xc] = (int)(uVar7 + uVar1) - (int)uVar7;
      uVar3 = 3;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028b8c0();
}

