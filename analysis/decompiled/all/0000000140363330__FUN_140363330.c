// Function: FUN_140363330
// Addr: 140363330
// Size: 479 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_140363330(uint *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar10;
  undefined1 auStack_78 [32];
  uint *local_58;
  uint local_50;
  uint uStack_4c;
  undefined8 uStack_48;
  uint local_40;
  ulonglong local_38;
  uint *puVar9;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_78;
  if (param_1 == param_2) {
    return param_2;
  }
  puVar10 = param_1 + 5;
  local_58 = param_2;
  if (puVar10 != param_2) {
    do {
      uVar4 = *puVar10;
      bVar1 = (byte)puVar10[1];
      uVar3 = *(undefined2 *)((longlong)puVar10 + 5);
      uVar2 = *(undefined1 *)((longlong)puVar10 + 7);
      uStack_4c = puVar10[1];
      uVar6 = *(undefined8 *)(puVar10 + 2);
      uVar5 = puVar10[4];
      local_50 = uVar4;
      uStack_48 = uVar6;
      local_40 = uVar5;
      if (uVar4 < *param_1) {
        iVar7 = -1;
      }
      else if (*param_1 < uVar4) {
        iVar7 = 1;
      }
      else if (bVar1 < (byte)param_1[1]) {
        iVar7 = -1;
      }
      else if ((byte)param_1[1] < bVar1) {
        iVar7 = 1;
      }
      else {
        iVar7 = FUN_1403b3850(&uStack_48,param_1 + 2);
      }
      puVar8 = puVar10;
      if (iVar7 < 0) {
        FUN_1404210f0(param_1 + 5,param_1,(longlong)puVar10 - (longlong)param_1);
        *(undefined2 *)((longlong)param_1 + 5) = uVar3;
        *(undefined1 *)((longlong)param_1 + 7) = uVar2;
        *param_1 = uVar4;
        *(byte *)(param_1 + 1) = bVar1;
        *(undefined8 *)(param_1 + 2) = uVar6;
        param_1[4] = uVar5;
      }
      else {
        while( true ) {
          puVar9 = puVar8 + -5;
          if (uVar4 < *puVar9) {
            iVar7 = -1;
          }
          else if (*puVar9 < uVar4) {
            iVar7 = 1;
          }
          else if (bVar1 < (byte)puVar8[-4]) {
            iVar7 = -1;
          }
          else if ((byte)puVar8[-4] < bVar1) {
            iVar7 = 1;
          }
          else {
            iVar7 = FUN_1403b3850(&uStack_48,puVar8 + -3);
          }
          if (-1 < iVar7) break;
          *puVar8 = *puVar9;
          puVar8[1] = puVar8[-4];
          puVar8[2] = puVar8[-3];
          puVar8[3] = puVar8[-2];
          puVar8[4] = puVar8[-1];
          puVar8 = puVar9;
        }
        *puVar8 = local_50;
        puVar8[1] = uStack_4c;
        puVar8[2] = (uint)uStack_48;
        puVar8[3] = uStack_48._4_4_;
        puVar8[4] = uVar5;
      }
      puVar10 = puVar10 + 5;
      param_2 = local_58;
    } while (puVar10 != local_58);
  }
  return param_2;
}

