// Function: FUN_1404b4144
// Addr: 1404b4144
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4144(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char in_AL;
  byte in_AH;
  byte bVar4;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  
  bVar4 = in_AH | (byte)((ulonglong)param_2 >> 8);
  cVar3 = in_AL + *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar4,in_AL));
  pbVar1 = (byte *)(unaff_RBX + -0x43d8ffe8);
  bVar2 = *pbVar1;
  *pbVar1 = (char)*pbVar1 >> 1;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar4,cVar3)) =
       (*(char *)CONCAT62(in_register_00000002,CONCAT11(bVar4,cVar3)) - cVar3) - (bVar2 & 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

