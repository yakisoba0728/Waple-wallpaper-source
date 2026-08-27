// Function: FUN_140097570
// Addr: 140097570
// Size: 204 bytes


void FUN_140097570(int *param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    uVar3 = 0;
    do {
      iVar2 = (int)uVar3;
      iVar1 = FUN_1402c10d0(param_3,(&PTR_s_english_140478d78)[uVar3 * 4]);
      if (iVar1 == 0) goto LAB_1400975d9;
      uVar3 = (ulonglong)(iVar2 + 1U);
    } while ((int)(iVar2 + 1U) < 0x24);
    iVar1 = FUN_1402c10d0(param_3,"latam");
    iVar2 = 0;
    if (iVar1 == 0) {
      iVar2 = 0x14;
    }
LAB_1400975d9:
    param_1[1] = iVar2;
  }
  iVar1 = FUN_1402c10d0(param_2,"default");
  if (((iVar1 == 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    *param_1 = param_1[1];
    return;
  }
  uVar3 = 0;
  do {
    iVar2 = (int)uVar3;
    iVar1 = FUN_1402c10d0(param_2,(&PTR_DAT_140478d70)[uVar3 * 4]);
    if (iVar1 == 0) goto LAB_14009762f;
    uVar3 = (ulonglong)(iVar2 + 1U);
  } while ((int)(iVar2 + 1U) < 0x24);
  iVar2 = 0;
LAB_14009762f:
  *param_1 = iVar2;
  return;
}

