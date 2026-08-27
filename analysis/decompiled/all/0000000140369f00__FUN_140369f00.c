// Function: FUN_140369f00
// Addr: 140369f00
// Size: 858 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140369f00(uint *param_1,uint *param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  uint *puVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  uint *local_68;
  uint *local_60;
  uint *local_58;
  uint local_50;
  ulonglong local_48;
  uint *puVar7;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_98;
  lVar5 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar5 < 0x18c) {
      if (param_1 != param_2) {
        for (puVar8 = param_1 + 3; puVar8 != param_2; puVar8 = puVar8 + 3) {
          uVar2 = *puVar8;
          uVar3 = puVar8[1];
          uVar4 = puVar8[2];
          if ((uVar2 < *param_1) ||
             ((puVar6 = puVar8, uVar2 == *param_1 &&
              ((uVar1 = param_1[2], uVar4 < uVar1 || ((uVar4 == uVar1 && (uVar3 < param_1[1]))))))))
          {
            FUN_1404210f0(param_1 + 3,param_1,(longlong)puVar8 - (longlong)param_1);
            *param_1 = uVar2;
            param_1[1] = uVar3;
            param_1[2] = uVar4;
          }
          else {
            while( true ) {
              puVar7 = puVar6 + -3;
              if ((*puVar7 <= uVar2) &&
                 ((uVar2 != *puVar7 ||
                  ((puVar6[-1] <= uVar4 && ((uVar4 != puVar6[-1] || (puVar6[-2] <= uVar3))))))))
              break;
              *(undefined8 *)puVar6 = *(undefined8 *)puVar7;
              puVar6[2] = puVar6[-1];
              puVar6 = puVar7;
            }
            *puVar6 = uVar2;
            puVar6[1] = uVar3;
            puVar6[2] = uVar4;
          }
        }
      }
      return;
    }
    lVar5 = (longlong)param_2 - (longlong)param_1;
    if (param_3 < 1) break;
    puVar8 = param_1 + (lVar5 / 0xc >> 1) * 3;
    lVar5 = ((longlong)(param_2 + -3) - (longlong)param_1) / 0xc;
    local_58 = puVar8;
    if (lVar5 < 0x29) {
      FUN_140365070(param_1,puVar8,param_2 + -3,param_4);
    }
    else {
      lVar5 = lVar5 + 1 >> 3;
      FUN_140365070(param_1,param_1 + lVar5 * 3,param_1 + lVar5 * 6,param_4);
      FUN_140365070(puVar8 + lVar5 * -3,puVar8,puVar8 + lVar5 * 3,param_4);
      puVar6 = param_2 + -3;
      FUN_140365070(puVar6 + lVar5 * -6,puVar6 + lVar5 * -3,puVar6,param_4);
      puVar8 = local_58;
      FUN_140365070(param_1 + lVar5 * 3,local_58,puVar6 + lVar5 * -3,param_4);
    }
    local_78 = param_4;
    FUN_140366fe0(&local_68,param_1,puVar8,param_2);
    puVar6 = local_60;
    puVar8 = local_68;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    lVar5 = ((longlong)param_2 - (longlong)local_60) / 6 +
            ((longlong)param_2 - (longlong)local_60 >> 0x3f);
    if (((longlong)local_68 - (longlong)param_1) / 0xc < (lVar5 >> 1) - (lVar5 >> 0x3f)) {
      FUN_140369f00(param_1,local_68,param_3,param_4);
      puVar8 = param_2;
      param_1 = puVar6;
    }
    else {
      FUN_140369f00(local_60,param_2,param_3,param_4);
    }
    lVar5 = (longlong)puVar8 - (longlong)param_1;
    param_2 = puVar8;
  }
  FUN_140364250(param_1,param_2,param_4);
  while (0x17 < lVar5) {
    puVar8 = param_2 + -3;
    if (1 < ((longlong)param_2 - (longlong)param_1) / 0xc) {
      local_50 = param_2[-1];
      local_58 = *(uint **)puVar8;
      *(undefined8 *)puVar8 = *(undefined8 *)param_1;
      param_2[-1] = param_1[2];
      local_78 = param_4;
      FUN_140368430(param_1,0,((longlong)puVar8 - (longlong)param_1) / 0xc,&local_58);
    }
    param_2 = puVar8;
    lVar5 = (longlong)puVar8 - (longlong)param_1;
  }
  return;
}

