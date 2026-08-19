// Function: FUN_14033c270
// Addr: 14033c270
// Size: 100 bytes


int FUN_14033c270(ulonglong *param_1,byte *param_2,int param_3,longlong param_4,undefined4 param_5)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 auStackX_10 [2];
  byte *apbStack_48 [2];
  
  iVar4 = 0;
  pbVar3 = (byte *)*param_1;
  apbStack_48[0] = pbVar3;
  if (pbVar3 < param_2) {
    if (*pbVar3 == 0x5b) {
      bVar6 = 0x5d;
    }
    else {
      bVar6 = 0x7d;
      if (*pbVar3 != 0x7b) {
        bVar6 = 0;
        goto joined_r0x00014033c2f6;
      }
    }
    pbVar3 = pbVar3 + 1;
    apbStack_48[0] = pbVar3;
    if (pbVar3 < param_2) {
joined_r0x00014033c2f6:
      do {
        for (; pbVar3 < param_2; pbVar3 = pbVar3 + 1) {
          bVar1 = *pbVar3;
          if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
            if (bVar1 != 0x25) break;
            do {
              if ((*pbVar3 == 0xd) || (*pbVar3 == 10)) break;
              pbVar3 = pbVar3 + 1;
            } while (pbVar3 < param_2);
          }
        }
        apbStack_48[0] = pbVar3;
        if (param_2 <= pbVar3) break;
        if (*pbVar3 == bVar6) {
          apbStack_48[0] = pbVar3 + 1;
          break;
        }
        if (param_4 == 0) {
          puVar5 = auStackX_10;
        }
        else {
          if (param_3 <= iVar4) break;
          puVar5 = (undefined4 *)(param_4 + (longlong)iVar4 * 4);
        }
        uVar2 = FUN_140332f20(apbStack_48,param_2,param_5);
        *puVar5 = uVar2;
        if (pbVar3 == apbStack_48[0]) {
          iVar4 = -1;
          break;
        }
        iVar4 = iVar4 + 1;
        if ((bVar6 == 0) || (pbVar3 = apbStack_48[0], param_2 <= apbStack_48[0])) break;
      } while( true );
    }
  }
  *param_1 = (ulonglong)apbStack_48[0];
  return iVar4;
}

