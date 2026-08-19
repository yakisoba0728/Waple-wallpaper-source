// Function: FUN_1404b5acc
// Addr: 1404b5acc
// Size: 1 bytes


char FUN_1404b5acc(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  char in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  
  pbVar1 = (byte *)(CONCAT44(unaff_00000024,unaff_ESP) + param_2);
  *pbVar1 = *pbVar1 | in_AH;
  return (in_AL - *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH + (byte)param_2,in_AL))) -
         CARRY1(in_AH,(byte)param_2);
}

