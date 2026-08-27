// Function: FUN_1403693d0
// Addr: 1403693d0
// Size: 922 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403693d0(uint *param_1,uint *param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  uint *puVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  uint *local_78;
  uint *local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  ulonglong local_50;
  uint *puVar9;
  
  local_50 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  lVar7 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar7 < 0x39c) {
      if (param_1 != param_2) {
        for (puVar10 = param_1 + 7; puVar10 != param_2; puVar10 = puVar10 + 7) {
          uVar1 = *puVar10;
          uVar2 = puVar10[1];
          uVar4 = *(undefined8 *)(puVar10 + 2);
          uVar5 = *(undefined8 *)(puVar10 + 4);
          uVar3 = puVar10[6];
          if (uVar1 == *param_1) {
            uVar6 = param_1[1];
            if (uVar2 < uVar6) {
              uVar6 = 0xffffffff;
            }
            else {
              uVar6 = (uint)(uVar6 < uVar2);
            }
          }
          else {
            uVar6 = 1;
            if (uVar1 < *param_1) {
              uVar6 = 0xffffffff;
            }
          }
          puVar8 = puVar10;
          if ((int)uVar6 < 0) {
            FUN_1404210f0(param_1 + 7,param_1,(longlong)puVar10 - (longlong)param_1);
            *(undefined8 *)(param_1 + 2) = uVar4;
            *(undefined8 *)(param_1 + 4) = uVar5;
            param_1[6] = uVar3;
            *param_1 = uVar1;
            param_1[1] = uVar2;
          }
          else {
            while( true ) {
              puVar9 = puVar8 + -7;
              if (uVar1 == *puVar9) {
                if (uVar2 < puVar8[-6]) {
                  uVar6 = 0xffffffff;
                }
                else {
                  uVar6 = (uint)(puVar8[-6] < uVar2);
                }
              }
              else {
                uVar6 = 1;
                if (uVar1 < *puVar9) {
                  uVar6 = 0xffffffff;
                }
              }
              if (-1 < (int)uVar6) break;
              *puVar8 = *puVar9;
              puVar8[1] = puVar8[-6];
              puVar8[2] = puVar8[-5];
              puVar8[3] = puVar8[-4];
              *(undefined8 *)(puVar8 + 3) = *(undefined8 *)(puVar8 + -4);
              *(undefined8 *)(puVar8 + 5) = *(undefined8 *)(puVar8 + -2);
              puVar8 = puVar9;
            }
            *(undefined8 *)(puVar8 + 2) = uVar4;
            *(undefined8 *)(puVar8 + 4) = uVar5;
            puVar8[6] = uVar3;
            *puVar8 = uVar1;
            puVar8[1] = uVar2;
          }
        }
      }
      return;
    }
    lVar7 = (longlong)param_2 - (longlong)param_1;
    if (param_3 < 1) break;
    puVar10 = param_2 + -7;
    puVar8 = param_1 + (lVar7 / 0x1c >> 1) * 7;
    lVar7 = ((longlong)puVar10 - (longlong)param_1) / 0x1c;
    local_78 = puVar8;
    if (lVar7 < 0x29) {
      FUN_140364da0(param_1,puVar8,puVar10,param_4);
    }
    else {
      lVar7 = lVar7 + 1 >> 3;
      FUN_140364da0(param_1,param_1 + lVar7 * 7,param_1 + lVar7 * 0xe,param_4);
      FUN_140364da0(local_78 + lVar7 * -7,local_78,local_78 + lVar7 * 7,param_4);
      FUN_140364da0(param_2 + -7 + lVar7 * -0xe,puVar10 + lVar7 * -7,param_2 + -7,param_4);
      puVar8 = local_78;
      FUN_140364da0(param_1 + lVar7 * 7,local_78,puVar10 + lVar7 * -7,param_4);
    }
    local_88 = param_4;
    FUN_140366640(&local_70,param_1,puVar8,param_2);
    puVar8 = local_70;
    puVar10 = (uint *)CONCAT44(uStack_64,uStack_68);
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (((longlong)local_70 - (longlong)param_1) / 0x1c <
        ((longlong)param_2 - (longlong)puVar10) / 0x1c) {
      FUN_1403693d0(param_1,local_70,param_3,param_4);
      puVar8 = param_2;
      param_1 = puVar10;
    }
    else {
      FUN_1403693d0(puVar10,param_2,param_3,param_4);
    }
    lVar7 = (longlong)puVar8 - (longlong)param_1;
    param_2 = puVar8;
  }
  FUN_140363e40(param_1,param_2,param_4);
  while (0x37 < lVar7) {
    puVar10 = param_2 + -7;
    if (1 < ((longlong)param_2 - (longlong)param_1) / 0x1c) {
      local_70 = *(uint **)puVar10;
      uStack_5c = *(undefined8 *)(param_2 + -2);
      uStack_68 = (undefined4)*(undefined8 *)(param_2 + -5);
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      uStack_64 = (undefined4)*(undefined8 *)(param_2 + -4);
      uStack_60 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + -4) >> 0x20);
      *puVar10 = *param_1;
      param_2[-6] = uVar1;
      param_2[-5] = uVar2;
      param_2[-4] = uVar3;
      uVar1 = param_1[4];
      uVar2 = param_1[5];
      uVar3 = param_1[6];
      param_2[-4] = param_1[3];
      param_2[-3] = uVar1;
      param_2[-2] = uVar2;
      param_2[-1] = uVar3;
      local_88 = param_4;
      FUN_140367ff0(param_1,0,((longlong)puVar10 - (longlong)param_1) / 0x1c,&local_70);
    }
    param_2 = puVar10;
    lVar7 = (longlong)puVar10 - (longlong)param_1;
  }
  return;
}

