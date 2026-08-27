// Function: FUN_14036a520
// Addr: 14036a520
// Size: 836 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14036a520(ushort *param_1,ushort *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  ushort *puVar5;
  ushort *puVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  ushort *local_78;
  ushort *local_70;
  ushort *local_68;
  undefined4 local_60;
  ulonglong local_58;
  ushort *puVar6;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  lVar4 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar4 < 0x18c) {
      if (param_1 != param_2) {
        for (puVar7 = param_1 + 6; puVar7 != param_2; puVar7 = puVar7 + 6) {
          uVar2 = *puVar7;
          uVar1 = *(undefined8 *)(puVar7 + 1);
          uVar3 = puVar7[5];
          puVar5 = puVar7;
          if (uVar2 < *param_1) {
            FUN_1404210f0(param_1 + 6,param_1,(longlong)puVar7 - (longlong)param_1);
            *(undefined8 *)(param_1 + 1) = uVar1;
            param_1[5] = uVar3;
            *param_1 = uVar2;
          }
          else {
            while (puVar6 = puVar5 + -6, uVar2 < *puVar6) {
              *(undefined8 *)puVar5 = *(undefined8 *)puVar6;
              *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar5 + -2);
              puVar5 = puVar6;
            }
            *(undefined8 *)(puVar5 + 1) = uVar1;
            puVar5[5] = uVar3;
            *puVar5 = uVar2;
          }
        }
      }
      return;
    }
    lVar4 = (longlong)param_2 - (longlong)param_1;
    if (param_3 < 1) break;
    puVar7 = param_1 + (lVar4 / 0xc >> 1) * 6;
    lVar4 = ((longlong)(param_2 + -6) - (longlong)param_1) / 0xc;
    local_68 = puVar7;
    if (lVar4 < 0x29) {
      FUN_140365260(param_1,puVar7,param_2 + -6,param_4);
    }
    else {
      lVar4 = lVar4 + 1 >> 3;
      FUN_140365260(param_1,param_1 + lVar4 * 6,param_1 + lVar4 * 0xc,param_4);
      FUN_140365260(puVar7 + lVar4 * -6,puVar7,puVar7 + lVar4 * 6,param_4);
      puVar5 = param_2 + -6;
      FUN_140365260(puVar5 + lVar4 * -0xc,puVar5 + lVar4 * -6,puVar5,param_4);
      puVar7 = local_68;
      FUN_140365260(param_1 + lVar4 * 6,local_68,puVar5 + lVar4 * -6,param_4);
    }
    local_88 = param_4;
    FUN_1403676c0(&local_78,param_1,puVar7,param_2);
    puVar5 = local_70;
    puVar7 = local_78;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    lVar4 = ((longlong)param_2 - (longlong)local_70) / 6 +
            ((longlong)param_2 - (longlong)local_70 >> 0x3f);
    if (((longlong)local_78 - (longlong)param_1) / 0xc < (lVar4 >> 1) - (lVar4 >> 0x3f)) {
      FUN_14036a520(param_1,local_78,param_3,param_4);
      puVar7 = param_2;
      param_1 = puVar5;
    }
    else {
      FUN_14036a520(local_70,param_2,param_3,param_4);
    }
    lVar4 = (longlong)puVar7 - (longlong)param_1;
    param_2 = puVar7;
  }
  FUN_140364690(param_1,param_2,param_4);
  while (0x17 < lVar4) {
    puVar7 = param_2 + -6;
    if (1 < ((longlong)param_2 - (longlong)param_1) / 0xc) {
      local_60 = *(undefined4 *)(param_2 + -2);
      local_68 = *(ushort **)puVar7;
      *(undefined8 *)puVar7 = *(undefined8 *)param_1;
      *(undefined4 *)(param_2 + -2) = *(undefined4 *)(param_1 + 4);
      local_88 = param_4;
      FUN_140368700(param_1,0,((longlong)puVar7 - (longlong)param_1) / 0xc,&local_68);
    }
    param_2 = puVar7;
    lVar4 = (longlong)puVar7 - (longlong)param_1;
  }
  return;
}

