// Function: FUN_140077750
// Addr: 140077750
// Size: 230 bytes


undefined8 *
FUN_140077750(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_2 == param_3) {
    *param_1 = param_2;
    return param_1;
  }
  puVar1 = (undefined8 *)*param_4;
  uVar2 = puVar1[3];
  sVar3 = puVar1[2];
  do {
    puVar7 = puVar1;
    if (0xf < uVar2) {
      puVar7 = (undefined8 *)*puVar1;
    }
    sVar4 = param_2[2];
    puVar6 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar6 = (undefined8 *)*param_2;
    }
    if ((sVar4 == sVar3) && ((sVar4 == 0 || (iVar5 = memcmp(puVar6,puVar7,sVar4), iVar5 == 0)))) {
      if ((ulonglong)puVar1[8] < 0x10) {
        puVar7 = puVar1 + 5;
      }
      else {
        puVar7 = (undefined8 *)puVar1[5];
      }
      puVar6 = param_2 + 5;
      sVar4 = param_2[7];
      if (0xf < (ulonglong)param_2[8]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      if ((sVar4 == puVar1[7]) &&
         ((sVar4 == 0 || (iVar5 = memcmp(puVar6,puVar7,sVar4), iVar5 == 0)))) break;
    }
    param_2 = param_2 + 9;
  } while (param_2 != param_3);
  *param_1 = param_2;
  return param_1;
}

