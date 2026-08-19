// Function: FUN_1402e68a8
// Addr: 1402e68a8
// Size: 23 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e68a8(undefined8 param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  short *psVar6;
  uint uVar7;
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [240];
  ulonglong uStack_18;
  
  uStack_18 = DAT_1404dc110 ^ (ulonglong)auStack_128;
  lVar4 = FUN_1402d9964();
  lVar5 = FUN_1402d9964();
  puVar1 = *(uint **)(lVar5 + 0x3a0);
  uVar2 = func_0x0001402e6e44(param_1);
  iVar3 = (*_UNK_140426480)(uVar2,(-(uint)(*(int *)(lVar4 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                            auStack_108,0x78);
  uVar7 = 0;
  if (iVar3 == 0) {
    *puVar1 = 0;
  }
  else {
    iVar3 = FUN_1402c1390(*(undefined8 *)(lVar4 + 0xa0),auStack_108);
    if (iVar3 == 0) {
      psVar6 = (short *)&UNK_1404316f8;
      do {
        if ((short)uVar2 == *psVar6) goto code_r0x0001402e6967;
        uVar7 = uVar7 + 1;
        psVar6 = psVar6 + 1;
      } while (uVar7 < 10);
      *puVar1 = *puVar1 | 4;
      puVar1[2] = uVar2;
      puVar1[1] = uVar2;
    }
  }
code_r0x0001402e6967:
  func_0x0001402ed2f0(uStack_18 ^ (ulonglong)auStack_128);
  return;
}

