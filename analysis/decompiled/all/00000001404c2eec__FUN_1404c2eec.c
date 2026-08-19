// Function: FUN_1404c2eec
// Addr: 1404c2eec
// Size: 1 bytes


char FUN_1404c2eec(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar3;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  bVar2 = in_AL | *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH + in_AL,in_AL));
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)param_2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH + in_AL,bVar2)) + param_1);
  *pcVar1 = *pcVar1 + cVar3;
  return bVar2 + cVar3;
}

