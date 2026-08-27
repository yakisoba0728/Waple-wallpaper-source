// Function: FUN_140035010
// Addr: 140035010
// Size: 110 bytes


undefined8 * FUN_140035010(undefined8 param_1,undefined8 *param_2,int *param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = DAT_1404e8be8;
  puVar2 = *(undefined8 **)(DAT_1404e8bf8 + 8 + (DAT_1404e8c10 & param_4) * 0x10);
  if (puVar2 == DAT_1404e8be8) {
    param_2[1] = 0;
    *param_2 = puVar4;
    return param_2;
  }
  iVar1 = *(int *)(puVar2 + 2);
  while( true ) {
    if (*param_3 == iVar1) {
      uVar3 = *puVar2;
      param_2[1] = puVar2;
      *param_2 = uVar3;
      return param_2;
    }
    if (puVar2 == *(undefined8 **)(DAT_1404e8bf8 + (DAT_1404e8c10 & param_4) * 0x10)) break;
    puVar2 = (undefined8 *)puVar2[1];
    iVar1 = *(int *)(puVar2 + 2);
  }
  *param_2 = puVar2;
  param_2[1] = 0;
  return param_2;
}

