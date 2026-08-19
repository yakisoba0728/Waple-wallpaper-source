// Function: FUN_1404cdb5c
// Addr: 1404cdb5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdb5c(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte in_AL;
  byte in_AH;
  char cVar5;
  undefined6 in_register_00000002;
  byte bVar4;
  
  cRam000000018d273f63 = cRam000000018d273f63 << ((byte)param_1 & 0x1f);
  bVar2 = *param_1;
  *param_1 = *param_1 + in_AH;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  bVar3 = *pbVar1;
  bVar4 = *pbVar1;
  *pbVar1 = bVar4 + in_AL + CARRY1(bVar2,in_AH);
  cVar5 = in_AH + in_AL + (CARRY1(bVar3,in_AL) || CARRY1(bVar4 + in_AL,CARRY1(bVar2,in_AH)));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar5,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar5,in_AL)) + (byte)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

