// Function: FUN_1402fa530
// Addr: 1402fa530
// Size: 325 bytes


void FUN_1402fa530(undefined8 param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 auStack_1e8 [32];
  byte abStack_1c8 [144];
  byte abStack_138 [144];
  byte abStack_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_1404dc110 ^ (ulonglong)auStack_1e8;
  pbVar2 = (byte *)thunk_FUN_1402ea4b4();
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    while (bVar1 != 0) {
      if ((bVar1 != 0x20) && (bVar1 != 9)) {
        uVar4 = 0;
        pbVar5 = pbVar2;
        do {
          bVar1 = *pbVar5;
          if ((bVar1 == 0) || (bVar1 == 0x3a)) break;
          abStack_a8[uVar4] = bVar1;
          bVar1 = pbVar5[1];
          if ((bVar1 == 0) || (bVar1 == 0x3a)) {
            uVar4 = (ulonglong)((int)uVar4 + 1);
            pbVar5 = pbVar5 + 1;
            break;
          }
          abStack_a8[uVar4 + 1] = bVar1;
          pbVar5 = pbVar5 + 2;
          uVar3 = (int)uVar4 + 2;
          uVar4 = (ulonglong)uVar3;
        } while ((int)uVar3 < 0x80);
        if (0x80 < (ulonglong)(longlong)(int)uVar4) {
LAB_1402fa73a:
                    /* WARNING: Subroutine does not return */
          FUN_1402ed5a0();
        }
        abStack_a8[(int)uVar4] = 0;
        if ((*pbVar5 != 0x3a) || (pbVar5 == pbVar2)) break;
        uVar4 = 0;
        pbVar6 = pbVar5 + 1;
        do {
          bVar1 = *pbVar6;
          if ((bVar1 == 0) || (bVar1 == 0x3d)) break;
          abStack_138[uVar4] = bVar1;
          bVar1 = pbVar6[1];
          if ((bVar1 == 0) || (bVar1 == 0x3d)) {
            uVar4 = (ulonglong)((int)uVar4 + 1);
            pbVar6 = pbVar6 + 1;
            break;
          }
          abStack_138[uVar4 + 1] = bVar1;
          pbVar6 = pbVar6 + 2;
          uVar3 = (int)uVar4 + 2;
          uVar4 = (ulonglong)uVar3;
        } while ((int)uVar3 < 0x80);
        if (0x80 < (ulonglong)(longlong)(int)uVar4) goto LAB_1402fa73a;
        abStack_138[(int)uVar4] = 0;
        if ((*pbVar6 != 0x3d) || (pbVar6 == pbVar5 + 1)) break;
        uVar4 = 0;
        pbVar2 = pbVar6 + 1;
        do {
          bVar1 = *pbVar2;
          if ((bVar1 < 0x21) && ((0x100000201U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0)) break;
          abStack_1c8[uVar4] = bVar1;
          bVar1 = pbVar2[1];
          if ((bVar1 == 0) || ((bVar1 == 0x20 || (bVar1 == 9)))) {
            uVar4 = (ulonglong)((int)uVar4 + 1);
            pbVar2 = pbVar2 + 1;
            break;
          }
          abStack_1c8[uVar4 + 1] = bVar1;
          pbVar2 = pbVar2 + 2;
          uVar3 = (int)uVar4 + 2;
          uVar4 = (ulonglong)uVar3;
        } while ((int)uVar3 < 0x80);
        if (0x80 < (ulonglong)(longlong)(int)uVar4) goto LAB_1402fa73a;
        abStack_1c8[(int)uVar4] = 0;
        if ((((0x20 < *pbVar2) || ((0x100000201U >> ((longlong)(char)*pbVar2 & 0x3fU) & 1) == 0)) ||
            (pbVar2 == pbVar6 + 1)) ||
           (func_0x0001402f8e10(param_1,abStack_a8,abStack_138,abStack_1c8), *pbVar2 == 0)) break;
      }
      pbVar5 = pbVar2 + 1;
      pbVar2 = pbVar2 + 1;
      bVar1 = *pbVar5;
    }
  }
  func_0x0001402ed2f0(local_18 ^ (ulonglong)auStack_1e8);
  return;
}

