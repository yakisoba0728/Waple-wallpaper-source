// Function: FUN_1404b5238
// Addr: 1404b5238
// Size: 1 bytes


char FUN_1404b5238(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte bVar3;
  longlong unaff_RBP;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  param_1[0x4b] = param_1[0x4b] ^ (byte)param_2;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pbVar1 = (byte *)(unaff_RBP + 0x79);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  return (in_AL - *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))) -
         CARRY1(bVar2,bVar3);
}

