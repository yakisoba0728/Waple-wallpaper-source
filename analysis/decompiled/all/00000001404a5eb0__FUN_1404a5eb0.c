// Function: FUN_1404a5eb0
// Addr: 1404a5eb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5eb0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  byte in_CF;
  byte bVar3;
  
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_2);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1;
  *pbVar1 = bVar3 + in_AH + in_CF;
  *(char *)(param_2 + 0x7007f009) =
       *(char *)(param_2 + 0x7007f009) + (char)param_2 +
       (CARRY1(bVar2,in_AH) || CARRY1(bVar3 + in_AH,in_CF));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

