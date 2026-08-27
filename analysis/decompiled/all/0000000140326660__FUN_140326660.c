// Function: FUN_140326660
// Addr: 140326660
// Size: 410 bytes


void FUN_140326660(byte *param_1,byte *param_2,uint param_3,uint *param_4,uint param_5,uint *param_6
                  ,uint *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  
  uVar5 = *param_4;
  uVar2 = uVar5 & 1;
  uVar1 = (uint)((byte)uVar5 & 1);
  uVar6 = uVar1 + 5;
  if ((uVar5 & 2) == 0) {
    uVar6 = uVar1 + 4;
  }
  uVar1 = uVar6 + 1;
  if ((uVar5 & 4) == 0) {
    uVar1 = uVar6;
  }
  if ((uVar5 & 0x40) == 0) {
    *param_4 = uVar5 | 0x80;
    if (param_2 < param_1 + uVar1 * param_3) {
      *param_4 = uVar5 & 0xffffff7f;
    }
    else {
      uVar6 = 0xffffffff;
      for (pbVar9 = param_1; pbVar9 < param_1 + uVar1 * param_3; pbVar9 = pbVar9 + uVar1) {
        uVar4 = (uint)*pbVar9;
        if ((uVar5 & 1) != 0) {
          uVar4 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
        }
        if ((int)uVar4 <= (int)uVar6) {
          *param_4 = uVar5 & 0xffffff7f;
          break;
        }
        uVar6 = uVar4;
      }
    }
    *param_4 = *param_4 | 0x40;
    uVar5 = *param_4;
  }
  if ((char)uVar5 < '\0') {
    uVar6 = 0;
    uVar5 = param_3 >> 1;
    if (param_3 != 0) {
      lVar7 = 2;
      do {
        pbVar9 = param_1 + uVar1 * uVar5;
        uVar4 = (uint)*pbVar9;
        if (uVar2 == 0) {
          lVar8 = 1;
        }
        else {
          uVar4 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
          lVar8 = 2;
        }
        uVar3 = uVar5;
        if (uVar4 <= param_5) {
          pbVar9 = pbVar9 + lVar8;
          if (param_5 <= uVar4) {
            uVar5 = (uint)*pbVar9;
            if ((*param_4 & 2) == 0) {
              lVar7 = 1;
            }
            else {
              uVar5 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
            }
            pbVar9 = pbVar9 + lVar7;
            *param_7 = uVar5;
            if ((*param_4 & 4) != 0) {
              *param_6 = (uint)CONCAT21(CONCAT11(*pbVar9,pbVar9[1]),pbVar9[2]);
              return;
            }
            *param_6 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
            return;
          }
          uVar6 = uVar5 + 1;
          uVar3 = param_3;
        }
        param_3 = uVar3;
        uVar5 = (uVar5 - uVar4) + param_5;
        if ((param_3 <= uVar5) || (uVar5 < uVar6)) {
          uVar5 = (param_3 - uVar6 >> 1) + uVar6;
        }
      } while (uVar6 < param_3);
    }
  }
  *param_7 = 0;
  *param_6 = 0;
  return;
}

