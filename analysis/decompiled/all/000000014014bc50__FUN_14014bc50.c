// Function: FUN_14014bc50
// Addr: 14014bc50
// Size: 1295 bytes


void FUN_14014bc50(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  uVar3 = *(ulonglong *)(param_1 + 0x50);
  lVar4 = *(longlong *)(param_1 + 0xb8);
  lVar5 = *(longlong *)(param_1 + 0xc0);
  uVar6 = 0;
  uVar7 = *(ulonglong *)(**(longlong **)(param_1 + 0x80) + 0x50);
  lVar1 = lVar2 + uVar7 * 8;
  if (3 < uVar3) {
    do {
      *(float *)(lVar2 + uVar6 * 8) =
           *(float *)(param_2 + uVar6 * 8) * *(float *)(lVar4 + 4 + uVar6 * 8) +
           *(float *)(param_2 + 4 + uVar6 * 8) * *(float *)(lVar4 + uVar6 * 8);
      *(float *)(lVar2 + 4 + uVar6 * 8) =
           *(float *)(param_2 + uVar6 * 8) * *(float *)(lVar4 + uVar6 * 8) -
           *(float *)(param_2 + 4 + uVar6 * 8) * *(float *)(lVar4 + 4 + uVar6 * 8);
      *(float *)(lVar2 + 8 + uVar6 * 8) =
           *(float *)(param_2 + 8 + uVar6 * 8) * *(float *)(lVar4 + 0xc + uVar6 * 8) +
           *(float *)(param_2 + 0xc + uVar6 * 8) * *(float *)(lVar4 + 8 + uVar6 * 8);
      *(float *)(lVar2 + 0xc + uVar6 * 8) =
           *(float *)(param_2 + 8 + uVar6 * 8) * *(float *)(lVar4 + 8 + uVar6 * 8) -
           *(float *)(param_2 + 0xc + uVar6 * 8) * *(float *)(lVar4 + 0xc + uVar6 * 8);
      *(float *)(lVar2 + 0x10 + uVar6 * 8) =
           *(float *)(lVar4 + 0x10 + uVar6 * 8) * *(float *)(param_2 + 0x14 + uVar6 * 8) +
           *(float *)(param_2 + 0x10 + uVar6 * 8) * *(float *)(lVar4 + 0x14 + uVar6 * 8);
      *(float *)(lVar2 + 0x14 + uVar6 * 8) =
           *(float *)(param_2 + 0x10 + uVar6 * 8) * *(float *)(lVar4 + 0x10 + uVar6 * 8) -
           *(float *)(param_2 + 0x14 + uVar6 * 8) * *(float *)(lVar4 + 0x14 + uVar6 * 8);
      *(float *)(lVar2 + 0x18 + uVar6 * 8) =
           *(float *)(lVar4 + 0x18 + uVar6 * 8) * *(float *)(param_2 + 0x1c + uVar6 * 8) +
           *(float *)(param_2 + 0x18 + uVar6 * 8) * *(float *)(lVar4 + 0x1c + uVar6 * 8);
      *(float *)(lVar2 + 0x1c + uVar6 * 8) =
           *(float *)(param_2 + 0x18 + uVar6 * 8) * *(float *)(lVar4 + 0x18 + uVar6 * 8) -
           *(float *)(param_2 + 0x1c + uVar6 * 8) * *(float *)(lVar4 + 0x1c + uVar6 * 8);
      uVar6 = uVar6 + 4;
    } while (uVar6 < uVar3 - 3);
  }
  for (; uVar6 < uVar3; uVar6 = uVar6 + 1) {
    *(float *)(lVar2 + uVar6 * 8) =
         *(float *)(param_2 + uVar6 * 8) * *(float *)(lVar4 + 4 + uVar6 * 8) +
         *(float *)(param_2 + 4 + uVar6 * 8) * *(float *)(lVar4 + uVar6 * 8);
    *(float *)(lVar2 + 4 + uVar6 * 8) =
         *(float *)(param_2 + uVar6 * 8) * *(float *)(lVar4 + uVar6 * 8) -
         *(float *)(param_2 + 4 + uVar6 * 8) * *(float *)(lVar4 + 4 + uVar6 * 8);
  }
  for (; uVar6 < uVar7; uVar6 = uVar6 + 1) {
    *(undefined8 *)(lVar2 + uVar6 * 8) = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x60))(**(longlong **)(param_1 + 0x80),lVar2,lVar1)
  ;
  uVar6 = 0;
  do {
    *(float *)(lVar2 + uVar6 * 8) =
         *(float *)(lVar1 + uVar6 * 8) * *(float *)(lVar5 + 4 + uVar6 * 8) +
         *(float *)(lVar1 + 4 + uVar6 * 8) * *(float *)(lVar5 + uVar6 * 8);
    *(float *)(lVar2 + 4 + uVar6 * 8) =
         *(float *)(lVar1 + uVar6 * 8) * *(float *)(lVar5 + uVar6 * 8) -
         *(float *)(lVar1 + 4 + uVar6 * 8) * *(float *)(lVar5 + 4 + uVar6 * 8);
    *(float *)(lVar2 + 8 + uVar6 * 8) =
         *(float *)(lVar1 + 8 + uVar6 * 8) * *(float *)(lVar5 + 0xc + uVar6 * 8) +
         *(float *)(lVar1 + 0xc + uVar6 * 8) * *(float *)(lVar5 + 8 + uVar6 * 8);
    *(float *)(lVar2 + 0xc + uVar6 * 8) =
         *(float *)(lVar1 + 8 + uVar6 * 8) * *(float *)(lVar5 + 8 + uVar6 * 8) -
         *(float *)(lVar1 + 0xc + uVar6 * 8) * *(float *)(lVar5 + 0xc + uVar6 * 8);
    *(float *)(lVar2 + 0x10 + uVar6 * 8) =
         *(float *)(lVar5 + 0x10 + uVar6 * 8) * *(float *)(lVar1 + 0x14 + uVar6 * 8) +
         *(float *)(lVar1 + 0x10 + uVar6 * 8) * *(float *)(lVar5 + 0x14 + uVar6 * 8);
    *(float *)(lVar2 + 0x14 + uVar6 * 8) =
         *(float *)(lVar1 + 0x10 + uVar6 * 8) * *(float *)(lVar5 + 0x10 + uVar6 * 8) -
         *(float *)(lVar1 + 0x14 + uVar6 * 8) * *(float *)(lVar5 + 0x14 + uVar6 * 8);
    *(float *)(lVar2 + 0x18 + uVar6 * 8) =
         *(float *)(lVar5 + 0x18 + uVar6 * 8) * *(float *)(lVar1 + 0x1c + uVar6 * 8) +
         *(float *)(lVar1 + 0x18 + uVar6 * 8) * *(float *)(lVar5 + 0x1c + uVar6 * 8);
    *(float *)(lVar2 + 0x1c + uVar6 * 8) =
         *(float *)(lVar1 + 0x18 + uVar6 * 8) * *(float *)(lVar5 + 0x18 + uVar6 * 8) -
         *(float *)(lVar1 + 0x1c + uVar6 * 8) * *(float *)(lVar5 + 0x1c + uVar6 * 8);
    uVar6 = uVar6 + 4;
  } while (uVar6 < uVar7 - 3);
  for (; uVar6 < uVar7; uVar6 = uVar6 + 1) {
    *(float *)(lVar2 + uVar6 * 8) =
         *(float *)(lVar1 + uVar6 * 8) * *(float *)(lVar5 + 4 + uVar6 * 8) +
         *(float *)(lVar1 + 4 + uVar6 * 8) * *(float *)(lVar5 + uVar6 * 8);
    *(float *)(lVar2 + 4 + uVar6 * 8) =
         *(float *)(lVar1 + uVar6 * 8) * *(float *)(lVar5 + uVar6 * 8) -
         *(float *)(lVar1 + 4 + uVar6 * 8) * *(float *)(lVar5 + 4 + uVar6 * 8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x60))(**(longlong **)(param_1 + 0x80),lVar2,lVar1)
  ;
  uVar7 = 0;
  if (3 < uVar3) {
    do {
      *(float *)(param_3 + uVar7 * 8) =
           *(float *)(lVar1 + uVar7 * 8) * *(float *)(lVar4 + uVar7 * 8) -
           *(float *)(lVar1 + 4 + uVar7 * 8) * *(float *)(lVar4 + 4 + uVar7 * 8);
      *(float *)(param_3 + 4 + uVar7 * 8) =
           *(float *)(lVar1 + uVar7 * 8) * *(float *)(lVar4 + 4 + uVar7 * 8) +
           *(float *)(lVar1 + 4 + uVar7 * 8) * *(float *)(lVar4 + uVar7 * 8);
      *(float *)(param_3 + 8 + uVar7 * 8) =
           *(float *)(lVar1 + 8 + uVar7 * 8) * *(float *)(lVar4 + 8 + uVar7 * 8) -
           *(float *)(lVar1 + 0xc + uVar7 * 8) * *(float *)(lVar4 + 0xc + uVar7 * 8);
      *(float *)(param_3 + 0xc + uVar7 * 8) =
           *(float *)(lVar1 + 8 + uVar7 * 8) * *(float *)(lVar4 + 0xc + uVar7 * 8) +
           *(float *)(lVar1 + 0xc + uVar7 * 8) * *(float *)(lVar4 + 8 + uVar7 * 8);
      *(float *)(param_3 + 0x10 + uVar7 * 8) =
           *(float *)(lVar1 + 0x10 + uVar7 * 8) * *(float *)(lVar4 + 0x10 + uVar7 * 8) -
           *(float *)(lVar1 + 0x14 + uVar7 * 8) * *(float *)(lVar4 + 0x14 + uVar7 * 8);
      *(float *)(param_3 + 0x14 + uVar7 * 8) =
           *(float *)(lVar4 + 0x10 + uVar7 * 8) * *(float *)(lVar1 + 0x14 + uVar7 * 8) +
           *(float *)(lVar1 + 0x10 + uVar7 * 8) * *(float *)(lVar4 + 0x14 + uVar7 * 8);
      *(float *)(param_3 + 0x18 + uVar7 * 8) =
           *(float *)(lVar1 + 0x18 + uVar7 * 8) * *(float *)(lVar4 + 0x18 + uVar7 * 8) -
           *(float *)(lVar1 + 0x1c + uVar7 * 8) * *(float *)(lVar4 + 0x1c + uVar7 * 8);
      *(float *)(param_3 + 0x1c + uVar7 * 8) =
           *(float *)(lVar4 + 0x18 + uVar7 * 8) * *(float *)(lVar1 + 0x1c + uVar7 * 8) +
           *(float *)(lVar1 + 0x18 + uVar7 * 8) * *(float *)(lVar4 + 0x1c + uVar7 * 8);
      uVar7 = uVar7 + 4;
    } while (uVar7 < uVar3 - 3);
  }
  for (; uVar7 < uVar3; uVar7 = uVar7 + 1) {
    *(float *)(param_3 + uVar7 * 8) =
         *(float *)(lVar1 + uVar7 * 8) * *(float *)(lVar4 + uVar7 * 8) -
         *(float *)(lVar1 + 4 + uVar7 * 8) * *(float *)(lVar4 + 4 + uVar7 * 8);
    *(float *)(param_3 + 4 + uVar7 * 8) =
         *(float *)(lVar1 + uVar7 * 8) * *(float *)(lVar4 + 4 + uVar7 * 8) +
         *(float *)(lVar1 + 4 + uVar7 * 8) * *(float *)(lVar4 + uVar7 * 8);
  }
  return;
}

