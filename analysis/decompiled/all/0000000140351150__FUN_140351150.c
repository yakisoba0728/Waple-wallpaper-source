// Function: FUN_140351150
// Addr: 140351150
// Size: 434 bytes


void FUN_140351150(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_268 [32];
  int local_248;
  int local_240;
  int local_238 [132];
  ulonglong local_28;
  
  local_28 = DAT_1404dc110 ^ (ulonglong)auStack_268;
  piVar8 = local_238;
  local_238[4] = *(undefined4 *)(param_1 + 0x40);
  local_238[5] = *(undefined4 *)(param_1 + 0x44);
  local_238[1] = param_5;
  local_238[2] = param_2;
  local_238[3] = param_3;
  local_238[0] = param_4;
  do {
    while( true ) {
      uVar1 = piVar8[5];
      uVar2 = piVar8[1];
      iVar9 = piVar8[3];
      uVar3 = uVar2;
      if ((int)uVar2 < (int)uVar1) {
        uVar3 = uVar1;
      }
      uVar6 = -*(int *)(param_1 + 4);
      uVar5 = uVar1;
      if ((int)uVar2 < (int)uVar1) {
        uVar5 = uVar2;
      }
      if (((int)(uVar5 & uVar6) <= iVar9) &&
         (iVar9 <= (int)(*(int *)(param_1 + 4) + -1 + uVar3 & uVar6))) break;
      piVar8[8] = piVar8[4];
      iVar7 = piVar8[4] + piVar8[2];
      piVar8[9] = uVar1;
      piVar8[6] = iVar7 >> 1;
      piVar8[7] = (int)(iVar9 + uVar1) >> 1;
      param_4 = iVar7 + *piVar8 + piVar8[2] >> 2;
      piVar8[5] = (int)(iVar9 + uVar1 + uVar2 + iVar9) >> 2;
      piVar8[4] = param_4;
      piVar8[2] = *piVar8 + piVar8[2] >> 1;
      piVar8[3] = (int)(uVar2 + iVar9) >> 1;
      piVar8 = piVar8 + 4;
    }
    if (uVar1 != uVar2) {
      iVar9 = ((int)uVar2 <= (int)uVar1) + 1;
      if ((*(int *)(param_1 + 0x70) != iVar9) &&
         (((*(int *)(param_1 + 0x70) != 0 && (cVar4 = FUN_140351cb0(param_1), cVar4 != '\0')) ||
          (cVar4 = FUN_1403521e0(param_1,iVar9), cVar4 != '\0')))) {
LAB_140351310:
        func_0x0001402ed2f0(local_28 ^ (ulonglong)auStack_268);
        return;
      }
      iVar9 = *(int *)(param_1 + 0x4c);
      local_248 = *(int *)(param_1 + 0x48);
      if ((int)uVar1 < (int)uVar2) {
        local_240 = iVar9;
        cVar4 = FUN_140350fe0(param_1,2,piVar8,&LAB_140352660);
      }
      else {
        local_240 = -local_248;
        piVar8[1] = -piVar8[1];
        local_248 = -iVar9;
        piVar8[3] = -piVar8[3];
        piVar8[5] = -piVar8[5];
        cVar4 = FUN_140350fe0(param_1,2,piVar8,&LAB_140352660);
        piVar8[1] = -piVar8[1];
      }
      if (cVar4 != '\0') goto LAB_140351310;
    }
    *(int *)(param_1 + 0x40) = param_4;
    *(uint *)(param_1 + 0x44) = uVar2;
    if (piVar8 == local_238) goto LAB_140351310;
    param_4 = piVar8[-4];
    piVar8 = piVar8 + -4;
  } while( true );
}

