// Function: FUN_1402dbab4
// Addr: 1402dbab4
// Size: 54 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dbab4(void)

{
  byte *pbVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  lVar8 = 0;
  do {
    uVar5 = (ulonglong)(uVar7 & 0x3f);
    lVar2 = *(longlong *)(&DAT_1404e4960 + ((longlong)(int)uVar7 >> 6) * 8);
    if (*(longlong *)(lVar2 + 0x28 + uVar5 * 0x48) + 2U < 2) {
      *(undefined1 *)(lVar2 + 0x38 + uVar5 * 0x48) = 0x81;
      if (uVar7 == 0) {
        uVar6 = 0xfffffff6;
      }
      else if (uVar7 == 1) {
        uVar6 = 0xfffffff5;
      }
      else {
        uVar6 = 0xfffffff4;
      }
      lVar4 = (*_UNK_1404261e0)(uVar6);
      if (1 < lVar4 + 1U) {
        uVar3 = (*_UNK_1404261e8)(lVar4);
        if (uVar3 != 0) {
          *(longlong *)(lVar2 + 0x28 + uVar5 * 0x48) = lVar4;
          if ((uVar3 & 0xff) == 2) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar5 * 0x48);
            *pbVar1 = *pbVar1 | 0x40;
          }
          else if ((uVar3 & 0xff) == 3) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar5 * 0x48);
            *pbVar1 = *pbVar1 | 8;
          }
          goto code_r0x0001402dbb92;
        }
      }
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar5 * 0x48);
      *pbVar1 = *pbVar1 | 0x40;
      *(undefined8 *)(lVar2 + 0x28 + uVar5 * 0x48) = 0xfffffffffffffffe;
      if (lRam00000001404e44f8 != 0) {
        *(undefined4 *)(*(longlong *)(lVar8 + lRam00000001404e44f8) + 0x18) = 0xfffffffe;
      }
    }
    else {
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar5 * 0x48);
      *pbVar1 = *pbVar1 | 0x80;
    }
code_r0x0001402dbb92:
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 8;
    if (uVar7 == 3) {
      return;
    }
  } while( true );
}

