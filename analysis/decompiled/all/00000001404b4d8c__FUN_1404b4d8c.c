// Function: FUN_1404b4d8c
// Addr: 1404b4d8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4d8c(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  char in_AL;
  char cVar3;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar4;
  longlong unaff_RBX;
  
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  *(byte *)(param_2 + unaff_RBX) = *(byte *)(param_2 + unaff_RBX) ^ in_AH;
  pbVar1 = (byte *)(param_1 + 0x24);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  cVar3 = (in_AL - *(char *)CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))) -
          CARRY1(bVar2,bVar4);
  *(char *)(unaff_RBX + param_1 * 2) = (char)param_1;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

