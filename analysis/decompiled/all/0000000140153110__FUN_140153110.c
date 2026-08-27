// Function: FUN_140153110
// Addr: 140153110
// Size: 162 bytes


undefined8 FUN_140153110(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_16;
  undefined2 local_15;
  char local_13 [11];
  
  if (param_2 < 10) {
    local_15._1_1_ = (char)param_2 + '0';
    pcVar5 = (char *)((longlong)&local_15 + 1);
  }
  else {
    pcVar5 = local_13;
    do {
      pcVar4 = pcVar5;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_2;
      lVar2 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
      pcVar5 = pcVar4 + -2;
      uVar3 = (param_2 - lVar2 >> 1) + lVar2 >> 6;
      *(undefined2 *)pcVar5 =
           *(undefined2 *)(&DAT_140474390 + (param_2 + uVar3 * -100 & 0xffffffff) * 2);
      param_2 = uVar3;
    } while (9 < uVar3);
    if (uVar3 != 0) {
      pcVar5 = pcVar4 + -3;
      *pcVar5 = (char)uVar3 + '0';
    }
  }
  FUN_140053d10(param_1,pcVar5,local_13);
  return param_1;
}

