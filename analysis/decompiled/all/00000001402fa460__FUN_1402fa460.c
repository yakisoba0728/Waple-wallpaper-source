// Function: FUN_1402fa460
// Addr: 1402fa460
// Size: 527 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402fa460(undefined8 param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 auStack_1e8 [32];
  byte local_1c8 [144];
  byte local_138 [144];
  byte local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStack_1e8;
  pbVar2 = (byte *)common_getenv<>();
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    while (bVar1 != 0) {
      if ((bVar1 != 0x20) && (bVar1 != 9)) {
        uVar4 = 0;
        pbVar5 = pbVar2;
        do {
          bVar1 = *pbVar5;
          if ((bVar1 == 0) || (bVar1 == 0x3a)) break;
          local_a8[uVar4] = bVar1;
          bVar1 = pbVar5[1];
          if ((bVar1 == 0) || (bVar1 == 0x3a)) {
            uVar4 = (ulonglong)((int)uVar4 + 1);
            pbVar5 = pbVar5 + 1;
            break;
          }
          local_a8[uVar4 + 1] = bVar1;
          pbVar5 = pbVar5 + 2;
          uVar3 = (int)uVar4 + 2;
          uVar4 = (ulonglong)uVar3;
        } while ((int)uVar3 < 0x80);
        if (0x80 < (ulonglong)(longlong)(int)uVar4) {
LAB_1402fa66a:
                    /* WARNING: Subroutine does not return */
          FUN_1402ed4d0();
        }
        local_a8[(int)uVar4] = 0;
        if (*pbVar5 != 0x3a) {
          return;
        }
        if (pbVar5 == pbVar2) {
          return;
        }
        uVar4 = 0;
        pbVar6 = pbVar5 + 1;
        do {
          bVar1 = *pbVar6;
          if ((bVar1 == 0) || (bVar1 == 0x3d)) break;
          local_138[uVar4] = bVar1;
          bVar1 = pbVar6[1];
          if ((bVar1 == 0) || (bVar1 == 0x3d)) {
            uVar4 = (ulonglong)((int)uVar4 + 1);
            pbVar6 = pbVar6 + 1;
            break;
          }
          local_138[uVar4 + 1] = bVar1;
          pbVar6 = pbVar6 + 2;
          uVar3 = (int)uVar4 + 2;
          uVar4 = (ulonglong)uVar3;
        } while ((int)uVar3 < 0x80);
        if (0x80 < (ulonglong)(longlong)(int)uVar4) goto LAB_1402fa66a;
        local_138[(int)uVar4] = 0;
        if (*pbVar6 != 0x3d) {
          return;
        }
        if (pbVar6 == pbVar5 + 1) {
          return;
        }
        uVar4 = 0;
        pbVar2 = pbVar6 + 1;
        do {
          bVar1 = *pbVar2;
          if ((bVar1 < 0x21) && ((0x100000201U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0)) break;
          local_1c8[uVar4] = bVar1;
          bVar1 = pbVar2[1];
          if ((bVar1 == 0) || ((bVar1 == 0x20 || (bVar1 == 9)))) {
            uVar4 = (ulonglong)((int)uVar4 + 1);
            pbVar2 = pbVar2 + 1;
            break;
          }
          local_1c8[uVar4 + 1] = bVar1;
          pbVar2 = pbVar2 + 2;
          uVar3 = (int)uVar4 + 2;
          uVar4 = (ulonglong)uVar3;
        } while ((int)uVar3 < 0x80);
        if (0x80 < (ulonglong)(longlong)(int)uVar4) goto LAB_1402fa66a;
        local_1c8[(int)uVar4] = 0;
        if (0x20 < *pbVar2) {
          return;
        }
        if ((0x100000201U >> ((longlong)(char)*pbVar2 & 0x3fU) & 1) == 0) {
          return;
        }
        if (pbVar2 == pbVar6 + 1) {
          return;
        }
        FUN_1402f8d40(param_1,local_a8,local_138,local_1c8);
        if (*pbVar2 == 0) {
          return;
        }
      }
      pbVar5 = pbVar2 + 1;
      pbVar2 = pbVar2 + 1;
      bVar1 = *pbVar5;
    }
  }
  return;
}

