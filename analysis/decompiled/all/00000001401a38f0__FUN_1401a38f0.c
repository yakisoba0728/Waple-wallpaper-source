// Function: FUN_1401a38f0
// Addr: 1401a38f0
// Size: 624 bytes


void FUN_1401a38f0(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res10;
  undefined1 local_38 [16];
  
  if ((param_2 != 0) && (*(char *)(param_2 + 8) == '\a')) {
    lVar3 = FUN_140087490(param_2,&DAT_14048e5bc,&DAT_14048e5be);
    if (lVar3 == 0) {
      lVar3 = FUN_140084ac0();
    }
    if (*(byte *)(lVar3 + 8) - 1 < 3) {
      lVar3 = FUN_140087490(param_2,&DAT_14048e5bc,&DAT_14048e5be);
      if (lVar3 == 0) {
        lVar3 = FUN_140084ac0();
      }
      lVar3 = FUN_140086000(lVar3);
      if (lVar3 != 0) {
        lVar3 = FUN_140087490(param_2,&DAT_14048e5bc,&DAT_14048e5be);
        if (lVar3 == 0) {
          lVar3 = FUN_140084ac0();
        }
        local_res10 = FUN_140086000(lVar3);
        *param_1 = local_res10;
        FUN_140078250(param_1[1] + 8,local_38,&local_res10);
        return;
      }
    }
  }
  puVar1 = (ulonglong *)param_1[1];
  *puVar1 = *puVar1 + 1;
  uVar5 = *puVar1;
  uVar6 = 0;
  uVar4 = uVar5 >> 8;
  uVar9 = uVar5 >> 0x38;
  uVar7 = uVar5 >> 0x30;
  uVar8 = uVar5 >> 0x10;
  uVar10 = uVar5 >> 0x18;
  uVar11 = uVar5 >> 0x20;
  uVar12 = uVar5 >> 0x28;
  while( true ) {
    uVar2 = puVar1[2];
    uVar9 = puVar1[7] &
            ((((((((uVar5 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar4 & 0xff) *
                  0x100000001b3 ^ uVar8 & 0xff) * 0x100000001b3 ^ uVar10 & 0xff) * 0x100000001b3 ^
               uVar11 & 0xff) * 0x100000001b3 ^ uVar12 & 0xff) * 0x100000001b3 ^ uVar7 & 0xff) *
             0x100000001b3 ^ uVar9) * 0x100000001b3;
    uVar4 = *(ulonglong *)(puVar1[4] + 8 + uVar9 * 0x10);
    if (uVar4 == uVar2) break;
    if (uVar5 != *(ulonglong *)(uVar4 + 0x10)) {
      do {
        if (uVar4 == *(ulonglong *)(puVar1[4] + uVar9 * 0x10)) {
          uVar5 = *puVar1;
          goto LAB_1401a3b3c;
        }
        uVar4 = *(ulonglong *)(uVar4 + 8);
      } while (uVar5 != *(ulonglong *)(uVar4 + 0x10));
      uVar5 = *puVar1;
    }
    if (uVar4 == 0) {
      uVar4 = uVar2;
    }
    if (uVar4 == uVar2) break;
    uVar2 = uVar5 + 1;
    *puVar1 = uVar2;
    if (uVar5 == 0xfffffffffffffffe) {
      FUN_140077f50(puVar1 + 1);
      *puVar1 = 0;
      uVar4 = uVar6;
      uVar5 = uVar6;
      uVar9 = uVar6;
      uVar7 = uVar6;
      uVar8 = uVar6;
      uVar10 = uVar6;
      uVar11 = uVar6;
      uVar12 = uVar6;
    }
    else {
      uVar4 = uVar2 >> 8;
      uVar8 = uVar2 >> 0x10;
      uVar10 = uVar2 >> 0x18;
      uVar11 = uVar2 >> 0x20;
      uVar12 = uVar2 >> 0x28;
      uVar7 = uVar2 >> 0x30;
      uVar9 = uVar2 >> 0x38;
      uVar5 = uVar2;
    }
  }
LAB_1401a3b3c:
  *param_1 = uVar5;
  return;
}

