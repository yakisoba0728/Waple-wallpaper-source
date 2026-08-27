// Function: FUN_140053cb0
// Addr: 140053cb0
// Size: 94 bytes


char * FUN_140053cb0(char *param_1,uint param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_2;
  if (9 < param_2) {
    do {
      pcVar2 = param_1;
      param_1 = pcVar2 + -2;
      uVar1 = uVar4 / 100;
      uVar3 = (uint)uVar1;
      *(undefined2 *)param_1 =
           *(undefined2 *)(&DAT_140474390 + (ulonglong)((int)uVar4 + uVar3 * -100) * 2);
      uVar4 = uVar1;
    } while (9 < uVar3);
    if (uVar3 != 0) {
      param_1 = pcVar2 + -3;
      *param_1 = (char)uVar1 + '0';
    }
    return param_1;
  }
  param_1[-1] = (char)param_2 + '0';
  return param_1 + -1;
}

