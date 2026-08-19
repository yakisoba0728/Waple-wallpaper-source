// Function: FUN_1404d6228
// Addr: 1404d6228
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6228(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  byte bVar3;
  char cVar4;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  bool bVar5;
  
  bVar3 = in_AL & 0xf4;
  bVar5 = CARRY1(bVar3,*(byte *)(CONCAT44(in_register_00000004,
                                          CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) &
                                0xfffffffffffffff4));
  bVar3 = bVar3 + *(char *)(CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) &
                           0xfffffffffffffff4);
  bVar2 = bVar3 + 0x74;
  cVar4 = bVar2 + bVar5;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4)) +
       (uint)(0x8b < bVar3 || CARRY1(bVar2,bVar5));
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4))) + param_2);
  *pbVar1 = *pbVar1 | (byte)param_2;
  *(char *)(param_1 + 0x37) = *(char *)(param_1 + 0x37) + (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

