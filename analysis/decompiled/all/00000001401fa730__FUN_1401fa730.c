// Function: FUN_1401fa730
// Addr: 1401fa730
// Size: 395 bytes


void FUN_1401fa730(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar7 = auStack_48;
  puVar8 = auStack_48;
  puVar6 = *(undefined8 **)(param_1 + 0x100);
  if (puVar6 != *(undefined8 **)(param_1 + 0x108)) {
    *puVar6 = *param_4;
    *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 8;
    return;
  }
  uVar10 = (longlong)puVar6 - *(longlong *)(param_1 + 0xf8);
  lVar5 = (longlong)uVar10 >> 3;
  if (lVar5 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = (longlong)*(undefined8 **)(param_1 + 0x108) - *(longlong *)(param_1 + 0xf8) >> 3;
  if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
    uVar1 = lVar5 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar9 = uVar1;
    if (uVar1 <= uVar4) {
      uVar9 = uVar4;
    }
    if (uVar9 < 0x2000000000000000) {
      uVar4 = uVar9 * 8;
      if (uVar4 == 0) {
        uVar4 = 0;
        puVar8 = auStack_48;
      }
      else if (uVar4 < 0x1000) {
        uVar4 = FUN_14028af20();
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_1401fa8b7;
        lVar5 = FUN_14028af20(uVar4 + 0x27);
        if (lVar5 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar5 = (*pcVar3)(5);
          puVar7 = auStack_40;
        }
        uVar4 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar4 - 8) = lVar5;
        puVar8 = puVar7;
      }
      uVar10 = uVar10 & 0xfffffffffffffff8;
      *(undefined8 *)(uVar10 + uVar4) = *param_4;
      puVar2 = *(undefined8 **)(param_1 + 0xf8);
      if (puVar6 == *(undefined8 **)(param_1 + 0x100)) {
        lVar5 = (longlong)*(undefined8 **)(param_1 + 0x100) - (longlong)puVar2;
        uVar10 = uVar4;
        puVar6 = puVar2;
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x1401fa862;
        FUN_1404210f0(uVar4,puVar2,(longlong)puVar6 - (longlong)puVar2);
        uVar10 = uVar10 + 8 + uVar4;
        lVar5 = *(longlong *)(param_1 + 0x100) - (longlong)puVar6;
      }
      *(undefined8 *)(puVar8 + -8) = 0x1401fa87b;
      FUN_1404210f0(uVar10,puVar6,lVar5);
      FUN_1400384c0(param_1 + 0xf8,uVar4,uVar1,uVar9);
      return;
    }
  }
LAB_1401fa8b7:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

