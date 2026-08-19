// Function: FUN_1401b6f70
// Addr: 1401b6f70
// Size: 81 bytes


void FUN_1401b6f70(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 unaff_RDI;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar7 = auStack_28;
  puVar8 = auStack_28;
  FUN_1401b5050(param_2);
  uVar5 = 0;
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  lVar3 = *(longlong *)(param_3 + 0x40) - *(longlong *)(param_3 + 0x38);
  if (lVar3 == 0) {
    return;
  }
  lVar3 = lVar3 >> 4;
  if (0x555555555555555 < (ulonglong)(lVar3 * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
    FUN_140133e40();
  }
  uVar6 = lVar3 * 0x10;
  if (uVar6 != 0) {
    if (uVar6 < 0x1000) {
      uVar5 = func_0x00014028aff0(uVar6);
      puVar8 = auStack_28;
    }
    else {
      if (uVar6 + 0x27 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_140017440();
      }
      lVar4 = func_0x00014028aff0();
      lVar3 = lVar4;
      if (lVar4 == 0) {
        lVar3 = 5;
        pcVar2 = (code *)swi(0x29);
        lVar4 = (*pcVar2)();
        puVar7 = auStack_20;
      }
      uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar5 - 8) = lVar3;
      puVar8 = puVar7;
    }
  }
  *(ulonglong *)(param_2 + 0x38) = uVar5;
  *(ulonglong *)(param_2 + 0x40) = uVar5;
  *(ulonglong *)(param_2 + 0x48) = uVar5 + uVar6;
  lVar3 = *(longlong *)(param_3 + 0x38);
  lVar4 = *(longlong *)(param_3 + 0x40);
  *(undefined8 *)(puVar8 + 0x38) = unaff_RDI;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar8 + -8) = 0x1401b706b;
  FUN_1404211c0(uVar1,lVar3,lVar4 - lVar3);
}

