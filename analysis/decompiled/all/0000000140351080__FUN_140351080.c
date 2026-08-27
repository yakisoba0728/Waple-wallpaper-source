// Function: FUN_140351080
// Addr: 140351080
// Size: 496 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_140351080(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

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
  undefined1 auStack_300 [144];
  undefined8 uStack_270;
  undefined1 auStack_268 [32];
  int local_248;
  int local_240;
  int local_238 [132];
  ulonglong local_28;
  
  local_28 = DAT_1404dc040 ^ (ulonglong)auStack_268;
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
      if (*(int *)(param_1 + 0x70) != iVar9) {
        if (*(int *)(param_1 + 0x70) != 0) {
          uStack_270 = 0x140351146;
          cVar4 = FUN_140351be0(param_1);
          if (cVar4 != '\0') {
            return (undefined1 *)0x1;
          }
        }
        uStack_270 = 0x140351159;
        cVar4 = FUN_140352110(param_1,iVar9);
        if (cVar4 != '\0') {
          return (undefined1 *)0x1;
        }
      }
      iVar9 = *(int *)(param_1 + 0x4c);
      local_248 = *(int *)(param_1 + 0x48);
      if ((int)uVar1 < (int)uVar2) {
        uStack_270 = 0x14035118a;
        local_240 = iVar9;
        cVar4 = FUN_140350f10(param_1,2,piVar8,&LAB_140352590);
      }
      else {
        local_240 = -local_248;
        piVar8[1] = -piVar8[1];
        local_248 = -iVar9;
        piVar8[3] = -piVar8[3];
        piVar8[5] = -piVar8[5];
        uStack_270 = 0x1403511bd;
        cVar4 = FUN_140350f10(param_1,2,piVar8,&LAB_140352590);
        piVar8[1] = -piVar8[1];
      }
      if (cVar4 != '\0') {
        return (undefined1 *)0x1;
      }
    }
    *(int *)(param_1 + 0x40) = param_4;
    *(uint *)(param_1 + 0x44) = uVar2;
    if (piVar8 == local_238) {
      return auStack_300;
    }
    param_4 = piVar8[-4];
    piVar8 = piVar8 + -4;
  } while( true );
}

