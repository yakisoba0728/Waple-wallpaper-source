// Function: FUN_140089a40
// Addr: 140089a40
// Size: 337 bytes


undefined8 * FUN_140089a40(undefined8 *param_1,ulonglong param_2)

{
  size_t sVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_28 [22];
  char local_12 [10];
  
  local_12[2] = 0;
  if (param_2 == 0x8000000000000000) {
    pcVar5 = local_12 + 2;
    uVar3 = 0x8000000000000000;
    do {
      pcVar4 = pcVar5;
      pcVar5 = pcVar4 + -1;
      uVar2 = uVar3 / 10;
      *pcVar5 = (char)uVar3 + (char)uVar2 * -10 + '0';
      uVar3 = uVar2;
    } while (uVar2 != 0);
    pcVar4 = pcVar4 + -2;
    *pcVar4 = '-';
  }
  else if ((longlong)param_2 < 0) {
    uVar3 = -param_2;
    pcVar5 = local_12 + 2;
    do {
      pcVar4 = pcVar5;
      pcVar5 = pcVar4 + -1;
      uVar2 = uVar3 / 10;
      *pcVar5 = (char)uVar3 + (char)uVar2 * -10 + '0';
      uVar3 = uVar2;
    } while (uVar2 != 0);
    pcVar4 = pcVar4 + -2;
    *pcVar4 = '-';
  }
  else {
    pcVar4 = local_12 + 2;
    do {
      pcVar4 = pcVar4 + -1;
      uVar3 = param_2 / 10;
      *pcVar4 = (char)param_2 + (char)uVar3 * -10 + '0';
      param_2 = uVar3;
    } while (uVar3 != 0);
  }
  if (pcVar4 < local_28) {
    FID_conflict__assert
              (L"current >= buffer",L"D:\\dev\\we\\windows\\src\\json\\src\\json_writer.cpp",0x2b);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(pcVar4);
  FUN_140017480(param_1,pcVar4,sVar1);
  return param_1;
}

