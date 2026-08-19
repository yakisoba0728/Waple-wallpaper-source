// Function: FUN_1404cc9a0
// Addr: 1404cc9a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc9a0(longlong param_1,int *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte in_AL;
  byte in_AH;
  byte bVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar4;
  byte bVar5;
  int unaff_EBX;
  int unaff_ESI;
  undefined4 unaff_00000034;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  cVar4 = (char)((ulonglong)param_1 >> 8);
  bVar3 = in_AH | in_AL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL)))
       & in_AL;
  LOCK();
  iRam000000017577f1ab = iRam000000017577f1ab - unaff_ESI;
  UNLOCK();
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) + 0x21004c +
                   param_1 * 8);
  *pcVar2 = *pcVar2 + cVar4;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL)))
       + in_AL;
  LOCK();
  iRam000000017577f1bb = iRam000000017577f1bb - unaff_ESI;
  UNLOCK();
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) + 0x2619004c +
                   param_1 * 8);
  *pcVar2 = *pcVar2 + cVar4;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL));
  *(byte *)param_2 = (char)*param_2 - bVar5;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL)))
       + (char)unaff_EBX;
  *param_2 = *param_2 + unaff_EBX;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) +
                   CONCAT44(unaff_00000034,unaff_ESI) * 8);
  *pcVar2 = *pcVar2 + (char)param_1;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar3 | in_AL,in_AL))) + 7);
  *pbVar1 = *pbVar1 | bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

