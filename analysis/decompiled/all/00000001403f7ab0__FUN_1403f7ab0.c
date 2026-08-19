// Function: FUN_1403f7ab0
// Addr: 1403f7ab0
// Size: 345 bytes


void FUN_1403f7ab0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x70);
  uVar7 = (ulonglong)param_2;
  uVar9 = (ulonglong)param_2;
  lVar1 = lVar3 + uVar7 * 0x14;
  if ((1 << (*(byte *)(lVar3 + 0xf + uVar7 * 0x14) & 0xf) & 0xa7U) != 0) {
    uVar8 = uVar7;
    if ((*(char *)(lVar1 + 0x12) == '\x12') && (uVar6 = param_2, 1 < param_3 - param_2)) {
      while (uVar4 = uVar6 + 1, uVar4 < param_3) {
        bVar2 = *(byte *)(lVar3 + 0x12 + (ulonglong)uVar4 * 0x14);
        if (((bVar2 < 0x40) &&
            (((0xe0ee7fc00000U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0 ||
             (((bVar2 < 0x36 && ((0x20100000001000U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) &&
              ((*(byte *)(lVar3 + (ulonglong)uVar4 * 0x14 + 0xc) & 0x20) == 0)))))) ||
           (uVar6 = uVar4, uVar4 == param_3 - 1)) {
          if (1 < (uVar6 + 1) - param_2) {
            if (*(uint *)(param_1 + 0x1c) < 2) {
              FUN_1403ec350(param_1,uVar7);
            }
            else {
              func_0x00014040efc0();
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(lVar1,lVar3 + (ulonglong)(param_2 + 1) * 0x14,
                        (ulonglong)(uVar6 - param_2) * 0x14);
        }
      }
    }
    while (param_2 < param_3) {
      bVar2 = *(byte *)(lVar3 + 0x12 + uVar9 * 0x14);
      lVar1 = lVar3 + uVar9 * 0x14;
      param_2 = (uint)uVar7;
      if (bVar2 < 0x20) {
        uVar6 = 1 << (bVar2 & 0x1f);
        if (bVar2 != 0xc) goto code_r0x0001403f7c22;
code_r0x0001403f7c2c:
        if ((*(byte *)(lVar1 + 0xc) & 0x20) != 0) goto code_r0x0001403f7c36;
        uVar8 = (ulonglong)(param_2 + 1);
      }
      else {
        uVar6 = 0;
code_r0x0001403f7c22:
        if ((bVar2 == 0x35) || (bVar2 == 0x2c)) goto code_r0x0001403f7c2c;
code_r0x0001403f7c36:
        if ((uVar6 & 0xc00000) != 0) {
          bVar2 = *(byte *)(lVar1 + 0xe);
          bVar5 = 0;
          if ((bVar2 & 0x10) == 0) {
            bVar5 = bVar2 & 0xf;
          }
          if ((bVar5 == 0) && (uVar6 = (uint)uVar8, uVar6 < param_2)) {
            if (1 < (param_2 - uVar6) + 1) {
              if (*(uint *)(param_1 + 0x1c) < 2) {
                FUN_1403ec350(param_1,uVar8,param_2 + 1);
              }
              else {
                func_0x00014040efc0();
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(lVar3 + (ulonglong)(uVar6 + 1) * 0x14,lVar3 + uVar8 * 0x14,
                          (ulonglong)(param_2 - uVar6) * 0x14);
          }
        }
      }
      param_2 = param_2 + 1;
      uVar7 = (ulonglong)param_2;
      uVar9 = uVar9 + 1;
    }
  }
  return;
}

